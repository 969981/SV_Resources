/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019de818; name: FUN_019de818
 */


void FUN_019de818(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045ce3f0;
  param_1[1] = lVar7;
  param_1[4] = (long)&PTR_LAB_045ce428;
  param_1[6] = (long)&DAT_cbf29ce484222645;
  param_1[7] = (long)&DAT_03c886bc;
  *(undefined4 *)(param_1 + 10) = 3;
  uVar3 = DAT_03d64bd0;
  uVar2 = DAT_03d64bc8;
  uVar1 = DAT_03d64bc0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 100) = uVar3;
  *(undefined8 *)((long)param_1 + 0x5c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x54) = uVar1;
  param_1[0xd] = lVar7;
  param_1[0xf] = 0;
  FUN_019de648(param_1 + 0xe,param_2);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_019de9a8(param_1 + 0x15);
  *(undefined4 *)((long)param_1 + 0xec) = 0x8000;
  *(undefined4 *)((long)param_1 + 0xd3) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  DAT_04859338 = param_3;
  thunk_FUN_0011f550(&LAB_02baa194,FUN_026f32c0);
  return;
}


