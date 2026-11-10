/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c4288; name: FUN_006c4288
 */


void FUN_006c4288(long *param_1)

{
  int iVar1;
  MultiWaitHolderType *pMVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  
  plVar3 = (long *)param_1[0xc];
  if (plVar3 != (long *)0x0) {
    if (plVar3 != param_1) {
LAB_006c4324:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar5 = param_1[0xd];
    if (lVar5 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x10))(plVar3);
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          pMVar2 = (MultiWaitHolderType *)(**(code **)(*param_1 + 0x18))(plVar3,iVar4);
          if (*(long *)(pMVar2 + 0x48) != 0) {
            if (*(long *)(pMVar2 + 0x48) != lVar5) goto LAB_006c4324;
            *(undefined8 *)(pMVar2 + 0x48) = 0;
            nn::os::SetMultiWaitHolderUserData(pMVar2,0);
            nn::os::UnlinkMultiWaitHolder(pMVar2);
          }
          iVar4 = iVar4 + 1;
        } while (iVar1 != iVar4);
      }
      if ((long *)(lVar5 + 0x30) != param_1 + 1) {
        plVar3 = (long *)param_1[2];
        lVar5 = *plVar3;
        *(long **)(param_1[1] + 8) = plVar3;
        *plVar3 = param_1[1];
        *(long **)(lVar5 + 8) = param_1 + 1;
        param_1[1] = lVar5;
      }
      param_1[0xd] = 0;
    }
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 4));
    param_1[0xc] = 0;
  }
  return;
}


