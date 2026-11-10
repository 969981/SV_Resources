/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c4704; name: FUN_006c4704
 */


undefined8 FUN_006c4704(long param_1,undefined8 *param_2,MultiWaitHolderType *param_3)

{
  int iVar1;
  undefined4 uVar2;
  MultiWaitHolderType *pMVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  pMVar3 = (MultiWaitHolderType *)nn::os::GetMultiWaitHolderUserData(param_3);
  plVar5 = *(long **)(pMVar3 + 0x40);
  *(undefined8 *)(pMVar3 + 0x48) = 0;
  nn::os::SetMultiWaitHolderUserData(pMVar3,0);
  nn::os::UnlinkMultiWaitHolder(pMVar3);
  iVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if (iVar1 == 1) {
    uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,pMVar3);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    iVar1 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (iVar1 < 1) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar6 = 0;
      uVar2 = 0xffffffff;
      do {
        lVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,iVar6);
        if (*(long *)(lVar4 + 0x48) != 0) {
          if (*(long *)(lVar4 + 0x48) != param_1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          return 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  *param_2 = plVar5;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return 0;
}


