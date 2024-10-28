using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClearGemCom : MonoBehaviour
{
    public AnimationClip clearAnim;

    private bool isClearing = false;

    public bool IsClearing { get => isClearing;}

    protected GameGemCom gem;

    public virtual void Clear()
    {
        Debug.Log("Ïû³ý");
        isClearing = true;
        StartCoroutine(ClearCoroutine());
    }

    private IEnumerator ClearCoroutine()
    {
        Animator animator = GetComponent<Animator>();

        if (animator != null)
        {
            animator.Play(clearAnim.name);

            yield return new WaitForSeconds(clearAnim.length);
            Destroy(gameObject);

        }
    }
}
