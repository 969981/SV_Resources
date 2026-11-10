/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ad58e4; name: FUN_02ad58e4
 */


undefined4 FUN_02ad58e4(undefined4 param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar4 = PTR_DAT_047d4890;
  puVar3 = PTR_DAT_047d4888;
  plVar1 = *(long **)(lVar9 + 0x1c0);
  plVar2 = *(long **)(lVar9 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return 0xffffffff;
    }
    lVar9 = *plVar1;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) {
        uVar8 = FUN_014e61a4(lVar9,param_1,param_2,0);
        if ((uVar8 & 1) != 0) {
          return 0;
        }
        uVar8 = FUN_014e61a4(lVar9,param_1,param_2,1);
        if ((uVar8 & 1) != 0) {
          return 1;
        }
        uVar8 = FUN_014e61a4(lVar9,param_1,param_2,2);
        if ((uVar8 & 1) != 0) {
          return 2;
        }
        uVar8 = FUN_014e61a4(lVar9,param_1,param_2,3);
        if ((uVar8 & 1) != 0) {
          return 3;
        }
        uVar8 = FUN_014e61a4(lVar9,param_1,param_2,4);
        if ((uVar8 & 1) != 0) {
          return 4;
        }
        uVar8 = FUN_014e61a4(lVar9,param_1,param_2,5);
        uVar10 = 5;
        if ((uVar8 & 1) == 0) {
          uVar10 = 0xffffffff;
        }
        return uVar10;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


