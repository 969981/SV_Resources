/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001896e0; name: FUN_001896e0
 */


undefined8
FUN_001896e0(long param_1,long param_2,ulong *param_3,ulong *param_4,undefined8 param_5,long param_6
            ,uint *param_7)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ushort *puVar5;
  ushort uVar6;
  byte bVar7;
  ulong *__src;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  ushort *puVar11;
  ulong *puVar12;
  size_t sVar13;
  ulong *puVar14;
  ulong *puVar15;
  code *pcVar16;
  ulong *puVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *extraout_x12;
  ulong *puVar24;
  long lVar25;
  ulong *puVar26;
  ulong uVar27;
  ushort *puVar28;
  ushort *puVar29;
  ulong *puVar30;
  uint uVar31;
  ulong uVar32;
  ushort *__src_00;
  ulong *puVar33;
  ulong *puVar34;
  ulong *local_1d0;
  ushort local_16c [72];
  ulong local_db [14];
  undefined1 local_6b;
  
  puVar24 = *(ulong **)(param_6 + 0x38);
  puVar4 = *(ulong **)(param_6 + 0x40);
  puVar12 = *(ulong **)(param_6 + 0x88);
  puVar30 = (ulong *)((long)puVar12 + -0xf);
  puVar1 = (ulong *)(param_1 + param_2);
  uVar32 = (ulong)*param_7;
  puVar34 = *(ulong **)(param_6 + 0x20);
  sVar13 = (long)puVar4 - (long)puVar24;
  puVar28 = *(ushort **)(param_6 + 0x48);
  puVar5 = *(ushort **)(param_6 + 0x50);
  if (0x70 < (long)sVar13) {
    sVar13 = 0x71;
  }
  local_1d0 = *(ulong **)(param_6 + 0x10);
  puVar14 = *(ulong **)(param_6 + 0x18);
  puVar23 = (ulong *)(param_1 + 8);
  __src = (ulong *)((long)puVar4 - sVar13);
  memcpy((void *)((long)local_db - sVar13),__src,sVar13);
  sVar13 = (long)puVar5 - (long)puVar28;
  if (0x1f < (long)sVar13) {
    sVar13 = 0x20;
  }
  local_db[0] = 0;
  local_db[1] = 0;
  local_db[2] = 0;
  local_db[3] = 0;
  local_db[4] = 0;
  local_db[5] = 0;
  local_db[6] = 0;
  local_db[7] = 0;
  local_db[8] = 0;
  local_db[9] = 0;
  local_db[10] = 0;
  local_db[0xb] = 0;
  local_db[0xc] = 0;
  __src_00 = (ushort *)((long)puVar5 - sVar13);
  local_db[0xd] = 0;
  local_6b = 0;
  memcpy((void *)((long)local_16c - sVar13),__src_00,sVar13);
  local_16c[4] = 0;
  local_16c[5] = 0;
  local_16c[6] = 0;
  local_16c[7] = 0;
  local_16c[0] = 0;
  local_16c[1] = 0;
  local_16c[2] = 0;
  local_16c[3] = 0;
  local_16c[0xc] = 0;
  local_16c[0xd] = 0;
  local_16c[0xe] = 0;
  local_16c[0xf] = 0;
  local_16c[8] = 0;
  local_16c[9] = 0;
  local_16c[10] = 0;
  local_16c[0xb] = 0;
  puVar11 = puVar5;
  puVar33 = puVar4;
  if ((puVar34 < puVar30) && ((ulong *)(param_1 + 0x170U) <= param_3)) {
    do {
      if (__src <= puVar24) {
        if (puVar33 <= puVar24 && (long)puVar24 - (long)puVar33 != 0) {
          FUN_0015c3d0();
          pcVar16 = *(code **)PTR_PTR_047cb868;
          if (pcVar16 == (code *)0x0) goto LAB_0018a570;
          pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          uVar9 = 0xdb;
          goto LAB_0018a56c;
        }
        puVar24 = (ulong *)((long)local_db + ((long)puVar24 - (long)puVar33));
        __src = local_db;
        puVar33 = local_db;
      }
      if (__src_00 <= puVar28) {
        if (puVar11 <= puVar28 && (long)puVar28 - (long)puVar11 != 0) {
          FUN_0015c3d0();
          pcVar16 = *(code **)PTR_PTR_047cb868;
          if (pcVar16 == (code *)0x0) goto LAB_0018a570;
          pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          uVar9 = 0xdc;
          goto LAB_0018a56c;
        }
        puVar28 = (ushort *)((long)local_16c + ((long)puVar28 - (long)puVar11));
        puVar11 = local_16c;
        __src_00 = local_16c;
      }
      uVar21 = *puVar34;
      uVar19 = (uint)uVar21;
      if ((uVar21 + 0xe7e7e7e7e7e7e7e8 & (uVar21 ^ 0xffffffffffffffff) & 0x8080808080808080) == 0) {
        uVar27 = puVar34[1];
        *puVar23 = *puVar24;
        puVar23 = (ulong *)((long)puVar23 + (uVar21 & 7));
        uVar31 = (uint)uVar32;
        if ((uVar21 & 0x80) == 0) {
          uVar31 = -(uint)*puVar28;
        }
        puVar17 = (ulong *)((long)puVar23 + (long)(int)uVar31);
        if (param_4 <= puVar17) {
          *puVar23 = *puVar17;
          puVar3 = (undefined8 *)((long)puVar24 + (uVar21 & 7));
          puVar28 = (ushort *)((long)puVar28 + ((uVar21 & 0x80) >> 6 ^ 2));
          uVar32 = uVar21 >> 8 & 7;
          puVar23[1] = puVar17[1];
          puVar2 = (undefined8 *)((long)puVar23 + (uVar21 >> 3 & 0xf));
          *puVar2 = *puVar3;
          puVar24 = (ulong *)((long)puVar2 + uVar32);
          if ((uVar21 & 0x8000) == 0) {
            uVar31 = -(uint)*puVar28;
          }
          puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
          if (param_4 <= puVar23) {
            puVar3 = (undefined8 *)((long)puVar3 + uVar32);
            *puVar24 = *puVar23;
            puVar28 = (ushort *)((long)puVar28 + ((uVar21 & 0x8000) >> 0xe ^ 2));
            puVar2 = (undefined8 *)((long)puVar24 + (uVar21 >> 0xb & 0xf));
            puVar24[1] = puVar23[1];
            *puVar2 = *puVar3;
            uVar32 = uVar21 >> 0x10 & 7;
            puVar24 = (ulong *)((long)puVar2 + uVar32);
            if ((uVar21 & 0x800000) == 0) {
              uVar31 = -(uint)*puVar28;
            }
            puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
            if (param_4 <= puVar23) {
              *puVar24 = *puVar23;
              puVar3 = (undefined8 *)((long)puVar3 + uVar32);
              puVar28 = (ushort *)((long)puVar28 + ((uVar21 & 0x800000) >> 0x16 ^ 2));
              uVar32 = uVar21 >> 0x18 & 7;
              puVar24[1] = puVar23[1];
              puVar2 = (undefined8 *)((long)puVar24 + (uVar21 >> 0x13 & 0xf));
              *puVar2 = *puVar3;
              puVar24 = (ulong *)((long)puVar2 + uVar32);
              if (-1 < (int)uVar19) {
                uVar31 = -(uint)*puVar28;
              }
              puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
              if (param_4 <= puVar23) {
                puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                *puVar24 = *puVar23;
                puVar28 = (ushort *)((long)puVar28 + ((ulong)(uVar19 >> 0x1e ^ 0xffffffff) & 2));
                puVar2 = (undefined8 *)((long)puVar24 + (uVar21 >> 0x1b & 0xf));
                puVar24[1] = puVar23[1];
                *puVar2 = *puVar3;
                uVar32 = uVar21 >> 0x20 & 7;
                puVar24 = (ulong *)((long)puVar2 + uVar32);
                if ((uVar21 & 0x8000000000) == 0) {
                  uVar31 = -(uint)*puVar28;
                }
                puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                if (param_4 <= puVar23) {
                  *puVar24 = *puVar23;
                  puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                  puVar28 = (ushort *)((long)puVar28 + ((uVar21 & 0x8000000000) >> 0x26 ^ 2));
                  puVar24[1] = puVar23[1];
                  puVar2 = (undefined8 *)((long)puVar24 + (uVar21 >> 0x23 & 0xf));
                  *puVar2 = *puVar3;
                  uVar32 = uVar21 >> 0x28 & 7;
                  puVar24 = (ulong *)((long)puVar2 + uVar32);
                  if ((uVar21 & 0x800000000000) == 0) {
                    uVar31 = -(uint)*puVar28;
                  }
                  puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                  if (param_4 <= puVar23) {
                    *puVar24 = *puVar23;
                    puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                    puVar28 = (ushort *)((long)puVar28 + ((uVar21 & 0x800000000000) >> 0x2e ^ 2));
                    puVar24[1] = puVar23[1];
                    puVar2 = (undefined8 *)((long)puVar24 + (uVar21 >> 0x2b & 0xf));
                    *puVar2 = *puVar3;
                    uVar32 = uVar21 >> 0x30 & 7;
                    puVar24 = (ulong *)((long)puVar2 + uVar32);
                    if ((uVar21 & 0x80000000000000) == 0) {
                      uVar31 = -(uint)*puVar28;
                    }
                    puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                    if (param_4 <= puVar23) {
                      *puVar24 = *puVar23;
                      puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                      puVar28 = (ushort *)
                                ((long)puVar28 + ((uVar21 & 0x80000000000000) >> 0x36 ^ 2));
                      puVar24[1] = puVar23[1];
                      puVar2 = (undefined8 *)((long)puVar24 + (uVar21 >> 0x33 & 0xf));
                      *puVar2 = *puVar3;
                      uVar32 = uVar21 >> 0x38 & 7;
                      puVar17 = (ulong *)((long)puVar2 + uVar32);
                      if (-1 < (long)uVar21) {
                        uVar31 = -(uint)*puVar28;
                      }
                      puVar26 = (ulong *)((long)puVar17 + (long)(int)uVar31);
                      if (param_4 <= puVar26) {
                        puVar24 = (ulong *)((long)puVar3 + uVar32);
                        puVar28 = (ushort *)((long)puVar28 + ((ulong)~(uint)(uVar21 >> 0x3e) & 2));
                        *puVar17 = *puVar26;
                        puVar23 = (ulong *)((long)puVar17 + (uVar21 >> 0x3b & 0xf));
                        puVar17[1] = puVar26[1];
                        if ((uVar27 + 0xe7e7e7e7e7e7e7e8 & (uVar27 ^ 0xffffffffffffffff) &
                            0x8080808080808080) != 0) {
                          bVar7 = (byte)puVar34[1];
                          puVar34 = (ulong *)((long)puVar34 + 9);
                          goto joined_r0x00189c0c;
                        }
                        *puVar23 = *puVar24;
                        puVar23 = (ulong *)((long)puVar23 + (uVar27 & 7));
                        if ((uVar27 & 0x80) == 0) {
                          uVar31 = -(uint)*puVar28;
                        }
                        puVar17 = (ulong *)((long)puVar23 + (long)(int)uVar31);
                        if (param_4 <= puVar17) {
                          *puVar23 = *puVar17;
                          puVar3 = (undefined8 *)((long)puVar24 + (uVar27 & 7));
                          puVar28 = (ushort *)((long)puVar28 + ((uVar27 & 0x80) >> 6 ^ 2));
                          uVar32 = uVar27 >> 8 & 7;
                          puVar23[1] = puVar17[1];
                          puVar2 = (undefined8 *)((long)puVar23 + (uVar27 >> 3 & 0xf));
                          *puVar2 = *puVar3;
                          puVar24 = (ulong *)((long)puVar2 + uVar32);
                          if ((uVar27 & 0x8000) == 0) {
                            uVar31 = -(uint)*puVar28;
                          }
                          puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                          if (param_4 <= puVar23) {
                            puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                            *puVar24 = *puVar23;
                            puVar28 = (ushort *)((long)puVar28 + ((uVar27 & 0x8000) >> 0xe ^ 2));
                            puVar2 = (undefined8 *)((long)puVar24 + (uVar27 >> 0xb & 0xf));
                            puVar24[1] = puVar23[1];
                            *puVar2 = *puVar3;
                            uVar32 = uVar27 >> 0x10 & 7;
                            puVar24 = (ulong *)((long)puVar2 + uVar32);
                            if ((uVar27 & 0x800000) == 0) {
                              uVar31 = -(uint)*puVar28;
                            }
                            puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                            if (param_4 <= puVar23) {
                              *puVar24 = *puVar23;
                              puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                              puVar28 = (ushort *)
                                        ((long)puVar28 + ((uVar27 & 0x800000) >> 0x16 ^ 2));
                              uVar32 = uVar27 >> 0x18 & 7;
                              puVar24[1] = puVar23[1];
                              puVar2 = (undefined8 *)((long)puVar24 + (uVar27 >> 0x13 & 0xf));
                              *puVar2 = *puVar3;
                              puVar24 = (ulong *)((long)puVar2 + uVar32);
                              if (-1 < (int)(uint)uVar27) {
                                uVar31 = -(uint)*puVar28;
                              }
                              puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                              if (param_4 <= puVar23) {
                                puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                                *puVar24 = *puVar23;
                                puVar28 = (ushort *)
                                          ((long)puVar28 +
                                          ((ulong)((uint)uVar27 >> 0x1e ^ 0xffffffff) & 2));
                                puVar2 = (undefined8 *)((long)puVar24 + (uVar27 >> 0x1b & 0xf));
                                puVar24[1] = puVar23[1];
                                *puVar2 = *puVar3;
                                uVar32 = uVar27 >> 0x20 & 7;
                                puVar24 = (ulong *)((long)puVar2 + uVar32);
                                if ((uVar27 & 0x8000000000) == 0) {
                                  uVar31 = -(uint)*puVar28;
                                }
                                puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                                if (param_4 <= puVar23) {
                                  *puVar24 = *puVar23;
                                  puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                                  puVar28 = (ushort *)
                                            ((long)puVar28 + ((uVar27 & 0x8000000000) >> 0x26 ^ 2));
                                  puVar24[1] = puVar23[1];
                                  puVar2 = (undefined8 *)((long)puVar24 + (uVar27 >> 0x23 & 0xf));
                                  uVar32 = uVar27 >> 0x28 & 7;
                                  *puVar2 = *puVar3;
                                  puVar24 = (ulong *)((long)puVar2 + uVar32);
                                  if ((uVar27 & 0x800000000000) == 0) {
                                    uVar31 = -(uint)*puVar28;
                                  }
                                  puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                                  if (param_4 <= puVar23) {
                                    *puVar24 = *puVar23;
                                    puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                                    puVar28 = (ushort *)
                                              ((long)puVar28 +
                                              ((uVar27 & 0x800000000000) >> 0x2e ^ 2));
                                    puVar24[1] = puVar23[1];
                                    puVar2 = (undefined8 *)((long)puVar24 + (uVar27 >> 0x2b & 0xf));
                                    uVar32 = uVar27 >> 0x30 & 7;
                                    *puVar2 = *puVar3;
                                    puVar24 = (ulong *)((long)puVar2 + uVar32);
                                    if ((uVar27 & 0x80000000000000) == 0) {
                                      uVar31 = -(uint)*puVar28;
                                    }
                                    puVar23 = (ulong *)((long)puVar24 + (long)(int)uVar31);
                                    if (param_4 <= puVar23) {
                                      *puVar24 = *puVar23;
                                      puVar3 = (undefined8 *)((long)puVar3 + uVar32);
                                      puVar17 = (ulong *)((long)puVar28 +
                                                         ((uVar27 & 0x80000000000000) >> 0x36 ^ 2));
                                      puVar24[1] = puVar23[1];
                                      puVar2 = (undefined8 *)
                                               ((long)puVar24 + (uVar27 >> 0x33 & 0xf));
                                      *puVar2 = *puVar3;
                                      uVar21 = uVar27 >> 0x38 & 7;
                                      puVar23 = (ulong *)((long)puVar2 + uVar21);
                                      if (-1 < (long)uVar27) {
                                        uVar31 = -(uint)(ushort)*puVar17;
                                      }
                                      uVar32 = (ulong)uVar31;
                                      puVar26 = (ulong *)((long)puVar23 + (long)(int)uVar31);
                                      if (param_4 <= puVar26) {
                                        puVar24 = (ulong *)((long)puVar3 + uVar21);
                                        *puVar23 = *puVar26;
                                        puVar34 = puVar34 + 2;
                                        puVar28 = (ushort *)
                                                  ((long)puVar17 +
                                                  ((ulong)~(uint)(uVar27 >> 0x3e) & 2));
                                        puVar23[1] = puVar26[1];
                                        puVar23 = (ulong *)((long)puVar23 + (uVar27 >> 0x3b & 0xf));
                                        if (puVar34 < puVar30) goto LAB_00189ebc;
                                        break;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        FUN_0015c3d0();
                        pcVar16 = *(code **)PTR_PTR_047cb868;
                        if (pcVar16 == (code *)0x0) goto LAB_0018a570;
                        pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                        pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
                        uVar9 = 0x156;
                        goto LAB_0018a56c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_0015c3d0();
        pcVar16 = *(code **)PTR_PTR_047cb868;
        if (pcVar16 == (code *)0x0) goto LAB_0018a570;
        pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
        uVar9 = 0x151;
        goto LAB_0018a56c;
      }
      puVar34 = (ulong *)((long)puVar34 + 1);
      if (0x17 < (uVar19 & 0xff)) {
        do {
          uVar20 = (uint)uVar21;
          uVar19 = (uVar20 >> 7 & 1) - 1;
          uVar31 = -(uint)*puVar28 & uVar19 | (uint)uVar32 & (uVar19 ^ 0xffffffff);
          *puVar23 = *puVar24;
          puVar23 = (ulong *)((long)puVar23 + (ulong)(uVar20 & 7));
          puVar17 = (ulong *)((long)puVar23 + (long)(int)uVar31);
          if (puVar17 < param_4) {
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0018a570;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
            uVar9 = 0x182;
            goto LAB_0018a56c;
          }
          puVar24 = (ulong *)((long)puVar24 + (ulong)(uVar20 & 7));
          *puVar23 = *puVar17;
          puVar23[1] = puVar17[1];
          bVar7 = (byte)*puVar34;
          puVar28 = (ushort *)((long)puVar28 + (ulong)(uVar19 & 2));
          puVar23 = (ulong *)((long)puVar23 + (ulong)((uVar20 & 0xff) >> 3 & 0xf));
          puVar34 = (ulong *)((long)puVar34 + 1);
joined_r0x00189c0c:
          uVar21 = (ulong)bVar7;
          uVar32 = (ulong)uVar31;
        } while (0x17 < bVar7);
      }
      if (2 < ((uint)uVar21 & 0xff)) {
        return 0;
      }
      if ((uVar21 & 0xff) == 0) {
        if (local_1d0 < puVar14) {
          puVar17 = (ulong *)((long)local_1d0 + 1);
          uVar21 = (ulong)(byte)*local_1d0;
          if (0xfb < uVar21) {
            local_1d0 = (ulong *)((long)local_1d0 + 3);
            if (local_1d0 <= puVar14) {
              uVar21 = uVar21 + (ulong)*(ushort *)puVar17 * 4;
              lVar18 = uVar21 + 0x40;
              puVar26 = local_1d0;
              if (lVar18 <= (long)puVar1 - (long)puVar23) goto LAB_00189ee0;
              goto LAB_0018a7b8;
            }
            uVar21 = 0;
          }
          lVar18 = uVar21 + 0x40;
          puVar26 = local_1d0;
          local_1d0 = puVar17;
          if ((long)puVar1 - (long)puVar23 < lVar18) goto LAB_0018a7b8;
        }
        else {
          uVar21 = 0;
          lVar18 = 0x40;
          puVar26 = local_1d0;
          if ((long)puVar1 - (long)puVar23 < 0x40) goto LAB_0018a7b8;
        }
LAB_00189ee0:
        puVar17 = (ulong *)((long)puVar33 - (long)puVar24);
        if ((long)puVar17 < lVar18) goto LAB_0018a7e8;
        uVar21 = uVar21 + 0x2f;
        uVar19 = (int)(uVar21 >> 4) + 1;
        uVar27 = (ulong)uVar19 & 3;
        lVar25 = lVar18;
        if ((uVar19 & 3) != 0) {
          lVar25 = 0;
          do {
            puVar2 = (undefined8 *)((long)puVar24 + lVar25);
            uVar9 = puVar2[1];
            puVar3 = (undefined8 *)((long)puVar23 + lVar25);
            uVar27 = uVar27 - 1;
            lVar25 = lVar25 + 0x10;
            *puVar3 = *puVar2;
            puVar3[1] = uVar9;
          } while (uVar27 != 0);
          puVar23 = (ulong *)((long)puVar23 + lVar25);
          puVar24 = (ulong *)((long)puVar24 + lVar25);
          puVar17 = puVar23 + -2;
          puVar26 = puVar24 + -2;
          lVar25 = lVar18 - lVar25;
        }
        if (0x2f < uVar21) {
          puVar23 = puVar23 + -2;
          puVar24 = puVar24 + -2;
          do {
            uVar27 = puVar24[3];
            lVar25 = lVar25 + -0x40;
            puVar23[2] = puVar24[2];
            puVar23[3] = uVar27;
            uVar27 = puVar24[5];
            puVar23[4] = puVar24[4];
            puVar23[5] = uVar27;
            uVar27 = puVar24[7];
            puVar23[6] = puVar24[6];
            puVar23[7] = uVar27;
            puVar26 = puVar24 + 8;
            uVar27 = puVar24[9];
            puVar17 = puVar23 + 8;
            *puVar17 = *puVar26;
            puVar23[9] = uVar27;
            puVar23 = puVar17;
            puVar24 = puVar26;
          } while (0x10 < lVar25);
        }
        lVar18 = lVar18 - (uVar21 & 0xffff0);
        puVar24 = (ulong *)((long)puVar26 + lVar18);
        puVar23 = (ulong *)((long)puVar17 + lVar18);
        uVar21 = puVar24[-1];
        puVar23[-2] = puVar24[-2];
        puVar23[-1] = uVar21;
      }
      else {
        if (((uint)uVar21 & 0xff) != 1) {
          return 0;
        }
        if (local_1d0 < puVar14) {
          puVar17 = (ulong *)((long)local_1d0 + 1);
          uVar32 = (ulong)(byte)*local_1d0;
          if (uVar32 < 0xfc) {
            local_1d0 = puVar17;
          }
          else if (puVar14 < (ulong *)((long)local_1d0 + 3U)) {
            uVar32 = 0;
            local_1d0 = puVar17;
          }
          else {
            uVar32 = uVar32 + (ulong)*(ushort *)puVar17 * 4;
            local_1d0 = (ulong *)((long)local_1d0 + 3U);
          }
        }
        else {
          uVar32 = 0;
        }
        if ((long)puVar1 - (long)puVar23 < (long)(uVar32 + 99)) {
          if ((long)puVar1 - (long)puVar23 < (long)(uVar32 + 0x5b)) goto LAB_0018a86c;
          if ((long)param_3 - (long)puVar23 < (long)(uVar32 + 99)) goto LAB_0018a898;
        }
        puVar29 = puVar28 + 1;
        uVar6 = *puVar28;
        puVar17 = (ulong *)((long)puVar23 - (ulong)uVar6);
        if (puVar17 < param_4) goto LAB_0018a8c4;
        puVar26 = (ulong *)((long)puVar23 + uVar32 + 0x5b);
        *puVar23 = *puVar17;
        puVar23[1] = puVar17[1];
        puVar23[2] = puVar17[2];
        puVar23[3] = puVar17[3];
        puVar23[4] = puVar17[4];
        puVar23[5] = puVar17[5];
        puVar23[6] = puVar17[6];
        uVar32 = -(ulong)uVar6;
        puVar23[7] = puVar17[7];
        puVar15 = puVar23 + 8;
        do {
          puVar17 = *(ulong **)((long)puVar15 + uVar32);
          puVar22 = puVar15 + 1;
          *puVar15 = (ulong)puVar17;
          puVar15 = puVar22;
          puVar28 = puVar29;
          puVar23 = puVar26;
        } while (puVar22 < puVar26);
      }
      if (puVar30 <= puVar34) break;
LAB_00189ebc:
    } while (puVar23 + 0x2d <= param_3);
  }
  else {
    puVar17 = extraout_x12;
  }
  uVar19 = (uint)uVar32;
  if (puVar1 < puVar23) {
    FUN_0015c3d0();
    pcVar16 = *(code **)PTR_PTR_047cb868;
    if (pcVar16 == (code *)0x0) goto LAB_0018a570;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    uVar9 = 0x1c0;
  }
  else {
    if (__src <= puVar24) {
      if (puVar33 <= puVar24 && (long)puVar24 - (long)puVar33 != 0) {
        FUN_0015c3d0();
        pcVar16 = *(code **)PTR_PTR_047cb868;
        if (pcVar16 == (code *)0x0) goto LAB_0018a570;
        pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        uVar9 = 0x1e7;
        goto LAB_0018a56c;
      }
      puVar24 = (ulong *)((long)local_db + ((long)puVar24 - (long)puVar33));
      __src = local_db;
      puVar33 = local_db;
    }
    if (__src_00 <= puVar28) {
      if (puVar11 <= puVar28 && (long)puVar28 - (long)puVar11 != 0) {
        FUN_0015c3d0();
        pcVar16 = *(code **)PTR_PTR_047cb868;
        if (pcVar16 == (code *)0x0) goto LAB_0018a570;
        pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        uVar9 = 0x1e8;
        goto LAB_0018a56c;
      }
      puVar28 = (ushort *)((long)local_16c + ((long)puVar28 - (long)puVar11));
      puVar11 = local_16c;
      __src_00 = local_16c;
    }
    if (puVar34 < puVar12) {
      puVar30 = puVar34 + 2;
      puVar29 = puVar28;
      puVar26 = puVar23;
      do {
        if (puVar30 <= puVar34) {
          if (__src <= puVar24) {
            if (puVar33 <= puVar24 && (long)puVar24 - (long)puVar33 != 0) {
              FUN_0015c3d0();
              pcVar16 = *(code **)PTR_PTR_047cb868;
              if (pcVar16 == (code *)0x0) goto LAB_0018a570;
              pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              uVar9 = 500;
              goto LAB_0018a56c;
            }
            puVar24 = (ulong *)((long)local_db + ((long)puVar24 - (long)puVar33));
            __src = local_db;
            puVar33 = local_db;
          }
          puVar30 = puVar34 + 2;
          if (__src_00 <= puVar29) {
            if (puVar11 <= puVar29 && (long)puVar29 - (long)puVar11 != 0) {
              FUN_0015c3d0();
              pcVar16 = *(code **)PTR_PTR_047cb868;
              if (pcVar16 == (code *)0x0) goto LAB_0018a570;
              pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              uVar9 = 0x1f5;
              goto LAB_0018a56c;
            }
            puVar29 = (ushort *)((long)local_16c + ((long)puVar29 - (long)puVar11));
            puVar11 = local_16c;
            __src_00 = local_16c;
          }
        }
        puVar15 = (ulong *)((long)puVar34 + 1);
        bVar7 = (byte)*puVar34;
        if (0x17 < bVar7) {
          if (param_3 < puVar26 + 1) {
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0018a570;
            pcVar10 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
          }
          else {
            uVar31 = (bVar7 >> 7) - 1;
            uVar19 = -(uint)*puVar29 & uVar31 | (uint)uVar32 & (uVar31 ^ 0xffffffff);
            uVar32 = (ulong)uVar19;
            *puVar26 = *puVar24;
            puVar26 = (ulong *)((long)puVar26 + ((ulong)bVar7 & 7));
            puVar34 = (ulong *)((long)puVar26 + (long)(int)uVar19);
            if (puVar34 < param_4) {
              FUN_0015c3d0();
              pcVar16 = *(code **)PTR_PTR_047cb868;
              if (pcVar16 == (code *)0x0) goto LAB_0018a570;
              pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
            }
            else {
              if (puVar26 + 2 <= param_3) {
                puVar28 = (ushort *)((long)puVar29 + (ulong)(uVar31 & 2));
                *puVar26 = *puVar34;
                puVar17 = (ulong *)puVar34[1];
                puVar24 = (ulong *)((long)puVar24 + ((ulong)bVar7 & 7));
                puVar23 = (ulong *)((long)puVar26 + ((ulong)(bVar7 >> 3) & 0xf));
                puVar26[1] = (ulong)puVar17;
                goto LAB_0018a1fc;
              }
              FUN_0015c3d0();
              pcVar16 = *(code **)PTR_PTR_047cb868;
              if (pcVar16 == (code *)0x0) goto LAB_0018a570;
              pcVar10 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
            }
          }
          pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          uVar9 = 0x1fc;
          goto LAB_0018a56c;
        }
        if (2 < bVar7) {
          return 0;
        }
        if (bVar7 == 0) {
          if (local_1d0 < puVar14) {
            puVar30 = (ulong *)((long)local_1d0 + 1);
            uVar21 = (ulong)(byte)*local_1d0;
            if (uVar21 < 0xfc) {
              local_1d0 = puVar30;
            }
            else {
              puVar17 = (ulong *)((long)local_1d0 + 3);
              if (puVar14 < puVar17) {
                uVar21 = 0;
                local_1d0 = puVar30;
              }
              else {
                uVar21 = uVar21 + (ulong)*(ushort *)puVar30 * 4;
                local_1d0 = puVar17;
              }
            }
          }
          else {
            uVar21 = 0;
          }
          lVar18 = uVar21 + 0x40;
          if ((long)puVar1 - (long)puVar26 < lVar18) goto LAB_0018a7b8;
          puVar23 = (ulong *)((long)puVar33 - (long)puVar24);
          if ((long)puVar23 < lVar18) goto LAB_0018a7e8;
          uVar21 = uVar21 + 0x2f;
          uVar19 = (int)(uVar21 >> 4) + 1;
          uVar27 = (ulong)uVar19 & 3;
          lVar25 = lVar18;
          if ((uVar19 & 3) != 0) {
            lVar25 = 0;
            do {
              puVar2 = (undefined8 *)((long)puVar24 + lVar25);
              uVar9 = puVar2[1];
              puVar3 = (undefined8 *)((long)puVar26 + lVar25);
              uVar27 = uVar27 - 1;
              lVar25 = lVar25 + 0x10;
              *puVar3 = *puVar2;
              puVar3[1] = uVar9;
            } while (uVar27 != 0);
            puVar26 = (ulong *)((long)puVar26 + lVar25);
            puVar24 = (ulong *)((long)puVar24 + lVar25);
            puVar23 = puVar26 + -2;
            puVar17 = puVar24 + -2;
            lVar25 = lVar18 - lVar25;
          }
          if (0x2f < uVar21) {
            puVar30 = puVar26 + -2;
            puVar24 = puVar24 + -2;
            do {
              uVar27 = puVar24[3];
              lVar25 = lVar25 + -0x40;
              puVar30[2] = puVar24[2];
              puVar30[3] = uVar27;
              uVar27 = puVar24[5];
              puVar30[4] = puVar24[4];
              puVar30[5] = uVar27;
              uVar27 = puVar24[7];
              puVar30[6] = puVar24[6];
              puVar30[7] = uVar27;
              puVar17 = puVar24 + 8;
              uVar27 = puVar24[9];
              puVar23 = puVar30 + 8;
              *puVar23 = *puVar17;
              puVar30[9] = uVar27;
              puVar30 = puVar23;
              puVar24 = puVar17;
            } while (0x10 < lVar25);
          }
          lVar18 = lVar18 - (uVar21 & 0xffff0);
          puVar24 = (ulong *)((long)puVar17 + lVar18);
          puVar23 = (ulong *)((long)puVar23 + lVar18);
          uVar21 = puVar24[-1];
          puVar23[-2] = puVar24[-2];
          puVar23[-1] = uVar21;
          puVar28 = puVar29;
        }
        else {
          if (bVar7 != 1) {
            return 0;
          }
          if (local_1d0 < puVar14) {
            puVar30 = (ulong *)((long)local_1d0 + 1);
            uVar32 = (ulong)(byte)*local_1d0;
            if (uVar32 < 0xfc) {
              local_1d0 = puVar30;
            }
            else if (puVar14 < (ulong *)((long)local_1d0 + 3)) {
              uVar32 = 0;
              local_1d0 = puVar30;
            }
            else {
              uVar32 = uVar32 + (ulong)*(ushort *)puVar30 * 4;
              local_1d0 = (ulong *)((long)local_1d0 + 3);
            }
          }
          else {
            uVar32 = 0;
          }
          if ((long)puVar1 - (long)puVar26 < (long)(uVar32 + 99)) {
            if ((long)puVar1 - (long)puVar26 < (long)(uVar32 + 0x5b)) goto LAB_0018a86c;
            if ((long)param_3 - (long)puVar26 < (long)(uVar32 + 99)) goto LAB_0018a898;
          }
          puVar28 = puVar29 + 1;
          uVar6 = *puVar29;
          puVar30 = (ulong *)((long)puVar26 - (ulong)uVar6);
          if (puVar30 < param_4) goto LAB_0018a8c4;
          puVar23 = (ulong *)((long)puVar26 + uVar32 + 0x5b);
          *puVar26 = *puVar30;
          puVar26[1] = puVar30[1];
          puVar26[2] = puVar30[2];
          puVar26[3] = puVar30[3];
          puVar26[4] = puVar30[4];
          puVar26[5] = puVar30[5];
          puVar26[6] = puVar30[6];
          uVar32 = -(ulong)uVar6;
          puVar26[7] = puVar30[7];
          puVar30 = puVar26 + 8;
          do {
            puVar26 = puVar30 + 1;
            *puVar30 = *(ulong *)((long)puVar30 + uVar32);
            puVar30 = puVar26;
            puVar17 = param_4;
          } while (puVar26 < puVar23);
        }
        if (__src <= puVar24) {
          if (puVar33 <= puVar24 && (long)puVar24 - (long)puVar33 != 0) {
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0018a570;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
            uVar9 = 0x208;
            goto LAB_0018a56c;
          }
          puVar24 = (ulong *)((long)local_db + ((long)puVar24 - (long)puVar33));
          __src = local_db;
          puVar33 = local_db;
        }
        puVar30 = (ulong *)((long)puVar34 + 0x11);
        if (__src_00 <= puVar28) {
          if (puVar11 <= puVar28 && (long)puVar28 - (long)puVar11 != 0) {
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0018a570;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
            uVar9 = 0x209;
            goto LAB_0018a56c;
          }
          puVar28 = (ushort *)((long)local_16c + ((long)puVar28 - (long)puVar11));
          puVar11 = local_16c;
          __src_00 = local_16c;
        }
LAB_0018a1fc:
        uVar19 = (uint)uVar32;
        puVar29 = puVar28;
        puVar26 = puVar23;
        puVar34 = puVar15;
      } while (puVar15 != puVar12);
    }
    if (puVar1 <= puVar23) {
      if (puVar1 < puVar23) {
        return 0;
      }
      lVar18 = (long)puVar28 - (long)puVar11;
      if (puVar11 <= puVar28 && lVar18 != 0) {
        return 0;
      }
LAB_0018a4dc:
      if (puVar33 <= puVar24 && (long)puVar24 - (long)puVar33 != 0) {
        return 0;
      }
      *param_7 = uVar19;
      *(long *)(param_6 + 0x38) = (long)puVar4 + ((long)puVar24 - (long)puVar33);
      *(long *)(param_6 + 0x48) = (long)puVar5 + lVar18;
      if (puVar14 < local_1d0) {
        return 0;
      }
      *(ulong **)(param_6 + 0x10) = local_1d0;
      return param_5;
    }
    puVar34 = (ulong *)((long)puVar24 + ((long)puVar1 - (long)puVar23));
    if (puVar34 <= puVar33) {
      memcpy(puVar23,puVar24,(long)puVar1 - (long)puVar23);
      lVar18 = (long)puVar28 - (long)puVar11;
      puVar24 = puVar34;
      if (puVar11 <= puVar28 && lVar18 != 0) {
        return 0;
      }
      goto LAB_0018a4dc;
    }
    FUN_0015c3d0();
    pcVar16 = *(code **)PTR_PTR_047cb868;
    if (pcVar16 == (code *)0x0) goto LAB_0018a570;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    uVar9 = 0x217;
  }
LAB_0018a56c:
  (*pcVar16)(0,pcVar8,uVar9,pcVar10);
LAB_0018a570:
  FUN_0015c3f0();
  return 0;
LAB_0018a7b8:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0018a570;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  uVar9 = 0x30;
  goto LAB_0018a56c;
LAB_0018a7e8:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0018a570;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  uVar9 = 0x31;
  goto LAB_0018a56c;
LAB_0018a86c:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0018a570;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar9 = 0x86;
  goto LAB_0018a56c;
LAB_0018a898:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0018a570;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar9 = 0x87;
  goto LAB_0018a56c;
LAB_0018a8c4:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0018a570;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
  uVar9 = 0x98;
  goto LAB_0018a56c;
}


