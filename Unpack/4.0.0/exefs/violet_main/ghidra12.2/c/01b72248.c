/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b72248; name: FUN_01b72248
 */


void FUN_01b72248(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar7 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar7;
  puVar3 = PTR_DAT_047d4c68;
  puVar2 = PTR_DAT_047d4c60;
  plVar8 = *(long **)(lVar7 + 0x1c0);
  plVar1 = *(long **)(lVar7 + 0x1c8);
  if (plVar8 == plVar1) {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = *plVar8;
      plVar5 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x28))((undefined8 *)(lVar7 + 0x28));
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
        uVar6 = FUN_01b3fb0c();
        *(undefined8 *)puVar3 = uVar6;
        __cxa_guard_release(puVar2);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)puVar3) goto LAB_01b72334;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
    lVar7 = 0;
  }
LAB_01b72334:
  FUN_01911a28(lVar7,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


