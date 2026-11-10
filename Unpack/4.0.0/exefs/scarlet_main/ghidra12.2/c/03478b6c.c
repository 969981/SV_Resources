/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03478b6c; name: FUN_03478b6c
 */


void FUN_03478b6c(long param_1,int *param_2,uint *param_3,int param_4,long *param_5,
                 undefined4 param_6,code *param_7,undefined8 param_8)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 != 0) {
    if (param_7 == (code *)0x0) {
      do {
        uVar10 = (ulong)*(ushort *)(param_2 + 1);
        iVar7 = 0;
        puVar1 = (ushort *)((long)param_2 + 6);
        param_2 = (int *)(lVar12 + uVar10 * 0xc);
        uVar9 = *param_3;
        iVar8 = *puVar1 - 1;
        do {
          iVar4 = iVar8 - iVar7;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar7 + (iVar4 >> 1);
          puVar11 = (uint *)(param_2 + (long)iVar4 * 3);
          uVar2 = *puVar11;
          if (uVar9 <= uVar2 && uVar2 != uVar9) {
            iVar8 = iVar4 + -1;
          }
          else {
            if (uVar9 <= uVar2) {
              if (param_4 + -1 != 0) {
                FUN_03478b6c(param_1,puVar11,param_3 + 1,param_4 + -1,param_5,param_6,0,param_8);
                break;
              }
              uVar2 = *(uint *)(param_5 + 1);
              uVar9 = *(uint *)((long)param_5 + 0xc);
              if (uVar9 <= uVar2) {
                iVar7 = uVar9 + (uVar9 >> 1);
                if (uVar9 == 0) {
                  iVar7 = 1;
                }
                uVar9 = iVar7 + uVar9;
                lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_5,(ulong)uVar9 << 3);
                if (lVar6 == 0) break;
                *param_5 = lVar6;
                *(uint *)((long)param_5 + 0xc) = uVar9;
              }
              if (uVar2 < uVar9) {
                uVar9 = *(uint *)(param_5 + 1);
                *(uint *)(param_5 + 1) = uVar9 + 1;
                if (*param_5 != 0) {
                  *(uint **)(*param_5 + (ulong)uVar9 * 8) = puVar11;
                  uVar3 = (ushort)puVar11[2];
                  if (uVar3 == 100) {
                    *(int *)(param_5 + 2) = (int)param_5[2] + 1;
                  }
                  else if (uVar3 == 0) {
                    *(int *)((long)param_5 + 0x14) = *(int *)((long)param_5 + 0x14) + 1;
                  }
                  *(uint *)(param_5 + 3) = (int)param_5[3] + (uint)uVar3;
                }
              }
              break;
            }
            iVar7 = iVar4 + 1;
          }
        } while (iVar7 <= iVar8);
        if (*param_2 != 0) {
          return;
        }
        if (*param_3 == 0) {
          return;
        }
        param_4 = param_4 + -1;
        if (param_4 == 0) goto LAB_03478e6c;
        lVar12 = *(long *)(param_1 + 8);
        param_3 = param_3 + 1;
      } while (lVar12 != 0);
    }
    else {
      do {
        uVar10 = (ulong)*(ushort *)(param_2 + 1);
        iVar7 = 0;
        puVar1 = (ushort *)((long)param_2 + 6);
        param_2 = (int *)(lVar12 + uVar10 * 0xc);
        uVar9 = *param_3;
        iVar8 = *puVar1 - 1;
        do {
          iVar4 = iVar8 - iVar7;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar7 + (iVar4 >> 1);
          puVar11 = (uint *)(param_2 + (long)iVar4 * 3);
          uVar2 = *puVar11;
          if (uVar9 <= uVar2 && uVar2 != uVar9) {
            iVar8 = iVar4 + -1;
          }
          else {
            if (uVar9 <= uVar2) {
              if (param_4 + -1 != 0) {
                FUN_03478b6c(param_1,puVar11,param_3 + 1,param_4 + -1,param_5,param_6,param_7,
                             param_8);
                break;
              }
              uVar5 = (*param_7)(param_6,puVar11[1],param_8);
              if ((uVar5 & 1) == 0) break;
              uVar2 = *(uint *)(param_5 + 1);
              uVar9 = *(uint *)((long)param_5 + 0xc);
              if (uVar9 <= uVar2) {
                iVar7 = uVar9 + (uVar9 >> 1);
                if (uVar9 == 0) {
                  iVar7 = 1;
                }
                uVar9 = iVar7 + uVar9;
                lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_5,(ulong)uVar9 << 3);
                if (lVar6 == 0) break;
                *param_5 = lVar6;
                *(uint *)((long)param_5 + 0xc) = uVar9;
              }
              if (uVar2 < uVar9) {
                uVar9 = *(uint *)(param_5 + 1);
                *(uint *)(param_5 + 1) = uVar9 + 1;
                if (*param_5 != 0) {
                  *(uint **)(*param_5 + (ulong)uVar9 * 8) = puVar11;
                  uVar3 = (ushort)puVar11[2];
                  if (uVar3 == 0) {
                    *(int *)((long)param_5 + 0x14) = *(int *)((long)param_5 + 0x14) + 1;
                  }
                  else if (uVar3 == 100) {
                    *(int *)(param_5 + 2) = (int)param_5[2] + 1;
                  }
                  *(uint *)(param_5 + 3) = (int)param_5[3] + (uint)uVar3;
                }
              }
              break;
            }
            iVar7 = iVar4 + 1;
          }
        } while (iVar7 <= iVar8);
        if (*param_2 != 0) {
          return;
        }
        if (*param_3 == 0) {
          return;
        }
        param_4 = param_4 + -1;
        if (param_4 == 0) {
LAB_03478e6c:
          if ((param_7 != (code *)0x0) &&
             (uVar5 = (*param_7)(param_6,*(undefined4 *)(lVar12 + uVar10 * 0xc + 4),param_8),
             (uVar5 & 1) == 0)) {
            return;
          }
          uVar2 = *(uint *)(param_5 + 1);
          uVar9 = *(uint *)((long)param_5 + 0xc);
          if (uVar9 <= uVar2) {
            iVar7 = uVar9 + (uVar9 >> 1);
            if (uVar9 == 0) {
              iVar7 = 1;
            }
            uVar9 = iVar7 + uVar9;
            lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_5,(ulong)uVar9 << 3);
            if (lVar6 == 0) {
              return;
            }
            *param_5 = lVar6;
            *(uint *)((long)param_5 + 0xc) = uVar9;
          }
          if (uVar9 <= uVar2) {
            return;
          }
          uVar9 = *(uint *)(param_5 + 1);
          *(uint *)(param_5 + 1) = uVar9 + 1;
          if (*param_5 == 0) {
            return;
          }
          *(int **)(*param_5 + (ulong)uVar9 * 8) = param_2;
          uVar3 = *(ushort *)(lVar12 + uVar10 * 0xc + 8);
          if (uVar3 == 0) {
            *(int *)((long)param_5 + 0x14) = *(int *)((long)param_5 + 0x14) + 1;
          }
          else if (uVar3 == 100) {
            *(int *)(param_5 + 2) = (int)param_5[2] + 1;
          }
          *(uint *)(param_5 + 3) = (int)param_5[3] + (uint)uVar3;
          return;
        }
        lVar12 = *(long *)(param_1 + 8);
        param_3 = param_3 + 1;
      } while (lVar12 != 0);
    }
  }
  return;
}


