/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d6298; name: FUN_012d6298
 */


void FUN_012d6298(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  size_t sVar12;
  undefined8 uVar13;
  size_t sVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  ushort *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  char *pcVar25;
  long lVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  long *plVar33;
  ulong uVar34;
  long *plVar35;
  char *local_1e8;
  char *local_1e0;
  long *local_1d0;
  long local_1c8;
  undefined8 local_198;
  undefined1 *local_188;
  char *pcStack_180;
  size_t local_178;
  undefined8 uStack_170;
  undefined1 *local_168;
  char *pcStack_160;
  size_t local_158;
  long *local_150;
  undefined1 *local_148;
  char *pcStack_140;
  size_t local_138;
  long *local_130;
  undefined1 *local_128;
  char *pcStack_120;
  size_t local_118;
  long *local_110;
  undefined1 *local_108;
  char *pcStack_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  char *pcStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *pcStack_c0;
  size_t local_b8;
  long *local_b0;
  undefined1 *local_a8;
  char *pcStack_a0;
  size_t local_98;
  long *plStack_90;
  undefined1 *local_88;
  char *pcStack_80;
  size_t local_78;
  long *plStack_70;
  
  if ((6 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar22 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar22 != 0)) {
    uVar23 = (ulong)*(uint *)((long)param_1 + uVar22);
    puVar1 = (uint *)((long)((long)param_1 + uVar22) + uVar23);
    if (*puVar1 == 0) {
      bVar9 = true;
    }
    else {
      uVar24 = 0;
      lVar26 = (long)param_1 + uVar23 + uVar22 + 9;
      do {
        uVar30 = (ulong)puVar1[uVar24 + 1];
        piVar2 = (int *)((long)(puVar1 + uVar24 + 1) + uVar30);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar31 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar31 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
          pcVar25 = *(char **)(PTR_DAT_047d3e30 + 8);
          sVar12 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          plVar33 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (plVar33 == (long *)0x0) goto LAB_012d639c;
          (**(code **)(*plVar33 + 0x18))(plVar33);
          uVar13 = *param_2;
          local_88 = puVar32;
          pcStack_80 = pcVar25;
          local_78 = sVar12;
          plStack_70 = plVar33;
          (**(code **)(*plVar33 + 0x18))(plVar33);
          FUN_012d6de0(uVar13,&local_88);
          (**(code **)(*plVar33 + 0x20))(plVar33);
          (**(code **)(*plVar33 + 0x20))(plVar33);
        }
        else {
          puVar3 = (uint *)((long)piVar2 + uVar31);
          uVar34 = (ulong)*puVar3;
          pcVar25 = (char *)((long)puVar3 + uVar34 + 4);
          sVar12 = strlen(pcVar25);
          bVar7 = *(byte *)((long)puVar3 + uVar34 + 4);
          if (bVar7 == 0) {
            puVar32 = &DAT_cbf29ce484222645;
          }
          else {
            puVar32 = &DAT_cbf29ce484222645;
            pbVar19 = (byte *)(lVar26 + uVar34 + uVar31 + uVar30);
            do {
              puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (bVar7 != 0);
          }
LAB_012d639c:
          plStack_70 = (long *)0x0;
          local_88 = puVar32;
          pcStack_80 = pcVar25;
          local_78 = sVar12;
          FUN_012d6de0(*param_2,&local_88);
        }
        uVar24 = uVar24 + 1;
        lVar26 = lVar26 + 4;
      } while (uVar24 < *puVar1);
      bVar9 = *puVar1 == 0;
    }
    if (!bVar9) {
      lVar29 = uVar23 + uVar22;
      uVar22 = 0;
      lVar26 = (long)param_1 + lVar29 + 9;
      lVar18 = (long)param_1 + lVar29 + 0x11;
      lVar29 = (long)param_1 + lVar29 + 0xd;
      do {
        uVar23 = (ulong)puVar1[uVar22 + 1];
        piVar2 = (int *)((long)(puVar1 + uVar22 + 1) + uVar23);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar24 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar24 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
          pcVar25 = *(char **)(PTR_DAT_047d3e30 + 8);
          sVar12 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          local_1d0 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (local_1d0 == (long *)0x0) goto LAB_012d64bc;
          (**(code **)(*local_1d0 + 0x18))(local_1d0);
          uVar13 = *param_2;
          local_a8 = puVar32;
          pcStack_a0 = pcVar25;
          local_98 = sVar12;
          plStack_90 = local_1d0;
          (**(code **)(*local_1d0 + 0x18))(local_1d0);
          local_198 = FUN_012d6ef8(uVar13,&local_a8);
          (**(code **)(*local_1d0 + 0x20))(local_1d0);
          bVar9 = false;
        }
        else {
          puVar3 = (uint *)((long)piVar2 + uVar24);
          uVar30 = (ulong)*puVar3;
          pcVar25 = (char *)((long)puVar3 + uVar30 + 4);
          sVar12 = strlen(pcVar25);
          bVar7 = *(byte *)((long)puVar3 + uVar30 + 4);
          if (bVar7 == 0) {
            puVar32 = &DAT_cbf29ce484222645;
          }
          else {
            puVar32 = &DAT_cbf29ce484222645;
            pbVar19 = (byte *)(lVar26 + uVar30 + uVar24 + uVar23);
            do {
              puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (bVar7 != 0);
          }
LAB_012d64bc:
          plStack_90 = (long *)0x0;
          local_a8 = puVar32;
          pcStack_a0 = pcVar25;
          local_98 = sVar12;
          local_198 = FUN_012d6ef8(*param_2,&local_a8);
          local_1d0 = (long *)0x0;
          bVar9 = true;
        }
        puVar20 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar8 = *puVar20;
        if (6 < uVar8) {
          uVar24 = (ulong)puVar20[3];
          lVar16 = -(long)*piVar2;
          if (uVar24 != 0) {
            uVar30 = (ulong)*(uint *)((long)piVar2 + uVar24);
            puVar3 = (uint *)((long)((long)piVar2 + uVar24) + uVar30);
            if (*puVar3 != 0) {
              uVar31 = 0;
              lVar16 = lVar18 + uVar30 + uVar24 + uVar23;
              do {
                uVar24 = (ulong)puVar3[uVar31 + 1];
                piVar4 = (int *)((long)(puVar3 + uVar31 + 1) + uVar24);
                FUN_012d74d4(*param_2,local_198);
                if ((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
                   (uVar30 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar30 != 0)) {
                  uVar34 = (ulong)*(uint *)((long)piVar4 + uVar30);
                  puVar5 = (uint *)((long)((long)piVar4 + uVar30) + uVar34);
                  if (*puVar5 != 0) {
                    uVar21 = 0;
                    local_1c8 = lVar16 + uVar34 + uVar30 + uVar24;
                    do {
                      uVar24 = (ulong)puVar5[uVar21 + 1];
                      piVar4 = (int *)((long)(puVar5 + uVar21 + 1) + uVar24);
                      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
                         (uVar30 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar30 == 0
                         )) {
                        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
                          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                          __cxa_guard_release(PTR_DAT_047d3e28);
                        }
                        puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
                        local_1e0 = *(char **)(PTR_DAT_047d3e30 + 8);
                        sVar12 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                        plVar33 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                        if (plVar33 != (long *)0x0) {
                          (**(code **)(*plVar33 + 0x18))(plVar33);
                        }
                      }
                      else {
                        puVar6 = (uint *)((long)piVar4 + uVar30);
                        uVar34 = (ulong)*puVar6;
                        local_1e0 = (char *)((long)puVar6 + uVar34 + 4);
                        sVar12 = strlen(local_1e0);
                        bVar7 = *(byte *)((long)puVar6 + uVar34 + 4);
                        if (bVar7 == 0) {
                          plVar33 = (long *)0x0;
                          puVar32 = &DAT_cbf29ce484222645;
                        }
                        else {
                          puVar32 = &DAT_cbf29ce484222645;
                          pbVar19 = (byte *)(local_1c8 + uVar34 + uVar30 + uVar24);
                          do {
                            puVar32 = (undefined1 *)
                                      (((ulong)puVar32 ^ (ulong)bVar7) * 0x100000001b3);
                            bVar7 = *pbVar19;
                            pbVar19 = pbVar19 + 1;
                          } while (bVar7 != 0);
                          plVar33 = (long *)0x0;
                        }
                      }
                      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
                         (uVar30 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar30 == 0
                         )) {
                        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
                          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                          __cxa_guard_release(PTR_DAT_047d3e28);
                        }
                        puVar28 = *(undefined1 **)PTR_DAT_047d3e30;
                        local_1e8 = *(char **)(PTR_DAT_047d3e30 + 8);
                        sVar14 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                        plVar35 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                        if (plVar35 != (long *)0x0) {
                          (**(code **)(*plVar35 + 0x18))(plVar35);
                        }
                      }
                      else {
                        puVar6 = (uint *)((long)piVar4 + uVar30);
                        uVar34 = (ulong)*puVar6;
                        local_1e8 = (char *)((long)puVar6 + uVar34 + 4);
                        sVar14 = strlen(local_1e8);
                        bVar7 = *(byte *)((long)puVar6 + uVar34 + 4);
                        if (bVar7 == 0) {
                          puVar28 = &DAT_cbf29ce484222645;
                        }
                        else {
                          puVar28 = &DAT_cbf29ce484222645;
                          pbVar19 = (byte *)(local_1c8 + uVar34 + uVar30 + uVar24);
                          do {
                            puVar28 = (undefined1 *)
                                      (((ulong)puVar28 ^ (ulong)bVar7) * 0x100000001b3);
                            bVar7 = *pbVar19;
                            pbVar19 = pbVar19 + 1;
                          } while (bVar7 != 0);
                        }
                        plVar35 = (long *)0x0;
                      }
                      puVar20 = (ushort *)((long)piVar4 - (long)*piVar4);
                      uVar8 = *puVar20;
                      if (uVar8 < 0xb) {
                        bVar10 = false;
                        if (6 < uVar8) {
                          uVar13 = 0;
                          goto LAB_012d681c;
                        }
LAB_012d682c:
                        uVar13 = *param_2;
                        pcStack_c0 = local_1e0;
                        local_c8 = puVar32;
                        local_b8 = sVar12;
                        local_b0 = plVar33;
                        if (plVar33 != (long *)0x0) {
                          (**(code **)(*plVar33 + 0x18))(plVar33);
                        }
                        pcStack_e0 = local_1e8;
                        local_e8 = puVar28;
                        local_d8 = sVar14;
                        local_d0 = plVar35;
                        if (plVar35 != (long *)0x0) {
                          (**(code **)(*plVar35 + 0x18))(plVar35);
                        }
                        FUN_012d8c70(uVar13,local_198,uVar31,&local_c8,&local_e8,bVar10);
                        plVar15 = local_b0;
                        if (local_d0 != (long *)0x0) {
                          (**(code **)(*local_d0 + 0x20))();
                          plVar15 = local_b0;
                        }
joined_r0x012d68d4:
                        if (plVar15 != (long *)0x0) {
LAB_012d699c:
                          (**(code **)(*plVar15 + 0x20))();
                        }
                      }
                      else {
                        uVar13 = 0;
                        if ((ulong)puVar20[5] != 0) {
                          uVar13 = *(undefined8 *)((long)piVar4 + (ulong)puVar20[5]);
                        }
                        if ((uVar8 < 0xd) || ((ulong)puVar20[6] == 0)) {
                          bVar10 = false;
                        }
                        else {
                          bVar10 = *(char *)((long)piVar4 + (ulong)puVar20[6]) != '\0';
                        }
LAB_012d681c:
                        if (((ulong)puVar20[3] == 0) ||
                           (lVar17 = *(long *)((long)piVar4 + (ulong)puVar20[3]), lVar17 == 0))
                        goto LAB_012d682c;
                        if (lVar17 == 1) {
                          uVar27 = *param_2;
                          pcStack_100 = local_1e0;
                          local_108 = puVar32;
                          local_f8 = sVar12;
                          local_f0 = plVar33;
                          if (plVar33 != (long *)0x0) {
                            (**(code **)(*plVar33 + 0x18))(plVar33);
                          }
                          pcStack_120 = local_1e8;
                          local_128 = puVar28;
                          local_118 = sVar14;
                          local_110 = plVar35;
                          if (plVar35 != (long *)0x0) {
                            (**(code **)(*plVar35 + 0x18))(plVar35);
                          }
                          FUN_01312fdc(uVar27,local_198,uVar31,&local_108,&local_128,uVar13,bVar10);
                          if (local_110 != (long *)0x0) {
                            (**(code **)(*local_110 + 0x20))();
                          }
                          plVar15 = local_f0;
                          if (local_f0 == (long *)0x0) goto LAB_012d68d8;
                          goto LAB_012d699c;
                        }
                        if (lVar17 == 2) {
                          uVar13 = *param_2;
                          pcStack_140 = local_1e0;
                          local_148 = puVar32;
                          local_138 = sVar12;
                          local_130 = plVar33;
                          if (plVar33 != (long *)0x0) {
                            (**(code **)(*plVar33 + 0x18))(plVar33);
                          }
                          pcStack_160 = local_1e8;
                          local_168 = puVar28;
                          local_158 = sVar14;
                          local_150 = plVar35;
                          if (plVar35 != (long *)0x0) {
                            (**(code **)(*plVar35 + 0x18))(plVar35);
                          }
                          FUN_01313208(uVar13,local_198,uVar31,&local_148,&local_168,bVar10);
                          plVar15 = local_130;
                          if (local_150 != (long *)0x0) {
                            (**(code **)(*local_150 + 0x20))();
                            plVar15 = local_130;
                          }
                          goto joined_r0x012d68d4;
                        }
                      }
LAB_012d68d8:
                      if (plVar35 != (long *)0x0) {
                        (**(code **)(*plVar35 + 0x20))(plVar35);
                      }
                      if (plVar33 != (long *)0x0) {
                        (**(code **)(*plVar33 + 0x20))(plVar33);
                      }
                      uVar21 = uVar21 + 1;
                      local_1c8 = local_1c8 + 4;
                    } while (uVar21 < *puVar5);
                  }
                }
                uVar31 = uVar31 + 1;
                lVar16 = lVar16 + 4;
              } while (uVar31 < *puVar3);
              lVar16 = -(long)*piVar2;
            }
            uVar8 = *(ushort *)((long)piVar2 + lVar16);
          }
          if ((8 < uVar8) && (uVar24 = (ulong)*(ushort *)((long)piVar2 + lVar16 + 8), uVar24 != 0))
          {
            uVar30 = (ulong)*(uint *)((long)piVar2 + uVar24);
            puVar3 = (uint *)((long)((long)piVar2 + uVar24) + uVar30);
            if (*puVar3 != 0) {
              uVar31 = 0;
              lVar16 = lVar29 + uVar30 + uVar24 + uVar23;
              do {
                puVar5 = puVar3 + uVar31 + 1;
                uVar23 = (ulong)*puVar5;
                pcVar25 = (char *)((long)puVar5 + uVar23 + 4);
                local_178 = strlen(pcVar25);
                bVar7 = *(byte *)((long)puVar5 + uVar23 + 4);
                local_188 = &DAT_cbf29ce484222645;
                if (bVar7 != 0) {
                  local_188 = &DAT_cbf29ce484222645;
                  pbVar19 = (byte *)(lVar16 + uVar23);
                  do {
                    local_188 = (undefined1 *)(((ulong)local_188 ^ (ulong)bVar7) * 0x100000001b3);
                    bVar7 = *pbVar19;
                    pbVar19 = pbVar19 + 1;
                  } while (bVar7 != 0);
                }
                uVar27 = *param_2;
                uStack_170 = 0;
                pcStack_180 = pcVar25;
                uVar13 = FUN_012d6ef8(uVar27,&local_188);
                FUN_012d7020(uVar27,local_198,uVar13);
                uVar31 = uVar31 + 1;
                lVar16 = lVar16 + 4;
              } while (uVar31 < *puVar3);
            }
          }
        }
        if (!bVar9) {
          (**(code **)(*local_1d0 + 0x20))();
        }
        lVar26 = lVar26 + 4;
        lVar29 = lVar29 + 4;
        uVar22 = uVar22 + 1;
        lVar18 = lVar18 + 4;
      } while (uVar22 < *puVar1);
    }
  }
  return;
}


