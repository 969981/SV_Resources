/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02446bd8; name: FUN_02446bd8
 */


void FUN_02446bd8(byte *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar5 = (undefined8 *)PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = (undefined1 *)*puVar5;
    pbStack_58 = *(byte **)((long)puVar5 + 8);
    local_50 = *(size_t *)((long)puVar5 + 0x10);
    local_48 = *(long **)((long)puVar5 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_1);
    bVar1 = *param_1;
    local_60 = &DAT_cbf29ce484222645;
    pbVar4 = param_1;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    local_48 = (long *)0x0;
    puVar5 = (undefined8 *)PTR_DAT_047d3e30;
    pbStack_58 = param_1;
  }
  if (param_2 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = (undefined1 *)*puVar5;
    pbStack_78 = (byte *)puVar5[1];
    local_70 = puVar5[2];
    local_68 = (long *)puVar5[3];
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_80 = &DAT_cbf29ce484222645;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_2;
  }
  FUN_0244f520(&local_60,&local_80,param_3);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


