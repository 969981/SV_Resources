/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b5ad4; name: FUN_034b5ad4
 */


int FUN_034b5ad4(long *param_1,long param_2,uint param_3,int param_4,undefined4 param_5,int param_6,
                int param_7,int param_8,void *param_9,int param_10,void *param_11,int param_12,
                byte param_13)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  code *pcVar12;
  int *piVar13;
  long lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long *plVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  int *piVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 uVar30;
  undefined **local_b8;
  long *plStack_b0;
  uint *local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  uint local_64;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uVar22 = *(uint *)(param_1 + 4);
  plVar10 = param_1 + 3;
  if (uVar22 != 0) {
    uVar11 = (int)param_2 + param_6;
    uVar25 = 0;
    if (uVar22 != 0) {
      uVar25 = uVar11 / uVar22;
    }
    for (plVar21 = *(long **)(*plVar10 + (ulong)(uVar11 - uVar25 * uVar22) * 8);
        plVar21 != (long *)0x0; plVar21 = (long *)plVar21[2]) {
      if ((*plVar21 == param_2) && ((int)plVar21[1] == param_6)) {
        if (*(uint *)(plVar21 + 0xb) == 0) goto LAB_034b5d84;
        piVar23 = (int *)plVar21[10];
        lVar7 = (ulong)*(uint *)(plVar21 + 0xb) << 5;
        goto LAB_034b5fb4;
      }
    }
  }
  plVar21 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x60);
  if (plVar21 == (long *)0x0) {
    return 0x34;
  }
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[4] = 0;
  plVar21[5] = 0;
  plVar21[3] = 0;
  *(undefined1 *)(plVar21 + 6) = 0xff;
  *(undefined1 *)(plVar21 + 7) = 0xff;
  plVar21[8] = 0;
  *plVar21 = param_2;
  *(int *)(plVar21 + 9) = param_12;
  *(undefined4 *)((long)plVar21 + 0x4c) = param_5;
  plVar21[1] = 0;
  plVar21[2] = 0;
  *(int *)(plVar21 + 1) = param_6;
  plVar21[10] = 0;
  plVar21[0xb] = 0;
  memcpy(plVar21 + 3,param_11,0x30);
  uVar22 = *(uint *)(param_1 + 4);
  if (uVar22 == 0) {
LAB_034b5c18:
    uVar26 = 0x1d;
    goto LAB_034b5c1c;
  }
  fVar27 = (float)NEON_ucvtf((int)param_1[5]);
  if (fVar27 / (float)uVar22 <= 0.9) {
    lVar7 = param_2;
LAB_034b5d54:
    uVar11 = (int)plVar21[1] + (int)lVar7;
    uVar25 = 0;
    if (uVar22 != 0) {
      uVar25 = uVar11 / uVar22;
    }
    uVar11 = uVar11 - uVar25 * uVar22;
    plVar21[2] = *(long *)(param_1[3] + (ulong)uVar11 * 8);
    *(long **)(param_1[3] + (ulong)uVar11 * 8) = plVar21;
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  }
  else {
    if (uVar22 < 0x1d) goto LAB_034b5c18;
    if (uVar22 < 0x35) {
      uVar26 = 0x35;
LAB_034b5c1c:
      lVar24 = param_1[3];
      uVar28 = *(undefined4 *)((long)param_1 + 0x24);
      *plVar10 = 0;
      param_1[4] = 0;
      lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,uVar26 << 3);
      if (lVar7 != 0) {
        uVar25 = (uint)uVar26;
        param_1[3] = lVar7;
        *(uint *)((long)param_1 + 0x24) = uVar25;
        uVar11 = uVar25;
        while( true ) {
          uVar11 = uVar11 - 1;
          uVar3 = *(uint *)(param_1 + 4);
          if (uVar3 < (uint)uVar26) {
            *(uint *)(param_1 + 4) = uVar3 + 1;
            if (param_1[3] != 0) {
              *(undefined8 *)(param_1[3] + (ulong)uVar3 * 8) = 0;
            }
          }
          if (uVar11 == 0) break;
          uVar26 = (ulong)*(uint *)((long)param_1 + 0x24);
        }
        if (uVar22 != 0) {
          uVar26 = 0;
          do {
            piVar23 = *(int **)(lVar24 + uVar26 * 8);
            while (piVar23 != (int *)0x0) {
              uVar11 = 0;
              if (uVar25 != 0) {
                uVar11 = (uint)(piVar23[2] + *piVar23) / uVar25;
              }
              piVar18 = *(int **)(piVar23 + 4);
              uVar11 = (piVar23[2] + *piVar23) - uVar11 * uVar25;
              *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(*plVar10 + (ulong)uVar11 * 8);
              *(int **)(*plVar10 + (ulong)uVar11 * 8) = piVar23;
              piVar23 = piVar18;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 != uVar22);
        }
        if (lVar24 != 0) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar24);
        }
        goto LAB_034b5cfc;
      }
      if (*plVar10 != 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        param_1[3] = 0;
        *(undefined4 *)((long)param_1 + 0x24) = 0;
      }
      *(uint *)(param_1 + 4) = uVar22;
      *(undefined4 *)((long)param_1 + 0x24) = uVar28;
      param_1[3] = lVar24;
    }
    else {
      if (uVar22 < 0x61) {
        uVar26 = 0x61;
        goto LAB_034b5c1c;
      }
      if (uVar22 < 0xc1) {
        uVar26 = 0xc1;
        goto LAB_034b5c1c;
      }
      if (uVar22 < 0x185) {
        uVar26 = 0x185;
        goto LAB_034b5c1c;
      }
      if (uVar22 < 0x301) {
        uVar26 = 0x301;
        goto LAB_034b5c1c;
      }
      if (uVar22 < 0x607) {
        uVar26 = 0x607;
        goto LAB_034b5c1c;
      }
      if (uVar22 < 0xc07) {
        uVar26 = 0xc07;
        goto LAB_034b5c1c;
      }
      uVar26 = 0x1807;
      if (uVar22 < 0x1807) goto LAB_034b5c1c;
      if (uVar22 < 0x3001) {
        uVar26 = 0x3001;
        goto LAB_034b5c1c;
      }
      uVar26 = 0x6011;
      if ((((uVar22 < 0x6011) || (uVar26 = 0xc005, uVar22 < 0xc005)) ||
          (uVar26 = 0x1800d, uVar22 < 0x1800d)) ||
         ((uVar26 = 0x30005, uVar22 < 0x30005 || (uVar26 = 0x60019, uVar22 < 0x60019))))
      goto LAB_034b5c1c;
      if (uVar22 < 0xc0001) {
        uVar26 = 0xc0001;
        goto LAB_034b5c1c;
      }
      uVar26 = 0x180005;
      if (((((uVar22 < 0x180005) || (uVar26 = 0x30000b, uVar22 < 0x30000b)) ||
           ((uVar26 = 0x60000d, uVar22 < 0x60000d ||
            (((uVar26 = 0xc00005, uVar22 < 0xc00005 || (uVar26 = 0x1800013, uVar22 < 0x1800013)) ||
             (uVar26 = 0x3000005, uVar22 < 0x3000005)))))) ||
          ((uVar26 = 0x6000017, uVar22 < 0x6000017 || (uVar26 = 0xc000013, uVar22 < 0xc000013)))) ||
         ((uVar26 = 0x18000005, uVar22 < 0x18000005 ||
          ((uVar26 = 0x30000059, uVar22 < 0x30000059 || (uVar26 = 0x60000005, uVar22 < 0x60000005)))
          ))) goto LAB_034b5c1c;
LAB_034b5cfc:
      uVar22 = *(uint *)(param_1 + 4);
    }
    if (uVar22 != 0) {
      lVar7 = *plVar21;
      goto LAB_034b5d54;
    }
  }
LAB_034b5d84:
  if ((param_9 != (void *)0x0) && (param_10 != 0)) {
    uVar11 = *(uint *)(plVar21 + 0xb);
    uVar22 = *(uint *)((long)plVar21 + 0x5c);
    if (uVar11 < uVar22) {
LAB_034b5ddc:
      if (uVar11 < uVar22) {
        uVar22 = *(uint *)(plVar21 + 0xb);
        *(uint *)(plVar21 + 0xb) = uVar22 + 1;
        if (plVar21[10] != 0) {
          piVar23 = (int *)(plVar21[10] + (ulong)uVar22 * 0x20);
          plVar17 = (long *)(piVar23 + 2);
          *plVar17 = 0;
          piVar18 = piVar23 + 4;
          piVar18[0] = 0;
          piVar18[1] = 0;
          piVar23[6] = 1;
          *piVar23 = param_7;
          piVar23[1] = param_3;
          piVar23[5] = 0;
          piVar23[6] = 1;
          *piVar18 = param_10 + 2;
          lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(param_10 + 2) * 0x14);
          *plVar17 = lVar7;
          if (lVar7 != 0) {
            piVar23[5] = param_8;
            memcpy((void *)(lVar7 + 0xc),param_9,(ulong)(uint)(param_10 * 0xc));
            *(undefined4 *)(*plVar17 + 8) = 9;
            *(undefined4 *)*plVar17 = 0xff7fffff;
            *(undefined4 *)(*plVar17 + 4) = *(undefined4 *)(*plVar17 + 0x10);
            *(undefined4 *)(*plVar17 + (ulong)(*piVar18 - 1) * 0xc + 8) = 9;
            *(undefined4 *)(*plVar17 + (ulong)(*piVar18 - 1) * 0xc) = 0x7f7fffff;
            *(undefined4 *)(*plVar17 + (ulong)(*piVar18 - 1) * 0xc + 4) =
                 *(undefined4 *)(*plVar17 + (ulong)(*piVar18 - 2) * 0xc + 4);
            FUN_0346cdac(plVar17);
            goto LAB_034b5f0c;
          }
          *piVar18 = 0;
          *(int *)(plVar21 + 0xb) = (int)plVar21[0xb] + -1;
        }
      }
    }
    else {
      iVar6 = uVar22 + (uVar22 >> 1);
      if (uVar22 == 0) {
        iVar6 = 1;
      }
      uVar22 = iVar6 + uVar22;
      lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar21[10],(ulong)uVar22 << 5);
      if (lVar7 != 0) {
        plVar21[10] = lVar7;
        *(uint *)((long)plVar21 + 0x5c) = uVar22;
        goto LAB_034b5ddc;
      }
    }
LAB_034b6224:
    iVar6 = 0x34;
LAB_034b6228:
    if ((int)plVar21[0xb] == 0) {
      uVar22 = *(uint *)(param_1 + 4);
      if (uVar22 != 0) {
        uVar11 = (int)param_2 + param_6;
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = uVar11 / uVar22;
        }
        plVar10 = (long *)(*plVar10 + (ulong)(uVar11 - uVar25 * uVar22) * 8);
        plVar17 = (long *)*plVar10;
        if (plVar17 != (long *)0x0) {
          plVar19 = (long *)0x0;
          do {
            if ((*plVar17 == param_2) && ((int)plVar17[1] == param_6)) {
              if (plVar19 != (long *)0x0) {
                plVar10 = plVar19 + 2;
              }
              *plVar10 = plVar17[2];
              *(int *)(param_1 + 5) = (int)param_1[5] + -1;
              break;
            }
            plVar20 = plVar17 + 2;
            plVar19 = plVar17;
            plVar17 = (long *)*plVar20;
          } while ((long *)*plVar20 != (long *)0x0);
        }
      }
      FUN_034b5984(param_1,plVar21);
      if (plVar21[10] != 0) {
        *(undefined4 *)(plVar21 + 0xb) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        plVar21[10] = 0;
        *(undefined4 *)((long)plVar21 + 0x5c) = 0;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar21);
    }
    return iVar6;
  }
  iVar6 = 0x1f;
  if ((param_6 != 0x3c) || (param_12 != 5)) goto LAB_034b6228;
LAB_034b5f0c:
  if (param_4 == 2) {
    iVar6 = FUN_03498000(*(undefined8 *)PTR_DAT_047e7048,param_3,plVar21);
    if (iVar6 != 1) goto LAB_034b6228;
  }
  else {
    lVar7 = FUN_034b8328(param_1,param_3);
    if (lVar7 == 0) goto LAB_034b6224;
    uVar22 = *(uint *)(lVar7 + 0x60);
    plVar17 = (long *)(lVar7 + 0x58);
    if (uVar22 != 0) {
      iVar6 = 0;
      uVar11 = uVar22;
      do {
        iVar2 = iVar6 + (uVar11 >> 1);
        plVar19 = *(long **)(*plVar17 + (long)iVar2 * 8);
        if (plVar19 == plVar21) goto LAB_034b5f3c;
        if (((int)plVar19[9] < (int)plVar21[9]) ||
           ((plVar19 < plVar21 && ((int)plVar19[9] == (int)plVar21[9])))) {
          iVar6 = iVar2 + 1;
          uVar11 = uVar11 - 1;
        }
        uVar11 = uVar11 >> 1;
      } while (uVar11 != 0);
    }
    uVar11 = *(uint *)(lVar7 + 0x50);
    plVar19 = (long *)(lVar7 + 0x48);
    if (uVar11 != 0) {
      iVar6 = 0;
      uVar25 = uVar11;
      do {
        iVar2 = iVar6 + (uVar25 >> 1);
        plVar20 = *(long **)(*plVar19 + (long)iVar2 * 8);
        if (plVar20 == plVar21) goto LAB_034b5f3c;
        if (((int)plVar20[9] < (int)plVar21[9]) ||
           ((plVar20 < plVar21 && ((int)plVar20[9] == (int)plVar21[9])))) {
          iVar6 = iVar2 + 1;
          uVar25 = uVar25 - 1;
        }
        uVar25 = uVar25 >> 1;
      } while (uVar25 != 0);
    }
    uVar22 = uVar22 + uVar11 + 1;
    if (*(uint *)(lVar7 + 0x54) < uVar22) {
      lVar24 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar19,(ulong)(uVar22 * 2) << 3);
      if (lVar24 == 0) goto LAB_034b6224;
      *(uint *)(lVar7 + 0x54) = uVar22 * 2;
      *(long *)(lVar7 + 0x48) = lVar24;
    }
    if (*(uint *)(lVar7 + 100) < uVar22) {
      lVar24 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar17,(ulong)(uVar22 * 2) << 3);
      if (lVar24 == 0) goto LAB_034b6224;
      *(long *)(lVar7 + 0x58) = lVar24;
      *(uint *)(lVar7 + 100) = uVar22 * 2;
    }
    if ((param_13 & 1) == 0) {
      plVar19 = plVar17;
    }
    puVar8 = (undefined8 *)FUN_03499160(plVar19,plVar21);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = plVar21;
    }
    if ((param_13 & 1) != 0) {
      if ((int)plVar21[9] - 4U < 2) {
        pcVar12 = *(code **)(*(long *)*plVar21 + 0x10);
      }
      else {
        if ((int)plVar21[9] != 2) goto LAB_034b5f3c;
        plVar10 = (long *)0x0;
        if (*plVar21 != 0) {
          plVar10 = (long *)(*plVar21 + -0x38);
        }
        pcVar12 = *(code **)(*plVar10 + 0x28);
      }
      (*pcVar12)();
    }
  }
LAB_034b5f3c:
  switch((int)plVar21[9]) {
  case 0:
    uVar28 = FUN_03482338(param_1,plVar21,plVar21 + 3);
    lVar7 = *plVar21;
    if ((*(uint *)(plVar21 + 1) & 0xffff) == 0x1c) {
      *(undefined4 *)(lVar7 + 0x138) = uVar28;
    }
    else {
      sVar4 = (short)*(uint *)(plVar21 + 1);
      if (sVar4 == 0x1b) {
        *(undefined4 *)(lVar7 + 0x134) = uVar28;
      }
      else if (sVar4 == 0x1a) {
        *(undefined4 *)(lVar7 + 0x130) = uVar28;
      }
    }
    break;
  case 1:
    plVar10 = (long *)*plVar21;
    iVar6 = *(int *)((long)plVar21 + 0x4c);
    if (param_3 == 0) {
      uVar30 = 0x3f800000;
      if (iVar6 != 3) {
        uVar30 = 0;
      }
      (**(code **)(*plVar10 + 0x20))(uVar30,plVar10,(int)plVar21[1],0,iVar6,1);
      return 1;
    }
    if (iVar6 == 3) {
      memcpy(&local_a0,plVar21 + 3,0x30);
      uVar22 = *(uint *)(param_1 + 1);
      if (uVar22 != 0) {
        uVar11 = 0;
        if (uVar22 != 0) {
          uVar11 = param_3 / uVar22;
        }
        for (puVar9 = *(uint **)(*param_1 + (ulong)(param_3 - uVar11 * uVar22) * 8);
            puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
          if (*puVar9 == param_3) {
            puVar9 = (uint *)FUN_034825d4(puVar9 + 8,&local_a0);
            if (puVar9 == (uint *)0x0) goto LAB_034b6434;
            local_64 = *puVar9;
            goto LAB_034b69e0;
          }
        }
      }
      lVar7 = *(long *)PTR_DAT_047e6f28;
      pMVar1 = (MutexType *)(lVar7 + 0x188);
      nn::os::LockMutex(pMVar1);
      uVar22 = *(uint *)(lVar7 + 0x1b0);
      if (uVar22 != 0) {
        uVar11 = 0;
        if (uVar22 != 0) {
          uVar11 = param_3 / uVar22;
        }
        for (plVar17 = *(long **)(*(long *)(lVar7 + 0x1a8) + (ulong)(param_3 - uVar11 * uVar22) * 8)
            ; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
          if (*(uint *)(plVar17 + 2) == param_3) {
            *(int *)((long)plVar17 + 0x14) = *(int *)((long)plVar17 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            uVar26 = FUN_0348d8a8(plVar17,&local_a0,&local_64);
            (**(code **)(*plVar17 + 0x18))(plVar17);
            if ((uVar26 & 1) == 0) goto LAB_034b6434;
            goto LAB_034b69e0;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
LAB_034b6434:
      uVar22 = *(uint *)(param_1 + 1);
      if (uVar22 == 0) {
LAB_034b68f0:
        local_64 = 0;
      }
      else {
        uVar11 = 0;
        if (uVar22 != 0) {
          uVar11 = param_3 / uVar22;
        }
        puVar9 = *(uint **)(*param_1 + (ulong)(param_3 - uVar11 * uVar22) * 8);
        if (puVar9 == (uint *)0x0) goto LAB_034b68f0;
        local_64 = 0;
        do {
          if (*puVar9 == param_3) {
            local_64 = puVar9[4];
            break;
          }
          puVar9 = *(uint **)(puVar9 + 2);
        } while (puVar9 != (uint *)0x0);
      }
LAB_034b69e0:
      uVar22 = *(uint *)(plVar21 + 0xb);
      if (uVar22 == 0) {
        fVar27 = 1.0;
      }
      else {
        lVar24 = plVar21[10];
        fVar27 = 1.0;
        lVar7 = lVar24;
        do {
          if (*(uint *)(lVar7 + 4) == param_3) {
            local_b8 = (undefined **)CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar7 + 0x18));
            fVar29 = (float)FUN_03447dcc(local_64,lVar7 + 8,&local_b8);
            *(undefined4 *)(lVar7 + 0x18) = local_b8._0_4_;
            fVar27 = fVar29 * fVar27;
            lVar24 = plVar21[10];
            uVar22 = *(uint *)(plVar21 + 0xb);
          }
          lVar7 = lVar7 + 0x20;
        } while (lVar7 != lVar24 + (ulong)uVar22 * 0x20);
      }
    }
    else {
      memcpy(&local_a0,plVar21 + 3,0x30);
      uVar22 = *(uint *)(param_1 + 1);
      if (uVar22 != 0) {
        uVar11 = 0;
        if (uVar22 != 0) {
          uVar11 = param_3 / uVar22;
        }
        for (puVar9 = *(uint **)(*param_1 + (ulong)(param_3 - uVar11 * uVar22) * 8);
            puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
          if (*puVar9 == param_3) {
            puVar9 = (uint *)FUN_034825d4(puVar9 + 8,&local_a0);
            if (puVar9 == (uint *)0x0) goto LAB_034b6740;
            local_64 = *puVar9;
            goto LAB_034b6a54;
          }
        }
      }
      lVar7 = *(long *)PTR_DAT_047e6f28;
      pMVar1 = (MutexType *)(lVar7 + 0x188);
      nn::os::LockMutex(pMVar1);
      uVar22 = *(uint *)(lVar7 + 0x1b0);
      if (uVar22 != 0) {
        uVar11 = 0;
        if (uVar22 != 0) {
          uVar11 = param_3 / uVar22;
        }
        for (plVar17 = *(long **)(*(long *)(lVar7 + 0x1a8) + (ulong)(param_3 - uVar11 * uVar22) * 8)
            ; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1]) {
          if (*(uint *)(plVar17 + 2) == param_3) {
            *(int *)((long)plVar17 + 0x14) = *(int *)((long)plVar17 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            uVar26 = FUN_0348d8a8(plVar17,&local_a0,&local_64);
            (**(code **)(*plVar17 + 0x18))(plVar17);
            if ((uVar26 & 1) == 0) goto LAB_034b6740;
            goto LAB_034b6a54;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
LAB_034b6740:
      uVar22 = *(uint *)(param_1 + 1);
      if (uVar22 == 0) {
LAB_034b68f8:
        local_64 = 0;
      }
      else {
        uVar11 = 0;
        if (uVar22 != 0) {
          uVar11 = param_3 / uVar22;
        }
        puVar9 = *(uint **)(*param_1 + (ulong)(param_3 - uVar11 * uVar22) * 8);
        if (puVar9 == (uint *)0x0) goto LAB_034b68f8;
        local_64 = 0;
        do {
          if (*puVar9 == param_3) {
            local_64 = puVar9[4];
            break;
          }
          puVar9 = *(uint **)(puVar9 + 2);
        } while (puVar9 != (uint *)0x0);
      }
LAB_034b6a54:
      uVar22 = *(uint *)(plVar21 + 0xb);
      if (uVar22 == 0) {
        fVar27 = 0.0;
      }
      else {
        lVar24 = plVar21[10];
        fVar27 = 0.0;
        lVar7 = lVar24;
        do {
          if (*(uint *)(lVar7 + 4) == param_3) {
            local_b8 = (undefined **)CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar7 + 0x18));
            fVar29 = (float)FUN_03447dcc(local_64,lVar7 + 8,&local_b8);
            *(undefined4 *)(lVar7 + 0x18) = local_b8._0_4_;
            fVar27 = fVar29 + fVar27;
            lVar24 = plVar21[10];
            uVar22 = *(uint *)(plVar21 + 0xb);
          }
          lVar7 = lVar7 + 0x20;
        } while (lVar7 != lVar24 + (ulong)uVar22 * 0x20);
      }
    }
    (**(code **)(*plVar10 + 0x20))
              (fVar27,plVar10,(int)plVar21[1],param_3,*(undefined4 *)((long)plVar21 + 0x4c),0);
    break;
  case 2:
    (**(code **)(*(long *)*plVar21 + 8))((long *)*plVar21,param_3 != 0,(int)plVar21[1]);
    break;
  case 3:
    FUN_03482338(param_1,plVar21,plVar21 + 3);
    FUN_0348b9d0(*plVar21,(int)plVar21[1],plVar21 + 3);
    break;
  default:
    lVar7 = *plVar21;
    uVar22 = *(uint *)(lVar7 + 0x20);
    if (uVar22 != 0) {
      lVar14 = *(long *)(lVar7 + 0x18);
      lVar24 = lVar14;
      do {
        plVar10 = *(long **)(lVar24 + 0x10);
        if (((plVar10 != (long *)0x0) && (plVar10[0x12] != 0)) &&
           (0 < *(short *)(plVar10[0x12] + 0x90))) {
          (**(code **)(*plVar10 + 0x180))(plVar10,param_3 != 0,0);
          lVar14 = *(long *)(lVar7 + 0x18);
          uVar22 = *(uint *)(lVar7 + 0x20);
        }
        lVar24 = lVar24 + 0x48;
      } while (lVar24 != lVar14 + (ulong)uVar22 * 0x48);
      return 1;
    }
    break;
  case 6:
    plVar10 = plVar21 + 3;
    fVar27 = (float)FUN_03482338(param_1,plVar21,plVar10);
    puVar5 = PTR_DAT_047e7098;
    uVar22 = *(uint *)(param_1 + 1);
    if (uVar22 != 0) {
      uVar11 = 0;
      if (uVar22 != 0) {
        uVar11 = param_3 / uVar22;
      }
      local_a8 = *(uint **)(*param_1 + (ulong)(param_3 - uVar11 * uVar22) * 8);
      if (local_a8 != (uint *)0x0) {
LAB_034b64c4:
        if (*local_a8 != param_3) goto code_r0x034b64d0;
        local_a8 = local_a8 + 8;
        local_b8 = &PTR_LAB_047c45a8;
        lVar24 = *plVar21;
        lVar7 = *(long *)PTR_DAT_047e7098;
        iVar6 = *(int *)(lVar7 + 0x1c0) + 1;
        *(int *)(lVar7 + 0x1c0) = iVar6;
        plStack_b0 = plVar10;
        if (((lVar24 != 0) && ((uint)(int)fVar27 < *(uint *)(lVar24 + 0x18))) &&
           (uVar22 = *(uint *)(lVar24 + 0x30), uVar22 != 0)) {
          puVar15 = *(undefined8 **)(lVar24 + 0x28);
          puVar8 = puVar15;
          do {
            if ((*(char *)((long)*puVar8 + 0x14) != '\0') &&
               (plVar21 = *(long **)*puVar8, plVar21 != (long *)0x0)) {
              local_a0 = *plVar10;
              local_98 = 0;
              local_90 = 0;
              local_88 = 0xff;
              local_80 = 0xff;
              local_78 = 0;
              (**(code **)(*plVar21 + 0x10))
                        (plVar21,*(undefined4 *)
                                  (*(long *)(lVar24 + 0x10) + (ulong)(uint)(int)fVar27 * 4),
                         &local_a0,&local_b8);
              puVar15 = *(undefined8 **)(lVar24 + 0x28);
              uVar22 = *(uint *)(lVar24 + 0x30);
            }
            puVar8 = puVar8 + 1;
          } while (puVar8 != puVar15 + uVar22);
          lVar7 = *(long *)puVar5;
          iVar6 = *(int *)(lVar7 + 0x1c0);
        }
        *(int *)(lVar7 + 0x1c0) = iVar6 + -1;
        if (iVar6 + -1 != 0) {
          return 1;
        }
        if (*(int *)(lVar7 + 0x1b8) != 0) {
          piVar23 = *(int **)(lVar7 + 0x1b0);
          do {
            if (*piVar23 == 1) {
              FUN_034e4b94(lVar7,*(undefined8 *)(piVar23 + 2));
            }
            else if (*piVar23 == 0) {
              FUN_034e4294(lVar7,*(undefined8 *)(piVar23 + 2),piVar23[4]);
            }
            piVar23 = piVar23 + 6;
          } while (piVar23 !=
                   (int *)(*(long *)(lVar7 + 0x1b0) + (ulong)*(uint *)(lVar7 + 0x1b8) * 0x18));
        }
        goto LAB_034b65f0;
      }
    }
LAB_034b64d8:
    lVar24 = *plVar21;
    lVar7 = *(long *)PTR_DAT_047e7098;
    iVar6 = *(int *)(lVar7 + 0x1c0) + 1;
    *(int *)(lVar7 + 0x1c0) = iVar6;
    if (((lVar24 != 0) && ((uint)(int)fVar27 < *(uint *)(lVar24 + 0x18))) &&
       (uVar22 = *(uint *)(lVar24 + 0x30), uVar22 != 0)) {
      puVar15 = *(undefined8 **)(lVar24 + 0x28);
      puVar8 = puVar15;
      do {
        if ((*(char *)((long)*puVar8 + 0x14) != '\0') &&
           (plVar21 = *(long **)*puVar8, plVar21 != (long *)0x0)) {
          local_a0 = *plVar10;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0xff;
          local_80 = 0xff;
          local_78 = 0;
          (**(code **)(*plVar21 + 0x10))
                    (plVar21,*(undefined4 *)
                              (*(long *)(lVar24 + 0x10) + (ulong)(uint)(int)fVar27 * 4),&local_a0,0)
          ;
          puVar15 = *(undefined8 **)(lVar24 + 0x28);
          uVar22 = *(uint *)(lVar24 + 0x30);
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar15 + uVar22);
      lVar7 = *(long *)puVar5;
      iVar6 = *(int *)(lVar7 + 0x1c0);
    }
    *(int *)(lVar7 + 0x1c0) = iVar6 + -1;
    if (iVar6 + -1 == 0) {
      if (*(int *)(lVar7 + 0x1b8) != 0) {
        piVar23 = *(int **)(lVar7 + 0x1b0);
        do {
          if (*piVar23 == 1) {
            FUN_034e4b94(lVar7,*(undefined8 *)(piVar23 + 2));
          }
          else if (*piVar23 == 0) {
            FUN_034e4294(lVar7,*(undefined8 *)(piVar23 + 2),piVar23[4]);
          }
          piVar23 = piVar23 + 6;
        } while (piVar23 !=
                 (int *)(*(long *)(lVar7 + 0x1b0) + (ulong)*(uint *)(lVar7 + 0x1b8) * 0x18));
      }
LAB_034b65f0:
      *(undefined4 *)(lVar7 + 0x1b8) = 0;
    }
  }
  return 1;
LAB_034b5fb4:
  if (*piVar23 != param_7) goto code_r0x034b5fc0;
  uVar22 = piVar23[1];
  if (*(long *)(piVar23 + 2) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    piVar23[2] = 0;
    piVar23[3] = 0;
  }
  piVar23[4] = 0;
  piVar23[5] = 0;
  uVar11 = *(uint *)(plVar21 + 0xb);
  piVar18 = (int *)(plVar21[10] + (ulong)uVar11 * 0x20 + -0x20);
  if (piVar23 < piVar18) {
    do {
      piVar13 = piVar23 + 8;
      *(undefined8 *)(piVar23 + 6) = *(undefined8 *)(piVar23 + 0xe);
      *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(piVar23 + 0xc);
      *(undefined8 *)(piVar23 + 2) = *(undefined8 *)(piVar23 + 10);
      *(undefined8 *)piVar23 = *(undefined8 *)piVar13;
      piVar23 = piVar13;
    } while (piVar13 < piVar18);
    uVar11 = *(uint *)(plVar21 + 0xb);
  }
  uVar11 = uVar11 - 1;
  *(uint *)(plVar21 + 0xb) = uVar11;
  uVar25 = *(uint *)(param_1 + 1);
  if (uVar25 != 0) {
    uVar3 = 0;
    if (uVar25 != 0) {
      uVar3 = uVar22 / uVar25;
    }
    for (puVar9 = *(uint **)(*param_1 + (ulong)(uVar22 - uVar3 * uVar25) * 8); puVar9 != (uint *)0x0
        ; puVar9 = *(uint **)(puVar9 + 2)) {
      if (*puVar9 == uVar22) {
        if (uVar11 != 0) {
          lVar7 = (ulong)uVar11 << 5;
          puVar16 = (uint *)(plVar21[10] + 4);
          do {
            if (*puVar16 == uVar22) goto LAB_034b6670;
            lVar7 = lVar7 + -0x20;
            puVar16 = puVar16 + 8;
          } while (lVar7 != 0);
        }
        FUN_034b74e8(puVar9,plVar21);
        break;
      }
    }
  }
LAB_034b6670:
  if (uVar22 != 0) {
    FUN_03498580(*(undefined8 *)PTR_DAT_047e7048,plVar21,uVar22);
  }
  if (plVar21 == (long *)0x0) {
    return 0x1f;
  }
  goto LAB_034b5d84;
code_r0x034b5fc0:
  piVar23 = piVar23 + 8;
  lVar7 = lVar7 + -0x20;
  if (lVar7 == 0) goto LAB_034b5d84;
  goto LAB_034b5fb4;
code_r0x034b64d0:
  local_a8 = *(uint **)(local_a8 + 2);
  if (local_a8 == (uint *)0x0) goto LAB_034b64d8;
  goto LAB_034b64c4;
}


