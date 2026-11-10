/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01314f00; name: FUN_01314f00
 */


void FUN_01314f00(long *param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  uVar7 = *(ulong *)(param_2 + 0x50);
  if (uVar7 != 0) {
    uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar5 = *param_3;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar7 - 1 & uVar5;
    }
    else if (uVar5 < uVar7) {
      uVar10 = uVar5;
    }
    else {
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = uVar5 / uVar7;
      }
      uVar10 = uVar5 - uVar10 * uVar7;
    }
    plVar12 = *(long **)(*(long *)(param_2 + 0x48) + uVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar12[1] == uVar5) {
            if (plVar12[2] == uVar5) goto LAB_01315008;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar10) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar12[1];
          if (uVar9 == uVar5) {
            if (plVar12[2] == uVar5) goto LAB_01315008;
          }
          else {
            if (uVar7 <= uVar9) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar2 * uVar7;
            }
            if (uVar9 != uVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_01315014:
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar3 = PTR_DAT_047d3e30;
  lVar8 = *(long *)(PTR_DAT_047d3e30 + 8);
  param_1[1] = *(long *)PTR_DAT_047d3e30;
  param_1[2] = lVar8;
  plVar12 = *(long **)(puVar3 + 0x18);
  param_1[3] = *(long *)(puVar3 + 0x10);
  param_1[4] = (long)plVar12;
  if (plVar12 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0131505c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x18))();
  return;
LAB_01315008:
  puVar6 = (undefined8 *)plVar12[3];
  *param_1 = (long)puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    plVar13 = (long *)*puVar6;
    plVar12 = (long *)PTR_DAT_047d8b70;
    if (plVar13 != (long *)0x0) {
      plVar12 = plVar13 + 6;
    }
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 7;
    }
    lVar8 = *plVar1;
    if (plVar13 == (long *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = plVar13[8];
    }
    param_1[1] = *plVar12;
    param_1[2] = lVar8;
    param_1[3] = lVar11;
    param_1[4] = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    param_1[4] = (long)plVar13;
    return;
  }
  goto LAB_01315014;
}


