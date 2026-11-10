/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029edd84; name: FUN_029edd84
 */


void FUN_029edd84(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar3 = (long *)param_2[3];
  param_1[3] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar1 = PTR_DAT_047d3e30;
  uVar4 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  param_1[4] = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[5] = uVar4;
  plVar3 = *(long **)(puVar1 + 0x18);
  param_1[6] = *(undefined8 *)(puVar1 + 0x10);
  param_1[7] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


