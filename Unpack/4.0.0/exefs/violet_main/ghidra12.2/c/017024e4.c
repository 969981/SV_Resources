/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017024e4; name: FUN_017024e4
 */


void FUN_017024e4(undefined8 param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *plStack_38;
  
  uVar4 = (uint)DAT_0484c088;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar1 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    plStack_38 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_01702624(param_1,-((ulong)~uVar4 & 1),&local_50);
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
  }
  else {
    local_40 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_50 = &DAT_cbf29ce484222645;
    pbVar5 = param_2;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    plStack_38 = (long *)0x0;
    pbStack_48 = param_2;
  }
  FUN_01702624(param_1,-((ulong)~uVar4 & 1),&local_50);
  return;
}


