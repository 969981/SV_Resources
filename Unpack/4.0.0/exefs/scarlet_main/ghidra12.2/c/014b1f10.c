/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014b1f10; name: FUN_014b1f10
 */


char FUN_014b1f10(long param_1)

{
  char cVar1;
  ushort uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  lVar6 = *(long *)PTR_DAT_047d7948;
  *(long *)PTR_DAT_047d7950 = lVar6;
  uVar9 = *(ulong *)(lVar6 + 0x70);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar2 = *(ushort *)(param_1 + 8);
    uVar8 = (ulong)uVar2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = (int)uVar9 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar9 <= uVar8) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar8 / uVar9;
        }
        uVar11 = uVar8 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(*(long *)(lVar6 + 0x68) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar8) {
            if (*(ushort *)(plVar12 + 2) == uVar2) goto LAB_014b2080;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar8) {
            if (*(ushort *)(plVar12 + 2) == uVar2) goto LAB_014b2080;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar3 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  plVar12 = (long *)(lVar6 + 0xd0);
LAB_014b2024:
  piVar7 = (int *)*plVar12;
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x11) ||
     (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[8], uVar9 == 0)) {
    cVar4 = '\0';
  }
  else {
    cVar1 = *(char *)((long)piVar7 + uVar9);
    cVar4 = 'd';
    if (cVar1 != 'e') {
      cVar4 = cVar1;
    }
  }
  return cVar4;
LAB_014b2080:
  plVar12 = plVar12 + 3;
  goto LAB_014b2024;
}


