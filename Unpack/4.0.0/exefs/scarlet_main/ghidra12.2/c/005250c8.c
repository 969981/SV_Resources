/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005250c8; name: FUN_005250c8
 */


ulong * FUN_005250c8(ulong *param_1,uint param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined8 uVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  byte *pbVar24;
  ulong *puVar25;
  byte *pbVar26;
  ulong *puVar27;
  long *plVar28;
  long lVar29;
  size_t sVar30;
  
  if (*(byte *)((long)param_1 + 9) != 0) {
    if (*(byte *)((long)param_1 + 0xb) == 0) {
      switch((byte)param_1[1]) {
      case 1:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3 | 1;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = (byte)uVar11;
            *(undefined8 *)((long)param_3 + 1) = uVar15;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 9);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)(param_2 << 3) | 0x81;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            *(undefined8 *)((long)param_3 + 2) = uVar15;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 10);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
          *(byte *)param_3 = bVar8;
          param_3 = (ulong *)((long)param_3 + 10);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            puVar25 = param_3;
            uVar10 = uVar11 >> 7;
            *(byte *)((long)puVar25 + -9) = (byte)uVar11 | 0x80;
            param_3 = (ulong *)((long)puVar25 + 1);
            uVar21 = uVar11 >> 0xe;
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)(puVar25 + -1) = (byte)uVar10;
          lVar29 = lVar29 + 1;
          *(undefined8 *)((long)puVar25 + -7) = uVar15;
          piVar16 = (int *)*param_1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 2:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3 | 5;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = (byte)uVar11;
            *(undefined4 *)((long)param_3 + 1) = uVar2;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 5);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)(param_2 << 3) | 0x85;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            *(undefined4 *)((long)param_3 + 2) = uVar2;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 6);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
          *(byte *)param_3 = bVar8;
          param_3 = (ulong *)((long)param_3 + 6);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            puVar25 = param_3;
            uVar10 = uVar11 >> 7;
            *(byte *)((long)puVar25 + -5) = (byte)uVar11 | 0x80;
            param_3 = (ulong *)((long)puVar25 + 1);
            uVar21 = uVar11 >> 0xe;
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)((long)puVar25 + -4) = (byte)uVar10;
          lVar29 = lVar29 + 1;
          *(undefined4 *)((long)puVar25 + -3) = uVar2;
          piVar16 = (int *)*param_1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 3:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 * 8;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar18 = *(ulong *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = (byte)uVar11;
            if (uVar18 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar18;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar18 | 0x80;
              if (uVar18 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar18 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar18 = uVar18 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar25 = param_3;
                  uVar20 = uVar18 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar22 = uVar18 >> 0xe;
                  uVar18 = uVar20;
                } while (uVar22 != 0);
                *(byte *)puVar25 = (byte)uVar20;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)uVar11 | 0x80;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar18 = *(ulong *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (uVar18 < 0x80) {
              *(byte *)((long)param_3 + 2) = (byte)uVar18;
              param_3 = (ulong *)((long)param_3 + 3);
            }
            else {
              *(byte *)((long)param_3 + 2) = (byte)uVar18 | 0x80;
              if (uVar18 < 0x4000) {
                *(byte *)((long)param_3 + 3) = (byte)(uVar18 >> 7);
                param_3 = (ulong *)((long)param_3 + 4);
              }
              else {
                uVar18 = uVar18 >> 7;
                param_3 = (ulong *)((long)param_3 + 4);
                do {
                  puVar25 = param_3;
                  uVar20 = uVar18 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar22 = uVar18 >> 0xe;
                  uVar18 = uVar20;
                } while (uVar22 != 0);
                *(byte *)puVar25 = (byte)uVar20;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar18 = *(ulong *)(*(long *)(piVar16 + 2) + lVar29 * 8);
          *(byte *)param_3 = bVar8;
          puVar25 = (ulong *)((long)param_3 + 5);
          puVar27 = (ulong *)((long)param_3 + 4);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            param_3 = puVar27;
            puVar23 = puVar25;
            *(byte *)((long)param_3 + -3) = (byte)uVar11 | 0x80;
            uVar10 = uVar11 >> 7;
            uVar21 = uVar11 >> 0xe;
            puVar25 = (ulong *)((long)puVar23 + 1);
            puVar27 = (ulong *)((long)param_3 + 1);
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)((long)param_3 + -2) = (byte)uVar10;
          if (uVar18 < 0x80) {
            *(byte *)((long)param_3 + -1) = (byte)uVar18;
          }
          else {
            *(byte *)((long)param_3 + -1) = (byte)uVar18 | 0x80;
            uVar20 = uVar18 >> 7;
            if (uVar18 >> 0xe == 0) {
              *(byte *)param_3 = (byte)(uVar18 >> 7);
              param_3 = (ulong *)((long)param_3 + 1);
            }
            else {
              do {
                puVar25 = puVar23;
                uVar18 = uVar20 >> 7;
                *(byte *)((long)puVar25 + -1) = (byte)uVar20 | 0x80;
                param_3 = (ulong *)((long)puVar25 + 1);
                uVar22 = uVar20 >> 0xe;
                puVar23 = param_3;
                uVar20 = uVar18;
              } while (uVar22 != 0);
              *(byte *)puVar25 = (byte)uVar18;
            }
          }
          piVar16 = (int *)*param_1;
          lVar29 = lVar29 + 1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 4:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 * 8;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar18 = *(ulong *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = (byte)uVar11;
            if (uVar18 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar18;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar18 | 0x80;
              if (uVar18 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar18 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar18 = uVar18 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar25 = param_3;
                  uVar20 = uVar18 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar22 = uVar18 >> 0xe;
                  uVar18 = uVar20;
                } while (uVar22 != 0);
                *(byte *)puVar25 = (byte)uVar20;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)uVar11 | 0x80;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar18 = *(ulong *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (uVar18 < 0x80) {
              *(byte *)((long)param_3 + 2) = (byte)uVar18;
              param_3 = (ulong *)((long)param_3 + 3);
            }
            else {
              *(byte *)((long)param_3 + 2) = (byte)uVar18 | 0x80;
              if (uVar18 < 0x4000) {
                *(byte *)((long)param_3 + 3) = (byte)(uVar18 >> 7);
                param_3 = (ulong *)((long)param_3 + 4);
              }
              else {
                uVar18 = uVar18 >> 7;
                param_3 = (ulong *)((long)param_3 + 4);
                do {
                  puVar25 = param_3;
                  uVar20 = uVar18 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar22 = uVar18 >> 0xe;
                  uVar18 = uVar20;
                } while (uVar22 != 0);
                *(byte *)puVar25 = (byte)uVar20;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar18 = *(ulong *)(*(long *)(piVar16 + 2) + lVar29 * 8);
          *(byte *)param_3 = bVar8;
          puVar25 = (ulong *)((long)param_3 + 5);
          puVar27 = (ulong *)((long)param_3 + 4);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            param_3 = puVar27;
            puVar23 = puVar25;
            *(byte *)((long)param_3 + -3) = (byte)uVar11 | 0x80;
            uVar10 = uVar11 >> 7;
            uVar21 = uVar11 >> 0xe;
            puVar25 = (ulong *)((long)puVar23 + 1);
            puVar27 = (ulong *)((long)param_3 + 1);
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)((long)param_3 + -2) = (byte)uVar10;
          if (uVar18 < 0x80) {
            *(byte *)((long)param_3 + -1) = (byte)uVar18;
          }
          else {
            *(byte *)((long)param_3 + -1) = (byte)uVar18 | 0x80;
            uVar20 = uVar18 >> 7;
            if (uVar18 >> 0xe == 0) {
              *(byte *)param_3 = (byte)(uVar18 >> 7);
              param_3 = (ulong *)((long)param_3 + 1);
            }
            else {
              do {
                puVar25 = puVar23;
                uVar18 = uVar20 >> 7;
                *(byte *)((long)puVar25 + -1) = (byte)uVar20 | 0x80;
                param_3 = (ulong *)((long)puVar25 + 1);
                uVar22 = uVar20 >> 0xe;
                puVar23 = param_3;
                uVar20 = uVar18;
              } while (uVar22 != 0);
              *(byte *)puVar25 = (byte)uVar18;
            }
          }
          piVar16 = (int *)*param_1;
          lVar29 = lVar29 + 1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 5:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 * 8;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar10 = *(uint *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = (byte)uVar11;
            if (uVar10 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar10;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar10 | 0x80;
              if (uVar10 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)((ulong)(long)(int)uVar10 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar18 = (ulong)(long)(int)uVar10 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar25 = param_3;
                  uVar20 = uVar18 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar22 = uVar18 >> 0xe;
                  uVar18 = uVar20;
                } while (uVar22 != 0);
                *(byte *)puVar25 = (byte)uVar20;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)uVar11 | 0x80;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar11 = *(uint *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (uVar11 < 0x80) {
              *(byte *)((long)param_3 + 2) = (byte)uVar11;
              param_3 = (ulong *)((long)param_3 + 3);
            }
            else {
              *(byte *)((long)param_3 + 2) = (byte)uVar11 | 0x80;
              if (uVar11 < 0x4000) {
                *(byte *)((long)param_3 + 3) = (byte)((ulong)(long)(int)uVar11 >> 7);
                param_3 = (ulong *)((long)param_3 + 4);
              }
              else {
                uVar18 = (ulong)(long)(int)uVar11 >> 7;
                param_3 = (ulong *)((long)param_3 + 4);
                do {
                  puVar25 = param_3;
                  uVar20 = uVar18 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar22 = uVar18 >> 0xe;
                  uVar18 = uVar20;
                } while (uVar22 != 0);
                *(byte *)puVar25 = (byte)uVar20;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar11 = *(uint *)(*(long *)(piVar16 + 2) + lVar29 * 4);
          *(byte *)param_3 = bVar8;
          puVar25 = (ulong *)((long)param_3 + 5);
          puVar27 = (ulong *)((long)param_3 + 4);
          uVar10 = param_2 >> 4 & 0x1ffffff;
          do {
            param_3 = puVar27;
            puVar23 = puVar25;
            *(byte *)((long)param_3 + -3) = (byte)uVar10 | 0x80;
            uVar21 = uVar10 >> 7;
            uVar14 = uVar10 >> 0xe;
            puVar25 = (ulong *)((long)puVar23 + 1);
            puVar27 = (ulong *)((long)param_3 + 1);
            uVar10 = uVar21;
          } while (uVar14 != 0);
          *(byte *)((long)param_3 + -2) = (byte)uVar21;
          if (uVar11 < 0x80) {
            *(byte *)((long)param_3 + -1) = (byte)uVar11;
          }
          else {
            *(byte *)((long)param_3 + -1) = (byte)uVar11 | 0x80;
            uVar18 = (ulong)(long)(int)uVar11 >> 7;
            if (((ulong)(long)(int)uVar11 >> 0xe & 0x3ffff) == 0) {
              *(byte *)param_3 = (byte)uVar18;
              param_3 = (ulong *)((long)param_3 + 1);
            }
            else {
              do {
                puVar25 = puVar23;
                uVar20 = uVar18 >> 7;
                *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                param_3 = (ulong *)((long)puVar25 + 1);
                uVar22 = uVar18 >> 0xe;
                puVar23 = param_3;
                uVar18 = uVar20;
              } while (uVar22 != 0);
              *(byte *)puVar25 = (byte)uVar20;
            }
          }
          piVar16 = (int *)*param_1;
          lVar29 = lVar29 + 1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 6:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3 | 1;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = (byte)uVar11;
            *(undefined8 *)((long)param_3 + 1) = uVar15;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 9);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)(param_2 << 3) | 0x81;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            *(undefined8 *)((long)param_3 + 2) = uVar15;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 10);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
          *(byte *)param_3 = bVar8;
          param_3 = (ulong *)((long)param_3 + 10);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            puVar25 = param_3;
            uVar10 = uVar11 >> 7;
            *(byte *)((long)puVar25 + -9) = (byte)uVar11 | 0x80;
            param_3 = (ulong *)((long)puVar25 + 1);
            uVar21 = uVar11 >> 0xe;
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)(puVar25 + -1) = (byte)uVar10;
          lVar29 = lVar29 + 1;
          *(undefined8 *)((long)puVar25 + -7) = uVar15;
          piVar16 = (int *)*param_1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 7:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3 | 5;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = (byte)uVar11;
            *(undefined4 *)((long)param_3 + 1) = uVar2;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 5);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)(param_2 << 3) | 0x85;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            *(undefined4 *)((long)param_3 + 2) = uVar2;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 6);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
          *(byte *)param_3 = bVar8;
          param_3 = (ulong *)((long)param_3 + 6);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            puVar25 = param_3;
            uVar10 = uVar11 >> 7;
            *(byte *)((long)puVar25 + -5) = (byte)uVar11 | 0x80;
            param_3 = (ulong *)((long)puVar25 + 1);
            uVar21 = uVar11 >> 0xe;
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)((long)puVar25 + -4) = (byte)uVar10;
          lVar29 = lVar29 + 1;
          *(undefined4 *)((long)puVar25 + -3) = uVar2;
          piVar16 = (int *)*param_1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 8:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 * 8;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            bVar8 = *(byte *)(*(long *)(piVar16 + 2) + lVar29);
            *(byte *)param_3 = (byte)uVar11;
            *(byte *)((long)param_3 + 1) = bVar8;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 2);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)uVar11 | 0x80;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            bVar4 = *(byte *)(*(long *)(piVar16 + 2) + lVar29);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            *(byte *)((long)param_3 + 2) = bVar4;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 3);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          bVar4 = *(byte *)(*(long *)(piVar16 + 2) + lVar29);
          *(byte *)param_3 = bVar8;
          param_3 = (ulong *)((long)param_3 + 3);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            puVar25 = param_3;
            uVar10 = uVar11 >> 7;
            *(byte *)((long)puVar25 + -2) = (byte)uVar11 | 0x80;
            param_3 = (ulong *)((long)puVar25 + 1);
            uVar21 = uVar11 >> 0xe;
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)((long)puVar25 + -1) = (byte)uVar10;
          lVar29 = lVar29 + 1;
          *(byte *)puVar25 = bVar4;
          piVar16 = (int *)*param_1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 9:
        goto switchD_005251f8_caseD_9;
      case 10:
        uVar18 = *param_1;
        if (*(int *)(uVar18 + 8) < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3 | 3;
        uVar10 = param_2 << 3 | 4;
        uVar21 = param_2 >> 4 & 0x1ffffff;
        bVar4 = (byte)(param_2 << 3);
        bVar8 = bVar4 | 0x84;
        if (0x7f < uVar11) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              uVar18 = *param_1;
            }
            plVar28 = *(long **)(*(long *)(uVar18 + 0x10) + lVar29 * 8 + 8);
            *(byte *)param_3 = bVar4 | 0x83;
            bVar7 = (byte)(param_2 >> 4);
            if (uVar11 < 0x4000) {
              *(byte *)((long)param_3 + 1) = bVar7;
            }
            else {
              uVar14 = uVar21;
              do {
                puVar25 = param_3;
                uVar6 = uVar14 >> 7;
                uVar5 = uVar14 >> 0xe;
                param_3 = (ulong *)((long)puVar25 + 1);
                *(byte *)param_3 = (byte)uVar14 | 0x80;
                uVar14 = uVar6;
              } while (uVar5 != 0);
              *(byte *)((long)puVar25 + 2) = (byte)uVar6;
            }
            pbVar24 = (byte *)(**(code **)(*plVar28 + 0x60))
                                        (plVar28,(byte *)((long)param_3 + 2),param_4);
            if (pbVar24 < (byte *)*param_4) {
              if (uVar10 < 0x80) goto LAB_00526838;
LAB_005268c8:
              *pbVar24 = bVar8;
              if (uVar10 < 0x4000) {
                pbVar24[1] = bVar7;
                param_3 = (ulong *)(pbVar24 + 2);
              }
              else {
                param_3 = (ulong *)(pbVar24 + 2);
                uVar14 = uVar21;
                do {
                  puVar25 = param_3;
                  uVar6 = uVar14 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar14 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar5 = uVar14 >> 0xe;
                  uVar14 = uVar6;
                } while (uVar5 != 0);
                *(byte *)puVar25 = (byte)uVar6;
              }
            }
            else {
              pbVar24 = (byte *)FUN_0052c6d8(param_4,pbVar24);
              if (0x7f < uVar10) goto LAB_005268c8;
LAB_00526838:
              param_3 = (ulong *)(pbVar24 + 1);
              *pbVar24 = (byte)uVar10;
            }
            uVar18 = *param_1;
            lVar29 = lVar29 + 1;
            if (*(int *)(uVar18 + 8) <= lVar29) {
              return param_3;
            }
          } while( true );
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            uVar18 = *param_1;
          }
          plVar28 = *(long **)(*(long *)(uVar18 + 0x10) + lVar29 * 8 + 8);
          *(byte *)param_3 = (byte)uVar11;
          pbVar24 = (byte *)(**(code **)(*plVar28 + 0x60))
                                      (plVar28,(byte *)((long)param_3 + 1),param_4);
          if (pbVar24 < (byte *)*param_4) {
            if (uVar10 < 0x80) goto LAB_005257fc;
LAB_0052585c:
            *pbVar24 = bVar8;
            if (uVar10 < 0x4000) {
              pbVar24[1] = (byte)(param_2 >> 4);
              param_3 = (ulong *)(pbVar24 + 2);
            }
            else {
              param_3 = (ulong *)(pbVar24 + 2);
              uVar14 = uVar21;
              do {
                puVar25 = param_3;
                uVar6 = uVar14 >> 7;
                *(byte *)((long)puVar25 + -1) = (byte)uVar14 | 0x80;
                param_3 = (ulong *)((long)puVar25 + 1);
                uVar5 = uVar14 >> 0xe;
                uVar14 = uVar6;
              } while (uVar5 != 0);
              *(byte *)puVar25 = (byte)uVar6;
            }
          }
          else {
            pbVar24 = (byte *)FUN_0052c6d8(param_4,pbVar24);
            if (0x7f < uVar10) goto LAB_0052585c;
LAB_005257fc:
            param_3 = (ulong *)(pbVar24 + 1);
            *pbVar24 = (byte)uVar10;
          }
          uVar18 = *param_1;
          lVar29 = lVar29 + 1;
          if (*(int *)(uVar18 + 8) <= lVar29) {
            return param_3;
          }
        } while( true );
      case 0xb:
        uVar18 = *param_1;
        if (*(int *)(uVar18 + 8) < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3 | 2;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              uVar18 = *param_1;
            }
            plVar28 = *(long **)(*(long *)(uVar18 + 0x10) + lVar29 * 8 + 8);
            *(byte *)param_3 = (byte)uVar11;
            uVar10 = (**(code **)(*plVar28 + 0x50))(plVar28);
            if (uVar10 < 0x80) {
              pbVar24 = (byte *)((long)param_3 + 2);
              *(byte *)((long)param_3 + 1) = (byte)uVar10;
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar10 | 0x80;
              if (uVar10 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar10 >> 7);
                pbVar24 = (byte *)((long)param_3 + 3);
              }
              else {
                pbVar24 = (byte *)((long)param_3 + 3);
                uVar10 = uVar10 >> 7;
                do {
                  pbVar26 = pbVar24;
                  uVar21 = uVar10 >> 7;
                  pbVar26[-1] = (byte)uVar10 | 0x80;
                  pbVar24 = pbVar26 + 1;
                  uVar14 = uVar10 >> 0xe;
                  uVar10 = uVar21;
                } while (uVar14 != 0);
                *pbVar26 = (byte)uVar21;
              }
            }
            param_3 = (ulong *)(**(code **)(*plVar28 + 0x60))(plVar28,pbVar24,param_4);
            uVar18 = *param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *(int *)(uVar18 + 8));
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            uVar18 = *param_1;
          }
          plVar28 = *(long **)(*(long *)(uVar18 + 0x10) + lVar29 * 8 + 8);
          *(byte *)param_3 = (byte)(param_2 << 3) | 0x82;
          if (uVar11 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          }
          else {
            uVar10 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar25 = param_3;
              uVar21 = uVar10 >> 7;
              uVar14 = uVar10 >> 0xe;
              param_3 = (ulong *)((long)puVar25 + 1);
              *(byte *)param_3 = (byte)uVar10 | 0x80;
              uVar10 = uVar21;
            } while (uVar14 != 0);
            *(byte *)((long)puVar25 + 2) = (byte)uVar21;
          }
          uVar10 = (**(code **)(*plVar28 + 0x50))(plVar28);
          if (uVar10 < 0x80) {
            *(byte *)((long)param_3 + 2) = (byte)uVar10;
            puVar12 = (uint *)((long)param_3 + 3);
          }
          else {
            *(byte *)((long)param_3 + 2) = (byte)uVar10 | 0x80;
            if (uVar10 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar10 >> 7);
              puVar12 = (uint *)((long)param_3 + 4);
            }
            else {
              puVar12 = (uint *)((long)param_3 + 4);
              uVar10 = uVar10 >> 7;
              do {
                puVar13 = puVar12;
                uVar21 = uVar10 >> 7;
                *(byte *)((long)puVar13 + -1) = (byte)uVar10 | 0x80;
                puVar12 = (uint *)((long)puVar13 + 1);
                uVar14 = uVar10 >> 0xe;
                uVar10 = uVar21;
              } while (uVar14 != 0);
              *(byte *)puVar13 = (byte)uVar21;
            }
          }
          param_3 = (ulong *)(**(code **)(*plVar28 + 0x60))(plVar28,puVar12,param_4);
          uVar18 = *param_1;
          lVar29 = lVar29 + 1;
        } while (lVar29 < *(int *)(uVar18 + 8));
        return param_3;
      case 0xc:
        uVar18 = *param_1;
        if (*(int *)(uVar18 + 8) < 1) {
          return param_3;
        }
        uVar10 = param_2 * 8;
        uVar11 = param_2 << 3 | 2;
        bVar8 = (byte)uVar10 | 0x82;
        uVar21 = param_2 >> 4 & 0x1ffffff;
        if (0x7f < uVar10) {
          lVar29 = 4;
          if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
            lVar29 = 5;
          }
          lVar17 = 3;
          if (0x1fffff < uVar10) {
            lVar17 = lVar29;
          }
          lVar29 = 0;
          lVar1 = 2;
          if (0x3fff < uVar10) {
            lVar1 = lVar17;
          }
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              uVar18 = *param_1;
            }
            pbVar24 = *(byte **)(*(long *)(uVar18 + 0x10) + lVar29 * 8 + 8);
            if ((*pbVar24 & 1) == 0) {
              sVar30 = (size_t)(*pbVar24 >> 1);
LAB_00526ab4:
              if ((long)(*param_4 + ~(ulong)(lVar1 + (long)param_3) + 0x10) < (long)sVar30)
              goto LAB_00526b5c;
              if (uVar11 < 0x80) {
                pbVar26 = (byte *)((long)param_3 + 1);
                *(byte *)param_3 = (byte)uVar11;
              }
              else {
                *(byte *)param_3 = bVar8;
                if (uVar11 < 0x4000) {
                  *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
                  pbVar26 = (byte *)((long)param_3 + 2);
                }
                else {
                  pbVar26 = (byte *)((long)param_3 + 2);
                  uVar10 = uVar21;
                  do {
                    pbVar19 = pbVar26;
                    uVar14 = uVar10 >> 7;
                    pbVar19[-1] = (byte)uVar10 | 0x80;
                    pbVar26 = pbVar19 + 1;
                    uVar6 = uVar10 >> 0xe;
                    uVar10 = uVar14;
                  } while (uVar6 != 0);
                  *pbVar19 = (byte)uVar14;
                }
              }
              *pbVar26 = (byte)sVar30;
              pbVar19 = *(byte **)(pbVar24 + 0x10);
              if ((*pbVar24 & 1) == 0) {
                pbVar19 = pbVar24 + 1;
              }
              memcpy(pbVar26 + 1,pbVar19,sVar30);
              param_3 = (ulong *)(pbVar26 + 1 + sVar30);
            }
            else {
              sVar30 = *(size_t *)(pbVar24 + 8);
              if ((long)sVar30 < 0x80) goto LAB_00526ab4;
LAB_00526b5c:
              param_3 = (ulong *)FUN_0052cbdc(param_4,param_2,pbVar24,param_3);
            }
            uVar18 = *param_1;
            lVar29 = lVar29 + 1;
            if (*(int *)(uVar18 + 8) <= lVar29) {
              return param_3;
            }
          } while( true );
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            uVar18 = *param_1;
          }
          pbVar24 = *(byte **)(*(long *)(uVar18 + 0x10) + lVar29 * 8 + 8);
          if ((*pbVar24 & 1) == 0) {
            sVar30 = (size_t)(*pbVar24 >> 1);
LAB_00525a30:
            if ((*param_4 - (long)param_3) + 0xe < (long)sVar30) goto LAB_00525ad0;
            if (uVar11 < 0x80) {
              pbVar26 = (byte *)((long)param_3 + 1);
              *(byte *)param_3 = (byte)uVar11;
            }
            else {
              *(byte *)param_3 = bVar8;
              if (uVar11 < 0x4000) {
                *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
                pbVar26 = (byte *)((long)param_3 + 2);
              }
              else {
                pbVar26 = (byte *)((long)param_3 + 2);
                uVar10 = uVar21;
                do {
                  pbVar19 = pbVar26;
                  uVar14 = uVar10 >> 7;
                  pbVar19[-1] = (byte)uVar10 | 0x80;
                  pbVar26 = pbVar19 + 1;
                  uVar6 = uVar10 >> 0xe;
                  uVar10 = uVar14;
                } while (uVar6 != 0);
                *pbVar19 = (byte)uVar14;
              }
            }
            *pbVar26 = (byte)sVar30;
            pbVar19 = *(byte **)(pbVar24 + 0x10);
            if ((*pbVar24 & 1) == 0) {
              pbVar19 = pbVar24 + 1;
            }
            memcpy(pbVar26 + 1,pbVar19,sVar30);
            param_3 = (ulong *)(pbVar26 + 1 + sVar30);
          }
          else {
            sVar30 = *(size_t *)(pbVar24 + 8);
            if ((long)sVar30 < 0x80) goto LAB_00525a30;
LAB_00525ad0:
            param_3 = (ulong *)FUN_0052cbdc(param_4,param_2,pbVar24,param_3);
          }
          uVar18 = *param_1;
          lVar29 = lVar29 + 1;
          if (*(int *)(uVar18 + 8) <= lVar29) {
            return param_3;
          }
        } while( true );
      case 0xd:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 * 8;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar10 = *(uint *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = (byte)uVar11;
            if (uVar10 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar10;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar10 | 0x80;
              if (uVar10 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar10 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                param_3 = (ulong *)((long)param_3 + 3);
                uVar10 = uVar10 >> 7;
                do {
                  puVar25 = param_3;
                  uVar21 = uVar10 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar10 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar14 = uVar10 >> 0xe;
                  uVar10 = uVar21;
                } while (uVar14 != 0);
                *(byte *)puVar25 = (byte)uVar21;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)uVar11 | 0x80;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar11 = *(uint *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (uVar11 < 0x80) {
              *(byte *)((long)param_3 + 2) = (byte)uVar11;
              param_3 = (ulong *)((long)param_3 + 3);
            }
            else {
              *(byte *)((long)param_3 + 2) = (byte)uVar11 | 0x80;
              if (uVar11 < 0x4000) {
                *(byte *)((long)param_3 + 3) = (byte)(uVar11 >> 7);
                param_3 = (ulong *)((long)param_3 + 4);
              }
              else {
                param_3 = (ulong *)((long)param_3 + 4);
                uVar11 = uVar11 >> 7;
                do {
                  puVar25 = param_3;
                  uVar10 = uVar11 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar11 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar21 = uVar11 >> 0xe;
                  uVar11 = uVar10;
                } while (uVar21 != 0);
                *(byte *)puVar25 = (byte)uVar10;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar11 = *(uint *)(*(long *)(piVar16 + 2) + lVar29 * 4);
          *(byte *)param_3 = bVar8;
          puVar25 = (ulong *)((long)param_3 + 5);
          puVar27 = (ulong *)((long)param_3 + 4);
          uVar10 = param_2 >> 4 & 0x1ffffff;
          do {
            param_3 = puVar27;
            puVar23 = puVar25;
            *(byte *)((long)param_3 + -3) = (byte)uVar10 | 0x80;
            uVar21 = uVar10 >> 7;
            uVar14 = uVar10 >> 0xe;
            puVar25 = (ulong *)((long)puVar23 + 1);
            puVar27 = (ulong *)((long)param_3 + 1);
            uVar10 = uVar21;
          } while (uVar14 != 0);
          *(byte *)((long)param_3 + -2) = (byte)uVar21;
          if (uVar11 < 0x80) {
            *(byte *)((long)param_3 + -1) = (byte)uVar11;
          }
          else {
            *(byte *)((long)param_3 + -1) = (byte)uVar11 | 0x80;
            uVar10 = uVar11 >> 7;
            if (uVar11 >> 0xe == 0) {
              *(byte *)param_3 = (byte)(uVar11 >> 7);
              param_3 = (ulong *)((long)param_3 + 1);
            }
            else {
              do {
                puVar25 = puVar23;
                uVar11 = uVar10 >> 7;
                *(byte *)((long)puVar25 + -1) = (byte)uVar10 | 0x80;
                param_3 = (ulong *)((long)puVar25 + 1);
                uVar21 = uVar10 >> 0xe;
                puVar23 = param_3;
                uVar10 = uVar11;
              } while (uVar21 != 0);
              *(byte *)puVar25 = (byte)uVar11;
            }
          }
          piVar16 = (int *)*param_1;
          lVar29 = lVar29 + 1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 0xe:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar10 = *(uint *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = (byte)uVar11;
            if (uVar10 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar10;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar10 | 0x80;
              if (uVar10 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)((ulong)(long)(int)uVar10 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar18 = (ulong)(long)(int)uVar10 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar25 = param_3;
                  uVar20 = uVar18 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar22 = uVar18 >> 0xe;
                  uVar18 = uVar20;
                } while (uVar22 != 0);
                *(byte *)puVar25 = (byte)uVar20;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar10 = *(uint *)(*(long *)(piVar16 + 2) + lVar29 * 4);
          *(byte *)param_3 = (byte)uVar11 | 0x80;
          if (uVar11 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            if (uVar10 < 0x80) goto LAB_00526c58;
LAB_00526ccc:
            *(byte *)((long)param_3 + 2) = (byte)uVar10 | 0x80;
            uVar18 = (ulong)(long)(int)uVar10 >> 7;
            if (((ulong)(long)(int)uVar10 >> 0xe & 0x3ffff) == 0) {
              *(byte *)((long)param_3 + 3) = (byte)uVar18;
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              param_3 = (ulong *)((long)param_3 + 4);
              do {
                puVar25 = param_3;
                uVar20 = uVar18 >> 7;
                *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                param_3 = (ulong *)((long)puVar25 + 1);
                uVar22 = uVar18 >> 0xe;
                uVar18 = uVar20;
              } while (uVar22 != 0);
              *(byte *)puVar25 = (byte)uVar20;
            }
          }
          else {
            uVar21 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar25 = param_3;
              uVar14 = uVar21 >> 7;
              uVar6 = uVar21 >> 0xe;
              param_3 = (ulong *)((long)puVar25 + 1);
              *(byte *)param_3 = (byte)uVar21 | 0x80;
              uVar21 = uVar14;
            } while (uVar6 != 0);
            *(byte *)((long)puVar25 + 2) = (byte)uVar14;
            if (0x7f < uVar10) goto LAB_00526ccc;
LAB_00526c58:
            *(byte *)((long)param_3 + 2) = (byte)uVar10;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          piVar16 = (int *)*param_1;
          lVar29 = lVar29 + 1;
          if (*piVar16 <= lVar29) {
            return param_3;
          }
        } while( true );
      case 0xf:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3 | 5;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = (byte)uVar11;
            *(undefined4 *)((long)param_3 + 1) = uVar2;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 5);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)(param_2 << 3) | 0x85;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            *(undefined4 *)((long)param_3 + 2) = uVar2;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 6);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar2 = *(undefined4 *)(*(long *)(piVar16 + 2) + lVar29 * 4);
          *(byte *)param_3 = bVar8;
          param_3 = (ulong *)((long)param_3 + 6);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            puVar25 = param_3;
            uVar10 = uVar11 >> 7;
            *(byte *)((long)puVar25 + -5) = (byte)uVar11 | 0x80;
            param_3 = (ulong *)((long)puVar25 + 1);
            uVar21 = uVar11 >> 0xe;
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)((long)puVar25 + -4) = (byte)uVar10;
          lVar29 = lVar29 + 1;
          *(undefined4 *)((long)puVar25 + -3) = uVar2;
          piVar16 = (int *)*param_1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 0x10:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3 | 1;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = (byte)uVar11;
            *(undefined8 *)((long)param_3 + 1) = uVar15;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 9);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        bVar8 = (byte)(param_2 << 3) | 0x81;
        if (uVar11 < 0x4000) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = bVar8;
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            *(undefined8 *)((long)param_3 + 2) = uVar15;
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
            param_3 = (ulong *)((long)param_3 + 10);
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          uVar15 = *(undefined8 *)(*(long *)(piVar16 + 2) + lVar29 * 8);
          *(byte *)param_3 = bVar8;
          param_3 = (ulong *)((long)param_3 + 10);
          uVar11 = param_2 >> 4 & 0x1ffffff;
          do {
            puVar25 = param_3;
            uVar10 = uVar11 >> 7;
            *(byte *)((long)puVar25 + -9) = (byte)uVar11 | 0x80;
            param_3 = (ulong *)((long)puVar25 + 1);
            uVar21 = uVar11 >> 0xe;
            uVar11 = uVar10;
          } while (uVar21 != 0);
          *(byte *)(puVar25 + -1) = (byte)uVar10;
          lVar29 = lVar29 + 1;
          *(undefined8 *)((long)puVar25 + -7) = uVar15;
          piVar16 = (int *)*param_1;
        } while (lVar29 < *piVar16);
        return param_3;
      case 0x11:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            iVar3 = *(int *)(*(long *)(piVar16 + 2) + lVar29 * 4);
            *(byte *)param_3 = (byte)uVar11;
            uVar10 = iVar3 << 1 ^ iVar3 >> 0x1f;
            if (uVar10 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar10;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar10 | 0x80;
              if (uVar10 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar10 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                param_3 = (ulong *)((long)param_3 + 3);
                uVar10 = uVar10 >> 7;
                do {
                  puVar25 = param_3;
                  uVar21 = uVar10 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar10 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar14 = uVar10 >> 0xe;
                  uVar10 = uVar21;
                } while (uVar14 != 0);
                *(byte *)puVar25 = (byte)uVar21;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          iVar3 = *(int *)(*(long *)(piVar16 + 2) + lVar29 * 4);
          *(byte *)param_3 = (byte)uVar11 | 0x80;
          if (uVar11 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            uVar10 = iVar3 << 1 ^ iVar3 >> 0x1f;
            if (uVar10 < 0x80) goto LAB_00526e18;
LAB_00526e9c:
            *(byte *)((long)param_3 + 2) = (byte)uVar10 | 0x80;
            if (uVar10 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar10 >> 7);
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              param_3 = (ulong *)((long)param_3 + 4);
              uVar10 = uVar10 >> 7;
              do {
                puVar25 = param_3;
                uVar21 = uVar10 >> 7;
                *(byte *)((long)puVar25 + -1) = (byte)uVar10 | 0x80;
                param_3 = (ulong *)((long)puVar25 + 1);
                uVar14 = uVar10 >> 0xe;
                uVar10 = uVar21;
              } while (uVar14 != 0);
              *(byte *)puVar25 = (byte)uVar21;
            }
          }
          else {
            uVar10 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar25 = param_3;
              uVar21 = uVar10 >> 7;
              uVar14 = uVar10 >> 0xe;
              param_3 = (ulong *)((long)puVar25 + 1);
              *(byte *)param_3 = (byte)uVar10 | 0x80;
              uVar10 = uVar21;
            } while (uVar14 != 0);
            *(byte *)((long)puVar25 + 2) = (byte)uVar21;
            uVar10 = iVar3 << 1 ^ iVar3 >> 0x1f;
            if (0x7f < uVar10) goto LAB_00526e9c;
LAB_00526e18:
            *(byte *)((long)param_3 + 2) = (byte)uVar10;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          piVar16 = (int *)*param_1;
          lVar29 = lVar29 + 1;
          if (*piVar16 <= lVar29) {
            return param_3;
          }
        } while( true );
      case 0x12:
        piVar16 = (int *)*param_1;
        if (*piVar16 < 1) {
          return param_3;
        }
        uVar11 = param_2 << 3;
        if (uVar11 < 0x80) {
          lVar29 = 0;
          do {
            if ((ulong *)*param_4 <= param_3) {
              param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
              piVar16 = (int *)*param_1;
            }
            lVar17 = *(long *)(*(long *)(piVar16 + 2) + lVar29 * 8);
            *(byte *)param_3 = (byte)uVar11;
            uVar18 = lVar17 << 1 ^ lVar17 >> 0x3f;
            if (uVar18 < 0x80) {
              *(byte *)((long)param_3 + 1) = (byte)uVar18;
              param_3 = (ulong *)((long)param_3 + 2);
            }
            else {
              *(byte *)((long)param_3 + 1) = (byte)uVar18 | 0x80;
              if (uVar18 < 0x4000) {
                *(byte *)((long)param_3 + 2) = (byte)(uVar18 >> 7);
                param_3 = (ulong *)((long)param_3 + 3);
              }
              else {
                uVar18 = uVar18 >> 7;
                param_3 = (ulong *)((long)param_3 + 3);
                do {
                  puVar25 = param_3;
                  uVar20 = uVar18 >> 7;
                  *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                  param_3 = (ulong *)((long)puVar25 + 1);
                  uVar22 = uVar18 >> 0xe;
                  uVar18 = uVar20;
                } while (uVar22 != 0);
                *(byte *)puVar25 = (byte)uVar20;
              }
            }
            piVar16 = (int *)*param_1;
            lVar29 = lVar29 + 1;
          } while (lVar29 < *piVar16);
          return param_3;
        }
        lVar29 = 0;
        do {
          if ((ulong *)*param_4 <= param_3) {
            param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
            piVar16 = (int *)*param_1;
          }
          lVar17 = *(long *)(*(long *)(piVar16 + 2) + lVar29 * 8);
          *(byte *)param_3 = (byte)uVar11 | 0x80;
          if (uVar11 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            uVar18 = lVar17 << 1 ^ lVar17 >> 0x3f;
            if (uVar18 < 0x80) goto LAB_00526f10;
LAB_00526f94:
            *(byte *)((long)param_3 + 2) = (byte)uVar18 | 0x80;
            if (uVar18 >> 0xe == 0) {
              *(byte *)((long)param_3 + 3) = (byte)(uVar18 >> 7);
              param_3 = (ulong *)((long)param_3 + 4);
            }
            else {
              uVar18 = uVar18 >> 7;
              param_3 = (ulong *)((long)param_3 + 4);
              do {
                puVar25 = param_3;
                uVar20 = uVar18 >> 7;
                *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
                param_3 = (ulong *)((long)puVar25 + 1);
                uVar22 = uVar18 >> 0xe;
                uVar18 = uVar20;
              } while (uVar22 != 0);
              *(byte *)puVar25 = (byte)uVar20;
            }
          }
          else {
            uVar10 = param_2 >> 4 & 0x1ffffff;
            do {
              puVar25 = param_3;
              uVar21 = uVar10 >> 7;
              uVar14 = uVar10 >> 0xe;
              param_3 = (ulong *)((long)puVar25 + 1);
              *(byte *)param_3 = (byte)uVar10 | 0x80;
              uVar10 = uVar21;
            } while (uVar14 != 0);
            *(byte *)((long)puVar25 + 2) = (byte)uVar21;
            uVar18 = lVar17 << 1 ^ lVar17 >> 0x3f;
            if (0x7f < uVar18) goto LAB_00526f94;
LAB_00526f10:
            *(byte *)((long)param_3 + 2) = (byte)uVar18;
            param_3 = (ulong *)((long)param_3 + 3);
          }
          piVar16 = (int *)*param_1;
          lVar29 = lVar29 + 1;
          if (*piVar16 <= lVar29) {
            return param_3;
          }
        } while( true );
      default:
        return param_3;
      }
    }
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      return param_3;
    }
    if (param_3 < (ulong *)*param_4) {
      uVar11 = param_2 << 3 | 2;
      if (0x7f < uVar11) goto LAB_005278a4;
LAB_00525124:
      pbVar24 = (byte *)((long)param_3 + 1);
      *(byte *)param_3 = (byte)uVar11;
      uVar11 = *(uint *)((long)param_1 + 0xc);
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar11 = param_2 << 3 | 2;
      if (uVar11 < 0x80) goto LAB_00525124;
LAB_005278a4:
      *(byte *)param_3 = (byte)uVar11 | 0x80;
      if (uVar11 >> 0xe == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = *(uint *)((long)param_1 + 0xc);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
        uVar11 = *(uint *)((long)param_1 + 0xc);
      }
    }
    if (uVar11 < 0x80) {
      puVar25 = (ulong *)(pbVar24 + 1);
      *pbVar24 = (byte)uVar11;
      bVar8 = (byte)param_1[1];
    }
    else {
      *pbVar24 = (byte)uVar11 | 0x80;
      uVar18 = (ulong)(long)(int)uVar11 >> 7;
      if (((ulong)(long)(int)uVar11 >> 0xe & 0x3ffff) == 0) {
        pbVar24[1] = (byte)uVar18;
        uVar11 = (byte)param_1[1] - 1;
        if (0x11 < uVar11) {
          return (ulong *)(pbVar24 + 2);
        }
        goto LAB_00527968;
      }
      puVar25 = (ulong *)(pbVar24 + 2);
      do {
        puVar27 = puVar25;
        uVar20 = uVar18 >> 7;
        *(byte *)((long)puVar27 + -1) = (byte)uVar18 | 0x80;
        puVar25 = (ulong *)((long)puVar27 + 1);
        uVar22 = uVar18 >> 0xe;
        uVar18 = uVar20;
      } while (uVar22 != 0);
      *(byte *)puVar27 = (byte)uVar20;
      bVar8 = (byte)param_1[1];
    }
    uVar11 = bVar8 - 1;
    if (0x11 < uVar11) {
      return puVar25;
    }
LAB_00527968:
                    /* WARNING: Could not recover jumptable at 0x0052797c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar25 = (ulong *)(*(code *)(&UNK_00527980 +
                                 (ulong)*(ushort *)(&DAT_03d08f1e + (ulong)uVar11 * 2) * 4))();
    return puVar25;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    return param_3;
  }
  cVar9 = (char)param_2;
  switch((byte)param_1[1]) {
  case 1:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
    }
    uVar18 = *param_1;
    uVar11 = param_2 << 3 | 1;
    if (uVar11 < 0x80) {
LAB_005261bc:
      *(byte *)param_3 = (byte)uVar11;
      *(ulong *)((long)param_3 + 1) = uVar18;
      return (ulong *)((long)param_3 + 9);
    }
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x81;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) {
LAB_00526298:
      *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
      *(ulong *)((long)param_3 + 2) = uVar18;
      return (ulong *)((long)param_3 + 10);
    }
    puVar25 = (ulong *)((long)param_3 + 2);
    uVar11 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar10 = uVar11 >> 7;
      *(byte *)((long)puVar25 + -1) = (byte)uVar11 | 0x80;
      puVar25 = (ulong *)((long)puVar25 + 1);
      uVar21 = uVar11 >> 0xe;
      uVar11 = uVar10;
    } while (uVar21 != 0);
    goto LAB_005270dc;
  case 2:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
    }
    uVar10 = (uint)*param_1;
    uVar11 = param_2 << 3 | 5;
    if (uVar11 < 0x80) {
LAB_00526190:
      *(byte *)param_3 = (byte)uVar11;
      *(uint *)((long)param_3 + 1) = uVar10;
      return (ulong *)((long)param_3 + 5);
    }
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x85;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) {
LAB_00526274:
      *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
      *(uint *)((long)param_3 + 2) = uVar10;
      return (ulong *)((long)param_3 + 6);
    }
    puVar12 = (uint *)((long)param_3 + 2);
    uVar11 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar21 = uVar11 >> 7;
      *(byte *)((long)puVar12 + -1) = (byte)uVar11 | 0x80;
      puVar12 = (uint *)((long)puVar12 + 1);
      uVar14 = uVar11 >> 0xe;
      uVar11 = uVar21;
    } while (uVar14 != 0);
    goto LAB_005270ac;
  case 3:
    if (param_3 < (ulong *)*param_4) {
      uVar18 = *param_1;
      if (0x7f < param_2 * 8) goto LAB_00528160;
LAB_00525f6c:
      pbVar24 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar18 = *param_1;
      if (param_2 * 8 < 0x80) goto LAB_00525f6c;
LAB_00528160:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
      }
    }
    if (uVar18 < 0x80) {
LAB_005285e4:
      *pbVar24 = (byte)uVar18;
      return (ulong *)(pbVar24 + 1);
    }
    *pbVar24 = (byte)uVar18 | 0x80;
    uVar20 = uVar18 >> 7;
    if (uVar18 >> 0xe == 0) goto LAB_00528600;
    param_3 = (ulong *)(pbVar24 + 2);
    do {
      uVar18 = uVar20 >> 7;
      *(byte *)((long)param_3 + -1) = (byte)uVar20 | 0x80;
      param_3 = (ulong *)((long)param_3 + 1);
      uVar22 = uVar20 >> 0xe;
      uVar20 = uVar18;
    } while (uVar22 != 0);
    goto LAB_0052862c;
  case 4:
    if (param_3 < (ulong *)*param_4) {
      uVar18 = *param_1;
      if (0x7f < param_2 * 8) goto LAB_00528208;
LAB_00525f90:
      pbVar24 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar18 = *param_1;
      if (param_2 * 8 < 0x80) goto LAB_00525f90;
LAB_00528208:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
      }
    }
    if (uVar18 < 0x80) goto LAB_005285e4;
    *pbVar24 = (byte)uVar18 | 0x80;
    uVar20 = uVar18 >> 7;
    if (uVar18 >> 0xe == 0) goto LAB_00528600;
    param_3 = (ulong *)(pbVar24 + 2);
    do {
      uVar18 = uVar20 >> 7;
      *(byte *)((long)param_3 + -1) = (byte)uVar20 | 0x80;
      param_3 = (ulong *)((long)param_3 + 1);
      uVar22 = uVar20 >> 0xe;
      uVar20 = uVar18;
    } while (uVar22 != 0);
    goto LAB_0052862c;
  case 5:
    if (param_3 < (ulong *)*param_4) {
      uVar18 = (ulong)(int)(uint)*param_1;
      if (0x7f < param_2 * 8) goto LAB_005282b0;
LAB_00525fb4:
      pbVar24 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar18 = (ulong)(int)(uint)*param_1;
      if (param_2 * 8 < 0x80) goto LAB_00525fb4;
LAB_005282b0:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
      }
    }
    if ((uint)uVar18 < 0x80) goto LAB_005285e4;
    *pbVar24 = (byte)uVar18 | 0x80;
    uVar20 = uVar18 >> 7;
    if ((uVar18 >> 0xe & 0x3ffff) != 0) {
      param_3 = (ulong *)(pbVar24 + 2);
      do {
        uVar18 = uVar20 >> 7;
        *(byte *)((long)param_3 + -1) = (byte)uVar20 | 0x80;
        param_3 = (ulong *)((long)param_3 + 1);
        uVar22 = uVar20 >> 0xe;
        uVar20 = uVar18;
      } while (uVar22 != 0);
      goto LAB_0052862c;
    }
LAB_00528600:
    pbVar24[1] = (byte)uVar20;
    param_3 = (ulong *)(pbVar24 + 2);
    break;
  case 6:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
    }
    uVar18 = *param_1;
    uVar11 = param_2 << 3 | 1;
    if (uVar11 < 0x80) goto LAB_005261bc;
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x81;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_00526298;
    puVar25 = (ulong *)((long)param_3 + 2);
    uVar11 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar10 = uVar11 >> 7;
      *(byte *)((long)puVar25 + -1) = (byte)uVar11 | 0x80;
      puVar25 = (ulong *)((long)puVar25 + 1);
      uVar21 = uVar11 >> 0xe;
      uVar11 = uVar10;
    } while (uVar21 != 0);
    goto LAB_005270dc;
  case 7:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
    }
    uVar10 = (uint)*param_1;
    uVar11 = param_2 << 3 | 5;
    if (uVar11 < 0x80) goto LAB_00526190;
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x85;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_00526274;
    puVar12 = (uint *)((long)param_3 + 2);
    uVar11 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar21 = uVar11 >> 7;
      *(byte *)((long)puVar12 + -1) = (byte)uVar11 | 0x80;
      puVar12 = (uint *)((long)puVar12 + 1);
      uVar14 = uVar11 >> 0xe;
      uVar11 = uVar21;
    } while (uVar14 != 0);
    goto LAB_005270ac;
  case 8:
    if (param_3 < (ulong *)*param_4) {
      bVar8 = (byte)*param_1;
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      bVar8 = (byte)*param_1;
    }
    if (param_2 * 8 < 0x80) {
      pbVar24 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
      param_3 = (ulong *)((long)param_3 + 2);
      *pbVar24 = bVar8;
    }
    else {
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
        param_3 = (ulong *)((long)param_3 + 3);
        *pbVar24 = bVar8;
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          uVar21 = uVar11 >> 0xe;
          pbVar24 = pbVar26 + 1;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
        param_3 = (ulong *)(pbVar26 + 2);
        pbVar26[1] = bVar8;
      }
    }
    break;
  case 9:
    if (param_3 < (ulong *)*param_4) {
      pbVar24 = (byte *)*param_1;
      bVar8 = *pbVar24;
      if ((bVar8 & 1) != 0) goto LAB_00528828;
LAB_005260ac:
      sVar30 = (size_t)(bVar8 >> 1);
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      pbVar24 = (byte *)*param_1;
      bVar8 = *pbVar24;
      if ((bVar8 & 1) == 0) goto LAB_005260ac;
LAB_00528828:
      sVar30 = *(size_t *)(pbVar24 + 8);
      if (0x7f < (long)sVar30) goto LAB_00528934;
    }
    uVar11 = param_2 << 3;
    if (uVar11 < 0x80) {
      lVar29 = 1;
    }
    else if (uVar11 < 0x4000) {
      lVar29 = 2;
    }
    else if (uVar11 < 0x200000) {
      lVar29 = 3;
    }
    else {
      lVar29 = 4;
      if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
        lVar29 = 5;
      }
    }
    if ((long)(*param_4 + ~(ulong)(lVar29 + (long)param_3) + 0x10) < (long)sVar30) {
LAB_00528934:
      puVar25 = (ulong *)FUN_0052cbdc(param_4,param_2,pbVar24,param_3);
      return puVar25;
    }
    uVar10 = uVar11 | 2;
    if (uVar10 < 0x80) {
LAB_005288a0:
      pbVar26 = (byte *)((long)param_3 + 1);
      *(byte *)param_3 = (byte)uVar10;
    }
    else {
      *(byte *)param_3 = (byte)uVar11 | 0x82;
      if ((param_2 & 0x1fffffff) >> 0xb != 0) {
        pbVar26 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar26 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        goto LAB_005288ec;
      }
LAB_005288b8:
      *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
      pbVar26 = (byte *)((long)param_3 + 2);
    }
    goto LAB_005288f0;
  case 10:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
    }
    plVar28 = (long *)*param_1;
    uVar11 = param_2 << 3 | 3;
    if (uVar11 < 0x80) {
      pbVar24 = (byte *)((long)param_3 + 1);
      *(byte *)param_3 = (byte)uVar11;
    }
    else {
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x83;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
      }
    }
    pbVar24 = (byte *)(**(code **)(*plVar28 + 0x60))(plVar28,pbVar24,param_4);
    if ((byte *)*param_4 <= pbVar24) {
      pbVar24 = (byte *)FUN_0052c6d8(param_4,pbVar24);
    }
    uVar11 = param_2 << 3 | 4;
    if (uVar11 < 0x80) goto LAB_00528524;
    *pbVar24 = (byte)(param_2 << 3) | 0x84;
    if ((param_2 & 0x1fffffff) >> 0xb != 0) {
      puVar25 = (ulong *)(pbVar24 + 2);
      uVar10 = param_2 >> 4 & 0x1ffffff;
      do {
        uVar11 = uVar10 >> 7;
        *(byte *)((long)puVar25 + -1) = (byte)uVar10 | 0x80;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar21 = uVar10 >> 0xe;
        uVar10 = uVar11;
      } while (uVar21 != 0);
      goto LAB_0052871c;
    }
    param_2 = param_2 >> 4;
    goto LAB_005286f0;
  case 0xb:
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00526260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar25 = (ulong *)(**(code **)(*(long *)*param_1 + 0x88))
                                   ((long *)*param_1,param_2,param_3,param_4);
      return puVar25;
    }
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
    }
    plVar28 = (long *)*param_1;
    uVar11 = param_2 << 3 | 2;
    if (uVar11 < 0x80) {
      pbVar24 = (byte *)((long)param_3 + 1);
      *(byte *)param_3 = (byte)uVar11;
    }
    else {
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x82;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
      }
    }
    uVar11 = (**(code **)(*plVar28 + 0x50))(plVar28);
    if (uVar11 < 0x80) {
      pbVar26 = pbVar24 + 1;
      *pbVar24 = (byte)uVar11;
    }
    else {
      *pbVar24 = (byte)uVar11 | 0x80;
      if (uVar11 >> 0xe == 0) {
        pbVar24[1] = (byte)(uVar11 >> 7);
        pbVar26 = pbVar24 + 2;
      }
      else {
        pbVar26 = pbVar24 + 2;
        uVar11 = uVar11 >> 7;
        do {
          pbVar24 = pbVar26;
          uVar10 = uVar11 >> 7;
          pbVar24[-1] = (byte)uVar11 | 0x80;
          pbVar26 = pbVar24 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar24 = (byte)uVar10;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00527880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar25 = (ulong *)(**(code **)(*plVar28 + 0x60))(plVar28,pbVar26,param_4);
    return puVar25;
  case 0xc:
    if (param_3 < (ulong *)*param_4) {
      pbVar24 = (byte *)*param_1;
      bVar8 = *pbVar24;
      if ((bVar8 & 1) != 0) goto LAB_00528404;
LAB_00526120:
      sVar30 = (size_t)(bVar8 >> 1);
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      pbVar24 = (byte *)*param_1;
      bVar8 = *pbVar24;
      if ((bVar8 & 1) == 0) goto LAB_00526120;
LAB_00528404:
      sVar30 = *(size_t *)(pbVar24 + 8);
      if (0x7f < (long)sVar30) goto LAB_00528934;
    }
    uVar11 = param_2 << 3;
    if (uVar11 < 0x80) {
      lVar29 = 1;
    }
    else if (uVar11 < 0x4000) {
      lVar29 = 2;
    }
    else if (uVar11 < 0x200000) {
      lVar29 = 3;
    }
    else {
      lVar29 = 4;
      if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
        lVar29 = 5;
      }
    }
    if ((long)(*param_4 + ~(ulong)(lVar29 + (long)param_3) + 0x10) < (long)sVar30)
    goto LAB_00528934;
    uVar10 = uVar11 | 2;
    if (uVar10 < 0x80) goto LAB_005288a0;
    *(byte *)param_3 = (byte)uVar11 | 0x82;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_005288b8;
    pbVar26 = (byte *)((long)param_3 + 2);
    uVar11 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar10 = uVar11 >> 7;
      pbVar26[-1] = (byte)uVar11 | 0x80;
      pbVar26 = pbVar26 + 1;
      uVar21 = uVar11 >> 0xe;
      uVar11 = uVar10;
    } while (uVar21 != 0);
LAB_005288ec:
    pbVar26[-1] = (byte)uVar10;
LAB_005288f0:
    *pbVar26 = (byte)sVar30;
    pbVar19 = *(byte **)(pbVar24 + 0x10);
    if ((*pbVar24 & 1) == 0) {
      pbVar19 = pbVar24 + 1;
    }
    memcpy(pbVar26 + 1,pbVar19,sVar30);
    param_3 = (ulong *)(pbVar26 + 1 + sVar30);
    break;
  case 0xd:
    if (param_3 < (ulong *)*param_4) {
      uVar11 = (uint)*param_1;
      if (0x7f < param_2 * 8) goto LAB_005284d4;
LAB_00526144:
      pbVar24 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar11 = (uint)*param_1;
      if (param_2 * 8 < 0x80) goto LAB_00526144;
LAB_005284d4:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar10 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar21 = uVar10 >> 7;
          pbVar26[-1] = (byte)uVar10 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar21;
        } while (uVar14 != 0);
        *pbVar26 = (byte)uVar21;
      }
    }
    if (0x7f < uVar11) {
      *pbVar24 = (byte)uVar11 | 0x80;
      if (uVar11 >> 0xe == 0) {
        pbVar24[1] = (byte)(uVar11 >> 7);
        return (ulong *)(pbVar24 + 2);
      }
      puVar25 = (ulong *)(pbVar24 + 2);
      uVar11 = uVar11 >> 7;
      do {
        puVar27 = puVar25;
        uVar10 = uVar11 >> 7;
        *(byte *)((long)puVar27 + -1) = (byte)uVar11 | 0x80;
        uVar21 = uVar11 >> 0xe;
        puVar25 = (ulong *)((long)puVar27 + 1);
        uVar11 = uVar10;
      } while (uVar21 != 0);
      *(byte *)puVar27 = (byte)uVar10;
      return (ulong *)((long)puVar27 + 1);
    }
LAB_00528524:
    param_3 = (ulong *)(pbVar24 + 1);
    *pbVar24 = (byte)uVar11;
    break;
  case 0xe:
    if (param_3 < (ulong *)*param_4) {
      uVar18 = (ulong)(int)(uint)*param_1;
      if (0x7f < param_2 * 8) goto LAB_00528594;
LAB_00526168:
      pbVar24 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar18 = (ulong)(int)(uint)*param_1;
      if (param_2 * 8 < 0x80) goto LAB_00526168;
LAB_00528594:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
      }
    }
    if ((uint)uVar18 < 0x80) goto LAB_005285e4;
    *pbVar24 = (byte)uVar18 | 0x80;
    uVar20 = uVar18 >> 7;
    if ((uVar18 >> 0xe & 0x3ffff) == 0) goto LAB_00528600;
    param_3 = (ulong *)(pbVar24 + 2);
    do {
      uVar18 = uVar20 >> 7;
      *(byte *)((long)param_3 + -1) = (byte)uVar20 | 0x80;
      param_3 = (ulong *)((long)param_3 + 1);
      uVar22 = uVar20 >> 0xe;
      uVar20 = uVar18;
    } while (uVar22 != 0);
LAB_0052862c:
    *(byte *)((long)param_3 + -1) = (byte)uVar18;
    break;
  case 0xf:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
    }
    uVar10 = (uint)*param_1;
    uVar11 = param_2 << 3 | 5;
    if (uVar11 < 0x80) goto LAB_00526190;
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x85;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_00526274;
    puVar12 = (uint *)((long)param_3 + 2);
    uVar11 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar21 = uVar11 >> 7;
      *(byte *)((long)puVar12 + -1) = (byte)uVar11 | 0x80;
      puVar12 = (uint *)((long)puVar12 + 1);
      uVar14 = uVar11 >> 0xe;
      uVar11 = uVar21;
    } while (uVar14 != 0);
LAB_005270ac:
    *(byte *)((long)puVar12 + -1) = (byte)uVar21;
    param_3 = (ulong *)(puVar12 + 1);
    *puVar12 = uVar10;
    break;
  case 0x10:
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
    }
    uVar18 = *param_1;
    uVar11 = param_2 << 3 | 1;
    if (uVar11 < 0x80) goto LAB_005261bc;
    *(byte *)param_3 = (byte)(param_2 << 3) | 0x81;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) goto LAB_00526298;
    puVar25 = (ulong *)((long)param_3 + 2);
    uVar11 = param_2 >> 4 & 0x1ffffff;
    do {
      uVar10 = uVar11 >> 7;
      *(byte *)((long)puVar25 + -1) = (byte)uVar11 | 0x80;
      puVar25 = (ulong *)((long)puVar25 + 1);
      uVar21 = uVar11 >> 0xe;
      uVar11 = uVar10;
    } while (uVar21 != 0);
LAB_005270dc:
    *(byte *)((long)puVar25 + -1) = (byte)uVar10;
    param_3 = puVar25 + 1;
    *puVar25 = uVar18;
    break;
  case 0x11:
    if (param_3 < (ulong *)*param_4) {
      uVar11 = (uint)*param_1;
      if (0x7f < param_2 * 8) goto LAB_0052867c;
LAB_005261e4:
      pbVar24 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar11 = (uint)*param_1;
      if (param_2 * 8 < 0x80) goto LAB_005261e4;
LAB_0052867c:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar10 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar21 = uVar10 >> 7;
          pbVar26[-1] = (byte)uVar10 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar21;
        } while (uVar14 != 0);
        *pbVar26 = (byte)uVar21;
      }
    }
    uVar11 = uVar11 << 1 ^ (int)uVar11 >> 0x1f;
    if (uVar11 < 0x80) {
      *pbVar24 = (byte)uVar11;
      return (ulong *)(pbVar24 + 1);
    }
    *pbVar24 = (byte)uVar11 | 0x80;
    param_2 = uVar11 >> 7;
    if (uVar11 >> 0xe != 0) {
      puVar25 = (ulong *)(pbVar24 + 2);
      do {
        uVar11 = param_2 >> 7;
        *(byte *)((long)puVar25 + -1) = (byte)param_2 | 0x80;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar10 = param_2 >> 0xe;
        param_2 = uVar11;
      } while (uVar10 != 0);
LAB_0052871c:
      *(byte *)((long)puVar25 + -1) = (byte)uVar11;
      return puVar25;
    }
LAB_005286f0:
    pbVar24[1] = (byte)param_2;
    param_3 = (ulong *)(pbVar24 + 2);
    break;
  case 0x12:
    if (param_3 < (ulong *)*param_4) {
      uVar18 = *param_1;
      if (0x7f < param_2 * 8) goto LAB_00528744;
LAB_00526208:
      pbVar24 = (byte *)((long)param_3 + 1);
      *(char *)param_3 = cVar9 * '\b';
    }
    else {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar18 = *param_1;
      if (param_2 * 8 < 0x80) goto LAB_00526208;
LAB_00528744:
      *(byte *)param_3 = (byte)(param_2 << 3) | 0x80;
      if ((param_2 & 0x1fffffff) >> 0xb == 0) {
        *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
        pbVar24 = (byte *)((long)param_3 + 2);
      }
      else {
        pbVar24 = (byte *)((long)param_3 + 2);
        uVar11 = param_2 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar24;
          uVar10 = uVar11 >> 7;
          pbVar26[-1] = (byte)uVar11 | 0x80;
          pbVar24 = pbVar26 + 1;
          uVar21 = uVar11 >> 0xe;
          uVar11 = uVar10;
        } while (uVar21 != 0);
        *pbVar26 = (byte)uVar10;
      }
    }
    uVar18 = uVar18 << 1 ^ (long)uVar18 >> 0x3f;
    if (uVar18 < 0x80) {
      param_3 = (ulong *)(pbVar24 + 1);
      *pbVar24 = (byte)uVar18;
    }
    else {
      *pbVar24 = (byte)uVar18 | 0x80;
      if (uVar18 >> 0xe == 0) {
        pbVar24[1] = (byte)(uVar18 >> 7);
        param_3 = (ulong *)(pbVar24 + 2);
      }
      else {
        uVar18 = uVar18 >> 7;
        param_3 = (ulong *)(pbVar24 + 2);
        do {
          puVar25 = param_3;
          uVar20 = uVar18 >> 7;
          *(byte *)((long)puVar25 + -1) = (byte)uVar18 | 0x80;
          param_3 = (ulong *)((long)puVar25 + 1);
          uVar22 = uVar18 >> 0xe;
          uVar18 = uVar20;
        } while (uVar22 != 0);
        *(byte *)puVar25 = (byte)uVar20;
      }
    }
  }
  return param_3;
switchD_005251f8_caseD_9:
  uVar18 = *param_1;
  if (*(int *)(uVar18 + 8) < 1) {
    return param_3;
  }
  uVar10 = param_2 * 8;
  uVar11 = param_2 << 3 | 2;
  bVar8 = (byte)uVar10 | 0x82;
  uVar21 = param_2 >> 4 & 0x1ffffff;
  if (0x7f < uVar10) {
    lVar29 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      lVar29 = 5;
    }
    lVar17 = 3;
    if (0x1fffff < uVar10) {
      lVar17 = lVar29;
    }
    lVar29 = 0;
    lVar1 = 2;
    if (0x3fff < uVar10) {
      lVar1 = lVar17;
    }
    do {
      if ((ulong *)*param_4 <= param_3) {
        param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
        uVar18 = *param_1;
      }
      pbVar24 = *(byte **)(*(long *)(uVar18 + 0x10) + lVar29 * 8 + 8);
      if ((*pbVar24 & 1) == 0) {
        sVar30 = (size_t)(*pbVar24 >> 1);
LAB_00526750:
        if ((long)(*param_4 + ~(ulong)(lVar1 + (long)param_3) + 0x10) < (long)sVar30)
        goto LAB_005267f8;
        if (uVar11 < 0x80) {
          pbVar26 = (byte *)((long)param_3 + 1);
          *(byte *)param_3 = (byte)uVar11;
        }
        else {
          *(byte *)param_3 = bVar8;
          if (uVar11 < 0x4000) {
            *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
            pbVar26 = (byte *)((long)param_3 + 2);
          }
          else {
            pbVar26 = (byte *)((long)param_3 + 2);
            uVar10 = uVar21;
            do {
              pbVar19 = pbVar26;
              uVar14 = uVar10 >> 7;
              pbVar19[-1] = (byte)uVar10 | 0x80;
              pbVar26 = pbVar19 + 1;
              uVar6 = uVar10 >> 0xe;
              uVar10 = uVar14;
            } while (uVar6 != 0);
            *pbVar19 = (byte)uVar14;
          }
        }
        *pbVar26 = (byte)sVar30;
        pbVar19 = *(byte **)(pbVar24 + 0x10);
        if ((*pbVar24 & 1) == 0) {
          pbVar19 = pbVar24 + 1;
        }
        memcpy(pbVar26 + 1,pbVar19,sVar30);
        param_3 = (ulong *)(pbVar26 + 1 + sVar30);
      }
      else {
        sVar30 = *(size_t *)(pbVar24 + 8);
        if ((long)sVar30 < 0x80) goto LAB_00526750;
LAB_005267f8:
        param_3 = (ulong *)FUN_0052cbdc(param_4,param_2,pbVar24,param_3);
      }
      uVar18 = *param_1;
      lVar29 = lVar29 + 1;
      if (*(int *)(uVar18 + 8) <= lVar29) {
        return param_3;
      }
    } while( true );
  }
  lVar29 = 0;
  do {
    if ((ulong *)*param_4 <= param_3) {
      param_3 = (ulong *)FUN_0052c6d8(param_4,param_3);
      uVar18 = *param_1;
    }
    pbVar24 = *(byte **)(*(long *)(uVar18 + 0x10) + lVar29 * 8 + 8);
    if ((*pbVar24 & 1) == 0) {
      sVar30 = (size_t)(*pbVar24 >> 1);
LAB_005256e8:
      if ((*param_4 - (long)param_3) + 0xe < (long)sVar30) goto LAB_00525788;
      if (uVar11 < 0x80) {
        pbVar26 = (byte *)((long)param_3 + 1);
        *(byte *)param_3 = (byte)uVar11;
      }
      else {
        *(byte *)param_3 = bVar8;
        if (uVar11 < 0x4000) {
          *(byte *)((long)param_3 + 1) = (byte)(param_2 >> 4);
          pbVar26 = (byte *)((long)param_3 + 2);
        }
        else {
          pbVar26 = (byte *)((long)param_3 + 2);
          uVar10 = uVar21;
          do {
            pbVar19 = pbVar26;
            uVar14 = uVar10 >> 7;
            pbVar19[-1] = (byte)uVar10 | 0x80;
            pbVar26 = pbVar19 + 1;
            uVar6 = uVar10 >> 0xe;
            uVar10 = uVar14;
          } while (uVar6 != 0);
          *pbVar19 = (byte)uVar14;
        }
      }
      *pbVar26 = (byte)sVar30;
      pbVar19 = *(byte **)(pbVar24 + 0x10);
      if ((*pbVar24 & 1) == 0) {
        pbVar19 = pbVar24 + 1;
      }
      memcpy(pbVar26 + 1,pbVar19,sVar30);
      param_3 = (ulong *)(pbVar26 + 1 + sVar30);
    }
    else {
      sVar30 = *(size_t *)(pbVar24 + 8);
      if ((long)sVar30 < 0x80) goto LAB_005256e8;
LAB_00525788:
      param_3 = (ulong *)FUN_0052cbdc(param_4,param_2,pbVar24,param_3);
    }
    uVar18 = *param_1;
    lVar29 = lVar29 + 1;
    if (*(int *)(uVar18 + 8) <= lVar29) {
      return param_3;
    }
  } while( true );
}


