/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c44f4; name: FUN_006c44f4
 */


void FUN_006c44f4(long param_1)

{
  int iVar1;
  MultiWaitHolderType *pMVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar4 = *(long **)(param_1 + 0x38);
  do {
    if (plVar4 == (long *)(param_1 + 0x30)) {
      return;
    }
    plVar5 = plVar4 + -1;
    iVar1 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        pMVar2 = (MultiWaitHolderType *)(**(code **)(*plVar5 + 0x18))(plVar5,iVar6);
        if (*(long *)(pMVar2 + 0x48) != 0) {
          if (*(long *)(pMVar2 + 0x48) != param_1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          *(undefined8 *)(pMVar2 + 0x48) = 0;
          nn::os::SetMultiWaitHolderUserData(pMVar2,0);
          nn::os::UnlinkMultiWaitHolder(pMVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    if ((long *)(param_1 + 0x30) != plVar4) {
      plVar5 = (long *)plVar4[1];
      lVar3 = *plVar5;
      *(long **)(*plVar4 + 8) = plVar5;
      *plVar5 = *plVar4;
      *(long **)(lVar3 + 8) = plVar4;
      *plVar4 = lVar3;
    }
    plVar4 = *(long **)(param_1 + 0x38);
  } while( true );
}


