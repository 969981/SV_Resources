/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a8e90; name: FUN_012a8e90
 */


uint FUN_012a8e90(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  lVar6 = *(long *)PTR_DAT_047d8848;
  *(long *)PTR_DAT_047d8850 = lVar6;
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    local_38 = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
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
    plVar5 = (long *)0x0;
    local_38 = (long *)0x0;
    pbStack_48 = param_1;
  }
  if (*(char *)(lVar6 + 0x2d0) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(lVar6 + 0x88) + 0x80))(*(long **)(lVar6 + 0x88),&local_50);
    plVar5 = local_38;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return uVar2 & 1;
}


