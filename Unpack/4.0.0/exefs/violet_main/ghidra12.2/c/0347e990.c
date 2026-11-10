/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347e990; name: FUN_0347e990
 */


undefined8
FUN_0347e990(int *param_1,uint param_2,uint *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6,uint *param_7,int *param_8,uint *param_9,uint *param_10,
            byte param_11)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  int *piVar10;
  void *__dest;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  
  uVar9 = 0x1f;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    *param_5 = 0;
    *param_6 = 0;
    if (0xb < param_2) {
      if (*param_1 == 0x5367674f) {
        return 1;
      }
      if ((*param_1 == 0x46464952) && (param_1[2] == 0x45564157)) {
        uVar12 = (ulong)param_2 - 0xc;
        if ((uVar12 & 0xfffffff8) == 0) {
          return 8;
        }
        bVar8 = false;
        bVar7 = false;
        piVar14 = param_1 + 3;
        puVar11 = PTR_DAT_047e2fd0;
LAB_0347eaa0:
        iVar3 = *piVar14;
        uVar4 = piVar14[1];
        if (iVar3 != 0x61746164 && (int)uVar12 - 8U < uVar4) {
          return 8;
        }
        puVar1 = (uint *)(piVar14 + 2);
        if (iVar3 < 0x61746164) {
          if (0x20746d65 < iVar3) {
            if (iVar3 == 0x20746d66) {
              if (!bVar8) {
                *(uint **)(param_3 + 2) = puVar1;
                *param_3 = uVar4;
                if (((param_11 & 1) == 0) &&
                   ((uVar5 = piVar14[7], 0x200 < (uVar5 & 0xf00) ||
                    ((uVar5 & 0xff) != (uint)*(ushort *)((long)piVar14 + 10))))) {
                  uVar6 = uVar5 - (uVar5 >> 1 & 0x55555555);
                  uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
                  piVar14[7] = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar5 << 0xc
                               | 0x100;
                }
                bVar8 = true;
              }
              goto LAB_0347ee28;
            }
            if (iVar3 != 0x5453494c) goto LAB_0347ee28;
            piVar14 = piVar14 + 3;
            goto LAB_0347ee44;
          }
          if (iVar3 == 0x20646b61) {
            if (param_9 != (uint *)0x0) {
              *param_9 = uVar4;
              *(uint **)(param_9 + 2) = puVar1;
            }
          }
          else {
            if (iVar3 != 0x20657563) goto LAB_0347ee28;
            if (!bVar8) goto LAB_0347ee64;
            if ((param_4 != (uint *)0x0) && (!bVar7)) {
              uVar5 = *puVar1;
              if (uVar5 != 0) {
                *param_4 = uVar5;
                piVar10 = (int *)(**(code **)(puVar11 + 0x10))(5,(ulong)uVar5 << 4);
                *(int **)(param_4 + 2) = piVar10;
                puVar11 = PTR_DAT_047e2fd0;
                if (piVar10 == (int *)0x0) {
                  *param_4 = 0;
                  return 0x34;
                }
                if (*param_4 != 0) {
                  iVar3 = piVar14[4];
                  *piVar10 = piVar14[3];
                  *(int *)(*(long *)(param_4 + 2) + 4) = iVar3;
                  *(undefined8 *)(*(long *)(param_4 + 2) + 8) = 0;
                  if (1 < *param_4) {
                    lVar13 = 0;
                    piVar14 = piVar14 + 10;
                    uVar12 = 1;
                    do {
                      uVar12 = uVar12 + 1;
                      iVar3 = *piVar14;
                      *(int *)(*(long *)(param_4 + 2) + lVar13 + 0x10) = piVar14[-1];
                      *(int *)(*(long *)(param_4 + 2) + lVar13 + 0x14) = iVar3;
                      lVar2 = *(long *)(param_4 + 2) + lVar13;
                      lVar13 = lVar13 + 0x10;
                      *(undefined8 *)(lVar2 + 0x18) = 0;
                      piVar14 = piVar14 + 6;
                    } while (uVar12 < *param_4);
                  }
                }
              }
              bVar7 = true;
            }
          }
        }
        else if (iVar3 < 0x6c62616c) {
          if (iVar3 == 0x6b656573) {
            if (param_10 != (uint *)0x0) {
              *(uint **)(param_10 + 2) = puVar1;
              *param_10 = uVar4;
            }
          }
          else if (iVar3 == 0x61746164) {
            if (bVar8) {
              *param_7 = uVar4;
              *param_8 = (int)puVar1 - (int)param_1;
              return 1;
            }
            goto LAB_0347ee64;
          }
        }
        else if (iVar3 == 0x6c62616c) {
          if (((param_4 != (uint *)0x0) && (bVar7)) && (*param_4 != 0)) {
            lVar13 = 0;
            do {
              if (*(uint *)(*(long *)(param_4 + 2) + lVar13) == *puVar1) {
                __dest = (void *)(**(code **)(puVar11 + 0x10))(5,uVar4 - 3);
                puVar11 = PTR_DAT_047e2fd0;
                if (__dest != (void *)0x0) {
                  memcpy(__dest,piVar14 + 3,(ulong)(uVar4 - 4));
                  *(undefined1 *)((long)__dest + (ulong)(uVar4 - 4)) = 0;
                  *(void **)(*(long *)(param_4 + 2) + lVar13 + 8) = __dest;
                  puVar11 = PTR_DAT_047e2fd0;
                }
                break;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)*param_4 * 0x10 != lVar13);
          }
        }
        else if ((iVar3 == 0x6c706d73) && (piVar14[9] != 0)) {
          uVar5 = piVar14[10];
          *param_5 = *(undefined4 *)((long)piVar14 + (ulong)uVar5 + 0x34);
          *param_6 = *(undefined4 *)((long)piVar14 + (ulong)uVar5 + 0x38);
        }
LAB_0347ee28:
        piVar14 = (int *)((long)puVar1 + (ulong)uVar4);
        if ((((uVar4 & 1) != 0) && ((char)*piVar14 == '\0')) &&
           (piVar14 = (int *)((long)piVar14 + 1), (int *)((long)param_1 + (ulong)param_2) < piVar14)
           ) goto LAB_0347ee64;
LAB_0347ee44:
        uVar12 = (long)((long)param_1 + (ulong)param_2) - (long)piVar14;
        if ((uVar12 & 0xfffffff8) == 0) {
          return 8;
        }
        goto LAB_0347eaa0;
      }
    }
LAB_0347ee64:
    uVar9 = 7;
  }
  return uVar9;
}


