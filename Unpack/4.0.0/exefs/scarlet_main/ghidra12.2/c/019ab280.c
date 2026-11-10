/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ab280; name: FUN_019ab280
 */


bool FUN_019ab280(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_90;
  long *local_88;
  undefined1 auStack_80 [80];
  byte local_30 [16];
  
  lVar6 = *(long *)(param_1 + 0xc0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 8;
    nn::oe::SetUserInactivityDetectionTimeExtended(true);
    nn::oe::SetFocusHandlingMode(1);
    *(undefined4 *)(param_1 + 0xb8) = 3;
    return true;
  }
  iVar4 = *(int *)(param_1 + 0xb8);
  if (iVar4 == 0) {
    iVar4 = *(int *)(lVar6 + 0x48);
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        FUN_019db778(&local_90,lVar6 + 0xe0);
        FUN_019dba7c(auStack_80,&local_90);
        FUN_019db8bc(param_1 + 0x48,auStack_80);
        FUN_019ab5b0(auStack_80);
        FUN_0135d328(local_30,local_90,0);
        plVar1 = local_88;
        local_88 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        FUN_0135d2ec(local_30);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 8))();
        }
        goto LAB_019ab494;
      }
      if (iVar4 != 3) goto LAB_019ab2b4;
      uVar3 = 2;
      goto LAB_019ab498;
    }
    uVar5 = FUN_019ab520(param_1,*(undefined2 *)(param_1 + 200));
    if ((uVar5 & 1) == 0) {
      nn::oe::SetUserInactivityDetectionTimeExtended(true);
      nn::oe::SetFocusHandlingMode(1);
      *(undefined4 *)(param_1 + 0xb8) = 3;
      *(undefined4 *)(param_1 + 0x40) = 1;
      goto LAB_019ab2b4;
    }
    uVar3 = 1;
  }
  else {
    if (iVar4 == 1) {
      local_30[0] = FUN_019ab550(*(undefined2 *)(param_1 + 200));
      if (local_30[0] != 0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        FUN_019ab658(auStack_80,local_30,PTR_DAT_047d3e30,0,0);
        uVar5 = FUN_019ab5f0(auStack_80);
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x40) = 8;
          nn::oe::SetUserInactivityDetectionTimeExtended(true);
          nn::oe::SetFocusHandlingMode(1);
          uVar3 = 3;
        }
        else {
          FUN_019abb24(param_1 + 0xd0,auStack_80);
          uVar3 = 2;
        }
        *(undefined4 *)(param_1 + 0xb8) = uVar3;
        FUN_019ccdb4(auStack_80);
        goto LAB_019ab2b4;
      }
LAB_019ab494:
      uVar3 = 8;
LAB_019ab498:
      *(undefined4 *)(param_1 + 0x40) = uVar3;
    }
    else {
      if (iVar4 != 2) goto LAB_019ab2b4;
      uVar5 = FUN_019ab588(param_1 + 0xd0);
      if ((uVar5 & 1) != 0) goto LAB_019ab2b4;
      cVar2 = FUN_019ab614(param_1 + 0xd0);
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x40) = 1;
        nn::oe::SetUserInactivityDetectionTimeExtended(true);
        nn::oe::SetFocusHandlingMode(1);
        *(undefined4 *)(param_1 + 0xb8) = 3;
        FUN_019ab550(*(undefined2 *)(param_1 + 200));
        FUN_011722d4(auStack_80);
        FUN_00d8e444(auStack_80);
        goto LAB_019ab2b4;
      }
      uVar3 = FUN_01f5086c();
      *(undefined4 *)(param_1 + 0x40) = uVar3;
    }
    nn::oe::SetUserInactivityDetectionTimeExtended(true);
    nn::oe::SetFocusHandlingMode(1);
    uVar3 = 3;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
LAB_019ab2b4:
  return *(int *)(param_1 + 0xb8) == 3;
}


