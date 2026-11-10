/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b6b3c; name: FUN_017b6b3c
 */


long FUN_017b6b3c(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  puVar5 = (undefined8 *)PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = (undefined1 *)*puVar5;
    pbStack_48 = *(byte **)((long)puVar5 + 8);
    local_40 = *(size_t *)((long)puVar5 + 0x10);
    local_38 = *(long **)((long)puVar5 + 0x18);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  else {
    local_40 = strlen((char *)param_1);
    bVar1 = *param_1;
    local_50 = &DAT_cbf29ce484222645;
    pbVar4 = param_1;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    local_38 = (long *)0x0;
    puVar5 = (undefined8 *)PTR_DAT_047d3e30;
    pbStack_48 = param_1;
  }
  if (param_2 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = (undefined1 *)*puVar5;
    pbStack_68 = (byte *)puVar5[1];
    local_60 = puVar5[2];
    local_58 = (long *)puVar5[3];
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_70 = &DAT_cbf29ce484222645;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  iVar3 = FUN_017b6d30(&local_50,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return (long)iVar3;
}


