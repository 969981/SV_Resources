/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e2760; name: FUN_031e2760
 */


ulong FUN_031e2760(char *param_1,long param_2,char *param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_3 != (char *)0x0 || param_1 != (char *)0x0) {
    uVar3 = 1;
    if (param_1 == (char *)0x0) {
      uVar3 = 0xffffffff;
    }
    if (param_1 == (char *)0x0) {
      return (ulong)uVar3;
    }
    if (param_3 == (char *)0x0) {
      return (ulong)uVar3;
    }
    if (param_1 != param_3) {
      uVar3 = strcmp(param_1,param_3);
      if (uVar3 != 0) {
        return (ulong)uVar3;
      }
    }
    if (param_2 != param_4) {
      if ((param_2 == 0) || (param_4 == 0)) {
        if ((param_2 != 0) && (*(short *)(param_2 + 8) != 0)) {
          return 1;
        }
        if ((param_4 != 0) && (*(short *)(param_4 + 8) != 0)) {
          return 0xffffffff;
        }
      }
      else {
        uVar2 = *(ushort *)(param_2 + 8);
        if (uVar2 < *(ushort *)(param_4 + 8)) {
          return 0xffffffff;
        }
        if (*(ushort *)(param_4 + 8) < uVar2) {
          return 1;
        }
        if (uVar2 != 0) {
          uVar11 = 0;
          do {
            puVar7 = (ulong *)(param_2 + 0x10 + uVar11 * 0x10);
            puVar6 = (ulong *)(param_4 + 0x10 + uVar11 * 0x10);
            bVar1 = *(byte *)puVar7[1];
            if (bVar1 < *(byte *)puVar6[1]) {
              return 0xffffffff;
            }
            if (*(byte *)puVar6[1] < bVar1) {
              return 1;
            }
            if (bVar1 == 0x76) {
              if (*puVar7 < *puVar6) {
                return 0xffffffff;
              }
              if (*puVar6 < *puVar7) {
                return 1;
              }
            }
            else if (bVar1 == 0x74) {
              puVar7 = (ulong *)*puVar7;
              puVar6 = (ulong *)*puVar6;
              if (puVar7 != puVar6) {
                puVar8 = puVar7;
                while (uVar10 = *puVar8, ((uint)uVar10 >> 3 & 1) == 0) {
                  if (((uVar10 & 1) != 0) || (puVar8 = (ulong *)puVar8[1], puVar8 == (ulong *)0x0))
                  goto LAB_031e2890;
                }
                if (puVar8 != (ulong *)0x0) {
                  uVar10 = puVar8[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
                  goto LAB_031e2894;
                }
LAB_031e2890:
                uVar10 = 0;
LAB_031e2894:
                do {
                  uVar3 = (uint)*puVar7;
                  if ((uVar3 >> 0xf & 1) != 0) {
                    uVar4 = CONCAT44(uVar3,uVar3) & 0x7fff00007fff;
                    uVar4 = puVar7[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                POPCOUNT((char)(uVar4 >> 8))) + 2];
                    goto LAB_031e28d4;
                  }
                } while (((*puVar7 & 9) == 0) &&
                        (puVar7 = (ulong *)puVar7[1], puVar7 != (ulong *)0x0));
                uVar4 = 0;
LAB_031e28d4:
                puVar7 = puVar6;
                while (uVar9 = *puVar7, ((uint)uVar9 >> 3 & 1) == 0) {
                  if (((uVar9 & 1) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0))
                  goto LAB_031e2918;
                }
                if (puVar7 != (ulong *)0x0) {
                  uVar9 = puVar7[(ulong)(byte)POPCOUNT((byte)uVar9 & 7) + 2];
                  goto LAB_031e291c;
                }
LAB_031e2918:
                uVar9 = 0;
LAB_031e291c:
                do {
                  uVar3 = (uint)*puVar6;
                  if ((uVar3 >> 0xf & 1) != 0) {
                    uVar5 = CONCAT44(uVar3,uVar3) & 0x7fff00007fff;
                    uVar5 = puVar6[(ulong)(byte)(POPCOUNT((char)uVar5) +
                                                POPCOUNT((char)(uVar5 >> 8))) + 2];
                    goto LAB_031e295c;
                  }
                } while (((*puVar6 & 9) == 0) &&
                        (puVar6 = (ulong *)puVar6[1], puVar6 != (ulong *)0x0));
                uVar5 = 0;
LAB_031e295c:
                uVar10 = FUN_031e2760(uVar10,uVar4,uVar9,uVar5);
                if ((int)uVar10 != 0) {
                  return uVar10;
                }
              }
            }
            uVar11 = uVar11 + 1;
            if (uVar11 == uVar2) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}


