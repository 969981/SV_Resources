/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0149744c; name: FUN_0149744c
 */


undefined1 FUN_0149744c(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_48;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar4 = PTR_DAT_047dcba8;
  puVar3 = PTR_DAT_047dcba0;
  plVar1 = *(long **)(lVar9 + 0x1c0);
  plVar2 = *(long **)(lVar9 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar9 = *plVar1;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar8 = FUN_020e5998();
      *(undefined8 *)puVar4 = uVar8;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) goto LAB_014974f4;
    }
  }
  lVar9 = 0;
LAB_014974f4:
  local_48 = (**(code **)(**(long **)(lVar9 + 0x40) + 0x38))(*(long **)(lVar9 + 0x40),param_2);
  puVar7 = (undefined1 *)
           (**(code **)(**(long **)(lVar9 + 0x40) + 0x40))(*(long **)(lVar9 + 0x40),&local_48);
  return *puVar7;
}


