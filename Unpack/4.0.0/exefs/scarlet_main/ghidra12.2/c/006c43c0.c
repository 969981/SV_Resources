/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c43c0; name: FUN_006c43c0
 */


void FUN_006c43c0(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  MultiWaitHolderType *pMVar3;
  long lVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      pMVar3 = (MultiWaitHolderType *)(**(code **)(*param_2 + 0x18))(param_2,iVar5);
      if (*(long *)(pMVar3 + 0x48) != 0) {
        if (*(long *)(pMVar3 + 0x48) != param_1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        *(undefined8 *)(pMVar3 + 0x48) = 0;
        nn::os::SetMultiWaitHolderUserData(pMVar3,0);
        nn::os::UnlinkMultiWaitHolder(pMVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  if ((long *)(param_1 + 0x30) != param_2 + 1) {
    plVar1 = (long *)param_2[2];
    lVar4 = *plVar1;
    *(long **)(param_2[1] + 8) = plVar1;
    *plVar1 = param_2[1];
    *(long **)(lVar4 + 8) = param_2 + 1;
    param_2[1] = lVar4;
  }
  return;
}


