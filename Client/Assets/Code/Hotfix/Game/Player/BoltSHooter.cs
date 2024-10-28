using System.Collections;
using Unity.VisualScripting;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class BoltSHooter : MonoBehaviour
{
    public TriggerEventTag triggerEventTag;
    // Start is called before the first frame update
    private Transform _target;
    //private Rigidbody2D _body2D;
    private Vector3 _position;
    private Numeric _numeric;
    private float _speed;
    private bool _isShoot;
    void Start()
    {
        //_body2D = GetComponent<Rigidbody2D>();
        StartCoroutine(ItemSelfDest());
    }

    IEnumerator ItemSelfDest()
    {
        yield return new WaitForSeconds(2f);
        Destroy(this.gameObject);
    }

    public void ChangeSpeed(float speed)
    {
        _speed = speed;
    }

    public void SetTarget(Transform target,Numeric numeric,TriggerEventTag triggerEventTag)
    {
        _target = target;
        _position = target.position;
        _numeric = numeric;
        _isShoot = true;
        this.triggerEventTag = triggerEventTag;
    }

    public void SetTargetPos(Vector3 pos, Numeric numeric, TriggerEventTag triggerEventTag)
    {
        _position = pos;
        _numeric = numeric;
        _isShoot = true;
        this.triggerEventTag = triggerEventTag;
    }

    private void Update()
    {
        if(!_isShoot)
        {
            return;
        }

        if (_target != null && !_target.IsDestroyed())
        {
            _position = _target.position;
        }

        transform.position = Vector2.MoveTowards(this.transform.position, _position, _speed * Time.deltaTime);
        Vector2 direction = _position - transform.position;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.Euler(0, 0, angle);
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (_numeric != null)
        {
            if (collision.CompareTag(triggerEventTag.ToString()))
            {
                collision.GetComponent<Monster>().OnHit(_numeric);
                Destroy(this.gameObject);
            }
        }
    }

}
