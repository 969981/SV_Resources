/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347ff40; name: FUN_0347ff40
 */


long FUN_0347ff40(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 ulong param_6)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  char cVar6;
  short sVar7;
  undefined1 auVar8 [16];
  undefined *puVar9;
  float fVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  short *psVar21;
  bool bVar22;
  uint uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  long *local_88;
  long lStack_80;
  undefined8 local_78;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  plVar12 = (long *)param_2[7];
  if (plVar12 == (long *)0x0) goto LAB_0348050c;
  lVar13 = (**(code **)(*plVar12 + 0x18))(plVar12,PTR_PTR_047e71e0);
  param_1[1] = lVar13;
  param_1[2] = (long)param_2;
  if (param_1 != (long *)0x0) {
    nn::os::LockMutex((MutexType *)(param_2 + 0xe));
    if (param_2[0x12] == 0) {
      param_2[0x12] = (long)param_1;
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = param_2[0x12];
      param_2[0x12] = (long)param_1;
    }
    nn::os::UnlockMutex((MutexType *)(param_2 + 0xe));
    (**(code **)(*param_2 + 0x10))(param_2);
    param_2 = (long *)param_1[2];
  }
  *(undefined4 *)(param_1 + 10) = 0;
  uVar23 = *(uint *)(param_2 + 0xd);
  uVar11 = *(uint *)(param_2 + 0xb);
  if (uVar11 != 0) {
    uVar18 = (ulong)uVar11 * 0x28 - 0x28;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar13 = param_2[10];
    if ((SUB164(auVar8 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
      if (*(char *)(lVar13 + 5) != '\x01') {
        uVar23 = uVar23 + 1;
      }
      lVar14 = lVar13 + 0x28;
    }
    else {
      lVar14 = lVar13;
    }
    if (0x27 < uVar18) {
      do {
        pcVar1 = (char *)(lVar14 + 5);
        pcVar2 = (char *)(lVar14 + 0x2d);
        lVar14 = lVar14 + 0x50;
        if (*pcVar1 != '\x01') {
          uVar23 = uVar23 + 1;
        }
        if (*pcVar2 != '\x01') {
          uVar23 = uVar23 + 1;
        }
      } while (lVar13 + (ulong)uVar11 * 0x28 != lVar14);
    }
  }
  lVar13 = (**(code **)(param_2[3] + 0x38))(param_2 + 3);
  plVar12 = (long *)(**(code **)(*(long *)(param_1[2] + 0x18) + 0x80))();
  if ((lVar13 != 0) && (plVar12 != (long *)0x0)) {
    lVar14 = *plVar12;
    if (lVar14 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = 0;
      do {
        lVar14 = *(long *)(lVar14 + 0x10);
        iVar16 = iVar16 + 1;
      } while (lVar14 != 0);
    }
    uVar23 = uVar23 + *(int *)(lVar13 + 8) * iVar16;
  }
  if (uVar23 == 0) {
LAB_03480144:
    if (param_1[1] != 0) {
      lVar13 = param_1[2];
      if (*(int *)(lVar13 + 0x68) != 0) {
        lVar14 = 0;
        uVar18 = 0;
        lVar17 = 0xc;
        do {
          puVar5 = (undefined2 *)(*(long *)(lVar13 + 0x60) + lVar14);
          lVar19 = param_1[9];
          lVar13 = lVar14 * 2;
          lVar14 = lVar14 + 8;
          *(undefined2 *)(lVar19 + lVar13 + 8) = *puVar5;
          uVar18 = uVar18 + 1;
          *(undefined4 *)(lVar19 + lVar17) = *(undefined4 *)(puVar5 + 2);
          lVar13 = param_1[2];
          lVar17 = lVar17 + 0x10;
        } while (uVar18 < *(uint *)(lVar13 + 0x68));
      }
      puVar9 = PTR_DAT_047e6fd8;
      if (param_3 == (long *)0x0) {
        if ((param_6 & 1) != 0) {
          FUN_03480534(param_1,param_4,param_5);
        }
      }
      else if (lVar13 != 0) {
        plVar12 = param_3 + 2;
        if (*(int *)(lVar13 + 0x58) == 0) {
          memcpy(param_1 + 3,plVar12,0x30);
        }
        else {
          puVar20 = *(undefined4 **)(lVar13 + 0x50);
          do {
            iVar16 = 0;
            if (puVar20[6] != 0) {
              iVar16 = puVar20[6] + -2;
            }
            FUN_034b5ad4(*(undefined8 *)puVar9,param_1,*puVar20,*(undefined1 *)(puVar20 + 1),
                         *(undefined1 *)((long)puVar20 + 5),*(undefined2 *)((long)puVar20 + 6),
                         puVar20[2],puVar20[7],*(long *)(puVar20 + 4) + 0xc,iVar16,plVar12,1,1);
            puVar20 = puVar20 + 10;
          } while (puVar20 !=
                   (undefined4 *)(*(long *)(lVar13 + 0x50) + (ulong)*(uint *)(lVar13 + 0x58) * 0x28)
                  );
          lVar13 = param_1[2];
          memcpy(param_1 + 3,plVar12,0x30);
          if (lVar13 == 0) goto LAB_03480324;
        }
        local_78 = 1;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0xff00;
        local_c0 = 0;
        local_98 = 0x100000000;
        uStack_90 = 0;
        lStack_80 = param_3[0x2e];
        local_88 = param_1;
        (**(code **)(*param_3 + 0x50))(param_3,&local_c0,1);
        puVar9 = PTR_DAT_047e7048;
        local_98 = local_98 & 0xffffffff00000000;
        lVar13 = param_1[2];
        uVar18 = (ulong)*(uint *)(lVar13 + 0x58);
        if (*(uint *)(lVar13 + 0x58) != 0) {
          lVar17 = *(long *)(lVar13 + 0x50);
          lVar14 = lVar17;
          do {
            if (*(char *)(lVar14 + 4) == '\x02') {
              FUN_03497f00(*(undefined8 *)puVar9,&local_88,&local_c0,param_3 + 10);
              lVar17 = *(long *)(lVar13 + 0x50);
              uVar18 = (ulong)*(uint *)(lVar13 + 0x58);
            }
            lVar14 = lVar14 + 0x28;
          } while (lVar14 != lVar17 + uVar18 * 0x28);
        }
      }
LAB_03480324:
      plVar12 = (long *)(**(code **)(*(long *)(param_1[2] + 0x18) + 0x38))();
      if ((plVar12 != (long *)0x0) && ((int)plVar12[1] != 0)) {
        uVar23 = *(uint *)(param_1 + 10);
        psVar21 = (short *)*plVar12;
        if (uVar23 == 0) {
          do {
            cVar6 = (char)psVar21[1];
            fVar25 = 1.0;
            if (cVar6 != '\x03') {
              fVar25 = 0.0;
            }
            sVar7 = *psVar21;
            local_c0 = CONCAT44(local_c0._4_4_,fVar25);
            if (cVar6 != '\x03') {
              uVar18 = FUN_03480d58(param_1[2] + 0x18,param_1,sVar7,&local_c0);
              if ((cVar6 == '\x04') && ((uVar18 & 1) != 0)) {
                local_c0 = CONCAT44(local_c0._4_4_,(float)local_c0 - fVar25);
              }
            }
            else {
              FUN_03480bf4();
            }
            (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],sVar7,&local_c0,4);
            psVar21 = psVar21 + 2;
          } while (psVar21 != (short *)(*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 4));
        }
        else {
          do {
            cVar6 = (char)psVar21[1];
            uVar24 = 0x3f800000;
            if (cVar6 != '\x03') {
              uVar24 = 0;
            }
            sVar7 = *psVar21;
            local_c0 = CONCAT44(local_c0._4_4_,uVar24);
            bVar22 = false;
            pfVar15 = (float *)(param_1[9] + 0xc);
            if (cVar6 != '\x03') {
              fVar25 = 0.0;
              fVar26 = 0.0;
              uVar18 = (ulong)uVar23;
              do {
                if (*(short *)(pfVar15 + -1) == sVar7) {
                  fVar25 = *pfVar15 + fVar25;
                  local_c0 = CONCAT44(local_c0._4_4_,fVar25);
                  fVar10 = *pfVar15;
                  if (pfVar15[-3] != 0.0) {
                    fVar10 = fVar26;
                  }
                  fVar26 = fVar10;
                  bVar22 = (bool)(bVar22 | pfVar15[-3] != 0.0);
                }
                pfVar15 = pfVar15 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            else {
              fVar25 = 1.0;
              fVar26 = 1.0;
              uVar18 = (ulong)uVar23;
              do {
                if (*(short *)(pfVar15 + -1) == sVar7) {
                  fVar25 = *pfVar15 * fVar25;
                  local_c0 = CONCAT44(local_c0._4_4_,fVar25);
                  fVar10 = *pfVar15;
                  if (pfVar15[-3] != 0.0) {
                    fVar10 = fVar26;
                  }
                  fVar26 = fVar10;
                  bVar22 = (bool)(bVar22 | pfVar15[-3] != 0.0);
                }
                pfVar15 = pfVar15 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            if (cVar6 == '\x03') {
              FUN_03480bf4();
            }
            else {
              uVar11 = FUN_03480d58(param_1[2] + 0x18,param_1,sVar7,&local_c0);
              if ((cVar6 == '\x04') && (bVar22 || (uVar11 & 1) != 0)) {
                local_c0 = CONCAT44(local_c0._4_4_,(float)local_c0 - fVar26);
              }
            }
            (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],sVar7,&local_c0,4);
            psVar21 = psVar21 + 2;
          } while (psVar21 != (short *)(*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 4));
        }
      }
      goto LAB_0348050c;
    }
  }
  else {
    uVar11 = *(uint *)(param_1 + 10);
    if (uVar23 < uVar11) {
LAB_03480140:
      *(uint *)(param_1 + 10) = uVar23;
      goto LAB_03480144;
    }
    if (uVar23 <= *(uint *)((long)param_1 + 0x54)) {
LAB_03480108:
      if (uVar11 < uVar23) {
        lVar14 = (ulong)uVar23 - (ulong)uVar11;
        lVar13 = (ulong)uVar11 << 4;
        do {
          if (param_1[9] != 0) {
            puVar4 = (undefined8 *)(param_1[9] + lVar13);
            *puVar4 = 0;
            *(undefined2 *)(puVar4 + 1) = 0;
            *(undefined4 *)((long)puVar4 + 0xc) = 0;
          }
          lVar14 = lVar14 + -1;
          lVar13 = lVar13 + 0x10;
        } while (lVar14 != 0);
      }
      goto LAB_03480140;
    }
    uVar3 = *(uint *)((long)param_1 + 0x54) + (uVar23 - uVar11);
    lVar13 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,param_1[9],(ulong)uVar3 << 4);
    if (lVar13 != 0) {
      param_1[9] = lVar13;
      *(uint *)((long)param_1 + 0x54) = uVar3;
      goto LAB_03480108;
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1);
LAB_0348050c:
  return param_1[1];
}


