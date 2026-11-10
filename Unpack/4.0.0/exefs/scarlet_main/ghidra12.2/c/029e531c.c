/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e531c; name: FUN_029e531c
 */


void FUN_029e531c(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_046097f0;
  param_1[1] = lVar5;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[4] = (long)&PTR_LAB_04609828;
  *(undefined4 *)((long)param_1 + 0x5c) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  nn::os::InitializeLightEvent(param_1 + 10,0,1);
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xd,0,1);
  lVar3 = param_1[1];
  param_1[0x27] = 0x666666666666666;
  param_1[0x28] = 0;
  param_1[0x21] = lVar3;
  param_1[0x22] = 0x666666666666666;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 1;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = lVar3;
  param_1[0x13] = 0x1fffffffffffffff;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = lVar3;
  param_1[0x1a] = 0x1fffffffffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = lVar3;
  param_1[0x2e] = lVar3;
  param_1[0x2f] = 0x666666666666666;
  param_1[0x32] = 0;
  param_1[0x33] = lVar3;
  param_1[0x39] = 0x3f8000003f800000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x34] = 0x666666666666666;
  param_1[0x35] = 0;
  param_1[0x3a] = *param_3;
  param_1[0x3b] = param_3[1];
  param_1[0x3c] = param_3[2];
  plVar4 = (long *)param_3[3];
  param_1[0x3d] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = param_4;
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  return;
}


