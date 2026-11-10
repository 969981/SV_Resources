/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c6ba8; name: FUN_008c6ba8
 */


long FUN_008c6ba8(undefined8 param_1,long param_2)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    lVar13 = 0;
  }
  else {
    uVar14 = 0;
    lVar13 = 0;
    puVar11 = (undefined4 *)0x0;
    do {
      puVar12 = *(undefined4 **)(*(long *)(param_2 + 0x18) + uVar14 * 8);
      switch(*puVar12) {
      case 0:
        if ((puVar11 == (undefined4 *)0x0) || ((*(byte *)((long)puVar12 + 0x91) >> 1 & 1) == 0)) {
          lVar13 = lVar13 + 0xe0;
          piVar3 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
        }
        else {
          uVar2 = *(ushort *)
                   (*(long *)(puVar11 + 0x28) + (ulong)*(ushort *)((long)puVar12 + 0x92) * 0x10);
          uVar5 = (ulong)uVar2;
          if (uVar5 == 0) {
LAB_008c6ea8:
            lVar4 = 0;
          }
          else {
            uVar6 = uVar5 & 3;
            lVar7 = *(long *)(*(long *)(puVar11 + 0x28) +
                              (ulong)*(ushort *)((long)puVar12 + 0x92) * 0x10 + 8);
            if (uVar5 - 1 < 3) {
              uVar9 = 0;
              uVar8 = 0;
            }
            else {
              uVar9 = 0;
              uVar8 = 0;
              piVar3 = (int *)(lVar7 + 0x74);
              do {
                if (piVar3[-0x1c] != 0) {
                  uVar8 = uVar8 + 1;
                }
                iVar15 = *piVar3;
                if (piVar3[-0xe] != 0) {
                  uVar8 = uVar8 + 1;
                }
                piVar1 = piVar3 + 0xe;
                piVar3 = piVar3 + 0x38;
                if (iVar15 != 0) {
                  uVar8 = uVar8 + 1;
                }
                uVar9 = uVar9 + 4;
                if (*piVar1 != 0) {
                  uVar8 = uVar8 + 1;
                }
              } while ((uVar5 & 0xfffc) != uVar9);
            }
            if ((uVar2 & 3) != 0) {
              piVar3 = (int *)(lVar7 + uVar9 * 0x38 + 4);
              do {
                if (*piVar3 != 0) {
                  uVar8 = uVar8 + 1;
                }
                uVar6 = uVar6 - 1;
                piVar3 = piVar3 + 0xe;
              } while (uVar6 != 0);
            }
            if (uVar8 == 0) goto LAB_008c6ea8;
            lVar4 = (ulong)uVar8 * 0x88 + 0xd8;
            if (uVar2 == 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              puVar10 = (uint *)(lVar7 + 0x40);
              do {
                if (puVar10[-0xf] != 0) {
                  lVar4 = lVar4 + (ulong)puVar10[-0xe] * 0x18;
                }
                if (puVar10[-1] != 0) {
                  lVar4 = lVar4 + (ulong)*puVar10 * 0x18;
                }
                uVar6 = uVar6 + 2;
                puVar10 = puVar10 + 0x1c;
              } while ((uVar5 & 0xfffe) != uVar6);
            }
            if (((uVar2 & 1) != 0) && (*(int *)(lVar7 + uVar6 * 0x38 + 4) != 0)) {
              lVar4 = lVar4 + (ulong)*(uint *)(lVar7 + uVar6 * 0x38 + 8) * 0x18;
            }
          }
          lVar13 = lVar13 + lVar4 + 0xe0;
          piVar3 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
        }
        if (piVar3 != (int *)0x0) {
          iVar15 = 0;
          do {
            if (*piVar3 == 0x50434756) {
              if (iVar15 == puVar12[0x26]) {
                lVar7 = FUN_008c6ba8(param_1);
                lVar13 = lVar7 + lVar13;
                break;
              }
              iVar15 = iVar15 + 1;
            }
            piVar3 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
          } while (piVar3 != (int *)0x0);
        }
        break;
      case 1:
      case 2:
      case 3:
      case 5:
        if ((puVar11 == (undefined4 *)0x0) || ((*(byte *)((long)puVar12 + 0x91) >> 1 & 1) == 0)) {
          lVar7 = 0x40;
        }
        else {
          uVar2 = *(ushort *)
                   (*(long *)(puVar11 + 0x28) + (ulong)*(ushort *)((long)puVar12 + 0x92) * 0x10);
          uVar5 = (ulong)uVar2;
          if (uVar5 == 0) {
LAB_008c6d74:
            lVar7 = 0;
          }
          else {
            uVar6 = uVar5 & 3;
            lVar4 = *(long *)(*(long *)(puVar11 + 0x28) +
                              (ulong)*(ushort *)((long)puVar12 + 0x92) * 0x10 + 8);
            if (uVar5 - 1 < 3) {
              uVar9 = 0;
              uVar8 = 0;
            }
            else {
              uVar9 = 0;
              uVar8 = 0;
              piVar3 = (int *)(lVar4 + 0x74);
              do {
                if (piVar3[-0x1c] != 0) {
                  uVar8 = uVar8 + 1;
                }
                iVar15 = *piVar3;
                if (piVar3[-0xe] != 0) {
                  uVar8 = uVar8 + 1;
                }
                piVar1 = piVar3 + 0xe;
                piVar3 = piVar3 + 0x38;
                if (iVar15 != 0) {
                  uVar8 = uVar8 + 1;
                }
                uVar9 = uVar9 + 4;
                if (*piVar1 != 0) {
                  uVar8 = uVar8 + 1;
                }
              } while ((uVar5 & 0xfffc) != uVar9);
            }
            if ((uVar2 & 3) != 0) {
              piVar3 = (int *)(lVar4 + uVar9 * 0x38 + 4);
              do {
                if (*piVar3 != 0) {
                  uVar8 = uVar8 + 1;
                }
                uVar6 = uVar6 - 1;
                piVar3 = piVar3 + 0xe;
              } while (uVar6 != 0);
            }
            if (uVar8 == 0) goto LAB_008c6d74;
            lVar7 = (ulong)uVar8 * 0x88 + 0xd8;
            if (uVar2 == 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              puVar10 = (uint *)(lVar4 + 0x40);
              do {
                if (puVar10[-0xf] != 0) {
                  lVar7 = lVar7 + (ulong)puVar10[-0xe] * 0x18;
                }
                if (puVar10[-1] != 0) {
                  lVar7 = lVar7 + (ulong)*puVar10 * 0x18;
                }
                uVar6 = uVar6 + 2;
                puVar10 = puVar10 + 0x1c;
              } while ((uVar5 & 0xfffe) != uVar6);
            }
            if (((uVar2 & 1) != 0) && (*(int *)(lVar4 + uVar6 * 0x38 + 4) != 0)) {
              lVar7 = lVar7 + (ulong)*(uint *)(lVar4 + uVar6 * 0x38 + 8) * 0x18;
            }
          }
          lVar7 = lVar7 + 0x40;
        }
        lVar13 = lVar13 + 0xa0 + lVar7;
        break;
      case 4:
        lVar7 = FUN_008c2aa0(puVar12,puVar11);
        lVar13 = lVar13 + lVar7 + 0x100;
        break;
      case 6:
        puVar11 = puVar12;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_2 + 0x10));
  }
  return lVar13;
}


