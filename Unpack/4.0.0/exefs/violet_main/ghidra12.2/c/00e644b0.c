/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e644b0; name: FUN_00e644b0
 */


undefined1  [16] FUN_00e644b0(undefined1 param_1 [16],undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  lVar5 = *(long *)PTR_DAT_047d8848;
  *(long *)PTR_DAT_047d8850 = lVar5;
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar4 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    local_38 = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  else {
    local_40 = strlen((char *)param_3);
    bVar1 = *param_3;
    local_50 = &DAT_cbf29ce484222645;
    pbVar3 = param_3;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
    }
    plVar4 = (long *)0x0;
    local_38 = (long *)0x0;
    pbStack_48 = param_3;
  }
  if (*(char *)(lVar5 + 0x2d0) == '\0') {
    param_2 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(**(long **)(lVar5 + 0x88) + 0x90))(*(long **)(lVar5 + 0x88),&local_50);
    plVar4 = local_38;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  auVar7._4_4_ = param_2;
  auVar7._0_4_ = uVar6;
  auVar7._8_8_ = 0;
  return auVar7;
}


