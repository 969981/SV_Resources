/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a0090; name: FUN_015a0090
 */


undefined4 FUN_015a0090(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar2 = PTR_DAT_047d4870;
  puVar1 = PTR_DAT_047d4868;
  plVar6 = *(long **)(lVar8 + 0x1c8);
  for (plVar9 = *(long **)(lVar8 + 0x1c0); plVar9 != plVar6; plVar9 = plVar9 + 1) {
    plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar9 + 0x28))();
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      uVar7 = FUN_01b4260c();
      *(undefined8 *)puVar2 = uVar7;
      __cxa_guard_release(puVar1);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)puVar2) goto LAB_015a0124;
    }
  }
LAB_015a0124:
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar2 = PTR_DAT_047d4870;
  puVar1 = PTR_DAT_047d4868;
  plVar9 = *(long **)(lVar8 + 0x1c0);
  do {
    lVar8 = *plVar9;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      uVar7 = FUN_01b4260c();
      *(undefined8 *)puVar2 = uVar7;
      __cxa_guard_release(puVar1);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar2) {
        if (param_1 < *(uint *)(lVar8 + 0x54)) {
          lVar8 = FUN_015a02dc(lVar8,param_1);
          uVar3 = 0;
          if (lVar8 != 0) {
            uVar3 = *(undefined4 *)(lVar8 + 8);
          }
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}


