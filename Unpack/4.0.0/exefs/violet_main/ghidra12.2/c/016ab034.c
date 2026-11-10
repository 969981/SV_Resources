/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016ab034; name: FUN_016ab034
 */


ulong FUN_016ab034(undefined8 param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 local_60;
  ulong local_58;
  long *local_48;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  puVar4 = PTR_DAT_047d4870;
  puVar3 = PTR_DAT_047d4868;
  plVar2 = *(long **)(lVar10 + 0x1c8);
  for (plVar1 = *(long **)(lVar10 + 0x1c0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(*plVar1 + 0x28))();
    if ((*puVar3 & 1) == 0) {
      local_48 = plVar6;
      iVar5 = __cxa_guard_acquire(puVar3);
      plVar6 = local_48;
      if (iVar5 != 0) {
        uVar8 = FUN_01b4260c();
        *(undefined8 *)puVar4 = uVar8;
        __cxa_guard_release(puVar3);
        plVar6 = local_48;
      }
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) goto LAB_016ab0d0;
    }
  }
LAB_016ab0d0:
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  puVar4 = PTR_DAT_047d4870;
  puVar3 = PTR_DAT_047d4868;
  plVar1 = *(long **)(lVar10 + 0x1c0);
  plVar2 = *(long **)(lVar10 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar10 = *plVar1;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar8 = FUN_01b4260c();
      *(undefined8 *)puVar4 = uVar8;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) goto LAB_016ab20c;
    }
  }
  lVar10 = 0;
LAB_016ab20c:
  uVar7 = FUN_016ab2d0(lVar10,param_1);
  if ((uVar7 & 1) == 0) {
    local_60 = 0;
    local_58 = (ulong)param_2;
    uVar7 = FUN_016ab43c(lVar10,param_1,&local_60);
    uVar9 = 0;
    if ((uVar7 & 1) != 0) {
      uVar9 = (uint)(uVar7 >> 0x20);
    }
    uVar7 = (ulong)uVar9;
  }
  else {
    uVar7 = uVar7 >> 0x20;
  }
  return uVar7;
}


