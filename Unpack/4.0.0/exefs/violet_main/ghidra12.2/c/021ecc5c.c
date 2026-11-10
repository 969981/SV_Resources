/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ecc5c; name: FUN_021ecc5c
 */


bool FUN_021ecc5c(long param_1,short param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  uint *puVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  short *psVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  plVar11 = (long *)PTR_DAT_047d7440;
  plVar16 = (long *)PTR_DAT_047d7438;
  pbVar10 = PTR_DAT_047d7430;
  lVar7 = *(long *)PTR_DAT_047d7438;
  *(long *)PTR_DAT_047d7440 = lVar7;
  uVar15 = *(ulong *)(lVar7 + 0x70);
  if (uVar15 != 0) {
    uVar13 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar12 = (int)uVar15 - 1 & uVar13;
    }
    else if (uVar13 < uVar15) {
      uVar12 = uVar13;
    }
    else {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar13 / uVar15;
      }
      uVar12 = uVar13 - uVar12 * uVar15;
    }
    plVar18 = *(long **)(*(long *)(lVar7 + 0x68) + uVar12 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar18[1] == uVar13) {
            if (plVar18[2] == uVar13) goto LAB_021ed1cc;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar12) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar18[1];
          if (uVar17 == uVar13) {
            if (plVar18[2] == uVar13) goto LAB_021ed1cc;
          }
          else {
            if (uVar15 <= uVar17) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar17 / uVar15;
              }
              uVar17 = uVar17 - uVar5 * uVar15;
            }
            if (uVar17 != uVar12) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  plVar18 = (long *)(lVar7 + 0xd0);
LAB_021ecd4c:
  piVar8 = (int *)*plVar18;
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x35) ||
     (uVar15 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x1a], uVar15 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar4 = (uint *)((long)piVar8 + uVar15);
    lVar7 = (long)puVar4 + (ulong)*puVar4;
  }
  if ((*pbVar10 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430);
    pbVar10 = PTR_DAT_047d7430;
    plVar16 = (long *)PTR_DAT_047d7438;
    plVar11 = (long *)PTR_DAT_047d7440;
    if (iVar6 != 0) {
      FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7430);
      pbVar10 = PTR_DAT_047d7430;
      plVar16 = (long *)PTR_DAT_047d7438;
      plVar11 = (long *)PTR_DAT_047d7440;
    }
  }
  lVar9 = *plVar16;
  *plVar11 = lVar9;
  uVar15 = *(ulong *)(lVar9 + 0x70);
  psVar14 = (short *)(lVar7 + 4);
  if (uVar15 != 0) {
    uVar13 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar12 = (int)uVar15 - 1 & uVar13;
    }
    else if (uVar13 < uVar15) {
      uVar12 = uVar13;
    }
    else {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar13 / uVar15;
      }
      uVar12 = uVar13 - uVar12 * uVar15;
    }
    plVar18 = *(long **)(*(long *)(lVar9 + 0x68) + uVar12 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar18[1] == uVar13) {
            if (plVar18[2] == uVar13) goto LAB_021ed20c;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar12) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar18[1];
          if (uVar17 == uVar13) {
            if (plVar18[2] == uVar13) goto LAB_021ed20c;
          }
          else {
            if (uVar15 <= uVar17) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar17 / uVar15;
              }
              uVar17 = uVar17 - uVar5 * uVar15;
            }
            if (uVar17 != uVar12) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  plVar18 = (long *)(lVar9 + 0xd0);
LAB_021ece48:
  piVar8 = (int *)*plVar18;
  uVar15 = (ulong)*(ushort *)((long)piVar8 + (0x34 - (long)*piVar8));
  puVar4 = (uint *)((long)piVar8 + uVar15);
  uVar17 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + uVar17);
  uVar13 = (ulong)*puVar4;
  psVar2 = (short *)((long)puVar4 + uVar13 * 2 + 4);
  if ((psVar2 != psVar14) && (*psVar14 != param_2)) {
    lVar7 = ((uVar13 * 2 + uVar17 + uVar15) - lVar7) + (long)piVar8;
    do {
      lVar7 = lVar7 + -2;
      if (lVar7 == 0) {
        psVar14 = psVar2;
        break;
      }
      psVar3 = psVar14 + 1;
      psVar1 = psVar14 + 1;
      psVar14 = psVar3;
    } while (*psVar1 != param_2);
  }
  if ((*pbVar10 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430);
    plVar16 = (long *)PTR_DAT_047d7438;
    plVar11 = (long *)PTR_DAT_047d7440;
    if (iVar6 != 0) {
      FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7430);
      plVar16 = (long *)PTR_DAT_047d7438;
      plVar11 = (long *)PTR_DAT_047d7440;
    }
  }
  lVar7 = *plVar16;
  *plVar11 = lVar7;
  uVar15 = *(ulong *)(lVar7 + 0x70);
  if (uVar15 != 0) {
    uVar13 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar12 = (int)uVar15 - 1 & uVar13;
    }
    else if (uVar13 < uVar15) {
      uVar12 = uVar13;
    }
    else {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar13 / uVar15;
      }
      uVar12 = uVar13 - uVar12 * uVar15;
    }
    plVar16 = *(long **)(*(long *)(lVar7 + 0x68) + uVar12 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar16[1] == uVar13) {
            if (plVar16[2] == uVar13) goto LAB_021ed24c;
          }
          else if ((plVar16[1] & uVar15 - 1) != uVar12) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar16[1];
          if (uVar17 == uVar13) {
            if (plVar16[2] == uVar13) goto LAB_021ed24c;
          }
          else {
            if (uVar15 <= uVar17) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar17 / uVar15;
              }
              uVar17 = uVar17 - uVar5 * uVar15;
            }
            if (uVar17 != uVar12) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plVar16 = (long *)(lVar7 + 0xd0);
LAB_021ecf50:
  piVar8 = (int *)*plVar16;
  puVar4 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (0x34 - (long)*piVar8)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  return (short *)((long)puVar4 + (ulong)*puVar4 * 2 + 4) != psVar14;
LAB_021ed1cc:
  plVar18 = plVar18 + 3;
  goto LAB_021ecd4c;
LAB_021ed20c:
  plVar18 = plVar18 + 3;
  goto LAB_021ece48;
LAB_021ed24c:
  plVar16 = plVar16 + 3;
  goto LAB_021ecf50;
}


