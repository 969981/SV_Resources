/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4a310; name: FUN_00e4a310
 */


void FUN_00e4a310(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = *(undefined8 *)(puVar2 + 8);
  param_1[2] = *(undefined8 *)(puVar2 + 0x10);
  plVar4 = *(long **)(puVar2 + 0x18);
  param_1[3] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  uVar5 = *(undefined8 *)(puVar2 + 8);
  param_1[4] = *(undefined8 *)puVar2;
  param_1[5] = uVar5;
  plVar4 = *(long **)(puVar2 + 0x18);
  param_1[6] = *(undefined8 *)(puVar2 + 0x10);
  param_1[7] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  uVar5 = *(undefined8 *)(puVar2 + 8);
  param_1[8] = *(undefined8 *)puVar2;
  param_1[9] = uVar5;
  plVar4 = *(long **)(puVar2 + 0x18);
  param_1[10] = *(undefined8 *)(puVar2 + 0x10);
  param_1[0xb] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


