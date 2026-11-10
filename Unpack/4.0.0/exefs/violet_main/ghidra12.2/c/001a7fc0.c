/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a7fc0; name: FUN_001a7fc0
 */


/* WARNING: Control flow encountered bad instruction data */

ulong FUN_001a7fc0(undefined8 *param_1,undefined8 *param_2,uint *param_3,int param_4,
                  undefined8 param_5,long param_6,undefined8 *param_7,long param_8,uint param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  uint uVar6;
  uint uVar5;
  bool bVar7;
  undefined8 **ppuVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint *__src;
  uint *puVar22;
  long lVar23;
  uint uVar24;
  int local_14c;
  undefined8 *local_148;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  long local_f0;
  uint local_e4;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 *local_70 [2];
  
  puVar21 = param_3;
  if (param_1 < param_2) {
    puVar1 = (undefined8 *)((long)param_3 + (long)param_4);
    local_f0 = (long)param_7 + param_8;
    local_e4 = param_9;
    local_100 = param_7;
    local_f8 = param_1;
LAB_001a8038:
    do {
      uVar24 = 0xffffffff;
      uVar16 = (long)param_2 - (long)param_1;
      if (0x1ffff < (long)uVar16) {
        uVar16 = 0x20000;
      }
      if ((long)puVar1 - (long)puVar21 < 4) goto LAB_001a8a30;
      uVar5 = (*puVar21 & 0xff00ff00) >> 8 | (*puVar21 & 0xff00ff) << 8;
      uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (-1 < (int)uVar6) {
        if ((param_9 & 1) == 0) {
          uVar10 = FUN_00174c80(puVar21,puVar1,&local_e0,uVar16);
joined_r0x001a8240:
          if (((-1 < (long)uVar10) && ((long)uVar10 < (long)uVar16)) && (local_e0 == uVar16)) {
            __src = puVar21;
            goto LAB_001a8024;
          }
        }
        else if ((puVar1 < param_1) || ((uint *)((long)param_1 + uVar16) < puVar21)) {
          local_70[0] = param_1;
          uVar10 = FUN_001a8a90(local_70,puVar21,puVar1,&local_e0,uVar16,0,param_7,local_f0);
          if (local_70[0] == param_1) goto joined_r0x001a8240;
        }
        else {
          local_70[0] = param_7;
          uVar10 = FUN_001a8a90(local_70,puVar21,puVar1,&local_e0,uVar16,0,param_7,local_f0);
          if (local_70[0] == param_7) {
            memcpy(param_1,param_7,uVar16);
            goto joined_r0x001a8240;
          }
        }
LAB_001a8a2c:
        uVar24 = 0xffffffff;
        goto LAB_001a8a30;
      }
      __src = (uint *)((long)puVar21 + 3);
      uVar6 = uVar6 >> 8 & 0x7ffff;
      uVar10 = (ulong)uVar6;
      if ((long)puVar1 - (long)__src < (long)uVar10) goto LAB_001a8a30;
      uVar5 = (uVar5 & 0xffff) >> 0xb & 0xf;
      if ((long)uVar16 <= (long)uVar10) {
        if ((uVar5 != 0) || ((long)uVar16 < (long)uVar10)) goto LAB_001a8a30;
        if ((param_9 & 1) != 0) {
          memmove(param_1,__src,uVar16);
LAB_001a8024:
          param_9 = local_e4;
        }
        param_1 = (undefined8 *)((long)param_1 + uVar16);
        puVar21 = (uint *)((long)__src + uVar10);
        if (param_2 <= param_1) break;
        goto LAB_001a8038;
      }
      if ((long)uVar16 < 0x80) {
        FUN_0015c3d0();
        pcVar17 = *(code **)PTR_PTR_047cb868;
        if (pcVar17 != (code *)0x0) {
          pcVar14 = "OODLE ERROR : corruption : chunk_len >= 128\n";
          uVar12 = 0xd91;
LAB_001a8a20:
          (*pcVar17)(0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",uVar12,pcVar14);
        }
LAB_001a8a28:
        FUN_0015c3f0();
        goto LAB_001a8a2c;
      }
      lVar11 = FUN_00151010(0xd,uVar16);
      if (local_f0 - (long)param_7 < lVar11) {
        FUN_0015c3d0();
        pcVar17 = *(code **)PTR_PTR_047cb868;
        if (pcVar17 != (code *)0x0) {
          pcVar14 = "OODLE ERROR : Leviathan decoder scratch too small\n";
          uVar12 = 0xda7;
          goto LAB_001a8a20;
        }
        goto LAB_001a8a28;
      }
      lVar3 = (long)param_1 + (param_6 - (long)local_f8);
      local_108 = (undefined8 *)((long)param_7 + lVar11);
      if ((local_e4 & 1) != 0) {
        FUN_0015cf00(param_7,0x1d0);
        if (uVar5 < 6) {
          puVar2 = param_7 + 0x3a;
          *param_7 = param_1;
          param_7[1] = puVar2;
          param_7[2] = local_108;
          if (0xc < uVar6) {
            puVar4 = (uint *)((long)__src + uVar10);
            puVar22 = __src;
            if (lVar3 == 0) {
              puVar22 = (uint *)((long)puVar21 + 0xb);
              *param_1 = *(undefined8 *)((long)puVar21 + 3);
            }
            local_78 = (undefined8 *)0x0;
            local_70[0] = (undefined8 *)0x0;
            local_80 = 0;
            if (puVar22 < puVar4) {
              uVar24 = *puVar22;
              uVar13 = (uVar16 & 0xffffffff) / 3;
              if (-1 < (char)(byte)uVar24) {
                lVar11 = FUN_00174c80(puVar22,puVar4,&local_80,uVar13);
                if (lVar11 < 0) goto LAB_001a8364;
                local_148 = (undefined8 *)((long)local_108 - local_80);
                local_70[0] = local_148;
                lVar11 = FUN_001a8a90(local_70,puVar22,puVar4,&local_e0,local_80,0,puVar2);
                if (-1 < lVar11) {
                  lVar23 = (long)puVar22 + lVar11;
                  local_14c = 0;
                  goto LAB_001a837c;
                }
                goto LAB_001a86f8;
              }
              lVar23 = (long)puVar22 + 1;
              lVar11 = FUN_00174c80(lVar23,puVar4,&local_80,uVar13);
              if (lVar11 < 0) {
LAB_001a8364:
                bVar7 = true;
              }
              else {
                local_148 = (undefined8 *)((long)local_108 - local_80);
                local_70[0] = local_148;
                lVar11 = FUN_001a8a90(local_70,lVar23,puVar4,&local_e0,local_80,0,puVar2);
                if (lVar11 < 0) goto LAB_001a8364;
                local_14c = (byte)uVar24 - 0x7f;
                lVar23 = lVar23 + lVar11;
                if (1 < local_14c) {
                  local_148 = (undefined8 *)((long)local_148 - local_80);
                  local_88 = 0;
                  local_78 = local_148;
                  lVar11 = FUN_001a8a90(&local_78,lVar23,puVar4,&local_88,local_80,0,puVar2);
                  if ((lVar11 < 0) || (local_80 != local_88)) goto LAB_001a8364;
                  lVar23 = lVar23 + lVar11;
                }
LAB_001a837c:
                local_90 = 0;
                local_88 = 0;
                lVar11 = FUN_00174c80(lVar23,puVar4,&local_90,(uVar16 & 0xffffffff) / 5);
                if (lVar11 < 0) goto LAB_001a86f8;
                lVar15 = (long)local_148 - local_90;
                local_88 = lVar15;
                lVar11 = FUN_001a8a90(&local_88,lVar23,puVar4,&local_e0,local_90,0,puVar2);
                lVar23 = lVar23 + lVar11;
                if (lVar11 < 0) goto LAB_001a86f8;
                uVar20 = (long)param_7 + 0x1dfU & 0xfffffffffffffff0;
                param_7[3] = uVar20;
                param_7[4] = local_80;
                uVar18 = uVar20 + local_80 * 4 + 0xf & 0xfffffffffffffff0;
                param_7[5] = uVar18;
                param_7[6] = local_90;
                uVar13 = uVar18 + local_90 * 4;
                if (uVar5 < 2) {
                  uVar19 = uVar16;
                  if ((long)(lVar15 - uVar13) <= (long)uVar16) {
                    uVar19 = lVar15 - uVar13;
                  }
                  local_e0 = uVar13;
                  lVar11 = FUN_001a8a90(&local_e0,lVar23,puVar4,&local_a0,uVar19,1,uVar13);
                  if (-1 < lVar11) {
                    param_7[7] = local_e0;
                    param_7[0x17] = local_a0;
                    local_98 = local_a0;
LAB_001a84e8:
                    puVar21 = (uint *)(lVar23 + lVar11);
                    param_7[0x27] = local_98;
                    local_a0 = 0;
                    if (puVar4 <= puVar21) {
                      FUN_0015c3d0();
                      pcVar17 = *(code **)PTR_PTR_047cb868;
                      if (pcVar17 != (code *)0x0) {
                        uVar12 = 0xbd9;
                        pcVar14 = "OODLE ERROR : corruption : comp_ptr < chunk_comp_end\n";
LAB_001a89d0:
                        (*pcVar17)(0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",uVar12,pcVar14
                                  );
                      }
LAB_001a89d4:
                      lVar11 = FUN_0015c3f0();
                      bVar7 = true;
                      goto LAB_001a8704;
                    }
                    uVar13 = uVar13 + local_98;
                    uVar19 = uVar16 >> 1 & 0x7fffffff;
                    if ((char)(byte)*puVar21 < '\0') {
                      if (((byte)*puVar21 & 0x7f) != 3) {
                        FUN_0015c3d0();
                        pcVar17 = *(code **)PTR_PTR_047cb868;
                        if (pcVar17 != (code *)0x0) {
                          uVar12 = 0xbe1;
                          pcVar14 = "OODLE ERROR : corruption : num_packets_arrays == (1<<3)\n";
                          goto LAB_001a89d0;
                        }
                        goto LAB_001a89d4;
                      }
                      lVar11 = FUN_0017e880((long)puVar21 + 1,puVar4,uVar13,lVar15,param_7 + 0x28,
                                            &local_e0,8,&local_a0,1,uVar13,lVar15);
                      if ((-1 < lVar11) && (local_a0 <= (long)uVar19)) {
                        lVar11 = (long)puVar21 + 1 + lVar11;
                        param_7[0x30] = param_7[0x28] + local_e0;
                        param_7[0x31] = param_7[0x29] + local_d8;
                        param_7[0x32] = param_7[0x2a] + local_d0;
                        param_7[0x33] = param_7[0x2b] + local_c8;
                        param_7[0x34] = param_7[0x2c] + local_c0;
                        param_7[0x35] = param_7[0x2d] + local_b8;
                        param_7[0x36] = param_7[0x2e] + local_b0;
                        param_7[0x37] = param_7[0x2f] + local_a8;
                        param_7[0x38] = 0;
                        goto LAB_001a8624;
                      }
                    }
                    else {
                      if ((long)(lVar15 - uVar13) <= (long)uVar19) {
                        uVar19 = lVar15 - uVar13;
                      }
                      local_e0 = uVar13;
                      lVar11 = FUN_001a8a90(&local_e0,puVar21,puVar4,&local_a0,uVar19,1,uVar13);
                      if (-1 < lVar11) {
                        lVar11 = (long)puVar21 + lVar11;
                        param_7[0x38] = local_e0;
LAB_001a8624:
                        param_7[0x39] = local_a0;
                        if ((long)(uVar16 * 2) < (long)((uVar13 + local_a0) - (long)puVar2)) {
                          FUN_0015c3d0(lVar11);
                          pcVar17 = *(code **)PTR_PTR_047cb868;
                          if (pcVar17 != (code *)0x0) {
                            uVar12 = 0xc2c;
                            pcVar14 = 
                            "OODLE ERROR : corruption : rrPtrDiff( scratch_ptr - scratch_space ) <= 2*chunk_len\n"
                            ;
                            goto LAB_001a89d0;
                          }
                          goto LAB_001a89d4;
                        }
                        lVar11 = FUN_001c0a50(lVar11,puVar4,local_70[0],local_78,local_80,local_14c,
                                              local_88,local_90,uVar20,uVar18,uVar16 + lVar3,0,0);
                        if (-1 < (int)lVar11) {
                          bVar7 = false;
                          goto LAB_001a8704;
                        }
                        FUN_0015c3d0();
                        if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
                          (**(code **)PTR_PTR_047cb868)
                                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",0xc42,
                                     "OODLE ERROR : newLZ_get_offsets_excesses failed\n");
                        }
                        lVar11 = FUN_0015c3f0();
                      }
                    }
                  }
                  goto LAB_001a86f8;
                }
                if (uVar5 == 2) {
                  uVar12 = 2;
                }
                else if ((uVar5 == 5) || (uVar5 != 3)) {
                  uVar12 = 0x10;
                }
                else {
                  uVar12 = 4;
                }
                lVar11 = FUN_0017e880(lVar23,puVar4,uVar13,lVar15,param_7 + 7,param_7 + 0x17,uVar12,
                                      &local_98,1,uVar13,lVar15);
                if (lVar11 < 0) goto LAB_001a86f8;
                bVar7 = true;
                if (local_98 <= (long)uVar16) goto LAB_001a84e8;
              }
            }
            else {
              FUN_0015c3d0();
              if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
                (**(code **)PTR_PTR_047cb868)
                          (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",0xb13,
                           "OODLE ERROR : corruption : comp_ptr < chunk_comp_end\n");
              }
              lVar11 = FUN_0015c3f0();
LAB_001a86f8:
              bVar7 = true;
            }
LAB_001a8704:
            if (!bVar7) goto LAB_001a8708;
          }
        }
        *param_7 = 0;
        goto LAB_001a8a2c;
      }
LAB_001a8708:
      uVar24 = 0xffffffff;
      if ((local_e4 >> 1 & 1) != 0) {
        if ((5 < uVar5) || ((undefined8 *)*param_7 != param_1)) goto LAB_001a8a30;
        puVar2 = param_1 + (lVar3 == 0);
        if (param_7[0x38] == 0) {
          if (uVar5 != 1) {
            if (uVar5 < 6) {
                    /* WARNING: Could not recover jumptable at 0x001a87ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar16 = (*(code *)(&UNK_001a87f0 + (ulong)(byte)(&DAT_03cbfc22)[uVar5] * 4))
                                 (lVar11,puVar2);
              return uVar16;
            }
            uVar12 = 0xcfd;
            goto LAB_001a8898;
          }
          uVar13 = FUN_001b6670(param_7,puVar2,param_1,(long)param_1 + uVar16,(long)param_1 - lVar3)
          ;
        }
        else {
          if (uVar5 != 1) {
            if (uVar5 < 6) {
                    /* WARNING: Could not recover jumptable at 0x001a87ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar16 = (*(code *)(&UNK_001a87b0 + (ulong)(byte)(&DAT_03cbfc1c)[uVar5] * 4))();
              return uVar16;
            }
            uVar12 = 0xcb2;
LAB_001a8898:
            iVar9 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",uVar12,
                                 "newLZHC_decode_chunk_phase2","bad chunk_type");
            if (iVar9 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto LAB_001a8924;
          }
          uVar13 = FUN_001b36b0(param_7,puVar2,param_1,(long)param_1 + uVar16,(long)param_1 - lVar3)
          ;
        }
        if ((uVar13 & 1) == 0) goto LAB_001a8a30;
      }
LAB_001a8924:
      ppuVar8 = &local_100;
      if (local_e4 != 3) {
        ppuVar8 = &local_108;
      }
      param_7 = *ppuVar8;
      param_1 = (undefined8 *)((long)param_1 + uVar16);
      puVar21 = (uint *)((long)__src + uVar10);
      param_9 = local_e4;
    } while (param_1 < param_2);
  }
  uVar24 = (int)puVar21 - (int)param_3;
LAB_001a8a30:
  return (ulong)uVar24;
}


