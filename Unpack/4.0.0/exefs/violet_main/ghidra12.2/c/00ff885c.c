/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff885c; name: FUN_00ff885c
 */


void FUN_00ff885c(long param_1,undefined8 param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined *__compar;
  undefined *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  ushort *puVar7;
  int *piVar8;
  ulong uVar9;
  undefined4 *puVar10;
  float fVar11;
  long local_188;
  int *local_180;
  long local_170;
  int *local_168;
  long local_158;
  int *local_150;
  long local_140;
  int *local_138;
  long local_128;
  int *local_120;
  long local_110;
  int *local_108;
  long local_f8;
  int *local_f0;
  long local_e0;
  int *local_d8;
  long local_c8;
  int *local_c0;
  undefined8 local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long local_90;
  int *local_88;
  char *local_68;
  
  puVar3 = PTR_DAT_047d5608;
  __compar = PTR_LAB_047d5600;
  uVar9 = 0;
  puVar10 = (undefined4 *)(param_1 + 0x3c);
  do {
    local_98 = (long *)0x0;
    local_b0 = 0x969db2266fad6586;
    local_a8 = "Egg";
    uStack_a0 = 3;
    FUN_00ff9734(&local_90,param_2,&local_b0,uVar9 & 0xffffffff);
    fVar11 = 0.0;
    if (local_88 != (int *)0x0) {
      if ((*(ushort *)((long)local_88 - (long)*local_88) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_88 - (long)*local_88))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_88 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "DetectionRate";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
        fVar11 = 0.0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          fVar11 = *(float *)(local_90 + uVar6);
        }
        else {
          fVar11 = 0.0;
          if (0xe < uVar2) {
            fVar11 = 0.0;
            if ((ulong)puVar7[7] != 0) {
              fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
    puVar10[-0xf] = fVar11;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0x8e0bd52f821031a1;
    local_a8 = "Capture";
    uStack_a0 = 7;
    FUN_00ff9734(&local_c8,param_2,&local_b0,uVar9 & 0xffffffff);
    fVar11 = 0.0;
    if (local_c0 != (int *)0x0) {
      if ((*(ushort *)((long)local_c0 - (long)*local_c0) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_c0 - (long)*local_c0))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_c0 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "Scale";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
        fVar11 = 0.0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          fVar11 = *(float *)(local_c8 + uVar6);
        }
        else {
          fVar11 = 0.0;
          if (0xe < uVar2) {
            fVar11 = 0.0;
            if ((ulong)puVar7[7] != 0) {
              fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
    puVar10[-0xc] = fVar11;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0x96d6cb266fdd5548;
    local_a8 = "Exp";
    uStack_a0 = 3;
    FUN_00ff9734(&local_e0,param_2,&local_b0,uVar9 & 0xffffffff);
    fVar11 = 0.0;
    if (local_d8 != (int *)0x0) {
      if ((*(ushort *)((long)local_d8 - (long)*local_d8) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_d8 - (long)*local_d8))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_d8 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "Scale";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
        fVar11 = 0.0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          fVar11 = *(float *)(local_e0 + uVar6);
        }
        else {
          fVar11 = 0.0;
          if (0xe < uVar2) {
            fVar11 = 0.0;
            if ((ulong)puVar7[7] != 0) {
              fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
    puVar10[-9] = fVar11;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0x1fba01a65cc09462;
    local_a8 = "LostProperty";
    uStack_a0 = 0xc;
    FUN_00ff9734(&local_f8,param_2,&local_b0,uVar9 & 0xffffffff);
    fVar11 = 0.0;
    if (local_f0 != (int *)0x0) {
      if ((*(ushort *)((long)local_f0 - (long)*local_f0) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_f0 - (long)*local_f0))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_f0 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "AddLotteryProb";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
        fVar11 = 0.0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          fVar11 = *(float *)(local_f8 + uVar6);
        }
        else {
          fVar11 = 0.0;
          if (0xe < uVar2) {
            fVar11 = 0.0;
            if ((ulong)puVar7[7] != 0) {
              fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
    puVar10[-6] = fVar11;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0xb5871e0f5b2bb491;
    local_a8 = "Raid";
    uStack_a0 = 4;
    FUN_00ff9734(&local_110,param_2,&local_b0,uVar9 & 0xffffffff);
    uVar5 = 0;
    if (local_108 != (int *)0x0) {
      if ((*(ushort *)((long)local_108 - (long)*local_108) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_108 - (long)*local_108))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_108 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "AddRewardSlots";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
LAB_00ff95f0:
        uVar5 = 0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          uVar5 = *(undefined4 *)(local_110 + uVar6);
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00ff95f0;
          uVar5 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[6]);
        }
      }
    }
    puVar10[-3] = uVar5;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0x2f769d629399d5af;
    local_a8 = "AnotherName";
    uStack_a0 = 0xb;
    FUN_00ff9734(&local_128,param_2,&local_b0,uVar9 & 0xffffffff);
    uVar5 = 0;
    if (local_120 != (int *)0x0) {
      if ((*(ushort *)((long)local_120 - (long)*local_120) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_120 - (long)*local_120))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_120 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "AddLotteryTimes";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
LAB_00ff9610:
        uVar5 = 0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          uVar5 = *(undefined4 *)(local_128 + uVar6);
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00ff9610;
          uVar5 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[6]);
        }
      }
    }
    *puVar10 = uVar5;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0xb56f1d0f5b1720fd;
    local_a8 = "Rare";
    uStack_a0 = 4;
    FUN_00ff9734(&local_140,param_2,&local_b0,uVar9 & 0xffffffff);
    uVar5 = 0;
    if (local_138 != (int *)0x0) {
      if ((*(ushort *)((long)local_138 - (long)*local_138) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_138 - (long)*local_138))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_138 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "AddLotteryTimes";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
LAB_00ff9630:
        uVar5 = 0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          uVar5 = *(undefined4 *)(local_140 + uVar6);
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00ff9630;
          uVar5 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[6]);
        }
      }
    }
    puVar10[3] = uVar5;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0x63463b242c450d67;
    local_a8 = "Gigant";
    uStack_a0 = 6;
    FUN_00ff9734(&local_158,param_2,&local_b0,uVar9 & 0xffffffff);
    fVar11 = 0.0;
    if (local_150 != (int *)0x0) {
      if ((*(ushort *)((long)local_150 - (long)*local_150) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_150 - (long)*local_150))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_150 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "Size";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
        fVar11 = 0.0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          fVar11 = *(float *)(local_158 + uVar6);
        }
        else {
          fVar11 = 0.0;
          if (0xe < uVar2) {
            fVar11 = 0.0;
            if ((ulong)puVar7[7] != 0) {
              fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
    puVar10[6] = fVar11;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0x5f0752f138cf0e97;
    local_a8 = "Minimum";
    uStack_a0 = 7;
    FUN_00ff9734(&local_170,param_2,&local_b0,uVar9 & 0xffffffff);
    fVar11 = 0.0;
    if (local_168 != (int *)0x0) {
      if ((*(ushort *)((long)local_168 - (long)*local_168) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_168 - (long)*local_168))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_168 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "Size";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
        fVar11 = 0.0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          fVar11 = *(float *)(local_170 + uVar6);
        }
        else {
          fVar11 = 0.0;
          if (0xe < uVar2) {
            fVar11 = 0.0;
            if ((ulong)puVar7[7] != 0) {
              fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
    puVar10[9] = fVar11;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = 0xb5f4a90dc10ec61;
    local_a8 = "Encount";
    uStack_a0 = 7;
    FUN_00ff9734(&local_188,param_2,&local_b0,uVar9 & 0xffffffff);
    fVar11 = 0.0;
    if (local_180 != (int *)0x0) {
      if ((*(ushort *)((long)local_180 - (long)*local_180) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)local_180 - (long)*local_180))[3], uVar6 == 0)) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)((long)local_180 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      local_68 = "Appearance";
      puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if (puVar4 == (uint *)0x0) {
        fVar11 = 0.0;
      }
      else {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar7;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar6 * 8) == 4) {
          if ((uVar2 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          fVar11 = *(float *)(local_188 + uVar6);
        }
        else {
          fVar11 = 0.0;
          if (0xe < uVar2) {
            fVar11 = 0.0;
            if ((ulong)puVar7[7] != 0) {
              fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
    puVar10[0xc] = fVar11;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    uVar9 = uVar9 + 1;
    puVar10 = puVar10 + 1;
    if (uVar9 == 3) {
      return;
    }
  } while( true );
}


