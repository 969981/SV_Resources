/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9d46c; name: FUN_00d9d46c
 */


bool FUN_00d9d46c(float param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0 [27];
  undefined4 local_34;
  
  if (*(char *)(param_2 + 0x59) == '\0') {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar5 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar5;
    plVar4 = *(long **)(*(long *)(lVar5 + 0x200) + 0x40);
    iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined4 *)(param_2 + 0x38),&local_c0,1);
    *(undefined4 *)(param_2 + 100) = (undefined4)local_c0;
    *(int *)(param_2 + 0x68) = local_c0._4_4_;
    *(int *)(param_2 + 0x6c) = (int)local_b8;
    *(int *)(param_2 + 0x70) = local_b8._4_4_;
    *(undefined4 *)(param_2 + 0x74) = (undefined4)local_b0;
    *(undefined4 *)(param_2 + 0x78) = local_b0._4_4_;
    *(undefined4 *)(param_2 + 0x7c) = (undefined4)local_a8;
    *(undefined4 *)(param_2 + 0x80) = local_a8._4_4_;
    *(undefined4 *)(param_2 + 0x84) = local_a0[0];
    if (iVar3 == 1) {
      if (*(char *)(param_2 + 0x5a) == '\0') {
        if ((local_c0._4_4_ < 1 && local_b8._4_4_ < 1) && (int)local_b8 < 1) {
          param_1 = *(float *)(param_2 + 0x5c) - param_1;
          *(undefined1 *)(param_2 + 0x5b) = 1;
          *(float *)(param_2 + 0x5c) = param_1;
          if (param_1 <= 0.0) {
            *(undefined1 *)(param_2 + 0x59) = 1;
            memset(&local_c0,0,0x80);
            nn::os::LockMutex((MutexType *)(param_2 + 0x3d8));
            if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
              (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,local_a0);
              local_a8 = *(undefined8 *)(param_2 + 0xa8);
              local_b8 = *(code **)(param_2 + 0x98);
              local_c0 = *(code **)(param_2 + 0x90);
              local_b0 = *(undefined8 *)(param_2 + 0xa0);
            }
            nn::os::UnlockMutex((MutexType *)(param_2 + 0x3d8));
            if (local_c0 != (code *)0x0) {
              local_34 = *(undefined4 *)(param_2 + 0x38);
              (*local_c0)(local_a0,&local_34);
            }
            pcVar1 = local_b8;
            if (local_b8 != (code *)0x0) {
              local_b0 = 0;
              local_a8 = 0;
              local_c0 = (code *)0x0;
              local_b8 = (code *)0x0;
              (*pcVar1)(local_a0);
            }
            FUN_0188f738(param_2);
          }
        }
        else if (*(char *)(param_2 + 0x5b) != '\0') {
          if (((*PTR_DAT_047d8a70 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar3 != 0)) {
            FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8a70);
          }
          lVar5 = *(long *)PTR_DAT_047d8a78;
          *(long *)PTR_DAT_047d8a80 = lVar5;
          *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(lVar5 + 0x488);
          *(undefined1 *)(param_2 + 0x5b) = 0;
        }
      }
      else if ((local_c0._4_4_ >= 1 || local_b8._4_4_ >= 1) || (int)local_b8 >= 1) {
        *(undefined1 *)(param_2 + 0x5a) = 0;
      }
    }
    bVar2 = *(char *)(param_2 + 0x59) != '\0';
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


