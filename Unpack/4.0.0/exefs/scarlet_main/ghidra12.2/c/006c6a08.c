/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c6a08; name: FUN_006c6a08
 */


void FUN_006c6a08(long param_1,EventType *param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x1;
  long extraout_x1_00;
  undefined *local_d0;
  undefined8 ***local_c8;
  undefined8 ***pppuStack_c0;
  MultiWaitHolderType aMStack_b0 [64];
  undefined1 *local_70;
  undefined8 uStack_68;
  
  FUN_006c6e5c(param_1 + 0xe0);
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar4 = FUN_006c6298(param_1,&local_d0);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_006c6558(param_1,&local_d0), (uVar4 & 1) == 0)) {
      pMVar1 = (MutexType *)(param_1 + 0xc0);
      nn::os::LockMutex(pMVar1);
      if (param_2 == (EventType *)0x0) {
        do {
          while( true ) {
            if (*(char *)(param_1 + 0x110) != '\0') goto LAB_006c6b50;
            iVar3 = FUN_006c6738(param_1,0);
            if (iVar3 == 0) break;
            if (iVar3 == 1) goto LAB_006c6b50;
            if (iVar3 != 2) goto LAB_006c6b9c;
            lVar5 = extraout_x1_00;
            if (extraout_x1_00 != 0) goto LAB_006c6b84;
          }
          lVar5 = FUN_006c6820(param_1);
        } while (lVar5 == 0);
      }
      else {
        puVar2 = PTR_DAT_047cbb38 + 0x10;
        do {
          while( true ) {
            if (*(char *)(param_1 + 0x110) != '\0') goto LAB_006c6b50;
            local_70 = (undefined1 *)0x0;
            uStack_68 = 0;
            local_d0 = puVar2;
            local_c8 = &local_c8;
            pppuStack_c0 = &local_c8;
            nn::os::InitializeMultiWaitHolder(aMStack_b0,param_2);
            local_70 = (undefined1 *)&local_d0;
            iVar3 = FUN_006c6738(param_1,&local_d0);
            FUN_006c4274(&local_d0);
            if (iVar3 == 2) break;
            if (iVar3 == 1) goto LAB_006c6b50;
            if (iVar3 != 0) {
LAB_006c6b9c:
                    /* WARNING: Subroutine does not return */
              nn::detail::UnexpectedDefaultImpl("","",0);
            }
            lVar5 = FUN_006c6820(param_1);
            if (lVar5 != 0) goto LAB_006c6b84;
          }
          lVar5 = extraout_x1;
        } while (extraout_x1 == 0);
      }
LAB_006c6b84:
      nn::os::UnlockMutex(pMVar1);
      FUN_006c61e4(param_1,lVar5);
    }
    else {
      FUN_006c61e4(param_1,local_d0);
    }
  }
LAB_006c6b58:
  FUN_006c6e94(param_1 + 0xe0);
  return;
LAB_006c6b50:
  nn::os::UnlockMutex(pMVar1);
  goto LAB_006c6b58;
}


