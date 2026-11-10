/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e3cb8; name: FUN_018e3cb8
 */


int FUN_018e3cb8(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  plVar13 = (long *)PTR_DAT_047d7440;
  plVar18 = (long *)PTR_DAT_047d7438;
  pbVar12 = PTR_DAT_047d7430;
  lVar10 = *(long *)PTR_DAT_047d7438;
  *(long *)PTR_DAT_047d7440 = lVar10;
  uVar17 = *(ulong *)(lVar10 + 0x70);
  if (uVar17 != 0) {
    uVar16 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar14 = (int)uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      uVar14 = uVar16;
    }
    else {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar16 / uVar17;
      }
      uVar14 = uVar16 - uVar14 * uVar17;
    }
    plVar20 = *(long **)(*(long *)(lVar10 + 0x68) + uVar14 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar20[1] == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e49d8;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar14) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e49d8;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar8 * uVar17;
            }
            if (uVar19 != uVar14) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  plVar20 = (long *)(lVar10 + 0xd0);
LAB_018e3da8:
  piVar11 = (int *)*plVar20;
  bVar6 = *(byte *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (0x30 - (long)*piVar11)));
  if (((*pbVar12 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7430), pbVar12 = PTR_DAT_047d7430,
     plVar18 = (long *)PTR_DAT_047d7438, plVar13 = (long *)PTR_DAT_047d7440, iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
    pbVar12 = PTR_DAT_047d7430;
    plVar18 = (long *)PTR_DAT_047d7438;
    plVar13 = (long *)PTR_DAT_047d7440;
  }
  lVar10 = *plVar18;
  *plVar13 = lVar10;
  uVar17 = *(ulong *)(lVar10 + 0x70);
  if (uVar17 != 0) {
    uVar16 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar14 = (int)uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      uVar14 = uVar16;
    }
    else {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar16 / uVar17;
      }
      uVar14 = uVar16 - uVar14 * uVar17;
    }
    plVar20 = *(long **)(*(long *)(lVar10 + 0x68) + uVar14 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar20[1] == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4a18;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar14) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4a18;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar8 * uVar17;
            }
            if (uVar19 != uVar14) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  plVar20 = (long *)(lVar10 + 0xd0);
LAB_018e3e88:
  piVar11 = (int *)*plVar20;
  bVar1 = *(byte *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (0x30 - (long)*piVar11)) + 1)
  ;
  if (((*pbVar12 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7430), pbVar12 = PTR_DAT_047d7430,
     plVar18 = (long *)PTR_DAT_047d7438, plVar13 = (long *)PTR_DAT_047d7440, iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
    pbVar12 = PTR_DAT_047d7430;
    plVar18 = (long *)PTR_DAT_047d7438;
    plVar13 = (long *)PTR_DAT_047d7440;
  }
  lVar10 = *plVar18;
  *plVar13 = lVar10;
  uVar17 = *(ulong *)(lVar10 + 0x70);
  if (uVar17 != 0) {
    uVar16 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar14 = (int)uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      uVar14 = uVar16;
    }
    else {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar16 / uVar17;
      }
      uVar14 = uVar16 - uVar14 * uVar17;
    }
    plVar20 = *(long **)(*(long *)(lVar10 + 0x68) + uVar14 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar20[1] == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4a58;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar14) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4a58;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar8 * uVar17;
            }
            if (uVar19 != uVar14) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  plVar20 = (long *)(lVar10 + 0xd0);
LAB_018e3f6c:
  piVar11 = (int *)*plVar20;
  bVar2 = *(byte *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (0x30 - (long)*piVar11)) + 2)
  ;
  if (((*pbVar12 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7430), pbVar12 = PTR_DAT_047d7430,
     plVar18 = (long *)PTR_DAT_047d7438, plVar13 = (long *)PTR_DAT_047d7440, iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
    pbVar12 = PTR_DAT_047d7430;
    plVar18 = (long *)PTR_DAT_047d7438;
    plVar13 = (long *)PTR_DAT_047d7440;
  }
  lVar10 = *plVar18;
  *plVar13 = lVar10;
  uVar17 = *(ulong *)(lVar10 + 0x70);
  if (uVar17 != 0) {
    uVar16 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar14 = (int)uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      uVar14 = uVar16;
    }
    else {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar16 / uVar17;
      }
      uVar14 = uVar16 - uVar14 * uVar17;
    }
    plVar20 = *(long **)(*(long *)(lVar10 + 0x68) + uVar14 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar20[1] == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4a98;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar14) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4a98;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar8 * uVar17;
            }
            if (uVar19 != uVar14) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  plVar20 = (long *)(lVar10 + 0xd0);
LAB_018e4050:
  piVar11 = (int *)*plVar20;
  bVar3 = *(byte *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (0x30 - (long)*piVar11)) + 5)
  ;
  if (((*pbVar12 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7430), pbVar12 = PTR_DAT_047d7430,
     plVar18 = (long *)PTR_DAT_047d7438, plVar13 = (long *)PTR_DAT_047d7440, iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
    pbVar12 = PTR_DAT_047d7430;
    plVar18 = (long *)PTR_DAT_047d7438;
    plVar13 = (long *)PTR_DAT_047d7440;
  }
  lVar10 = *plVar18;
  *plVar13 = lVar10;
  uVar17 = *(ulong *)(lVar10 + 0x70);
  if (uVar17 != 0) {
    uVar16 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar14 = (int)uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      uVar14 = uVar16;
    }
    else {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar16 / uVar17;
      }
      uVar14 = uVar16 - uVar14 * uVar17;
    }
    plVar20 = *(long **)(*(long *)(lVar10 + 0x68) + uVar14 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar20[1] == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4ad8;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar14) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4ad8;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar8 * uVar17;
            }
            if (uVar19 != uVar14) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  plVar20 = (long *)(lVar10 + 0xd0);
LAB_018e4138:
  piVar11 = (int *)*plVar20;
  bVar4 = *(byte *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (0x30 - (long)*piVar11)) + 3)
  ;
  if (((*pbVar12 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7430), pbVar12 = PTR_DAT_047d7430,
     plVar18 = (long *)PTR_DAT_047d7438, plVar13 = (long *)PTR_DAT_047d7440, iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
    pbVar12 = PTR_DAT_047d7430;
    plVar18 = (long *)PTR_DAT_047d7438;
    plVar13 = (long *)PTR_DAT_047d7440;
  }
  lVar10 = *plVar18;
  *plVar13 = lVar10;
  uVar17 = *(ulong *)(lVar10 + 0x70);
  if (uVar17 != 0) {
    uVar16 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar14 = (int)uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      uVar14 = uVar16;
    }
    else {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar16 / uVar17;
      }
      uVar14 = uVar16 - uVar14 * uVar17;
    }
    plVar20 = *(long **)(*(long *)(lVar10 + 0x68) + uVar14 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar20[1] == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4b18;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar14) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4b18;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar8 * uVar17;
            }
            if (uVar19 != uVar14) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  plVar20 = (long *)(lVar10 + 0xd0);
LAB_018e4224:
  piVar11 = (int *)*plVar20;
  bVar5 = *(byte *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (0x30 - (long)*piVar11)) + 4)
  ;
  if (((*pbVar12 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7430), pbVar12 = PTR_DAT_047d7430,
     plVar18 = (long *)PTR_DAT_047d7438, plVar13 = (long *)PTR_DAT_047d7440, iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
    pbVar12 = PTR_DAT_047d7430;
    plVar18 = (long *)PTR_DAT_047d7438;
    plVar13 = (long *)PTR_DAT_047d7440;
  }
  lVar10 = *plVar18;
  *plVar13 = lVar10;
  uVar17 = *(ulong *)(lVar10 + 0x70);
  uVar15 = (uint)bVar1 + (uint)bVar6 + (uint)bVar2 + (uint)bVar3 + (uint)bVar4 + (uint)bVar5;
  if (uVar17 != 0) {
    uVar16 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar14 = (int)uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      uVar14 = uVar16;
    }
    else {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar16 / uVar17;
      }
      uVar14 = uVar16 - uVar14 * uVar17;
    }
    plVar20 = *(long **)(*(long *)(lVar10 + 0x68) + uVar14 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar20[1] == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4b58;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar14) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == uVar16) {
            if (plVar20[2] == uVar16) goto LAB_018e4b58;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar8 * uVar17;
            }
            if (uVar19 != uVar14) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  plVar20 = (long *)(lVar10 + 0xd0);
LAB_018e4310:
  piVar11 = (int *)*plVar20;
  if ((0x2a < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
     (uVar17 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x15], uVar17 != 0)) {
    cVar7 = *(char *)((long)piVar11 + uVar17);
    if (cVar7 == '\x03') {
      iVar9 = 0x32;
    }
    else {
      if (cVar7 != '\x02') {
        if (cVar7 == '\x01') {
          uVar15 = uVar15 * 0x14;
        }
        goto LAB_018e4354;
      }
      iVar9 = 0x23;
    }
    uVar15 = uVar15 * iVar9;
  }
LAB_018e4354:
  if (((*pbVar12 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7430), plVar18 = (long *)PTR_DAT_047d7438,
     plVar13 = (long *)PTR_DAT_047d7440, iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
    plVar18 = (long *)PTR_DAT_047d7438;
    plVar13 = (long *)PTR_DAT_047d7440;
  }
  lVar10 = *plVar18;
  *plVar13 = lVar10;
  uVar17 = *(ulong *)(lVar10 + 0x70);
  if (uVar17 != 0) {
    uVar16 = (ulong)*(ushort *)(param_1 + 10) + (ulong)*(ushort *)(param_1 + 8) * 10000;
    uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar14 = (int)uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      uVar14 = uVar16;
    }
    else {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar16 / uVar17;
      }
      uVar14 = uVar16 - uVar14 * uVar17;
    }
    plVar18 = *(long **)(*(long *)(lVar10 + 0x68) + uVar14 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar18[1] == uVar16) {
            if (plVar18[2] == uVar16) goto LAB_018e4b98;
          }
          else if ((plVar18[1] & uVar17 - 1) != uVar14) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar18[1];
          if (uVar19 == uVar16) {
            if (plVar18[2] == uVar16) goto LAB_018e4b98;
          }
          else {
            if (uVar17 <= uVar19) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar8 * uVar17;
            }
            if (uVar19 != uVar14) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  plVar18 = (long *)(lVar10 + 0xd0);
LAB_018e4420:
  piVar11 = (int *)*plVar18;
  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x29) ||
     (uVar17 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x14], uVar17 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)*(short *)((long)piVar11 + uVar17);
  }
  return iVar9 + (int)((float)uVar15 / 100.0);
LAB_018e49d8:
  plVar20 = plVar20 + 3;
  goto LAB_018e3da8;
LAB_018e4a18:
  plVar20 = plVar20 + 3;
  goto LAB_018e3e88;
LAB_018e4a58:
  plVar20 = plVar20 + 3;
  goto LAB_018e3f6c;
LAB_018e4a98:
  plVar20 = plVar20 + 3;
  goto LAB_018e4050;
LAB_018e4ad8:
  plVar20 = plVar20 + 3;
  goto LAB_018e4138;
LAB_018e4b18:
  plVar20 = plVar20 + 3;
  goto LAB_018e4224;
LAB_018e4b58:
  plVar20 = plVar20 + 3;
  goto LAB_018e4310;
LAB_018e4b98:
  plVar18 = plVar18 + 3;
  goto LAB_018e4420;
}


