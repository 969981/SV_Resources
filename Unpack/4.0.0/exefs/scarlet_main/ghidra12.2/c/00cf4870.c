/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf4870; name: FUN_00cf4870
 */


undefined4 FUN_00cf4870(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ushort *puVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  plVar9 = (long *)PTR_DAT_047d7440;
  plVar12 = (long *)PTR_DAT_047d7438;
  puVar4 = PTR_DAT_047d7430;
  lVar6 = *(long *)PTR_DAT_047d7438;
  *(long *)PTR_DAT_047d7440 = lVar6;
  uVar13 = *(ulong *)(lVar6 + 0x70);
  if (uVar13 != 0) {
    uVar11 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar10 = (int)uVar13 - 1 & uVar11;
    }
    else if (uVar11 < uVar13) {
      uVar10 = uVar11;
    }
    else {
      uVar10 = 0;
      if (uVar13 != 0) {
        uVar10 = uVar11 / uVar13;
      }
      uVar10 = uVar11 - uVar10 * uVar13;
    }
    plVar15 = *(long **)(*(long *)(lVar6 + 0x68) + uVar10 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar15[1] == uVar11) {
            if (plVar15[2] == uVar11) goto LAB_00cf4bac;
          }
          else if ((plVar15[1] & uVar13 - 1) != uVar10) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar15[1];
          if (uVar14 == uVar11) {
            if (plVar15[2] == uVar11) goto LAB_00cf4bac;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar3 = 0;
              if (uVar13 != 0) {
                uVar3 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar3 * uVar13;
            }
            if (uVar14 != uVar10) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  plVar15 = (long *)(lVar6 + 0xd0);
LAB_00cf4960:
  puVar7 = (ushort *)(*plVar15 - (long)*(int *)*plVar15);
  if ((*puVar7 < 0x33) || (puVar7[0x19] == 0)) {
    uVar2 = 0;
  }
  else {
    if (((*puVar4 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d7430), plVar12 = (long *)PTR_DAT_047d7438,
       plVar9 = (long *)PTR_DAT_047d7440, iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7430);
      plVar12 = (long *)PTR_DAT_047d7438;
      plVar9 = (long *)PTR_DAT_047d7440;
    }
    lVar6 = *plVar12;
    *plVar9 = lVar6;
    uVar13 = *(ulong *)(lVar6 + 0x70);
    if (uVar13 != 0) {
      uVar11 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
      uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar10 = (int)uVar13 - 1 & uVar11;
      }
      else if (uVar11 < uVar13) {
        uVar10 = uVar11;
      }
      else {
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = uVar11 / uVar13;
        }
        uVar10 = uVar11 - uVar10 * uVar13;
      }
      plVar12 = *(long **)(*(long *)(lVar6 + 0x68) + uVar10 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if (plVar12[1] == uVar11) {
              if (plVar12[2] == uVar11) goto LAB_00cf4bec;
            }
            else if ((plVar12[1] & uVar13 - 1) != uVar10) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar12[1];
            if (uVar14 == uVar11) {
              if (plVar12[2] == uVar11) goto LAB_00cf4bec;
            }
            else {
              if (uVar13 <= uVar14) {
                uVar3 = 0;
                if (uVar13 != 0) {
                  uVar3 = uVar14 / uVar13;
                }
                uVar14 = uVar14 - uVar3 * uVar13;
              }
              if (uVar14 != uVar10) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    plVar12 = (long *)(lVar6 + 0xd0);
LAB_00cf4a4c:
    piVar8 = (int *)*plVar12;
    puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (0x32 - (long)*piVar8)));
    uVar2 = *(undefined4 *)((long)puVar1 + (ulong)*puVar1);
  }
  return uVar2;
LAB_00cf4bac:
  plVar15 = plVar15 + 3;
  goto LAB_00cf4960;
LAB_00cf4bec:
  plVar12 = plVar12 + 3;
  goto LAB_00cf4a4c;
}


