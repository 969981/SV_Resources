/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ad554c; name: FUN_02ad554c
 */


bool FUN_02ad554c(undefined4 param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar4 = PTR_DAT_047d4890;
  puVar3 = PTR_DAT_047d4888;
  plVar1 = *(long **)(lVar11 + 0x1c0);
  plVar2 = *(long **)(lVar11 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return false;
    }
    lVar11 = *plVar1;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar9 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar9;
      __cxa_guard_release(puVar3);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar4) {
        uVar10 = FUN_014e61a4(lVar11,param_1,param_2,0);
        uVar6 = 0;
        if ((uVar10 & 1) != 0) {
          uVar6 = FUN_01b43280(0);
          uVar6 = uVar6 & 1;
        }
        uVar10 = FUN_014e61a4(lVar11,param_1,param_2,1);
        if ((uVar10 & 1) != 0) {
          uVar7 = FUN_01b43280(1);
          uVar6 = uVar6 | uVar7 & 1;
        }
        uVar10 = FUN_014e61a4(lVar11,param_1,param_2,2);
        if ((uVar10 & 1) != 0) {
          uVar7 = FUN_01b43280(2);
          uVar6 = uVar6 | uVar7 & 1;
        }
        uVar10 = FUN_014e61a4(lVar11,param_1,param_2,3);
        if ((uVar10 & 1) != 0) {
          uVar7 = FUN_01b43280(3);
          uVar6 = uVar6 | uVar7 & 1;
        }
        uVar10 = FUN_014e61a4(lVar11,param_1,param_2,4);
        if ((uVar10 & 1) != 0) {
          uVar7 = FUN_01b43280(4);
          uVar6 = uVar6 | uVar7 & 1;
        }
        uVar10 = FUN_014e61a4(lVar11,param_1,param_2,5);
        if ((uVar10 & 1) != 0) {
          uVar7 = FUN_01b43280(5);
          uVar6 = uVar6 | uVar7 & 1;
        }
        return uVar6 != 0;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


