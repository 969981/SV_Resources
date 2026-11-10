/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088d418; name: FUN_0088d418
 */


undefined8 FUN_0088d418(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar5 = *(ushort *)(param_1 + 0x38);
  if (*(ushort *)(param_1 + 0x3a) <= uVar5) {
    return 0;
  }
  if (param_3 != 0) {
    if ((*(char *)(param_3 + 0x1d) == '\x04') || (*(char *)(param_3 + 0x1d) == '\x02')) {
      uVar12 = (ulong)*(uint *)(param_3 + 0x20);
      bVar13 = *(byte *)(param_3 + 0x1c);
    }
    else {
      uVar12 = 0x20;
      bVar13 = *(byte *)(param_3 + 0x1c);
    }
    if (bVar13 != 0) {
      uVar15 = 0;
      bVar14 = 1;
      do {
        piVar2 = (int *)(param_3 + (ulong)*(uint *)(param_3 + uVar12 + uVar15 * 4));
        bVar11 = *(byte *)(piVar2 + 1);
        if (bVar11 != 0) {
          uVar16 = 0;
          do {
            pbVar3 = (byte *)((long)piVar2 + (ulong)(uint)piVar2[uVar16 + 2]);
            iVar4 = *piVar2;
            if (iVar4 < 0x50544c46) {
              if (iVar4 < 0x434d4c46) {
                if (iVar4 == 0x41475646) {
                  bVar13 = 0;
                  if (*pbVar3 < 3) {
                    bVar13 = bVar14;
                  }
                  bVar14 = bVar13;
                  if (((*(uint *)(param_2 + 0x10) >> 0x12 & 3) <= (uint)*pbVar3 || pbVar3[1] != 0)
                      || pbVar3[2] != 2) {
                    bVar14 = 0;
                  }
                }
                else if (iVar4 == 0x43414c46) {
                  bVar14 = bVar14 & (char)(*(char *)(param_2 + 0x11) << 6) >> 7;
                  bVar8 = pbVar3[2] == 2 && pbVar3[1] == 0;
                  goto LAB_0088d548;
                }
              }
              else {
                if (iVar4 == 0x434d4c46) {
                  bVar7 = 0x36 < pbVar3[1];
                  bVar8 = pbVar3[1] == 0x37;
                }
                else {
                  if (iVar4 != 0x4d494c46) goto LAB_0088d54c;
                  bVar8 = (*(byte *)(param_2 + 0x11) & 0x10) != 0;
                  bVar7 = !bVar8 || 1 < pbVar3[1];
                  bVar8 = bVar8 && pbVar3[1] == 2;
                }
LAB_0088d53c:
                bVar6 = 0;
                if (!bVar7 || bVar8) {
                  bVar6 = bVar14;
                }
LAB_0088d540:
                bVar14 = bVar6;
                bVar8 = pbVar3[2] == 2;
LAB_0088d548:
                if (!bVar8) {
                  bVar14 = 0;
                }
              }
            }
            else if (iVar4 < 0x53464c46) {
              if (iVar4 == 0x50544c46) {
                bVar13 = 0;
                if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
                  bVar13 = bVar14;
                }
                bVar14 = bVar13;
                if (((*(byte *)(param_2 + 0x14) & 3) <= *pbVar3 || pbVar3[2] != 1) || pbVar3[1] != 0
                   ) {
                  bVar14 = 0;
                }
                if (*(short *)(*(long *)(param_1 + 0x18) + 0xc) != 0) {
                  uVar9 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x28) + 0x30))();
                  if ((uVar9 & 1) == 0) {
                    bVar14 = 0;
                  }
                  else {
                    uVar9 = 1;
                    do {
                      if (*(ushort *)(*(long *)(param_1 + 0x18) + 0xc) <= uVar9) goto LAB_0088d72c;
                      uVar10 = (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + uVar9 * 8) +
                                           0x30))();
                      uVar9 = uVar9 + 1;
                    } while ((uVar10 & 1) != 0);
                    bVar14 = 0;
                  }
LAB_0088d72c:
                  bVar11 = *(byte *)(piVar2 + 1);
                }
              }
              else if (iVar4 == 0x52425446) {
                bVar13 = 0;
                if (*pbVar3 < 3) {
                  bVar13 = bVar14;
                }
                if ((*(uint *)(param_2 + 0x10) >> 0x14 & 3) <= (uint)*pbVar3) {
                  bVar13 = 0;
                }
                bVar6 = 0;
                if (pbVar3[1] < 7) {
                  bVar6 = bVar13;
                }
                goto LAB_0088d540;
              }
            }
            else {
              if (iVar4 == 0x53464c46) {
                bVar8 = (*(byte *)(param_2 + 0x11) & 0x80) != 0;
                bVar7 = !bVar8 || 5 < pbVar3[1];
                bVar8 = bVar8 && pbVar3[1] == 6;
                goto LAB_0088d53c;
              }
              if (iVar4 == 0x53544c46) {
                bVar13 = 0;
                if (*pbVar3 < 3) {
                  bVar13 = bVar14;
                }
                if ((*(byte *)(param_2 + 0x10) >> 2 & 3) <= *pbVar3) {
                  bVar13 = 0;
                }
                bVar6 = 0;
                if (pbVar3[1] < 5) {
                  bVar6 = bVar13;
                }
                goto LAB_0088d540;
              }
            }
LAB_0088d54c:
            uVar16 = uVar16 + 1;
          } while (uVar16 < bVar11);
          bVar13 = *(byte *)(param_3 + 0x1c);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < bVar13);
      if (bVar14 == 0) {
        return 1;
      }
    }
    uVar5 = *(ushort *)(param_1 + 0x38);
  }
  *(ushort *)(param_1 + 0x38) = uVar5 + 1;
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar5 * 0x10);
  *plVar1 = param_2;
  plVar1[1] = param_3;
  return 1;
}


