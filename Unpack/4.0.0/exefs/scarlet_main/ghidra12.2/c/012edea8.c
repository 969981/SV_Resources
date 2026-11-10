/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012edea8; name: FUN_012edea8
 */


void FUN_012edea8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 local_14 [4];
  
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
  puVar1 = PTR_DAT_047d8c78;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar5;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar6 = param_1 + 5;
  *plVar6 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar6);
  param_1[8] = (long)&PTR_LAB_045a05f0;
  *param_1 = (long)&PTR_LAB_045a04b8;
  param_1[4] = (long)&PTR_LAB_045a0548;
  *plVar6 = (long)&DAT_045a0598;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 100;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_012ee66c(param_1 + 0x12);
  param_1[0x16] = 0;
  local_14[0] = 0;
  FUN_012ee10c(param_1 + 0x18,local_14);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  FUN_012ee7a4(param_1 + 0x2b);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  FUN_012ee19c(param_1 + 0x32);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x36] = 0;
  FUN_012ee19c(param_1 + 0x39);
  FUN_012ee0cc(param_1 + 0x3d);
  FUN_012ee150(param_1 + 0x4a);
  param_1[0x54] = 0;
  *(undefined4 *)((long)param_1 + 0x2b4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x55,0,1);
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
  uVar4 = FUN_018a59d0();
  FUN_012f3290(uVar4,param_1 + 4,param_1 + 8);
  return;
}


