/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001827d0; name: FUN_001827d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_001827d0(undefined8 param_1,float param_2,void *param_3,undefined1 *param_4,long param_5,
            long param_6,undefined8 param_7,undefined8 param_8,uint param_9,uint param_10,
            undefined8 param_11,float *param_12)

{
  bool bVar1;
  void *__src;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  uint *puVar32;
  uint uVar33;
  long lVar34;
  undefined1 *puVar35;
  int *piVar36;
  ulong uVar37;
  int iVar38;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 in_stack_ffffffffffffeca0;
  undefined8 uVar46;
  undefined4 uVar47;
  ulong in_stack_ffffffffffffeca8;
  long local_12e0;
  long lStack_12d8;
  float local_12d0;
  uint uStack_12cc;
  float local_11d0;
  undefined4 uStack_11cc;
  long local_11c8;
  long local_11c0;
  long local_11b8;
  uint local_11b0 [2];
  long local_11a8;
  long local_11a0;
  float local_10b0;
  undefined4 uStack_10ac;
  long local_10a8;
  long local_10a0;
  int local_1098 [248];
  undefined8 local_cb8 [4];
  float local_c98 [256];
  undefined8 local_898;
  long local_890;
  long local_888;
  long local_880;
  undefined1 auStack_498 [1032];
  void *local_88;
  
  if (param_6 < 0x60) {
    return (undefined1 *)0xffffffffffffffff;
  }
  local_12e0 = param_6;
  lStack_12d8 = param_5;
  if (0x5ff < param_6) {
    iVar38 = (int)param_6;
    iVar14 = iVar38 + 0x2ff;
    if (-1 < iVar38 + 0x100) {
      iVar14 = iVar38 + 0x100;
    }
    uVar18 = 1 << (ulong)(param_9 & 0x1f);
    if (0x1f < (int)uVar18) {
      uVar18 = 0x20;
    }
    if ((int)uVar18 < 9) {
      uVar18 = 8;
    }
    uVar29 = 0x3e;
    if (param_9 != 9) {
      uVar29 = uVar18;
    }
    uVar18 = iVar14 >> 9;
    if ((int)uVar29 <= iVar14 >> 9) {
      uVar18 = uVar29;
    }
    if ((int)uVar18 < 4) {
      uVar18 = 3;
    }
    uVar37 = (ulong)uVar18;
    FUN_0015c528(&local_10b0,uVar37 << 10,param_8,&local_88);
    iVar14 = 0;
    if (uVar18 != 0) {
      iVar14 = iVar38 / (int)uVar18;
    }
    uVar27 = 0;
    do {
      uVar29 = iVar14 * (int)uVar27;
      local_11b0[uVar27] = uVar29;
      iVar30 = iVar38 - uVar29;
      if (uVar27 != uVar18 - 1) {
        iVar30 = iVar14;
      }
      local_1098[uVar27] = iVar30;
      FUN_0015edc0(param_5 + (int)uVar29,(long)iVar30,(void *)((long)local_88 + uVar27 * 0x400),
                   0x100,0);
      uVar27 = uVar27 + 1;
    } while (uVar27 < uVar37);
    FUN_0015c528(&local_11d0,(ulong)(uVar18 * 3) << 5,param_8,&local_11b8);
    uVar29 = 0x40;
    do {
      uVar33 = 0;
      local_c98[0] = 0.0;
      do {
        in_stack_ffffffffffffeca8 = in_stack_ffffffffffffeca8 & 0xffffffff00000000;
        in_stack_ffffffffffffeca0 = CONCAT44((int)((ulong)in_stack_ffffffffffffeca0 >> 0x20),uVar29)
        ;
        FUN_00183b40(uVar33,uVar37,local_88,local_1098,local_11b0,local_11b8,local_c98,param_5,
                     in_stack_ffffffffffffeca0,in_stack_ffffffffffffeca8);
        uVar33 = uVar33 + 1;
      } while (uVar33 < uVar18);
      if (1 < (int)local_c98[0]) {
        uVar27 = (ulong)(int)local_c98[0];
        uVar22 = uVar27 >> 1 & 0x3ffffffffffffff;
        do {
          uVar22 = uVar22 - 1;
          uVar19 = uVar22 * 2 | 1;
          if ((long)uVar19 < (long)uVar27) {
            uVar25 = uVar22;
            do {
              uVar23 = uVar19 + 1;
              if ((long)uVar23 < (long)uVar27) {
                if (*(int *)(local_11b8 + uVar23 * 0x20) <= *(int *)(local_11b8 + uVar19 * 0x20)) {
                  uVar23 = uVar19;
                }
                uVar19 = uVar23;
              }
              plVar3 = (long *)(local_11b8 + uVar19 * 0x20);
              plVar4 = (long *)(local_11b8 + uVar25 * 0x20);
              if ((int)*plVar3 < (int)*plVar4) break;
              local_898 = *plVar4;
              local_890 = plVar4[1];
              local_888 = plVar4[2];
              local_880 = plVar4[3];
              lVar20 = *plVar3;
              lVar34 = plVar3[1];
              lVar39 = plVar3[3];
              plVar4[2] = plVar3[2];
              plVar4[3] = lVar39;
              *plVar4 = lVar20;
              plVar4[1] = lVar34;
              uVar23 = uVar19 << 1 | 1;
              *plVar3 = local_898;
              plVar3[1] = local_890;
              plVar3[2] = local_888;
              plVar3[3] = local_880;
              uVar25 = uVar19;
              uVar19 = uVar23;
            } while ((long)uVar23 < (long)uVar27);
          }
        } while (0 < (long)uVar22);
      }
      if (0 < (int)local_c98[0]) {
        lVar20 = (long)(int)uVar29;
        fVar45 = local_c98[0];
        iVar14 = uVar18 * 2;
        do {
          iVar30 = *(int *)(local_11b8 + 4);
          iVar17 = *(int *)(local_11b8 + 8);
          lVar34 = (long)iVar30;
          uVar27 = *(ulong *)(local_11b8 + 0x10);
          uVar22 = *(ulong *)(local_11b8 + 0x18);
          lVar39 = (long)(int)fVar45;
          if (fVar45 == 1.4013e-45) {
            uVar23 = 0;
          }
          else {
            uVar25 = 1;
            uVar19 = 2;
            uVar24 = 0;
            uVar23 = uVar25;
            if (2 < lVar39) goto LAB_00182b00;
            while( true ) {
              puVar5 = (undefined8 *)(local_11b8 + uVar23 * 0x20);
              uVar46 = *puVar5;
              uVar9 = puVar5[1];
              puVar6 = (undefined8 *)(local_11b8 + uVar24 * 0x20);
              uVar10 = puVar5[3];
              uVar25 = uVar23 << 1 | 1;
              puVar6[2] = puVar5[2];
              puVar6[3] = uVar10;
              *puVar6 = uVar46;
              puVar6[1] = uVar9;
              if (lVar39 <= (long)uVar25) break;
              uVar19 = uVar25 + 1;
              uVar24 = uVar23;
              uVar23 = uVar25;
              if ((long)uVar19 < lVar39) {
LAB_00182b00:
                uVar23 = uVar19;
                if (*(int *)(local_11b8 + uVar19 * 0x20) <= *(int *)(local_11b8 + uVar25 * 0x20)) {
                  uVar23 = uVar25;
                }
              }
            }
          }
          if ((long)uVar23 < lVar39 + -1) {
            puVar5 = (undefined8 *)(local_11b8 + (lVar39 + -1) * 0x20);
            uVar46 = *puVar5;
            uVar9 = puVar5[1];
            uVar10 = puVar5[3];
            puVar6 = (undefined8 *)(local_11b8 + uVar23 * 0x20);
            puVar6[2] = puVar5[2];
            puVar6[3] = uVar10;
            *puVar6 = uVar46;
            puVar6[1] = uVar9;
            if (0 < (long)(uVar23 * 0x20)) {
              uVar23 = uVar23 & 0x7ffffffffffffff;
              do {
                lVar39 = uVar23 - 1;
                plVar3 = (long *)(local_11b8 + uVar23 * 0x20);
                uVar23 = lVar39 >> 1;
                plVar4 = (long *)(local_11b8 + uVar23 * 0x20);
                if ((int)*plVar3 <= (int)*plVar4) break;
                local_898 = *plVar4;
                local_890 = plVar4[1];
                local_888 = plVar4[2];
                local_880 = plVar4[3];
                lVar28 = *plVar3;
                lVar31 = plVar3[1];
                lVar11 = plVar3[3];
                plVar4[2] = plVar3[2];
                plVar4[3] = lVar11;
                *plVar4 = lVar28;
                plVar4[1] = lVar31;
                plVar3[2] = local_888;
                plVar3[3] = local_880;
                *plVar3 = local_898;
                plVar3[1] = local_890;
              } while (1 < lVar39);
            }
          }
          uVar33 = local_11b0[lVar34];
          iVar12 = local_1098[lVar34];
          iVar16 = -1;
          if (iVar17 != 0) {
            iVar16 = 1;
          }
          fVar40 = (float)((int)fVar45 + -1);
          local_c98[0] = fVar40;
          if (uVar27 == ((long)iVar12 | (long)(int)uVar33 << 0x20)) {
            uVar2 = iVar16 + iVar30;
            uVar27 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            if (uVar22 == ((long)*(int *)((long)local_1098 + uVar27) |
                          (ulong)*(uint *)((long)local_11b0 + uVar27) << 0x20)) {
              lVar39 = param_5 + (int)uVar33;
              if (iVar17 == 0) {
                lVar28 = (long)(iVar30 + -1);
                FUN_0015f1a0(lVar39 - lVar20,lVar20,(void *)((long)local_88 + lVar28 * 0x400),
                             (void *)((long)local_88 + lVar34 * 0x400));
                local_1098[lVar34] = iVar12 + uVar29;
                local_11b0[lVar34] = uVar33 - uVar29;
              }
              else {
                uVar33 = iVar30 + 1;
                lVar28 = (long)(int)uVar33;
                FUN_0015f1a0(lVar39 + iVar12,lVar20,(void *)((long)local_88 + lVar28 * 0x400),
                             (void *)((long)local_88 + lVar34 * 0x400));
                local_1098[lVar34] = iVar12 + uVar29;
                uVar27 = -(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2;
                *(uint *)((long)local_11b0 + uVar27) = *(int *)((long)local_11b0 + uVar27) + uVar29;
              }
              local_1098[lVar28] = local_1098[lVar28] - uVar29;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              if ((int)(uVar18 * 3) <= (int)fVar45 + 3) {
                iVar17 = (int)fVar45 + -2;
                if (-1 < iVar17) {
                  puVar21 = (ulong *)(local_11b8 + (long)iVar17 * 0x20 + 0x10);
                  do {
                    iVar12 = *(int *)((long)puVar21 + -0xc);
                    if (*puVar21 == ((long)local_1098[iVar12] | (ulong)local_11b0[iVar12] << 0x20))
                    {
                      iVar26 = 1;
                      if ((int)puVar21[-1] == 0) {
                        iVar26 = -1;
                      }
                      uVar27 = -(ulong)((uint)(iVar26 + iVar12) >> 0x1f) & 0xfffffffc00000000 |
                               (ulong)(uint)(iVar26 + iVar12) << 2;
                      if (puVar21[1] !=
                          ((long)*(int *)((long)local_1098 + uVar27) |
                          (ulong)*(uint *)((long)local_11b0 + uVar27) << 0x20)) goto LAB_00182cf0;
                    }
                    else {
LAB_00182cf0:
                      fVar40 = (float)((int)fVar40 + -1);
                      puVar7 = (ulong *)(local_11b8 + (long)(int)fVar40 * 0x20);
                      uVar27 = *puVar7;
                      uVar22 = puVar7[1];
                      uVar19 = puVar7[3];
                      *puVar21 = puVar7[2];
                      puVar21[1] = uVar19;
                      puVar21[-2] = uVar27;
                      puVar21[-1] = uVar22;
                    }
                    iVar17 = iVar17 + -1;
                    puVar21 = puVar21 + -4;
                  } while (-1 < iVar17);
                  local_c98[0] = fVar40;
                }
                if (1 < (int)fVar40) {
                  uVar27 = (ulong)(int)fVar40;
                  uVar22 = uVar27 >> 1 & 0x3ffffffffffffff;
                  do {
                    uVar22 = uVar22 - 1;
                    uVar19 = uVar22 * 2 | 1;
                    if ((long)uVar19 < (long)uVar27) {
                      uVar25 = uVar22;
                      do {
                        uVar23 = uVar19 + 1;
                        if ((long)uVar23 < (long)uVar27) {
                          if (*(int *)(local_11b8 + uVar23 * 0x20) <=
                              *(int *)(local_11b8 + uVar19 * 0x20)) {
                            uVar23 = uVar19;
                          }
                          uVar19 = uVar23;
                        }
                        plVar3 = (long *)(local_11b8 + uVar19 * 0x20);
                        plVar4 = (long *)(local_11b8 + uVar25 * 0x20);
                        if ((int)*plVar3 < (int)*plVar4) break;
                        local_898 = *plVar4;
                        local_890 = plVar4[1];
                        local_888 = plVar4[2];
                        local_880 = plVar4[3];
                        lVar34 = *plVar3;
                        lVar39 = plVar3[1];
                        lVar28 = plVar3[3];
                        plVar4[2] = plVar3[2];
                        plVar4[3] = lVar28;
                        *plVar4 = lVar34;
                        plVar4[1] = lVar39;
                        uVar23 = uVar19 << 1 | 1;
                        *plVar3 = local_898;
                        plVar3[1] = local_890;
                        plVar3[2] = local_888;
                        plVar3[3] = local_880;
                        uVar25 = uVar19;
                        uVar19 = uVar23;
                      } while ((long)uVar23 < (long)uVar27);
                    }
                  } while (0 < (long)uVar22);
                }
              }
              in_stack_ffffffffffffeca8 = in_stack_ffffffffffffeca8 & 0xffffffff00000000;
              uVar46 = CONCAT44((int)((ulong)in_stack_ffffffffffffeca0 >> 0x20),uVar29);
              FUN_00183b40(iVar30,uVar37,local_88,local_1098,local_11b0,local_11b8,local_c98,param_5
                           ,uVar46,in_stack_ffffffffffffeca8);
              in_stack_ffffffffffffeca8 = CONCAT44((int)(in_stack_ffffffffffffeca8 >> 0x20),iVar16);
              in_stack_ffffffffffffeca0 = CONCAT44((int)((ulong)uVar46 >> 0x20),uVar29);
              FUN_00183b40((ulong)uVar2,uVar37,local_88,local_1098,local_11b0,local_11b8,local_c98,
                           param_5,in_stack_ffffffffffffeca0,in_stack_ffffffffffffeca8);
              if ((int)fVar40 < (int)local_c98[0]) {
                uVar27 = (long)(int)fVar40;
                do {
                  uVar22 = uVar27 + 1;
                  if (0 < (long)(uVar27 * 0x20)) {
                    uVar27 = uVar27 & 0x7ffffffffffffff;
                    do {
                      lVar34 = uVar27 - 1;
                      plVar3 = (long *)(local_11b8 + uVar27 * 0x20);
                      uVar27 = lVar34 >> 1;
                      plVar4 = (long *)(local_11b8 + uVar27 * 0x20);
                      if ((int)*plVar3 <= (int)*plVar4) break;
                      local_898 = *plVar4;
                      local_890 = plVar4[1];
                      local_888 = plVar4[2];
                      local_880 = plVar4[3];
                      lVar39 = *plVar3;
                      lVar28 = plVar3[1];
                      lVar31 = plVar3[3];
                      plVar4[2] = plVar3[2];
                      plVar4[3] = lVar31;
                      *plVar4 = lVar39;
                      plVar4[1] = lVar28;
                      plVar3[2] = local_888;
                      plVar3[3] = local_880;
                      *plVar3 = local_898;
                      plVar3[1] = local_890;
                    } while (1 < lVar34);
                  }
                  uVar27 = uVar22;
                } while (uVar22 != (long)(int)local_c98[0]);
              }
            }
          }
          fVar45 = local_c98[0];
          local_c98[0] = fVar45;
        } while (0 < (int)fVar45);
      }
      bVar1 = 0x3f < uVar29;
      uVar29 = (int)uVar29 >> 2;
    } while (bVar1);
    FUN_00183d40(param_5,local_88,local_1098,local_11b0,uVar37);
    fVar45 = 0.0;
    lVar20 = 0;
    uVar27 = 0;
    uVar22 = 0xffffffff;
    lVar34 = 0;
    lVar39 = -1;
    iVar14 = local_1098[0];
    while( true ) {
      lVar28 = lVar34;
      lVar31 = lVar39;
      if (iVar14 != 0) {
        fVar41 = (float)FUN_00184380(param_1,(long)local_88 + lVar20,(long)iVar14,param_11);
        (&local_12d0)[uVar27] = fVar41;
        fVar40 = (float)uVar22;
        if (-1 < (int)fVar40) {
          thunk_FUN_0015f2c0(&local_898,(long)local_88 + lVar20,
                             (void *)((long)local_88 + (long)(int)fVar40 * 0x400));
          uVar22 = -(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2;
          fVar42 = (float)FUN_00184380(param_1,&local_898,
                                       (long)(*(int *)((long)local_1098 + uVar22) + iVar14),param_11
                                      );
          fVar41 = (fVar41 + *(float *)((long)&local_12d0 + uVar22)) - fVar42;
          if (0.0 < fVar41) {
            lVar31 = lVar34;
            fVar43 = fVar41;
            if (fVar41 <= fVar45) {
              lVar31 = lVar39;
              fVar43 = fVar45;
            }
            fVar45 = fVar43;
            lVar28 = lVar34 + 1;
            local_c98[lVar34 * 4] = fVar41;
            local_c98[lVar34 * 4 + 1] = fVar42;
            local_c98[lVar34 * 4 + 2] = fVar40;
            local_c98[lVar34 * 4 + 3] = (float)uVar27;
          }
        }
        uVar22 = uVar27 & 0xffffffff;
      }
      uVar27 = uVar27 + 1;
      lVar20 = lVar20 + 0x400;
      if (uVar37 <= uVar27) break;
      iVar14 = local_1098[uVar27];
      lVar34 = lVar28;
      lVar39 = lVar31;
    }
    pvVar8 = local_88;
joined_r0x00183244:
    if (0 < lVar28) {
      lVar20 = lVar28 + -1;
      fVar45 = local_c98[lVar31 * 4 + 1];
      fVar40 = local_c98[lVar31 * 4 + 2];
      fVar41 = local_c98[lVar31 * 4 + 3];
      uVar22 = (ulong)(int)fVar41;
      uVar46 = *(undefined8 *)(local_c98 + lVar20 * 4 + 2);
      lVar34 = (long)(int)fVar40;
      local_88 = pvVar8;
      *(undefined8 *)(local_c98 + lVar31 * 4) = *(undefined8 *)(local_c98 + lVar20 * 4);
      *(undefined8 *)(local_c98 + lVar31 * 4 + 2) = uVar46;
      pvVar8 = (void *)((long)local_88 + lVar34 * 0x400);
      thunk_FUN_0015f2c0(pvVar8,pvVar8,(void *)((long)local_88 + uVar22 * 0x400));
      uVar27 = -(ulong)((uint)fVar40 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)fVar40 << 2;
      iVar14 = local_1098[uVar22];
      *(float *)((long)&local_12d0 + uVar27) = fVar45;
      *(int *)((long)local_1098 + uVar27) = iVar14 + *(int *)((long)local_1098 + uVar27);
      iVar14 = (int)lVar20 + -1;
      local_11b0[uVar22] = 0;
      local_1098[uVar22] = 0;
      (&local_12d0)[uVar22] = 0.0;
      if (iVar14 < 0) {
        lVar31 = -1;
        fVar42 = 0.0;
      }
      else {
        fVar42 = 0.0;
        lVar39 = (long)iVar14;
        lVar31 = -1;
        fVar45 = local_c98[(long)iVar14 * 4 + 3];
        pfVar13 = local_c98 + (long)iVar14 * 4;
        while( true ) {
          lVar28 = lVar39;
          if ((fVar45 == fVar40) || (pfVar13[2] == fVar41)) {
            lVar20 = lVar20 + -1;
            if (lVar31 != lVar20) {
              lVar28 = lVar31;
            }
            uVar46 = *(undefined8 *)(local_c98 + lVar20 * 4 + 2);
            *(undefined8 *)pfVar13 = *(undefined8 *)(local_c98 + lVar20 * 4);
            *(undefined8 *)(pfVar13 + 2) = uVar46;
            fVar45 = fVar42;
          }
          else {
            fVar45 = *pfVar13;
            if (*pfVar13 <= fVar42) {
              lVar28 = lVar31;
              fVar45 = fVar42;
            }
          }
          fVar42 = fVar45;
          lVar31 = lVar28;
          if ((int)lVar39 + -1 < 0) break;
          lVar39 = lVar39 + -1;
          fVar45 = pfVar13[-1];
          pfVar13 = pfVar13 + -4;
        }
      }
      fVar45 = fVar40;
      do {
        fVar45 = (float)((int)fVar45 - 1);
        lVar28 = lVar20;
        lVar39 = lVar31;
        fVar41 = fVar42;
        if ((int)fVar45 < 0) goto LAB_001833d4;
        iVar14 = local_1098[(int)fVar45];
      } while (iVar14 == 0);
      thunk_FUN_0015f2c0(&local_898,(void *)((long)local_88 + lVar34 * 0x400),
                         (void *)((long)local_88 + (long)(int)fVar45 * 0x400));
      fVar43 = (float)FUN_00184380(param_1,&local_898,(long)(local_1098[lVar34] + iVar14),param_11);
      fVar44 = ((&local_12d0)[lVar34] + (&local_12d0)[(int)fVar45]) - fVar43;
      if (0.0 < fVar44) {
        fVar41 = fVar44;
        if (fVar44 <= fVar42) {
          fVar41 = fVar42;
        }
        lVar39 = lVar20;
        if (fVar44 <= fVar42) {
          lVar39 = lVar31;
        }
        lVar28 = lVar20 + 1;
        local_c98[lVar20 * 4] = fVar44;
        local_c98[lVar20 * 4 + 1] = fVar43;
        local_c98[lVar20 * 4 + 2] = fVar45;
        local_c98[lVar20 * 4 + 3] = fVar40;
      }
LAB_001833d4:
      do {
        fVar45 = (float)((int)uVar22 + 1);
        uVar22 = (ulong)(uint)fVar45;
        lVar31 = lVar39;
        pvVar8 = local_88;
        if ((int)uVar18 <= (int)fVar45) goto joined_r0x00183244;
        iVar14 = local_1098[(int)fVar45];
      } while (iVar14 == 0);
      thunk_FUN_0015f2c0(&local_898,(void *)((long)local_88 + lVar34 * 0x400),
                         (void *)((long)local_88 + (long)(int)fVar45 * 0x400));
      fVar42 = (float)FUN_00184380(param_1,&local_898,(long)(local_1098[lVar34] + iVar14),param_11);
      fVar43 = ((&local_12d0)[lVar34] + (&local_12d0)[(int)fVar45]) - fVar42;
      pvVar8 = local_88;
      if (0.0 < fVar43) {
        local_c98[lVar28 * 4] = fVar43;
        local_c98[lVar28 * 4 + 1] = fVar42;
        local_c98[lVar28 * 4 + 2] = fVar40;
        local_c98[lVar28 * 4 + 3] = fVar45;
        lVar31 = lVar28;
        if (fVar43 <= fVar41) {
          lVar31 = lVar39;
        }
        lVar28 = lVar28 + 1;
        pvVar8 = local_88;
      }
      goto joined_r0x00183244;
    }
    uVar27 = 0;
    uVar22 = 0;
    iVar14 = local_1098[0];
    __src = pvVar8;
    while( true ) {
      if (iVar14 != 0) {
        if (uVar27 != uVar22) {
          memcpy((void *)((long)pvVar8 + (long)(int)uVar22 * 0x400),__src,0x400);
          uVar18 = local_11b0[uVar27];
          uVar19 = -(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2;
          *(int *)((long)local_1098 + uVar19) = iVar14;
          *(uint *)((long)local_11b0 + uVar19) = uVar18;
        }
        uVar22 = (ulong)((int)uVar22 + 1);
      }
      uVar27 = uVar27 + 1;
      __src = (void *)((long)__src + 0x400);
      if (uVar37 <= uVar27) break;
      iVar14 = local_1098[uVar27];
    }
    iVar14 = (int)uVar22;
    lVar20 = local_890;
    if (iVar14 == 1) {
      puVar35 = (undefined1 *)0xffffffffffffffff;
    }
    else {
      if (iVar14 < 1) {
        iVar30 = 0;
      }
      else {
        if (iVar14 == 1) {
          lVar39 = 0;
          iVar30 = 0;
        }
        else {
          iVar30 = 0;
          lVar34 = 0;
          do {
            lVar39 = lVar34 + 2;
            if (local_1098[lVar34] != 0) {
              iVar30 = iVar30 + 1;
            }
            if (local_1098[lVar34 + 1] != 0) {
              iVar30 = iVar30 + 1;
            }
            lVar34 = lVar39;
          } while (uVar22 - (uVar22 & 1) != lVar39);
        }
        if (((uVar22 & 1) != 0) && (local_1098[lVar39] != 0)) {
          iVar30 = iVar30 + 1;
        }
        if (iVar30 == 1) {
          puVar35 = (undefined1 *)0xffffffffffffffff;
          goto joined_r0x00183864;
        }
      }
      FUN_0015c528(&local_898,(long)iVar38,param_8,local_c98);
      uVar47 = (undefined4)((ulong)in_stack_ffffffffffffeca0 >> 0x20);
      puVar15 = (undefined1 *)CONCAT44(local_c98[1],local_c98[0]);
      puVar35 = puVar15 + 1;
      *puVar15 = (char)iVar30;
      if (iVar14 < 1) {
        fVar45 = 6.0;
        if (6.0 < param_2) goto LAB_0018393c;
joined_r0x001839ac:
        puVar35 = (undefined1 *)0xffffffffffffffff;
      }
      else {
        fVar45 = 6.0;
        puVar32 = local_11b0;
        piVar36 = local_1098;
        if (local_1098[0] != 0) goto LAB_001838d4;
        while (uVar22 = uVar22 - 1, uVar22 != 0) {
          while( true ) {
            uVar47 = (undefined4)((ulong)in_stack_ffffffffffffeca0 >> 0x20);
            piVar36 = piVar36 + 1;
            puVar32 = puVar32 + 1;
            local_1098[0] = *piVar36;
            if (local_1098[0] == 0) break;
LAB_001838d4:
            local_12d0 = 1.0737418e+09;
            in_stack_ffffffffffffeca0 = CONCAT44(uVar47,param_9);
            lVar20 = FUN_00174f30(param_1,0x53800000,puVar35,puVar15 + iVar38,
                                  param_5 + (int)*puVar32,(long)local_1098[0],param_10 & 0xffffffef,
                                  param_11,&local_12d0,param_8,in_stack_ffffffffffffeca0,0);
            if (lVar20 < 0) goto joined_r0x001839ac;
            fVar45 = fVar45 + local_12d0;
            puVar35 = puVar35 + lVar20;
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) goto LAB_00183934;
          }
        }
LAB_00183934:
        if (param_2 <= fVar45) goto joined_r0x001839ac;
LAB_0018393c:
        puVar35 = puVar35 + -(long)CONCAT44(local_c98[1],local_c98[0]);
        if (param_4 < (undefined1 *)((long)param_3 + (long)puVar35)) goto joined_r0x001839ac;
        *param_12 = fVar45;
        memcpy(param_3,(void *)CONCAT44(local_c98[1],local_c98[0]),(size_t)puVar35);
      }
      lVar20 = 0;
      if (local_890 != 0) {
        if ((local_898 == 0) ||
           ((local_888 + 0xfU & 0xfffffffffffffff0) + local_890 != *(long *)(local_898 + 8))) {
          (**(code **)PTR_PTR_047cb898)();
        }
        else {
          *(long *)(local_898 + 8) = local_890;
        }
        local_890 = 0;
        lVar20 = local_890;
      }
    }
joined_r0x00183864:
    local_890 = lVar20;
    if (local_11c8 != 0) {
      lVar20 = CONCAT44(uStack_11cc,local_11d0);
      if ((lVar20 == 0) ||
         ((local_11c0 + 0xfU & 0xfffffffffffffff0) + local_11c8 != *(long *)(lVar20 + 8))) {
        (**(code **)PTR_PTR_047cb898)();
      }
      else {
        *(long *)(lVar20 + 8) = local_11c8;
      }
    }
    local_11c8 = 0;
    lVar20 = 0;
    if (local_10a8 != 0) {
      lVar20 = CONCAT44(uStack_10ac,local_10b0);
      if ((lVar20 == 0) ||
         ((local_10a0 + 0xfU & 0xfffffffffffffff0) + local_10a8 != *(long *)(lVar20 + 8))) {
        (**(code **)PTR_PTR_047cb898)();
        local_10a8 = 0;
        lVar20 = local_10a8;
      }
      else {
        *(long *)(lVar20 + 8) = local_10a8;
        local_10a8 = 0;
        lVar20 = local_10a8;
      }
    }
    goto joined_r0x00183a2c;
  }
  fVar45 = (float)FUN_00184380(param_1,param_7,param_6);
  lVar20 = param_6 + 0x17f;
  if (-1 < param_6 + 0x80) {
    lVar20 = param_6 + 0x80;
  }
  uVar18 = (uint)((ulong)lVar20 >> 8);
  if (7 < (int)uVar18) {
    uVar18 = 8;
  }
  uVar37 = 0;
  lVar20 = 0;
  if ((int)uVar18 < 2) {
    uVar18 = 1;
  }
  lVar34 = param_6;
  do {
    lVar39 = 0;
    if ((ulong)(uVar18 + 1) != 0) {
      lVar39 = lVar34 / (long)(ulong)(uVar18 + 1);
    }
    uVar37 = uVar37 + 1;
    FUN_0015edc0(param_5,lVar39,local_c98,0x100,0);
    thunk_FUN_0015f6d0(local_1098,param_7,local_c98);
    fVar40 = (float)FUN_00184380(param_1,local_c98,lVar39,param_11);
    fVar41 = (float)FUN_00184380(param_1,local_1098,param_6 - lVar39,param_11);
    fVar40 = fVar40 + fVar41 + 6.0;
    if (fVar40 < fVar45) {
      memcpy(&local_898,local_c98,0x400);
      memcpy(auStack_498,local_1098,0x400);
      lVar20 = lVar39;
      fVar45 = fVar40;
    }
    lVar34 = lVar34 + param_6;
  } while (uVar37 < uVar18);
  if (lVar20 == 0) {
    puVar35 = (undefined1 *)0xffffffffffffffff;
    lVar20 = local_10a8;
    goto joined_r0x00183a2c;
  }
  lVar34 = param_6 - lVar20;
  if (lVar34 < 0x80) {
    if (lVar20 < 0x80) goto LAB_001835cc;
LAB_001831c8:
    do {
      lVar39 = param_5 + -0x40 + lVar20;
      iVar14 = FUN_00184a50(lVar39,0x40,auStack_498,lVar34,&local_898,lVar20);
      if (0 < iVar14) break;
      lVar34 = lVar34 + 0x40;
      lVar20 = lVar20 + -0x40;
      FUN_0015f1a0(lVar39,0x40,&local_898,auStack_498);
    } while (0x7f < lVar20);
    if (0x1f < lVar34) goto LAB_001835dc;
LAB_00183224:
    uVar47 = (undefined4)((ulong)in_stack_ffffffffffffeca0 >> 0x20);
  }
  else {
    do {
      lVar39 = param_5 + lVar20;
      iVar14 = FUN_00184a50(lVar39,0x40,&local_898,lVar20,auStack_498,lVar34);
      if (0 < iVar14) break;
      lVar20 = lVar20 + 0x40;
      lVar34 = lVar34 + -0x40;
      FUN_0015f1a0(lVar39,0x40,auStack_498,&local_898);
    } while (0x7f < lVar34);
    if (0x7f < lVar20) goto LAB_001831c8;
LAB_001835cc:
    if (lVar34 < 0x20) goto LAB_00183224;
LAB_001835dc:
    do {
      lVar39 = param_5 + lVar20;
      iVar14 = FUN_00184a50(lVar39,0x10,&local_898,lVar20,auStack_498,lVar34);
      if (0 < iVar14) break;
      lVar20 = lVar20 + 0x10;
      lVar34 = lVar34 + -0x10;
      FUN_0015f1a0(lVar39,0x10,auStack_498,&local_898);
    } while (0x1f < lVar34);
    uVar47 = (undefined4)((ulong)in_stack_ffffffffffffeca0 >> 0x20);
  }
  if (0x1f < lVar20) {
    do {
      lVar39 = param_5 + -0x10 + lVar20;
      iVar14 = FUN_00184a50(lVar39,0x10,auStack_498,lVar34,&local_898,lVar20);
      uVar47 = (undefined4)((ulong)in_stack_ffffffffffffeca0 >> 0x20);
      if (0 < iVar14) break;
      lVar34 = lVar34 + 0x10;
      lVar20 = lVar20 + -0x10;
      FUN_0015f1a0(lVar39,0x10,&local_898,auStack_498);
      uVar47 = (undefined4)((ulong)in_stack_ffffffffffffeca0 >> 0x20);
    } while (0x1f < lVar20);
  }
  local_11b0[1] = (uint)lVar34;
  uStack_12cc = (uint)lVar20;
  local_12d0 = 0.0;
  local_11b0[0] = uStack_12cc;
  FUN_00183d40(param_5,&local_898,local_11b0,&local_12d0,2);
  uVar18 = local_11b0[1];
  lVar34 = (long)(int)local_11b0[0];
  puVar35 = (undefined1 *)0xffffffffffffffff;
  lVar20 = local_10a8;
  if (((int)local_11b0[0] < 0x20) || ((int)local_11b0[1] < 0x20)) goto joined_r0x00183a2c;
  FUN_0015c528(local_11b0,param_6,param_8,&local_12d0);
  puVar35 = (undefined1 *)CONCAT44(uStack_12cc,local_12d0);
  puVar15 = puVar35 + 1;
  *puVar35 = 2;
  local_10b0 = 1.0737418e+09;
  lVar20 = FUN_00174f30(param_1,0x53800000,puVar15,puVar35 + param_6,param_5,lVar34,
                        param_10 & 0xffffffef,param_11,&local_10b0,param_8,CONCAT44(uVar47,param_9),
                        0);
  if (lVar20 < 0) {
joined_r0x00183afc:
    puVar35 = (undefined1 *)0xffffffffffffffff;
    lVar34 = local_11a8;
  }
  else {
    local_11d0 = 1.0737418e+09;
    lVar34 = FUN_00174f30(param_1,0x53800000,puVar15 + lVar20,puVar35 + param_6,param_5 + lVar34,
                          (long)(int)uVar18,param_10 & 0xffffffef,param_11,&local_11d0,param_8,
                          param_9,0);
    if ((lVar34 < 0) || (fVar45 = local_10b0 + 6.0 + local_11d0, param_2 <= fVar45))
    goto joined_r0x00183afc;
    puVar35 = puVar15 + lVar20 + (lVar34 - (long)CONCAT44(uStack_12cc,local_12d0));
    if (param_4 < (undefined1 *)((long)param_3 + (long)puVar35)) goto joined_r0x00183afc;
    *param_12 = fVar45;
    memcpy(param_3,(void *)CONCAT44(uStack_12cc,local_12d0),(size_t)puVar35);
    lVar34 = local_11a8;
  }
  local_11a8 = 0;
  lVar20 = local_10a8;
  if (lVar34 != 0) {
    lVar20 = CONCAT44(local_11b0[1],local_11b0[0]);
    if ((lVar20 == 0) ||
       ((local_11a0 + 0xfU & 0xfffffffffffffff0) + lVar34 != *(long *)(lVar20 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(lVar20 + 8) = lVar34;
    }
    local_11a8 = 0;
    lVar20 = local_10a8;
  }
joined_r0x00183a2c:
  local_10a8 = lVar20;
  if ((param_10 >> 5 & 1) != 0) {
    if (*param_12 <= param_2) {
      param_2 = *param_12;
    }
    uVar37 = (ulong)local_898 >> 0x20;
    local_898 = CONCAT44((int)uVar37,param_2 + -5.0);
    puVar15 = (undefined1 *)
              FUN_0017fc70(param_1,param_3,param_4,&lStack_12d8,&local_12e0,1,param_10,param_11,
                           &local_898,param_8,param_9);
    if (0 < (long)puVar15) {
      *param_12 = (float)local_898 + 5.0;
      puVar35 = puVar15;
    }
  }
  return puVar35;
}


