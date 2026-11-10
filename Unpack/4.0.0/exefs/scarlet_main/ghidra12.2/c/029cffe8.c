/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029cffe8; name: FUN_029cffe8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029cffe8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar6 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar7 = PTR_DAT_047d3e30;
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = *(undefined8 *)(puVar7 + 8);
  param_1[2] = *(undefined8 *)(puVar7 + 0x10);
  plVar9 = *(long **)(puVar7 + 0x18);
  param_1[3] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  uVar5 = _UNK_03cabe68;
  uVar4 = _DAT_03cabe60;
  uVar2 = _UNK_03caa5b8;
  uVar1 = _DAT_03caa5b0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[8] = 0x4234000042340000;
  param_1[9] = 0x41f0000041f00000;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  uVar10 = *(undefined8 *)(puVar7 + 8);
  param_1[0xe] = *(undefined8 *)puVar7;
  param_1[0xf] = uVar10;
  plVar9 = *(long **)(puVar7 + 0x18);
  param_1[0x10] = *(undefined8 *)(puVar7 + 0x10);
  param_1[0x11] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  uVar10 = *(undefined8 *)(puVar7 + 8);
  param_1[0x12] = *(undefined8 *)puVar7;
  param_1[0x13] = uVar10;
  plVar9 = *(long **)(puVar7 + 0x18);
  param_1[0x14] = *(undefined8 *)(puVar7 + 0x10);
  param_1[0x15] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  uVar10 = *(undefined8 *)(puVar7 + 8);
  param_1[0x16] = *(undefined8 *)puVar7;
  param_1[0x17] = uVar10;
  plVar9 = *(long **)(puVar7 + 0x18);
  param_1[0x18] = *(undefined8 *)(puVar7 + 0x10);
  param_1[0x19] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  uVar3 = _UNK_03cabe58;
  uVar10 = _DAT_03cabe50;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x40] = &DAT_cbf29ce484222645;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x41] = &DAT_03c886bc;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = &DAT_cbf29ce484222645;
  param_1[0x45] = &DAT_03c886bc;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = &DAT_cbf29ce484222645;
  param_1[0x49] = &DAT_03c886bc;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = &DAT_cbf29ce484222645;
  param_1[0x4d] = &DAT_03c886bc;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x30] = &DAT_cbf29ce484222645;
  param_1[0x31] = &DAT_03c886bc;
  param_1[0x34] = &DAT_cbf29ce484222645;
  param_1[0x35] = &DAT_03c886bc;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = &DAT_cbf29ce484222645;
  param_1[0x39] = &DAT_03c886bc;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = &DAT_cbf29ce484222645;
  param_1[0x3d] = &DAT_03c886bc;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x1d] = uVar3;
  param_1[0x1c] = uVar10;
  FUN_029d08a4(param_1 + 0x53);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x85] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x96] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x9c] = 0x4234000000000000;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x87] = uVar2;
  param_1[0x86] = uVar1;
  param_1[0x89] = uVar2;
  param_1[0x88] = uVar1;
  param_1[0x91] = uVar2;
  param_1[0x90] = uVar1;
  param_1[0x93] = uVar5;
  param_1[0x92] = uVar4;
  param_1[0x95] = uVar2;
  param_1[0x94] = uVar1;
  param_1[0x99] = uVar2;
  param_1[0x98] = uVar1;
  FUN_029d09dc(param_1 + 0xa0);
  auVar11 = NEON_fmov(0x3f800000,4);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  param_1[0xa7] = auVar11._8_8_;
  param_1[0xa6] = auVar11._0_8_;
  return;
}


