/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0018a8f0; name: FUN_0018a8f0
 */


/* WARNING: Removing unreachable block (ram,0x0018ad88) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0018a8f0(size_t *param_1,size_t *param_2,uint *param_3,int param_4,undefined8 param_5,
                long param_6,size_t *param_7,long param_8,uint param_9)

{
  bool bVar1;
  size_t *psVar2;
  size_t *psVar3;
  size_t *psVar4;
  long lVar5;
  size_t *psVar6;
  undefined8 *puVar7;
  size_t *__n;
  ushort uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  size_t *psVar16;
  ushort *puVar17;
  ushort *__src;
  undefined8 uVar18;
  char *pcVar19;
  uint uVar20;
  void *pvVar21;
  ulong uVar22;
  size_t *psVar23;
  code *pcVar24;
  uint *puVar25;
  void *__dest;
  uint *puVar26;
  void *__src_00;
  byte *pbVar27;
  size_t sVar28;
  ulong uVar29;
  undefined8 *puVar30;
  size_t *__dest_00;
  uint *__src_01;
  int iVar31;
  size_t sVar32;
  size_t *psVar33;
  size_t *local_130;
  size_t local_128;
  size_t local_120;
  size_t local_118;
  size_t local_110;
  size_t local_108;
  size_t sStack_100;
  size_t local_f8;
  size_t sStack_f0;
  size_t local_e8;
  size_t sStack_e0;
  size_t local_d8;
  size_t local_d0;
  size_t sStack_c8;
  size_t local_c0;
  size_t local_b8;
  long local_b0;
  long lStack_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  void *local_88;
  size_t local_80;
  size_t local_78;
  size_t *local_70 [2];
  
  puVar25 = param_3;
  if (param_1 < param_2) {
    psVar2 = (size_t *)((long)param_3 + (long)param_4);
    param_8 = (long)param_7 + param_8;
    __dest_00 = param_1;
    psVar16 = param_7;
    do {
      psVar33 = (size_t *)((long)param_2 - (long)__dest_00);
      __n = psVar33;
      if (0x1ffff < (long)psVar33) {
        __n = (size_t *)0x20000;
      }
      if ((long)psVar2 - (long)puVar25 < 4) {
        return -1;
      }
      uVar9 = (*puVar25 & 0xff00ff00) >> 8 | (*puVar25 & 0xff00ff) << 8;
      uVar20 = uVar9 >> 0x10 | uVar9 << 0x10;
      if ((int)uVar20 < 0) {
        __src_01 = (uint *)((long)puVar25 + 3);
        uVar12 = (ulong)(uVar20 >> 8) & 0x7ffff;
        if ((long)psVar2 - (long)__src_01 < (long)uVar12) {
          return -1;
        }
        uVar9 = (uVar9 & 0xffff) >> 0xb;
        uVar20 = uVar9 & 0xf;
        if ((long)uVar12 < (long)__n) {
          if ((long)__n < 0x80) {
            FUN_0015c3d0();
            pcVar24 = *(code **)PTR_PTR_047cb868;
            if (pcVar24 == (code *)0x0) goto LAB_0018b2a8;
            pcVar19 = "OODLE ERROR : corruption : chunk_len >= 128\n";
            uVar18 = 0x1091;
          }
          else {
            lVar13 = FUN_00151010(9,__n);
            if (param_8 - (long)psVar16 < lVar13) {
              FUN_0015c3d0();
              pcVar24 = *(code **)PTR_PTR_047cb868;
              if (pcVar24 == (code *)0x0) goto LAB_0018b2a8;
              pcVar19 = "OODLE ERROR : decoder scratch too small\n";
              uVar18 = 0x1099;
            }
            else {
              psVar4 = (size_t *)((long)__src_01 + uVar12);
              lVar5 = (long)__dest_00 + (param_6 - (long)param_1);
              psVar6 = (size_t *)((long)psVar16 + lVar13);
              if ((param_9 & 1) != 0) {
                if (1 < uVar20) goto LAB_0018b530;
                bVar11 = __src_01 <= (uint *)((long)__dest_00 + (long)__n);
                bVar1 = __dest_00 <= psVar4;
                if (uVar12 < 10) {
                  FUN_0015c3d0();
                  if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
                    (**(code **)PTR_PTR_047cb868)
                              (0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",0xdca,
                               "OODLE ERROR : corruption : 10 <= rrPtrDiff(comp_end - comp_ptr)\n");
                  }
                  FUN_0015c3f0();
                  goto LAB_0018b530;
                }
                psVar3 = psVar16 + 0x12;
                bVar10 = bVar11 && bVar1;
                puVar26 = __src_01;
                if (lVar5 == 0) {
                  puVar26 = (uint *)((long)puVar25 + 0xb);
                  *__dest_00 = *(size_t *)((long)puVar25 + 3);
                }
                psVar23 = __n;
                if ((long)(lVar13 - 0x90U) <= (long)__n) {
                  psVar23 = (size_t *)(lVar13 - 0x90U);
                }
                local_130 = psVar3;
                lVar13 = FUN_0018b570(&local_130,puVar26,psVar4,local_70,psVar23,bVar10,psVar3,
                                      psVar6);
                if (lVar13 < 0) goto LAB_0018b530;
                sVar32 = (long)psVar3 + (long)local_70[0];
                psVar23 = __n;
                if ((long)((long)psVar6 - sVar32) <= (long)__n) {
                  psVar23 = (size_t *)((long)psVar6 - sVar32);
                }
                local_78 = sVar32;
                lVar14 = FUN_0018b570(&local_78,(long)puVar26 + lVar13,psVar4,&local_80,psVar23,
                                      bVar10,sVar32,psVar6);
                psVar23 = (size_t *)((long)puVar26 + lVar13 + lVar14);
                if (lVar14 < 0) goto LAB_0018b530;
                psVar16[5] = local_80;
                if ((long)__n < 0x10001) {
                  psVar16[6] = local_80;
LAB_0018ac34:
                  if ((long)psVar4 - (long)psVar23 < 2) {
                    FUN_0015c3d0();
                    pcVar24 = *(code **)PTR_PTR_047cb868;
                    if (pcVar24 != (code *)0x0) {
                      pcVar19 = "OODLE ERROR : corruption : 2 <= rrPtrDiff(comp_end - comp_ptr)\n";
                      uVar18 = 0xe2a;
                      goto LAB_0018b520;
                    }
                  }
                  else {
                    __dest = (void *)(sVar32 + local_80);
                    __src_00 = (void *)((long)psVar23 + 2);
                    uVar8 = (ushort)*psVar23;
                    if (uVar8 == 0xffff) {
                      uVar29 = (ulong)__n >> 1 & 0x7fffffff;
                      uVar22 = uVar29;
                      if ((long)psVar6 - (long)__dest <= (long)uVar29) {
                        uVar22 = (long)psVar6 - (long)__dest;
                      }
                      local_88 = __dest;
                      lVar13 = FUN_0018b570(&local_88,__src_00,psVar4,&local_90,uVar22,0,__dest,
                                            psVar6);
                      if (lVar13 < 0) goto LAB_0018b530;
                      lVar14 = (long)__dest + local_90;
                      if ((long)psVar6 - lVar14 <= (long)uVar29) {
                        uVar29 = (long)psVar6 - lVar14;
                      }
                      local_98 = lVar14;
                      lVar15 = FUN_0018b570(&local_98,(long)__src_00 + lVar13,psVar4,&local_a0,
                                            uVar29,0,lVar14,psVar6);
                      if (lVar15 < 0) goto LAB_0018b530;
                      pbVar27 = (byte *)((long)__src_00 + lVar13 + lVar15);
                      uVar22 = lVar14 + local_a0;
                      if (local_90 != local_a0) {
                        FUN_0015c3d0();
                        if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
                          (**(code **)PTR_PTR_047cb868)
                                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",0xe51,
                                     "OODLE ERROR : corruption : off16s_hi_count == off16s_lo_count\n"
                                    );
                        }
                        FUN_0015c3f0();
                        goto LAB_0018b530;
                      }
                      if ((uVar22 & 1) != 0) {
                        uVar22 = uVar22 + 1;
                      }
                      if ((long)((long)psVar6 - uVar22) < (long)((local_a0 & 0xffffffff) * 2)) {
                        FUN_0015c3d0();
                        if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
                          (**(code **)PTR_PTR_047cb868)
                                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",0xe61,
                                     "OODLE ERROR : corruption : 2*(SINTa)num_off16s <= rrPtrDiff( scratch_end - scratch_ptr )\n"
                                    );
                        }
                        FUN_0015c3f0();
                        goto LAB_0018b530;
                      }
                      psVar16[9] = uVar22;
                      iVar31 = (int)local_a0;
                      __dest = (void *)(uVar22 + (uint)(iVar31 << 1));
                      FUN_0015ff40(uVar22,local_a0 & 0xffffffff,local_98,local_88);
                      pvVar21 = (void *)psVar16[9];
                      sVar32 = (size_t)(uint)(iVar31 << 1);
                    }
                    else {
                      if ((long)psVar4 - (long)__src_00 < (long)((ulong)(uint)uVar8 * 2)) {
                        FUN_0015c3d0();
                        pcVar24 = *(code **)PTR_PTR_047cb868;
                        if (pcVar24 != (code *)0x0) {
                          pcVar19 = 
                          "OODLE ERROR : corruption : 2*(SINTa)num_off16s <= rrPtrDiff( comp_end - comp_ptr )\n"
                          ;
                          uVar18 = 0xe6f;
                          goto LAB_0018b520;
                        }
                        goto LAB_0018b528;
                      }
                      if (bVar11 && bVar1) {
                        sVar32 = (ulong)uVar8 * 2;
                        if ((long)psVar6 - (long)__dest < (long)sVar32) goto LAB_0018b530;
                        memcpy(__dest,__src_00,sVar32);
                        psVar16[9] = (size_t)__dest;
                        pvVar21 = __dest;
                        __dest = (void *)((long)__dest + sVar32);
                      }
                      else {
                        sVar32 = (ulong)uVar8 << 1;
                        psVar16[9] = (size_t)__src_00;
                        pvVar21 = __src_00;
                      }
                      pbVar27 = (byte *)((long)__src_00 + sVar32);
                    }
                    psVar16[10] = (long)pvVar21 + sVar32;
                    if ((long)psVar4 - (long)pbVar27 < 3) {
                      FUN_0015c3d0();
                      pcVar24 = *(code **)PTR_PTR_047cb868;
                      if (pcVar24 != (code *)0x0) {
                        pcVar19 = 
                        "OODLE ERROR : corruption : 3 <= rrPtrDiff( comp_end - comp_ptr )\n";
                        uVar18 = 0xe88;
                        goto LAB_0018b520;
                      }
                    }
                    else {
                      uVar9 = (uint)pbVar27[2] << 0x10 | (uint)pbVar27[1] << 8;
                      __src = (ushort *)(pbVar27 + 3);
                      if (uVar9 == 0 && *pbVar27 == 0) {
                        puVar30 = (undefined8 *)((long)__dest + 3U & 0xfffffffffffffffc);
                        psVar16[0xd] = 0;
                        psVar16[0xe] = 0;
                        psVar16[0xb] = (size_t)puVar30;
                        psVar16[0xc] = (size_t)puVar30;
                        if (0x1f < (long)psVar6 - (long)puVar30) {
                          puVar30[2] = 0;
                          puVar30[3] = 0;
                          *puVar30 = 0;
                          puVar30[1] = 0;
                          if (bVar10) goto LAB_0018aed8;
LAB_0018af44:
                          psVar16[2] = (size_t)__src;
                          psVar23 = psVar4;
                          goto LAB_0018af50;
                        }
                        FUN_0015c3d0();
                        pcVar24 = *(code **)PTR_PTR_047cb868;
                        if (pcVar24 != (code *)0x0) {
                          pcVar19 = 
                          "OODLE ERROR : corruption : scratch_bytes_needed <= rrPtrDiff( scratch_end - scratch_ptr )\n"
                          ;
                          uVar18 = 0xe9a;
                          goto LAB_0018b520;
                        }
                      }
                      else {
                        uVar9 = uVar9 >> 0xc;
                        sVar32 = (size_t)uVar9;
                        if (uVar9 == 0xfff) {
                          if ((long)psVar4 - (long)__src < 2) {
                            FUN_0015c3d0();
                            pcVar24 = *(code **)PTR_PTR_047cb868;
                            if (pcVar24 != (code *)0x0) {
                              pcVar19 = 
                              "OODLE ERROR : corruption : 2 <= rrPtrDiff( comp_end - comp_ptr )\n";
                              uVar18 = 0xea7;
                              goto LAB_0018b520;
                            }
                            goto LAB_0018b528;
                          }
                          sVar32 = (size_t)*(ushort *)(pbVar27 + 3);
                          __src = (ushort *)(pbVar27 + 5);
                        }
                        uVar9 = (uint)pbVar27[1] << 8 & 0xf00 | (uint)*pbVar27;
                        sVar28 = (size_t)uVar9;
                        puVar17 = __src;
                        if (uVar9 == 0xfff) {
                          if ((long)psVar4 - (long)__src < 2) {
                            FUN_0015c3d0();
                            pcVar24 = *(code **)PTR_PTR_047cb868;
                            if (pcVar24 != (code *)0x0) {
                              pcVar19 = 
                              "OODLE ERROR : corruption : 2 <= rrPtrDiff( comp_end - comp_ptr )\n";
                              uVar18 = 0xead;
                              goto LAB_0018b520;
                            }
                            goto LAB_0018b528;
                          }
                          puVar17 = __src + 1;
                          sVar28 = (size_t)*__src;
                        }
                        psVar16[0xd] = sVar32;
                        psVar16[0xe] = sVar28;
                        if ((long)(ulong)(((int)sVar28 + (int)sVar32) * 4 + 0x40) <=
                            (long)psVar6 - (long)__dest) {
                          uVar22 = (long)__dest + 3U & 0xfffffffffffffffc;
                          psVar16[0xb] = uVar22;
                          puVar7 = (undefined8 *)(uVar22 + (uint)((int)sVar32 << 2));
                          puVar7[2] = 0;
                          puVar7[3] = 0;
                          *puVar7 = 0;
                          puVar7[1] = 0;
                          puVar30 = (undefined8 *)
                                    ((long)(puVar7 + 4) + (ulong)(uint)((int)sVar28 << 2));
                          psVar16[0xc] = (size_t)(puVar7 + 4);
                          puVar30[2] = 0;
                          puVar30[3] = 0;
                          *puVar30 = 0;
                          puVar30[1] = 0;
                          lVar13 = FUN_001a0a50(puVar17,psVar4,psVar16[0xb],sVar32,lVar5);
                          if (lVar13 < 0) goto LAB_0018b530;
                          lVar14 = FUN_001a0a50((byte *)((long)puVar17 + lVar13),psVar4,psVar16[0xc]
                                                ,sVar28,lVar5 + 0x10000);
                          if (lVar14 < 0) goto LAB_0018b530;
                          __src = (ushort *)((byte *)((long)puVar17 + lVar13) + lVar14);
                          if (!bVar11 || !bVar1) goto LAB_0018af44;
LAB_0018aed8:
                          puVar30 = puVar30 + 4;
                          sVar32 = (long)psVar4 - (long)__src;
                          if ((long)psVar6 - (long)puVar30 < (long)sVar32) goto LAB_0018b530;
                          memcpy(puVar30,__src,sVar32);
                          psVar16[2] = (size_t)puVar30;
                          psVar23 = (size_t *)((long)puVar30 + sVar32);
LAB_0018af50:
                          psVar16[3] = (size_t)psVar23;
                          *psVar16 = (size_t)__dest_00;
                          psVar16[1] = (size_t)psVar3;
                          psVar16[4] = local_78;
                          psVar16[0x11] = local_78 + local_80;
                          psVar16[7] = (size_t)local_130;
                          psVar16[8] = (long)local_130 + (long)local_70[0];
                          goto LAB_0018af94;
                        }
                        FUN_0015c3d0();
                        pcVar24 = *(code **)PTR_PTR_047cb868;
                        if (pcVar24 != (code *)0x0) {
                          pcVar19 = 
                          "OODLE ERROR : corruption : scratch_bytes_needed <= rrPtrDiff( scratch_end - scratch_ptr )\n"
                          ;
                          uVar18 = 0xebd;
                          goto LAB_0018b520;
                        }
                      }
                    }
                  }
                }
                else {
                  if ((size_t *)((long)psVar23 + 2) <= psVar4) {
                    sVar28 = *psVar23;
                    psVar16[6] = (ulong)(ushort)sVar28;
                    psVar23 = (size_t *)((long)psVar23 + 2);
                    if ((long)local_80 < (long)(ulong)(ushort)sVar28) goto LAB_0018b530;
                    goto LAB_0018ac34;
                  }
                  FUN_0015c3d0();
                  pcVar24 = *(code **)PTR_PTR_047cb868;
                  if (pcVar24 == (code *)0x0) goto LAB_0018b528;
                  pcVar19 = "OODLE ERROR : corruption : comp_ptr+2 <= comp_end\n";
                  uVar18 = 0xe16;
LAB_0018b520:
                  (*pcVar24)(0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",uVar18,pcVar19);
                }
LAB_0018b528:
                FUN_0015c3f0();
LAB_0018b530:
                FUN_0015cf00(psVar16,0x90);
                return -1;
              }
LAB_0018af94:
              if ((param_9 >> 1 & 1) == 0) {
LAB_0018b1ac:
                psVar16 = param_7;
                if (param_9 != 3) {
                  psVar16 = psVar6;
                }
                goto LAB_0018a9c0;
              }
              if ((size_t *)*psVar16 != __dest_00) {
                return -1;
              }
              local_130 = (size_t *)*psVar16;
              local_128 = psVar16[1];
              local_120 = psVar16[2];
              if (0xffff < (long)__n) {
                psVar33 = (size_t *)0x10000;
              }
              local_118 = psVar16[3];
              local_110 = psVar16[4];
              lVar14 = (long)__n - (long)psVar33;
              sVar32 = psVar16[5];
              sVar28 = psVar16[6];
              lVar13 = (long)__dest_00 - lVar5;
              local_f8 = psVar16[7];
              sStack_f0 = psVar16[8];
              local_e8 = psVar16[9];
              sStack_e0 = psVar16[10];
              local_d8 = psVar16[0xb];
              local_d0 = psVar16[0xc];
              sStack_c8 = psVar16[0xd];
              local_c0 = psVar16[0xe];
              local_70[0] = (size_t *)CONCAT44(local_70[0]._4_4_,0xfffffff8);
              local_b0 = local_d8 + sStack_c8 * 4;
              lStack_a8 = local_110 + sVar28;
              local_108 = sVar32;
              sStack_100 = sVar28;
              local_b8 = local_d8;
              if (lVar14 == 0) {
                if (lVar5 == 0) {
                  if (uVar20 == 1) {
                    psVar16 = (size_t *)FUN_001896e0(__dest_00,psVar33,param_2,lVar13,psVar4);
                  }
                  else {
                    psVar16 = (size_t *)
                              FUN_00188270(__dest_00,psVar33,param_2,lVar13,psVar4,&local_130,
                                           local_70);
                  }
                }
                else if (uVar20 == 1) {
                  psVar16 = (size_t *)FUN_00186d20(__dest_00,psVar33,param_2,lVar13,psVar4);
                }
                else {
                  psVar16 = (size_t *)FUN_00185580(__dest_00,psVar33,param_2,lVar13,psVar4);
                }
              }
              else {
                if (lVar5 == 0) {
                  if (uVar20 != 1) {
                    lVar13 = FUN_00188270(__dest_00,psVar33,param_2,lVar13,psVar4,&local_130,
                                          local_70);
                  }
                  else {
                    lVar13 = FUN_001896e0(__dest_00,psVar33,param_2,lVar13,psVar4);
                  }
                }
                else if (uVar20 != 1) {
                  lVar13 = FUN_00185580(__dest_00,psVar33,param_2,lVar13,psVar4);
                }
                else {
                  lVar13 = FUN_00186d20(__dest_00,psVar33,param_2,lVar13,psVar4);
                }
                if (lVar13 == 0) {
                  return -1;
                }
                local_b0 = local_d0 + local_c0 * 4;
                lStack_a8 = local_110 + sVar32;
                local_110 = local_110 + sVar28;
                local_b8 = local_d0;
                if (uVar20 == 1) {
                  psVar16 = (size_t *)FUN_00186d20((long)__dest_00 + (long)psVar33,lVar14,param_2);
                }
                else {
                  psVar16 = (size_t *)FUN_00185580((long)__dest_00 + (long)psVar33,lVar14,param_2);
                }
              }
              if (psVar16 == (size_t *)0x0) {
                return -1;
              }
              if (psVar16 == psVar4) {
                if (local_e8 == sStack_e0) {
                  if (local_f8 == sStack_f0) {
                    if (local_120 == local_118) goto LAB_0018b1ac;
                    FUN_0015c3d0();
                    pcVar24 = *(code **)PTR_PTR_047cb868;
                    if (pcVar24 == (code *)0x0) goto LAB_0018b2a8;
                    pcVar19 = 
                    "OODLE ERROR : corruption : arrays->excesses_ptr == arrays->excesses_end\n";
                    uVar18 = 0x1008;
                  }
                  else {
                    FUN_0015c3d0();
                    pcVar24 = *(code **)PTR_PTR_047cb868;
                    if (pcVar24 == (code *)0x0) goto LAB_0018b2a8;
                    pcVar19 = 
                    "OODLE ERROR : corruption : arrays->literals_ptr == arrays->literals_end\n";
                    uVar18 = 0x1007;
                  }
                }
                else {
                  FUN_0015c3d0();
                  pcVar24 = *(code **)PTR_PTR_047cb868;
                  if (pcVar24 == (code *)0x0) goto LAB_0018b2a8;
                  pcVar19 = "OODLE ERROR : corruption : arrays->off16_ptr == arrays->off16_end\n";
                  uVar18 = 0x1006;
                }
              }
              else {
                FUN_0015c3d0();
                pcVar24 = *(code **)PTR_PTR_047cb868;
                if (pcVar24 == (code *)0x0) goto LAB_0018b2a8;
                pcVar19 = "OODLE ERROR : corruption : comp_ptr == comp_end\n";
                uVar18 = 0x1003;
              }
            }
          }
          (*pcVar24)(0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",uVar18,pcVar19);
LAB_0018b2a8:
          FUN_0015c3f0();
          return -1;
        }
        if ((long)__n < (long)uVar12) {
          return -1;
        }
        if ((uVar9 & 0xf) != 0) {
          return -1;
        }
        if ((param_9 & 1) != 0) {
          memmove(__dest_00,__src_01,(size_t)__n);
        }
      }
      else {
        if ((param_9 & 1) == 0) {
          uVar12 = FUN_00174c80(puVar25,psVar2,&local_130,__n);
        }
        else if ((psVar2 < __dest_00) || ((uint *)((long)__dest_00 + (long)__n) < puVar25)) {
          local_70[0] = __dest_00;
          uVar12 = FUN_0018b570(local_70,puVar25,psVar2,&local_130,__n,0,psVar16,param_8);
          if (local_70[0] != __dest_00) {
            return -1;
          }
        }
        else {
          local_70[0] = psVar16;
          uVar12 = FUN_0018b570(local_70,puVar25,psVar2,&local_130,__n,0,psVar16,param_8);
          if (local_70[0] != psVar16) {
            return -1;
          }
          memcpy(__dest_00,psVar16,(size_t)__n);
        }
        if ((long)uVar12 < 0) {
          return -1;
        }
        if ((long)__n <= (long)uVar12) {
          return -1;
        }
        __src_01 = puVar25;
        if (local_130 != __n) {
          return -1;
        }
      }
LAB_0018a9c0:
      __dest_00 = (size_t *)((long)__dest_00 + (long)__n);
      puVar25 = (uint *)((long)__src_01 + uVar12);
    } while (__dest_00 < param_2);
  }
  return (int)puVar25 - (int)param_3;
}


