/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b77f8; name: FUN_034b77f8
 */


void FUN_034b77f8(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,ulong *param_5,
                 undefined8 *param_6)

{
  short sVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b4;
  ulong local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 *local_70;
  float local_68;
  float fStack_64;
  
  puVar11 = (undefined8 *)*param_3;
  if (puVar11 != (undefined8 *)0x0) {
    switch((int)param_3[9]) {
    case 0:
      if (((((*param_5 == 0) || (param_3[3] == *param_5)) &&
           (((int)param_5[1] == 0 || ((int)param_3[4] == (int)param_5[1])))) &&
          ((((int)param_5[2] == 0 || ((int)param_3[5] == (int)param_5[2])) &&
           (((char)param_5[3] == -1 || ((char)param_3[6] == (char)param_5[3])))))) &&
         (((((char)param_5[4] == -1 || ((char)param_3[7] == (char)param_5[4])) &&
           ((param_5[5] == 0 || (param_3[8] == param_5[5])))) &&
          ((param_6 == (undefined8 *)0x0 ||
           (uVar5 = (**(code **)*param_6)(param_6), (uVar5 & 1) == 0)))))) {
        uVar4 = *(uint *)(param_3 + 0xb);
        if (uVar4 == 0) {
          fVar12 = 0.0;
        }
        else {
          lVar8 = param_3[10];
          fVar12 = 0.0;
          lVar6 = lVar8;
          do {
            if (*(int *)(lVar6 + 4) == param_4) {
              local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar6 + 0x18));
              fVar14 = (float)FUN_03447dcc(param_2,lVar6 + 8,&local_b0);
              *(float *)(lVar6 + 0x18) = (float)local_b0;
              fVar12 = fVar14 + fVar12;
              lVar8 = param_3[10];
              uVar4 = *(uint *)(param_3 + 0xb);
            }
            lVar6 = lVar6 + 0x20;
          } while (lVar6 != lVar8 + (ulong)uVar4 * 0x20);
        }
        lVar6 = *param_3;
        if ((*(uint *)(param_3 + 1) & 0xffff) == 0x1c) {
          *(float *)(lVar6 + 0x138) = fVar12;
        }
        else {
          sVar1 = (short)*(uint *)(param_3 + 1);
          if (sVar1 == 0x1b) {
            *(float *)(lVar6 + 0x134) = fVar12;
          }
          else if (sVar1 == 0x1a) {
            *(float *)(lVar6 + 0x130) = fVar12;
          }
        }
      }
      break;
    case 1:
      if (((((*param_5 == 0) || (param_3[3] == *param_5)) &&
           (((int)param_5[1] == 0 || ((int)param_3[4] == (int)param_5[1])))) &&
          (((int)param_5[2] == 0 || ((int)param_3[5] == (int)param_5[2])))) &&
         ((((char)param_5[3] == -1 || ((char)param_3[6] == (char)param_5[3])) &&
          (((((char)param_5[4] == -1 || ((char)param_3[7] == (char)param_5[4])) &&
            ((param_5[5] == 0 || (param_3[8] == param_5[5])))) &&
           ((param_6 == (undefined8 *)0x0 ||
            (uVar5 = (**(code **)*param_6)(param_6), (uVar5 & 1) == 0)))))))) {
        FUN_034b7eec(param_2,param_1,param_3,param_4,&local_b4,&local_b0);
        (**(code **)(*(long *)*param_3 + 0x18))
                  (local_b4,(long *)*param_3,(int)param_3[1],param_4,
                   *(undefined4 *)((long)param_3 + 0x4c));
      }
      break;
    case 2:
      FUN_034b7eec(param_2,param_1,param_3,param_4,&local_b0,&local_b4);
      (**(code **)*puVar11)
                (local_b0 & 0xffffffff,(float)local_b0 - local_b4,puVar11,(int)param_3[1],param_5,
                 param_6);
      break;
    case 3:
      uVar5 = (ulong)*(uint *)(param_3 + 0xb);
      if (*(uint *)(param_3 + 0xb) == 0) {
        fVar12 = 0.0;
      }
      else {
        lVar8 = param_3[10];
        fVar12 = 0.0;
        lVar6 = lVar8;
        do {
          if (*(int *)(lVar6 + 4) == param_4) {
            local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar6 + 0x18));
            fVar14 = (float)FUN_03447dcc(param_2,lVar6 + 8,&local_b0);
            *(float *)(lVar6 + 0x18) = (float)local_b0;
            fVar12 = fVar14 + fVar12;
            lVar8 = param_3[10];
            uVar5 = (ulong)*(uint *)(param_3 + 0xb);
          }
          lVar6 = lVar6 + 0x20;
        } while (lVar6 != lVar8 + uVar5 * 0x20);
        puVar11 = (undefined8 *)*param_3;
      }
      FUN_0348b9d0(fVar12,puVar11,(int)param_3[1],param_5);
      break;
    default:
      lVar6 = puVar11[6];
      if (((lVar6 != 0) && (lVar8 = *(long *)(lVar6 + 0x90), lVar8 != 0)) &&
         ((0 < *(short *)(lVar8 + 0x90) ||
          ((0 < *(short *)(lVar8 + 0x94) && (*(char *)(lVar6 + 0x138) != '\0')))))) {
        if ((int)param_3[1] == 0x3c) {
          FUN_03488dac(param_1,param_2,puVar11,param_5,param_6);
          return;
        }
        if (*(uint *)(puVar11 + 4) != 0) {
          lVar6 = (ulong)*(uint *)(puVar11 + 4) * 0x48;
          plVar3 = (long *)(puVar11[3] + 0x10);
          do {
            if (((*plVar3 != 0) && (lVar8 = *(long *)(*plVar3 + 0x90), lVar8 != 0)) &&
               (0 < *(short *)(lVar8 + 0x90))) {
              uVar4 = *(uint *)(param_3 + 0xb);
              if (uVar4 == 0) {
                fVar14 = 0.0;
                fVar12 = 0.0;
              }
              else {
                lVar8 = param_3[10];
                fVar14 = 0.0;
                lVar6 = lVar8;
                do {
                  if (*(int *)(lVar6 + 4) == param_4) {
                    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar6 + 0x18));
                    fVar12 = (float)FUN_03447dcc(param_2,lVar6 + 8,&local_b0);
                    *(float *)(lVar6 + 0x18) = (float)local_b0;
                    fVar14 = fVar12 + fVar14;
                    lVar8 = param_3[10];
                    uVar4 = *(uint *)(param_3 + 0xb);
                  }
                  lVar6 = lVar6 + 0x20;
                } while (lVar6 != lVar8 + (ulong)uVar4 * 0x20);
                fVar12 = 0.0;
                if (uVar4 != 0) {
                  lVar6 = lVar8;
                  do {
                    if (*(int *)(lVar6 + 4) == param_4) {
                      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar6 + 0x18));
                      fVar13 = (float)FUN_03447dcc(param_1,lVar6 + 8,&local_b0);
                      *(float *)(lVar6 + 0x18) = (float)local_b0;
                      fVar12 = fVar13 + fVar12;
                      lVar8 = param_3[10];
                      uVar4 = *(uint *)(param_3 + 0xb);
                    }
                    lVar6 = lVar6 + 0x20;
                  } while (lVar6 != lVar8 + (ulong)uVar4 * 0x20);
                }
              }
              local_b0 = CONCAT44(local_b0._4_4_,(int)param_3[1]);
              local_74 = 0;
              memcpy(local_a8,param_5,0x30);
              local_78 = *(undefined4 *)(puVar11 + 2);
              uVar4 = *(uint *)(puVar11 + 4);
              if (uVar4 == 0) {
                return;
              }
              lVar8 = puVar11[3];
              lVar6 = lVar8;
              local_70 = param_6;
              local_68 = fVar14;
              fStack_64 = fVar14 - fVar12;
              do {
                plVar3 = *(long **)(lVar6 + 0x10);
                if (((plVar3 != (long *)0x0) && (plVar3[0x12] != 0)) &&
                   (0 < *(short *)(plVar3[0x12] + 0x90))) {
                  (**(code **)(*plVar3 + 0xc0))(plVar3,&local_b0);
                  lVar8 = puVar11[3];
                  uVar4 = *(uint *)(puVar11 + 4);
                }
                lVar6 = lVar6 + 0x48;
              } while (lVar6 != lVar8 + (ulong)uVar4 * 0x48);
              return;
            }
            lVar6 = lVar6 + -0x48;
            plVar3 = plVar3 + 9;
          } while (lVar6 != 0);
        }
      }
      break;
    case 6:
      lVar6 = param_3[10];
      local_b0._0_4_ = (float)*(undefined4 *)(lVar6 + 0x18);
      fVar12 = (float)FUN_03447dcc(param_2,lVar6 + 8,&local_b0);
      *(float *)(lVar6 + 0x18) = (float)local_b0;
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar6 + 0x18));
      fVar14 = (float)FUN_03447dcc(param_1,lVar6 + 8,&local_b0);
      *(float *)(lVar6 + 0x18) = (float)local_b0;
      puVar2 = PTR_DAT_047e7098;
      if (fVar14 != fVar12) {
        lVar8 = *param_3;
        lVar6 = *(long *)PTR_DAT_047e7098;
        iVar7 = *(int *)(lVar6 + 0x1c0) + 1;
        *(int *)(lVar6 + 0x1c0) = iVar7;
        if (((lVar8 != 0) && ((uint)(int)fVar12 < *(uint *)(lVar8 + 0x18))) &&
           (uVar4 = *(uint *)(lVar8 + 0x30), uVar4 != 0)) {
          puVar9 = *(undefined8 **)(lVar8 + 0x28);
          puVar11 = puVar9;
          do {
            if ((*(char *)((long)*puVar11 + 0x14) != '\0') &&
               (plVar3 = *(long **)*puVar11, plVar3 != (long *)0x0)) {
              local_b0 = *param_5;
              local_a8[0] = 0;
              local_a0 = 0;
              local_98 = 0xff;
              local_90 = 0xff;
              local_88 = 0;
              (**(code **)(*plVar3 + 0x10))
                        (plVar3,*(undefined4 *)
                                 (*(long *)(lVar8 + 0x10) + (ulong)(uint)(int)fVar12 * 4),&local_b0,
                         param_6);
              puVar9 = *(undefined8 **)(lVar8 + 0x28);
              uVar4 = *(uint *)(lVar8 + 0x30);
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar9 + uVar4);
          lVar6 = *(long *)puVar2;
          iVar7 = *(int *)(lVar6 + 0x1c0);
        }
        *(int *)(lVar6 + 0x1c0) = iVar7 + -1;
        if (iVar7 + -1 == 0) {
          if (*(int *)(lVar6 + 0x1b8) != 0) {
            piVar10 = *(int **)(lVar6 + 0x1b0);
            do {
              if (*piVar10 == 1) {
                FUN_034e4b94(lVar6,*(undefined8 *)(piVar10 + 2));
              }
              else if (*piVar10 == 0) {
                FUN_034e4294(lVar6,*(undefined8 *)(piVar10 + 2),piVar10[4]);
              }
              piVar10 = piVar10 + 6;
            } while (piVar10 !=
                     (int *)(*(long *)(lVar6 + 0x1b0) + (ulong)*(uint *)(lVar6 + 0x1b8) * 0x18));
          }
          *(undefined4 *)(lVar6 + 0x1b8) = 0;
        }
      }
    }
  }
  return;
}


