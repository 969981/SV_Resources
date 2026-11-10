/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b7fa70; name: FUN_01b7fa70
 */


void FUN_01b7fa70(byte *param_1)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar6 = *(undefined1 **)PTR_DAT_047d3e30;
    param_1 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar3 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    puVar6 = &DAT_cbf29ce484222645;
    sVar3 = strlen((char *)param_1);
    bVar1 = *param_1;
    pbVar4 = param_1;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    plVar5 = (long *)0x0;
  }
  local_50 = puVar6;
  pbStack_48 = param_1;
  local_40 = sVar3;
  local_38 = plVar5;
  FUN_01b801fc(&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


