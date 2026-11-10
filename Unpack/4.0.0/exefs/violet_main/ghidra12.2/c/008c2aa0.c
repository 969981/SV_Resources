/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c2aa0; name: FUN_008c2aa0
 */


long FUN_008c2aa0(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  undefined1 *puVar20;
  
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0x91) >> 1 & 1) == 0)) {
    lVar12 = 0x40;
    goto LAB_008c2b78;
  }
  uVar2 = *(ushort *)(*(long *)(param_2 + 0xa0) + (ulong)*(ushort *)(param_1 + 0x92) * 0x10);
  uVar15 = (ulong)uVar2;
  if (uVar15 == 0) {
LAB_008c2b70:
    lVar12 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(param_2 + 0xa0) + (ulong)*(ushort *)(param_1 + 0x92) * 0x10 + 8);
    if (uVar2 == 1) {
      uVar4 = 0;
      uVar14 = 0;
    }
    else {
      uVar4 = 0;
      uVar14 = 0;
      piVar17 = (int *)(lVar16 + 0x3c);
      do {
        if (piVar17[-0xe] != 0) {
          uVar14 = uVar14 + 1;
        }
        uVar4 = uVar4 + 2;
        if (*piVar17 != 0) {
          uVar14 = uVar14 + 1;
        }
        piVar17 = piVar17 + 0x1c;
      } while ((uVar15 & 0xfffe) != uVar4);
    }
    if (((uVar2 & 1) != 0) && (*(int *)(lVar16 + uVar4 * 0x38 + 4) != 0)) {
      uVar14 = uVar14 + 1;
    }
    if (uVar14 == 0) goto LAB_008c2b70;
    lVar12 = (ulong)uVar14 * 0x88 + 0xd8;
    puVar13 = (uint *)(lVar16 + 8);
    do {
      if (puVar13[-1] != 0) {
        lVar12 = lVar12 + (ulong)*puVar13 * 0x18;
      }
      uVar15 = uVar15 - 1;
      puVar13 = puVar13 + 0xe;
    } while (uVar15 != 0);
  }
  lVar12 = lVar12 + 0x40;
LAB_008c2b78:
  uVar14 = *(uint *)(param_1 + 0xa8);
  if (*(ushort *)(param_1 + 0xac) != 0) {
    lVar12 = lVar12 + (ulong)*(ushort *)(param_1 + 0xac) * 0x40 + 0x10;
  }
  lVar12 = lVar12 + (ulong)uVar14 * 0x30;
  if (uVar14 != 0) {
    lVar16 = *(long *)(param_1 + 0xb0);
    uVar15 = 0;
    do {
      uVar2 = *(ushort *)(lVar16 + uVar15 * 0xa0);
      lVar12 = lVar12 + (ulong)uVar2 * 8;
      if (uVar2 == 0) goto LAB_008c2bc8;
      lVar19 = *(long *)(lVar16 + uVar15 * 0xa0 + 8);
      if (uVar2 == 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar20 = *(undefined1 **)(lVar19 + uVar4 * 8);
          switch(*puVar20) {
          case 0:
            lVar12 = lVar12 + (ulong)*(uint *)(puVar20 + 0x18) * 0x18 + 0x38;
            break;
          case 1:
            lVar12 = lVar12 + 0x38;
          case 2:
          case 3:
            lVar12 = lVar12 + 0x40;
          }
          puVar20 = *(undefined1 **)(lVar19 + uVar4 * 8 + 8);
          switch(*puVar20) {
          case 0:
            lVar12 = lVar12 + (ulong)*(uint *)(puVar20 + 0x18) * 0x18 + 0x38;
            break;
          case 1:
            lVar12 = lVar12 + 0x38;
          case 2:
          case 3:
            lVar12 = lVar12 + 0x40;
          }
          uVar4 = uVar4 + 2;
        } while (((ulong)uVar2 & 0xfffe) != uVar4);
      }
      uVar18 = (uint)uVar2;
      if ((uVar2 & 1) != 0) {
        puVar20 = *(undefined1 **)(lVar19 + uVar4 * 8);
        switch(*puVar20) {
        case 0:
          lVar12 = lVar12 + (ulong)*(uint *)(puVar20 + 0x18) * 0x18 + 0x38;
          if (uVar18 != 0) goto LAB_008c2ce4;
          goto LAB_008c2bc8;
        case 1:
          lVar12 = lVar12 + 0x38;
        case 2:
          lVar12 = lVar12 + 0x40;
          break;
        case 3:
          lVar12 = lVar12 + 0x40;
          if (uVar2 == 0) goto LAB_008c2bc8;
          goto LAB_008c2ce4;
        default:
          break;
        }
      }
      if (uVar18 == 0) {
LAB_008c2bc8:
        uVar4 = (ulong)*(ushort *)(lVar16 + uVar15 * 0xa0 + 0x10);
      }
      else {
LAB_008c2ce4:
        lVar19 = lVar16 + uVar15 * 0xa0;
        uVar1 = *(ushort *)(lVar19 + 0x10);
        uVar4 = (ulong)uVar1;
        uVar5 = 0;
        uVar6 = 0;
        if (uVar2 < 2) {
          uVar18 = 1;
        }
        do {
          uVar2 = *(ushort *)(*(long *)(*(long *)(lVar19 + 8) + uVar5 * 8) + 2);
          uVar7 = (ulong)uVar2;
          if ((uint)uVar2 < (uint)uVar1) {
            uVar3 = (uint)uVar1 - (uint)uVar2;
            uVar9 = ~uVar7;
            uVar11 = (ulong)uVar3 & 3;
            if ((uVar3 & 3) != 0) {
              do {
                lVar10 = uVar7 * 8;
                uVar7 = uVar7 + 1;
                if (**(byte **)(*(long *)(lVar19 + 0x18) + lVar10) < 2) {
                  uVar6 = uVar6 + 1;
                }
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            if (2 < uVar9 + uVar4) {
              lVar10 = uVar4 - uVar7;
              puVar8 = (undefined8 *)(*(long *)(lVar19 + 0x18) + 0x10 + uVar7 * 8);
              do {
                if (*(byte *)puVar8[-2] < 2) {
                  uVar6 = uVar6 + 1;
                }
                if (*(byte *)puVar8[-1] < 2) {
                  uVar6 = uVar6 + 1;
                }
                if (*(byte *)*puVar8 < 2) {
                  uVar6 = uVar6 + 1;
                }
                if (*(byte *)puVar8[1] < 2) {
                  uVar6 = uVar6 + 1;
                }
                lVar10 = lVar10 + -4;
                puVar8 = puVar8 + 4;
              } while (lVar10 != 0);
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar18);
        if (uVar6 != 0) {
          lVar12 = lVar12 + (ulong)uVar6 * 0x18;
        }
      }
      lVar19 = 0;
      if ((int)uVar4 != 0) {
        lVar19 = uVar4 << 3;
      }
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + uVar4 * 0x10 + lVar19;
    } while (uVar15 != uVar14);
  }
  return lVar12;
}


