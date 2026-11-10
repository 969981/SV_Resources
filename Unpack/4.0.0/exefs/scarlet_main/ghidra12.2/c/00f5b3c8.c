/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5b3c8; name: FUN_00f5b3c8
 */


bool FUN_00f5b3c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar12 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar12;
  puVar5 = PTR_DAT_047d4a48;
  puVar4 = PTR_DAT_047d4a40;
  puVar1 = *(undefined8 **)(lVar12 + 0x1c0);
  puVar2 = *(undefined8 **)(lVar12 + 0x1c8);
  do {
    if (puVar1 == puVar2) {
      return true;
    }
    plVar14 = (long *)*puVar1;
    plVar9 = (long *)(**(code **)plVar14[5])(plVar14 + 5);
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
      uVar11 = FUN_01b580f4();
      *(undefined8 *)puVar5 = uVar11;
      __cxa_guard_release(puVar4);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar5) {
        uVar10 = FUN_00f5b590(plVar14,param_1);
        if ((uVar10 & 1) == 0) {
          local_50 = 0;
          uStack_48 = 0;
          uVar10 = FUN_00f5b6fc(plVar14,param_1,&local_50);
        }
        uVar13 = (uint)(uVar10 >> 0x20);
        if (*(uint *)((long)plVar14 + 0x54) <= uVar13) {
          return true;
        }
        if (plVar14[8] == 0) {
          if (plVar14[9] == 0) {
            return true;
          }
          uVar6 = (**(code **)(*plVar14 + 0x88))(plVar14);
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = uVar13 / uVar6;
          }
          uVar7 = (**(code **)(*plVar14 + 0x88))(plVar14);
          uVar6 = 0;
          if (uVar7 != 0) {
            uVar6 = uVar13 / uVar7;
          }
          lVar12 = *(long *)(plVar14[9] + (ulong)uVar3 * 8) + (ulong)(uVar13 - uVar6 * uVar7) * 0x10
          ;
        }
        else {
          lVar12 = plVar14[8] + (uVar10 >> 0x20) * 0x10;
        }
        if (lVar12 == 0) {
          return true;
        }
        return *(char *)(lVar12 + 8) != '\0';
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


