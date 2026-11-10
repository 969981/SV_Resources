/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e7f6d8; name: FUN_00e7f6d8
 */


void FUN_00e7f6d8(undefined8 *param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long local_28;
  
  FUN_00e7f3e0(param_1,param_2,param_3 & 1);
  *param_1 = &DAT_04602468;
  param_1[4] = &PTR_LAB_04602618;
  param_1[5] = &DAT_04602740;
  param_1[0x24] = &PTR_LAB_046027f8;
  param_1[6] = &PTR_LAB_04602798;
  param_1[7] = &PTR_LAB_046027c0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1d) {
    local_28 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe];
    local_28 = 0;
    if (uVar6 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar6);
      local_28 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00ea0a7c(param_1 + 0x8d,&local_28);
  param_1[0x8e] = 0;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar3 = PTR_DAT_047d3e30;
  param_1[0x8f] = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[0x90] = *(undefined8 *)(puVar3 + 8);
  plVar2 = *(long **)(puVar3 + 0x18);
  param_1[0x91] = *(undefined8 *)(puVar3 + 0x10);
  param_1[0x92] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1f) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_2 + uVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 0x49c) = uVar5;
  return;
}


