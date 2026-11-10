/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01049774; name: FUN_01049774
 */


void FUN_01049774(undefined8 *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  FUN_0104984c();
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &DAT_0459c9e8;
  param_1[1] = 0xff000000ff000000;
  param_1[2] = 0;
  param_1[3] = 0;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar3 = PTR_DAT_047d3e30;
  uVar5 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  param_1[5] = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[6] = uVar5;
  plVar1 = *(long **)(puVar3 + 0x18);
  param_1[7] = *(undefined8 *)(puVar3 + 0x10);
  param_1[8] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = DAT_0459c9c0;
  uVar2 = DAT_0459c9c8;
  *(undefined4 *)((long)param_1 + 0x54) = DAT_0459c9c4;
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  uVar2 = DAT_0459c9cc;
  *(undefined4 *)((long)param_1 + 0x5c) = DAT_0459c9d0;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}


