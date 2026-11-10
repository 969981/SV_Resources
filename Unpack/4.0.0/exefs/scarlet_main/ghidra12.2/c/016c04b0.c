/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c04b0; name: FUN_016c04b0
 */


bool FUN_016c04b0(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar6 = *(ulong *)(param_1 + 0x148);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar8 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar7 = (ulong)param_2;
    if (uVar8 < 2) {
      uVar11 = (ulong)((int)uVar6 - 1U & param_2);
    }
    else {
      uVar11 = uVar7;
      if (uVar6 <= uVar7) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar7 / uVar6;
        }
        uVar11 = uVar7 - uVar11 * uVar6;
      }
    }
    plVar10 = (long *)(param_1 + 0x140);
    plVar9 = *(long **)(*plVar10 + uVar11 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar9[1] == uVar7) {
            if (*(uint *)(plVar9 + 2) == param_2) goto LAB_016c0540;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar11) {
            return false;
          }
          plVar9 = (long *)*plVar9;
          param_1 = 0;
          if (plVar9 == (long *)0x0) {
            return false;
          }
        } while( true );
      }
      do {
        uVar12 = plVar9[1];
        if (uVar12 == uVar7) {
          if (*(uint *)(plVar9 + 2) == param_2) goto LAB_016c0540;
        }
        else {
          if (uVar6 <= uVar12) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar12 / uVar6;
            }
            uVar12 = uVar12 - uVar1 * uVar6;
          }
          if (uVar12 != uVar11) {
            return false;
          }
        }
        plVar9 = (long *)*plVar9;
        param_1 = 0;
        if (plVar9 == (long *)0x0) {
          return false;
        }
      } while( true );
    }
  }
  return false;
LAB_016c0540:
  if (uVar8 < 2) {
    uVar11 = (ulong)((int)uVar6 - 1U & param_2);
  }
  else {
    uVar11 = uVar7;
    if (uVar6 <= uVar7) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar7 / uVar6;
      }
      uVar11 = uVar7 - uVar11 * uVar6;
    }
  }
  plVar10 = *(long **)(*plVar10 + uVar11 * 8);
  if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
    if (uVar8 < 2) {
      do {
        if (plVar10[1] == uVar7) {
          if (*(uint *)(plVar10 + 2) == param_2) goto LAB_016c0584;
        }
        else if ((plVar10[1] & uVar6 - 1) != uVar11) break;
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
    else {
      do {
        uVar8 = plVar10[1];
        if (uVar8 == uVar7) {
          if (*(uint *)(plVar10 + 2) == param_2) {
LAB_016c0584:
            return plVar10[3] != 0;
          }
        }
        else {
          if (uVar6 <= uVar8) {
            uVar12 = 0;
            if (uVar6 != 0) {
              uVar12 = uVar8 / uVar6;
            }
            uVar8 = uVar8 - uVar12 * uVar6;
          }
          if (uVar8 != uVar11) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  uVar3 = FUN_02979490(param_1);
  puVar4 = (undefined8 *)FUN_00c41a10(uVar3,1);
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar4;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d38a8;
  *(undefined8 *)PTR_DAT_047d38b0 = uVar5;
  FUN_016c0738(uVar5,uVar3);
  return false;
}


