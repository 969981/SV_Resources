/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a5110; name: FUN_031a5110
 */


void FUN_031a5110(long *param_1,long *param_2,uint param_3)

{
  undefined1 *puVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  float *pfVar12;
  undefined4 *puVar13;
  size_t sVar14;
  float *pfVar15;
  ulong uVar16;
  void *pvVar17;
  ushort *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ushort *puVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  undefined8 *puVar29;
  float *pfVar30;
  undefined1 *puVar31;
  uint *puVar32;
  uint uVar33;
  byte *pbVar34;
  undefined1 *puVar35;
  undefined4 *puVar36;
  undefined1 uVar37;
  int iVar38;
  long lVar39;
  uint *puVar40;
  uint *puVar41;
  uint *puVar42;
  uint *puVar43;
  uint uVar44;
  uint *in_x16;
  ulong uVar45;
  long lVar46;
  uint *puVar47;
  uint *in_x17;
  void *pvVar48;
  ulong uVar49;
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  float fVar61;
  undefined8 uVar62;
  undefined1 auStack_2990 [448];
  undefined *local_27d0;
  undefined8 uStack_27c8;
  undefined8 local_27c0;
  undefined8 uStack_27b8;
  undefined1 *local_27b0;
  undefined8 local_27a8;
  undefined8 local_27a0;
  undefined1 local_2798;
  char acStack_2790 [10032];
  
  bVar7 = *(byte *)((long)param_2 + 0xc);
  uVar23 = (ulong)param_3;
  bVar8 = *(byte *)((long)param_1 + 0xc);
  if ((bVar8 == bVar7) &&
     (bVar9 = *(byte *)((long)param_1 + 0xd), bVar9 == *(byte *)((long)param_2 + 0xd))) {
LAB_031a5260:
    if (bVar7 == 8) {
LAB_031a5268:
      uVar33 = 4;
      goto LAB_031a5288;
    }
    bVar7 = PTR_DAT_047e58a0[bVar7];
  }
  else {
    uVar33 = (uint)bVar8;
    if ((1 < (byte)(bVar8 - 3 | bVar7 - 3)) ||
       (bVar9 = *(byte *)((long)param_1 + 0xd), bVar9 != *(byte *)((long)param_2 + 0xd))) {
      uVar24 = (uint)bVar7;
      if ((uVar33 == uVar24) &&
         (bVar9 = *(byte *)((long)param_2 + 0xd), bVar9 <= *(byte *)((long)param_1 + 0xd)))
      goto LAB_031a5260;
      switch(bVar8) {
      case 2:
        goto code_r0x031a52c8;
      case 3:
      case 4:
        if (1 < uVar24 - 7) {
          if (bVar7 != 2) {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          bVar7 = *(byte *)((long)param_1 + 0xd);
          uVar23 = (ulong)bVar7;
          if (bVar7 != *(byte *)((long)param_2 + 0xd)) {
            return;
          }
          if (bVar7 == 0) {
            return;
          }
          lVar39 = *param_1;
          uVar33 = 0;
          lVar46 = param_2[1];
          lVar26 = param_1[1];
          puVar31 = (undefined1 *)(lVar39 + 8);
          lVar28 = *param_2;
          do {
            if (uVar23 - 1 < 7) {
              uVar45 = 0;
            }
            else {
              uVar45 = 0;
              puVar35 = puVar31;
              do {
                puVar5 = (undefined1 *)(lVar28 + uVar45);
                uVar45 = uVar45 + 8;
                *puVar5 = puVar35[-8];
                puVar5[1] = puVar35[-6];
                puVar5[2] = puVar35[-4];
                puVar5[3] = puVar35[-2];
                puVar5[4] = *puVar35;
                puVar5[5] = puVar35[2];
                puVar5[6] = puVar35[4];
                puVar1 = puVar35 + 6;
                puVar35 = puVar35 + 0x10;
                puVar5[7] = *puVar1;
              } while ((uVar23 & 0xf8) != uVar45);
            }
            if ((bVar7 & 7) != 0) {
              uVar49 = uVar23 & 7;
              do {
                uVar49 = uVar49 - 1;
                *(char *)(lVar28 + uVar45) = (char)*(undefined2 *)(lVar39 + uVar45 * 2);
                uVar45 = uVar45 + 1;
              } while (uVar49 != 0);
            }
            uVar33 = uVar33 + 1;
            lVar28 = lVar28 + (int)lVar46;
            lVar39 = lVar39 + (int)lVar26;
            puVar31 = puVar31 + (int)lVar26;
          } while (uVar33 != param_3);
          return;
        }
        if (*(char *)((long)param_1 + 0xd) != '\x04') {
          return;
        }
        if (bVar8 != 3) {
          return;
        }
        if (*(char *)((long)param_2 + 0xd) != '\x04') {
          return;
        }
        if ((int)param_3 < 1) {
          return;
        }
        lVar28 = param_1[1];
        uVar33 = *(uint *)(param_2 + 1);
        puVar27 = (uint *)*param_2;
        pbVar34 = (byte *)(*param_1 + 4);
        do {
          pbVar3 = pbVar34 + -4;
          uVar24 = (int)uVar23 - 1;
          uVar23 = (ulong)uVar24;
          puVar22 = (ushort *)(pbVar34 + -2);
          bVar7 = *pbVar34;
          puVar18 = (ushort *)(pbVar34 + 2);
          pbVar34 = pbVar34 + (long)(int)lVar28 * 2;
          *puVar27 = (uint)*pbVar3 | (*puVar22 & 0xff) << 8 | (uint)bVar7 << 0x10 |
                     (uint)*puVar18 << 0x18;
          puVar27 = (uint *)((long)puVar27 + ((long)((ulong)uVar33 << 0x20) >> 0x21));
        } while (uVar24 != 0);
        return;
      default:
        if ((uVar24 == 10) && (uVar33 == 0xb)) {
          if (*(char *)((long)param_1 + 0xd) == '\x01') {
            if ((int)param_3 < 1) {
              return;
            }
            bVar7 = *(byte *)((long)param_2 + 0xd);
            uVar23 = (ulong)bVar7;
            if (bVar7 == 0) {
              return;
            }
            uVar24 = *(uint *)(param_2 + 1);
            uVar44 = *(uint *)(param_1 + 1);
            lVar28 = *param_2;
            lVar39 = *param_1;
            uVar33 = 0;
            do {
              if (uVar23 - 1 < 7) {
                uVar45 = 0;
              }
              else {
                uVar45 = 0;
                lVar46 = 0x10;
                do {
                  puVar13 = (undefined4 *)(lVar39 + lVar46);
                  puVar36 = (undefined4 *)(lVar28 + lVar46);
                  lVar46 = lVar46 + 0x20;
                  puVar36[-4] = puVar13[-4];
                  puVar36[-3] = puVar13[-3];
                  puVar36[-2] = puVar13[-2];
                  puVar36[-1] = puVar13[-1];
                  *puVar36 = *puVar13;
                  puVar36[1] = puVar13[1];
                  puVar36[2] = puVar13[2];
                  uVar45 = uVar45 + 8;
                  puVar36[3] = puVar13[3];
                } while ((uVar23 & 0xf8) != uVar45);
              }
              if ((bVar7 & 7) != 0) {
                lVar46 = uVar45 << 2;
                uVar45 = uVar23 & 7;
                do {
                  uVar45 = uVar45 - 1;
                  *(undefined4 *)(lVar28 + lVar46) = *(undefined4 *)(lVar39 + lVar46);
                  lVar46 = lVar46 + 4;
                } while (uVar45 != 0);
              }
              uVar33 = uVar33 + 1;
              lVar28 = lVar28 + ((long)((ulong)uVar24 << 0x20) >> 0x22) * 4;
              lVar39 = lVar39 + ((long)((ulong)uVar44 << 0x20) >> 0x22) * 4;
            } while (uVar33 != param_3);
            return;
          }
LAB_031a5fd0:
          local_27c0 = 1;
          uStack_27b8 = 0;
          local_27b0 = auStack_2990;
          local_27d0 = PTR_DAT_047e34b8 + 0x10;
          uStack_27c8 = 0xffffffff;
          local_27a8 = 0;
          local_2798 = 0;
          local_27a0 = 0x1bf;
          memset(auStack_2990,0,0x1c0);
          FUN_0322bd4c(&local_27d0,"Cannot convert vertex format from ",0x22);
          FUN_031c68c0(acStack_2790,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)((long)param_1 + 0xc)
                      );
          sVar14 = strlen(acStack_2790);
          (**(code **)(local_27d0 + 0x28))(&local_27d0,acStack_2790,(long)(int)sVar14);
          (**(code **)(local_27d0 + 0x28))(&local_27d0,&DAT_03c570cd,4);
          FUN_031c68c0(acStack_2790,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)((long)param_2 + 0xc)
                      );
          sVar14 = strlen(acStack_2790);
          (**(code **)(local_27d0 + 0x28))(&local_27d0,acStack_2790,(long)(int)sVar14);
          FUN_03226c50(0xabba4523,auStack_2990,
                       "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/GeometryUtilities/Mesh/Utils/VertexBufferUtil/hkMeshVertexBufferUtil.cpp"
                       ,0x721);
          return;
        }
        if (uVar33 != 8) {
          if ((bVar8 == 6) && (*(char *)((long)param_1 + 0xd) == '\x01')) {
            if (bVar7 == 8) {
              iVar38 = (int)param_1[1];
              pvVar17 = (void *)*param_1;
              puVar13 = (undefined4 *)*param_2;
              lVar28 = param_2[1];
              if ((iVar38 != 4) || ((int)lVar28 != 4)) {
                if (iVar38 * param_3 == 0) {
                  return;
                }
                lVar39 = 0;
                do {
                  puVar36 = (undefined4 *)((long)pvVar17 + lVar39);
                  lVar39 = lVar39 + iVar38;
                  *puVar13 = *puVar36;
                  puVar13 = (undefined4 *)((long)puVar13 + (long)(int)lVar28);
                } while ((int)(iVar38 * param_3) != lVar39);
                return;
              }
LAB_031a5ed4:
              memcpy(puVar13,pvVar17,(long)(int)(param_3 << 2));
              return;
            }
            if ((bVar7 == 10) && (*(char *)((long)param_1 + 0xe) == '\x03')) {
              if ((int)param_3 < 1) {
                return;
              }
              uVar33 = (int)param_2[1] >> 2;
              puVar27 = (uint *)*param_1;
              uVar24 = (int)param_1[1] >> 2;
              pfVar30 = (float *)*param_2;
              do {
                uVar44 = *puVar27;
                puVar27 = (uint *)((long)puVar27 +
                                  (-(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)uVar24 << 2));
                auVar52._0_8_ = CONCAT44(uVar44 >> 8,uVar44) & 0xff000000ff;
                auVar52._8_4_ = uVar44 >> 0x10 & 0xff;
                uVar11 = (int)uVar23 - 1;
                uVar23 = (ulong)uVar11;
                auVar52._12_4_ = uVar44 >> 0x18;
                auVar53 = NEON_scvtf(auVar52,4);
                pfVar30[2] = auVar53._8_4_ * 0.003921569;
                pfVar30[3] = auVar53._12_4_ * 0.003921569;
                *pfVar30 = auVar53._0_4_ * 0.003921569;
                pfVar30[1] = auVar53._4_4_ * 0.003921569;
                pfVar30 = (float *)((long)pfVar30 +
                                   (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar33 << 2));
              } while (uVar11 != 0);
              return;
            }
          }
          goto LAB_031a5fd0;
        }
        if (*(char *)((long)param_1 + 0xd) != '\x04') {
          if (*(char *)((long)param_1 + 0xd) == '\x01') {
            if (uVar24 == 10) {
              if ((int)param_3 < 1) {
                return;
              }
              uVar33 = (int)param_2[1] >> 2;
              uVar24 = (int)param_1[1] >> 2;
              pfVar30 = (float *)*param_2;
              puVar27 = (uint *)*param_1;
              do {
                uVar44 = *puVar27;
                puVar27 = (uint *)((long)puVar27 +
                                  (-(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)uVar24 << 2));
                auVar54._0_8_ = CONCAT44(uVar44 >> 8,uVar44) & 0xff000000ff;
                auVar54._8_4_ = uVar44 >> 0x10 & 0xff;
                uVar11 = (int)uVar23 - 1;
                uVar23 = (ulong)uVar11;
                auVar54._12_4_ = uVar44 >> 0x18;
                auVar53 = NEON_scvtf(auVar54,4);
                pfVar30[2] = auVar53._8_4_ * 0.003921569;
                pfVar30[3] = auVar53._12_4_ * 0.003921569;
                *pfVar30 = auVar53._0_4_ * 0.003921569;
                pfVar30[1] = auVar53._4_4_ * 0.003921569;
                pfVar30 = (float *)((long)pfVar30 +
                                   (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar33 << 2));
              } while (uVar11 != 0);
              return;
            }
            if (bVar7 == 6) {
              iVar38 = (int)param_1[1];
              pvVar17 = (void *)*param_1;
              puVar13 = (undefined4 *)*param_2;
              lVar28 = param_2[1];
              if ((iVar38 != 4) || ((int)lVar28 != 4)) {
                if (iVar38 * param_3 == 0) {
                  return;
                }
                lVar39 = 0;
                do {
                  puVar36 = (undefined4 *)((long)pvVar17 + lVar39);
                  lVar39 = lVar39 + iVar38;
                  *puVar13 = *puVar36;
                  puVar13 = (undefined4 *)((long)puVar13 + (long)(int)lVar28);
                } while ((int)(iVar38 * param_3) != lVar39);
                return;
              }
              goto LAB_031a5ed4;
            }
          }
          goto LAB_031a5fd0;
        }
        if (uVar24 != 2) goto LAB_031a5fd0;
LAB_031a6c90:
        bVar7 = *(byte *)((long)param_1 + 0xd);
        uVar33 = (uint)bVar7;
        if (uVar33 != *(byte *)((long)param_2 + 0xd)) {
          return;
        }
        if (1 < *(byte *)((long)param_1 + 0xc) - 7) {
          return;
        }
        if (*(char *)((long)param_2 + 0xc) != '\x02') {
          return;
        }
        puVar32 = (uint *)*param_2;
        puVar27 = (uint *)*param_1;
        if (uVar33 - 1 < 4) {
          lVar28 = (long)(int)param_1[1];
          lVar39 = (long)(int)param_2[1];
          switch(uVar33) {
          case 1:
            if (0 < (int)param_3) {
              uVar33 = param_3 & 3;
              if (2 < param_3 - 1) {
                iVar38 = -(param_3 & 0xfffffffc);
                do {
                  *(char *)puVar32 = (char)*puVar27;
                  puVar13 = (undefined4 *)((long)puVar27 + lVar28 + lVar28);
                  *(undefined1 *)((long)puVar32 + lVar39) =
                       (char)*(undefined4 *)((long)puVar27 + lVar28);
                  puVar36 = (undefined4 *)((long)puVar13 + lVar28);
                  puVar31 = (undefined1 *)((long)puVar32 + lVar39) + lVar39;
                  *puVar31 = (char)*puVar13;
                  puVar31[lVar39] = (char)*puVar36;
                  puVar27 = (uint *)((long)puVar36 + lVar28);
                  puVar32 = (uint *)(puVar31 + lVar39 + lVar39);
                  iVar38 = iVar38 + 4;
                } while (iVar38 != 0);
              }
              for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                *(char *)puVar32 = (char)*puVar27;
                puVar27 = (uint *)((long)puVar27 + lVar28);
                puVar32 = (uint *)((long)puVar32 + lVar39);
              }
            }
            break;
          case 2:
            if (0 < (int)param_3) {
              if (param_3 != 1) {
                iVar38 = -(param_3 & 0xfffffffe);
                do {
                  *(short *)puVar32 = (short)*puVar27;
                  *(undefined2 *)((long)puVar32 + lVar39) =
                       (short)*(undefined4 *)((long)puVar27 + lVar28);
                  puVar27 = (uint *)((long)puVar27 + lVar28 + lVar28);
                  puVar32 = (uint *)((long)puVar32 + lVar39 + lVar39);
                  iVar38 = iVar38 + 2;
                } while (iVar38 != 0);
              }
              if ((param_3 & 1) != 0) {
                *(short *)puVar32 = (short)*puVar27;
                return;
              }
            }
            break;
          case 3:
            if ((int)param_3 < 1) {
              return;
            }
            if (param_3 != 1) {
              iVar38 = -(param_3 & 0xfffffffe);
              do {
                uVar33 = *puVar27;
                *(char *)puVar32 = (char)uVar33;
                *(char *)((long)puVar32 + 1) = (char)(uVar33 >> 8);
                *(char *)((long)puVar32 + 2) = (char)(uVar33 >> 0x10);
                uVar6 = *(undefined4 *)((long)puVar27 + lVar28);
                puVar31 = (undefined1 *)((long)puVar32 + lVar39);
                *puVar31 = (char)uVar6;
                puVar31[1] = (char)((uint)uVar6 >> 8);
                puVar31[2] = (char)((uint)uVar6 >> 0x10);
                puVar27 = (uint *)((long)puVar27 + lVar28 + lVar28);
                puVar32 = (uint *)(puVar31 + lVar39);
                iVar38 = iVar38 + 2;
              } while (iVar38 != 0);
            }
            goto LAB_031a6ec4;
          case 4:
            if (0 < (int)param_3) {
              lVar46 = (long)puVar32 + 3;
              do {
                *(uint *)(lVar46 + -3) = *puVar27;
                puVar27 = (uint *)((long)puVar27 + lVar28);
                lVar46 = lVar46 + lVar39;
                uVar33 = (int)uVar23 - 1;
                uVar23 = (ulong)uVar33;
              } while (uVar33 != 0);
            }
          }
        }
        else {
          if ((int)param_3 < 1) {
            return;
          }
          bVar8 = bVar7 & 3;
          bVar9 = bVar7 >> 2;
          if (bVar9 != 0) {
            uVar33 = (uint)bVar9;
            if (bVar8 == 3) {
              uVar24 = 0;
              do {
                puVar41 = puVar32;
                puVar40 = puVar27;
                if (uVar33 != 1) {
                  iVar38 = -(uVar33 & 0x3e);
                  do {
                    puVar42 = puVar41;
                    *puVar42 = *puVar40;
                    puVar42[1] = puVar40[1];
                    puVar40 = puVar40 + 2;
                    puVar41 = puVar42 + 2;
                    iVar38 = iVar38 + 2;
                  } while (iVar38 != 0);
                  in_x16 = puVar42 + 1;
                }
                puVar42 = puVar41;
                puVar43 = puVar40;
                if ((bVar7 >> 2 & 1) != 0) {
                  puVar43 = puVar40 + 1;
                  puVar42 = puVar41 + 1;
                  *puVar41 = *puVar40;
                  in_x16 = puVar41;
                }
                uVar44 = *puVar43;
                uVar24 = uVar24 + 1;
                *(char *)puVar42 = (char)uVar44;
                *(char *)((long)in_x16 + 5) = (char)(uVar44 >> 8);
                *(char *)((long)in_x16 + 6) = (char)(uVar44 >> 0x10);
              } while (uVar24 != param_3);
              return;
            }
            uVar24 = 0;
            do {
              puVar41 = puVar32;
              puVar40 = puVar27;
              if (uVar33 != 1) {
                iVar38 = -(bVar9 & 0x3e);
                do {
                  puVar42 = puVar41;
                  *puVar42 = *puVar40;
                  puVar42[1] = puVar40[1];
                  puVar40 = puVar40 + 2;
                  puVar41 = puVar42 + 2;
                  iVar38 = iVar38 + 2;
                } while (iVar38 != 0);
                in_x17 = puVar42 + 1;
              }
              puVar42 = puVar41;
              puVar43 = puVar40;
              if ((bVar7 >> 2 & 1) != 0) {
                puVar43 = puVar40 + 1;
                puVar42 = puVar41 + 1;
                *puVar41 = *puVar40;
                in_x17 = puVar41;
              }
              if (bVar8 == 1) {
                *(char *)puVar42 = (char)*puVar43;
              }
              else if (bVar8 == 2) {
                uVar44 = *puVar43;
                *(char *)puVar42 = (char)uVar44;
                *(char *)((long)in_x17 + 5) = (char)(uVar44 >> 8);
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 != param_3);
            return;
          }
          if (bVar8 != 3) {
            do {
              if (bVar8 == 1) {
                uVar37 = (undefined1)*puVar27;
                puVar40 = puVar32;
LAB_031a702c:
                *(undefined1 *)puVar40 = uVar37;
              }
              else if (bVar8 == 2) {
                uVar33 = *puVar27;
                *(char *)puVar32 = (char)uVar33;
                uVar37 = (undefined1)(uVar33 >> 8);
                puVar40 = (uint *)((long)puVar32 + 1);
                goto LAB_031a702c;
              }
              uVar33 = (int)uVar23 - 1;
              uVar23 = (ulong)uVar33;
              if (uVar33 == 0) {
                return;
              }
            } while( true );
          }
          if (param_3 != 1) {
            iVar38 = -(param_3 & 0xfffffffe);
            do {
              uVar33 = *puVar27;
              *(char *)puVar32 = (char)uVar33;
              *(char *)((long)puVar32 + 1) = (char)(uVar33 >> 8);
              *(char *)((long)puVar32 + 2) = (char)(uVar33 >> 0x10);
              uVar33 = *puVar27;
              *(char *)puVar32 = (char)uVar33;
              iVar38 = iVar38 + 2;
              *(char *)((long)puVar32 + 1) = (char)(uVar33 >> 8);
              *(char *)((long)puVar32 + 2) = (char)(uVar33 >> 0x10);
            } while (iVar38 != 0);
          }
LAB_031a6ec4:
          if ((param_3 & 1) != 0) {
            uVar33 = *puVar27;
            *(char *)puVar32 = (char)uVar33;
            *(char *)((long)puVar32 + 1) = (char)(uVar33 >> 8);
            *(char *)((long)puVar32 + 2) = (char)(uVar33 >> 0x10);
            return;
          }
        }
        return;
      case 7:
        switch(uVar24) {
        case 2:
          goto LAB_031a6c90;
        case 3:
          if (*(char *)((long)param_1 + 0xd) != '\x04') {
            return;
          }
          if (*(char *)((long)param_2 + 0xd) != '\x04') {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          uVar33 = (int)param_2[1] >> 1;
          lVar28 = param_1[1];
          puVar13 = (undefined4 *)*param_1;
          puVar18 = (ushort *)(*param_2 + 4);
          do {
            uVar6 = *puVar13;
            puVar13 = (undefined4 *)((long)puVar13 + (long)(int)lVar28);
            puVar18[-2] = (ushort)uVar6 & 0xff;
            *puVar18 = (ushort)((uint)uVar6 >> 0x10) & 0xff;
            puVar18[-1] = (ushort)((uint)uVar6 >> 8) & 0xff;
            puVar18[1] = (ushort)(byte)((uint)uVar6 >> 0x18);
            uVar24 = (int)uVar23 - 1;
            uVar23 = (ulong)uVar24;
            puVar18 = (ushort *)
                      ((long)puVar18 +
                      (-(ulong)(uVar33 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar33 << 1));
          } while (uVar24 != 0);
          return;
        default:
          return;
        case 8:
          if (*(char *)((long)param_1 + 0xd) != *(char *)((long)param_2 + 0xd)) {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          if (*(char *)((long)param_1 + 0xd) != '\x04') {
            return;
          }
          puVar31 = (undefined1 *)(*param_2 + 1);
          lVar28 = param_2[1];
          lVar39 = param_1[1];
          puVar35 = (undefined1 *)(*param_1 + 3);
          do {
            puVar31[-1] = puVar35[-3];
            *puVar31 = puVar35[-2];
            puVar31[1] = puVar35[-1];
            uVar37 = *puVar35;
            uVar33 = (int)uVar23 - 1;
            uVar23 = (ulong)uVar33;
            puVar35 = puVar35 + (int)lVar39;
            puVar31[2] = uVar37;
            puVar31 = puVar31 + (int)lVar28;
          } while (uVar33 != 0);
          return;
        case 10:
          if (*(char *)((long)param_1 + 0xd) != *(char *)((long)param_2 + 0xd)) {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          if (*(char *)((long)param_1 + 0xd) != '\x04') {
            return;
          }
          uVar33 = (int)param_2[1] >> 2;
          lVar28 = param_1[1];
          puVar29 = (undefined8 *)*param_2;
          puVar31 = (undefined1 *)(*param_1 + 3);
          do {
            uVar24 = (int)uVar23 - 1;
            uVar23 = (ulong)uVar24;
            auVar50._1_3_ = 0;
            auVar50[0] = puVar31[-3];
            auVar50[4] = puVar31[-2];
            auVar50._5_3_ = 0;
            auVar50[8] = puVar31[-1];
            uVar37 = *puVar31;
            puVar31 = puVar31 + (int)lVar28;
            auVar50._9_3_ = 0;
            auVar50[0xc] = uVar37;
            auVar50._13_3_ = 0;
            auVar53 = NEON_scvtf(auVar50,4);
            puVar29[1] = auVar53._8_8_;
            *puVar29 = auVar53._0_8_;
            puVar29 = (undefined8 *)
                      ((long)puVar29 +
                      (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2));
          } while (uVar24 != 0);
          return;
        }
      case 10:
        switch(uVar24) {
        case 2:
          goto switchD_031a5520_caseD_2;
        default:
          return;
        case 8:
          if (*(char *)((long)param_1 + 0xd) != '\x04') {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          if (*(char *)((long)param_2 + 0xd) != '\x01') {
            return;
          }
          auVar53._8_4_ = 0x437f0000;
          auVar53._0_8_ = 0x437f0000437f0000;
          auVar53._12_4_ = 0x437f0000;
          uVar33 = (int)param_2[1] >> 2;
          uVar24 = (int)param_1[1] >> 2;
          pfVar30 = (float *)*param_1;
          puVar27 = (uint *)*param_2;
          do {
            fVar51 = *pfVar30;
            pfVar15 = pfVar30 + 1;
            pfVar2 = pfVar30 + 2;
            pfVar12 = pfVar30 + 3;
            pfVar30 = (float *)((long)pfVar30 +
                               (-(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2))
            ;
            uVar44 = (int)uVar23 - 1;
            uVar23 = (ulong)uVar44;
            auVar60._0_4_ = fVar51 * 255.0;
            auVar60._4_4_ = *pfVar15 * 255.0;
            auVar60._8_4_ = *pfVar2 * 255.0;
            auVar60._12_4_ = *pfVar12 * 255.0;
            auVar60 = NEON_fmax(auVar60,ZEXT816(0),4);
            auVar60 = NEON_fmin(auVar60,auVar53,4);
            *puVar27 = (int)(auVar60._12_4_ + 8388608.0) << 0x18 |
                       (uint)(auVar60._0_4_ + 8388608.0) & 0xff |
                       ((uint)(auVar60._4_4_ + 8388608.0) & 0xff) << 8 |
                       ((uint)(auVar60._8_4_ + 8388608.0) & 0xff) << 0x10;
            puVar27 = (uint *)((long)puVar27 +
                              (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2));
          } while (uVar44 != 0);
          return;
        case 10:
          bVar7 = *(byte *)((long)param_1 + 0xd);
          uVar45 = (ulong)bVar7;
          if (*(byte *)((long)param_2 + 0xd) < bVar7) {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          lVar28 = (long)((ulong)*(uint *)(param_2 + 1) << 0x20) >> 0x22;
          pvVar17 = (void *)*param_2;
          uVar33 = (uint)*(byte *)((long)param_2 + 0xd);
          if (bVar7 != 0) {
            lVar39 = *param_1;
            lVar46 = (long)((ulong)*(uint *)(param_1 + 1) << 0x20) >> 0x22;
            if (bVar7 < uVar33) {
              uVar49 = 0;
              pvVar48 = pvVar17;
              do {
                if (uVar45 - 1 < 7) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = 0;
                  lVar26 = 0x10;
                  do {
                    puVar13 = (undefined4 *)(lVar39 + lVar26);
                    puVar36 = (undefined4 *)((long)pvVar48 + lVar26);
                    lVar26 = lVar26 + 0x20;
                    puVar36[-4] = puVar13[-4];
                    puVar36[-3] = puVar13[-3];
                    puVar36[-2] = puVar13[-2];
                    puVar36[-1] = puVar13[-1];
                    *puVar36 = *puVar13;
                    puVar36[1] = puVar13[1];
                    puVar36[2] = puVar13[2];
                    uVar25 = uVar25 + 8;
                    puVar36[3] = puVar13[3];
                  } while ((uVar45 & 0xf8) != uVar25);
                }
                if ((bVar7 & 7) != 0) {
                  lVar26 = uVar25 << 2;
                  uVar25 = uVar45 & 7;
                  do {
                    uVar25 = uVar25 - 1;
                    *(undefined4 *)((long)pvVar48 + lVar26) = *(undefined4 *)(lVar39 + lVar26);
                    lVar26 = lVar26 + 4;
                  } while (uVar25 != 0);
                }
                memset((void *)((long)pvVar17 + (uVar49 * lVar28 + uVar45) * 4),0,
                       (ulong)(uVar33 + ~(uint)bVar7) * 4 + 4);
                uVar49 = uVar49 + 1;
                lVar39 = lVar39 + lVar46 * 4;
                pvVar48 = (void *)((long)pvVar48 + lVar28 * 4);
              } while (uVar49 != uVar23);
              return;
            }
            uVar49 = 0;
            do {
              if (uVar45 - 1 < 7) {
                uVar25 = 0;
              }
              else {
                uVar25 = 0;
                lVar26 = 0x10;
                do {
                  puVar13 = (undefined4 *)(lVar39 + lVar26);
                  puVar36 = (undefined4 *)((long)pvVar17 + lVar26);
                  lVar26 = lVar26 + 0x20;
                  puVar36[-4] = puVar13[-4];
                  puVar36[-3] = puVar13[-3];
                  puVar36[-2] = puVar13[-2];
                  puVar36[-1] = puVar13[-1];
                  *puVar36 = *puVar13;
                  puVar36[1] = puVar13[1];
                  puVar36[2] = puVar13[2];
                  uVar25 = uVar25 + 8;
                  puVar36[3] = puVar13[3];
                } while ((uVar45 & 0xf8) != uVar25);
              }
              if ((bVar7 & 7) != 0) {
                lVar26 = uVar25 << 2;
                uVar25 = uVar45 & 7;
                do {
                  uVar25 = uVar25 - 1;
                  *(undefined4 *)((long)pvVar17 + lVar26) = *(undefined4 *)(lVar39 + lVar26);
                  lVar26 = lVar26 + 4;
                } while (uVar25 != 0);
              }
              uVar49 = uVar49 + 1;
              pvVar17 = (void *)((long)pvVar17 + lVar28 * 4);
              lVar39 = lVar39 + lVar46 * 4;
            } while (uVar49 != uVar23);
            return;
          }
          if (uVar33 == 0) {
            return;
          }
          uVar45 = uVar23 & 3;
          sVar14 = (ulong)(uVar33 + ~(uint)bVar7) * 4 + 4;
          if (uVar23 - 1 < 3) {
            uVar49 = 0;
          }
          else {
            uVar49 = 0;
            pvVar48 = pvVar17;
            do {
              memset(pvVar48,0,sVar14);
              memset((void *)((long)pvVar48 + lVar28 * 4),0,sVar14);
              memset((void *)((long)pvVar48 + lVar28 * 8),0,sVar14);
              memset((void *)((long)pvVar48 + lVar28 * 0xc),0,sVar14);
              uVar49 = uVar49 + 4;
              pvVar48 = (void *)((long)pvVar48 + lVar28 * 0x10);
            } while ((uVar23 & 0xfffffffc) != uVar49);
          }
          if ((param_3 & 3) == 0) {
            return;
          }
          pvVar17 = (void *)((long)pvVar17 + uVar49 * lVar28 * 4);
          do {
            memset(pvVar17,0,sVar14);
            uVar45 = uVar45 - 1;
            pvVar17 = (void *)((long)pvVar17 + lVar28 * 4);
          } while (uVar45 != 0);
          return;
        case 0xb:
          if (*(char *)((long)param_1 + 0xd) != '\x03') {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          if (*(char *)((long)param_2 + 0xd) != '\x01') {
            return;
          }
          uVar33 = (int)param_2[1] >> 2;
          puVar13 = (undefined4 *)(*param_2 + 8);
          uVar24 = (int)param_1[1] >> 2;
          puVar36 = (undefined4 *)(*param_1 + 8);
          do {
            puVar13[-2] = puVar36[-2];
            puVar13[-1] = puVar36[-1];
            uVar6 = *puVar36;
            uVar44 = (int)uVar23 - 1;
            uVar23 = (ulong)uVar44;
            puVar36 = (undefined4 *)
                      ((long)puVar36 +
                      (-(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2));
            *puVar13 = uVar6;
            puVar13[1] = 0;
            puVar13 = (undefined4 *)
                      ((long)puVar13 +
                      (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2));
          } while (uVar44 != 0);
          return;
        }
      }
    }
    if (uVar33 == 8) goto LAB_031a5268;
    bVar7 = PTR_DAT_047e58a0[bVar8];
  }
  uVar33 = (uint)bVar7 * (uint)bVar9 + 3 & 0x1fffc;
LAB_031a5288:
  FUN_031a4104(*param_1,(int)param_1[1],*param_2,(int)param_2[1],uVar33);
  return;
switchD_031a5520_caseD_2:
  bVar7 = *(byte *)((long)param_1 + 0xd);
  uVar45 = (ulong)bVar7;
  bVar8 = *(byte *)((long)param_2 + 0xd);
  uVar23 = (ulong)bVar8;
  lVar26 = (long)(int)param_1[1];
  lVar46 = (long)(int)param_2[1];
  lVar39 = *param_1;
  lVar28 = *param_2;
  if ((uint)bVar7 == (uint)bVar8) {
    if ((int)param_3 < 1) {
      return;
    }
    if (bVar7 == 0) {
      return;
    }
    uVar33 = 0;
    pfVar30 = (float *)(lVar39 + 8);
    do {
      if (uVar45 - 1 < 3) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        pfVar15 = pfVar30;
        do {
          puVar31 = (undefined1 *)(lVar28 + uVar23);
          uVar23 = uVar23 + 4;
          *puVar31 = (char)(int)(pfVar15[-2] * 255.0);
          puVar31[1] = (char)(int)(pfVar15[-1] * 255.0);
          puVar31[2] = (char)(int)(*pfVar15 * 255.0);
          pfVar2 = pfVar15 + 1;
          pfVar15 = pfVar15 + 4;
          puVar31[3] = (char)(int)(*pfVar2 * 255.0);
        } while ((uVar45 & 0xfc) != uVar23);
      }
      if ((bVar7 & 3) != 0) {
        uVar49 = uVar45 & 3;
        do {
          uVar49 = uVar49 - 1;
          *(char *)(lVar28 + uVar23) = (char)(int)(*(float *)(lVar39 + uVar23 * 4) * 255.0);
          uVar23 = uVar23 + 1;
        } while (uVar49 != 0);
      }
      uVar33 = uVar33 + 1;
      lVar28 = lVar28 + lVar46;
      lVar39 = lVar39 + lVar26;
      pfVar30 = (float *)((long)pfVar30 + lVar26);
    } while (uVar33 != param_3);
    return;
  }
  uVar33 = (uint)bVar8;
  if (*(char *)((long)param_1 + 0xe) == '\a') {
    cVar10 = *(char *)((long)param_2 + 0xe);
    if (cVar10 == '\b') {
      if ((int)param_3 < 1) {
        return;
      }
      if (bVar8 - 1 != (uint)bVar7) {
        return;
      }
      if (uVar33 == 0) {
        return;
      }
      uVar33 = 0;
      pfVar30 = (float *)(lVar39 + 8);
      do {
        if (uVar23 - 1 < 3) {
          uVar45 = 0;
        }
        else {
          uVar45 = 0;
          pfVar15 = pfVar30;
          do {
            puVar31 = (undefined1 *)(lVar28 + uVar45);
            uVar45 = uVar45 + 4;
            *puVar31 = (char)(int)(pfVar15[-2] * 255.0);
            puVar31[1] = (char)(int)(pfVar15[-1] * 255.0);
            puVar31[2] = (char)(int)(*pfVar15 * 255.0);
            pfVar2 = pfVar15 + 1;
            pfVar15 = pfVar15 + 4;
            puVar31[3] = (char)(int)(*pfVar2 * 255.0);
          } while ((uVar23 & 0xfc) != uVar45);
        }
        if ((bVar8 & 3) != 0) {
          uVar49 = uVar23 & 3;
          do {
            uVar49 = uVar49 - 1;
            *(char *)(lVar28 + uVar45) = (char)(int)(*(float *)(lVar39 + uVar45 * 4) * 255.0);
            uVar45 = uVar45 + 1;
          } while (uVar49 != 0);
        }
        uVar33 = uVar33 + 1;
        lVar28 = lVar28 + lVar46;
        lVar39 = lVar39 + lVar26;
        pfVar30 = (float *)((long)pfVar30 + lVar26);
      } while (uVar33 != param_3);
      return;
    }
  }
  else {
    if (*(char *)((long)param_1 + 0xe) == '\b') goto LAB_031a6348;
    cVar10 = *(char *)((long)param_2 + 0xe);
  }
  if (cVar10 != '\a') {
    return;
  }
LAB_031a6348:
  if ((int)param_3 < 1) {
    return;
  }
  if (bVar7 - 1 != uVar33) {
    return;
  }
  if (uVar33 != 0) {
    uVar33 = 0;
    pfVar30 = (float *)(lVar39 + 8);
    do {
      fVar51 = 0.0;
      if (uVar23 - 1 < 3) {
        uVar45 = 0;
      }
      else {
        uVar45 = 0;
        pfVar15 = pfVar30;
        do {
          fVar56 = pfVar15[-2];
          puVar31 = (undefined1 *)(lVar28 + uVar45);
          uVar45 = uVar45 + 4;
          *puVar31 = (char)(int)(fVar56 * 255.0);
          fVar61 = pfVar15[-1];
          puVar31[1] = (char)(int)(fVar61 * 255.0);
          fVar55 = *pfVar15;
          puVar31[2] = (char)(int)(fVar55 * 255.0);
          pfVar2 = pfVar15 + 1;
          pfVar15 = pfVar15 + 4;
          fVar51 = fVar51 + fVar56 * 255.0 + fVar61 * 255.0 + fVar55 * 255.0 + *pfVar2 * 255.0;
          puVar31[3] = (char)(int)(*pfVar2 * 255.0);
        } while ((uVar23 & 0xfc) != uVar45);
      }
      if ((bVar8 & 3) != 0) {
        uVar49 = uVar23 & 3;
        do {
          uVar49 = uVar49 - 1;
          fVar56 = *(float *)(lVar39 + uVar45 * 4) * 255.0;
          fVar51 = fVar51 + fVar56;
          *(char *)(lVar28 + uVar45) = (char)(int)fVar56;
          uVar45 = uVar45 + 1;
        } while (uVar49 != 0);
      }
      uVar33 = uVar33 + 1;
      lVar39 = lVar39 + lVar26;
      *(char *)(lVar28 + uVar23) = (char)(int)(255.0 - fVar51);
      lVar28 = lVar28 + lVar46;
      pfVar30 = (float *)((long)pfVar30 + lVar26);
    } while (uVar33 != param_3);
    return;
  }
  uVar33 = param_3 & 3;
  if (2 < param_3 - 1) {
    iVar38 = -(param_3 & 0xfffffffc);
    lVar39 = lVar28;
    do {
      lVar28 = lVar39 + lVar46 * 4;
      iVar38 = iVar38 + 4;
      *(undefined1 *)(lVar39 + uVar23) = 0xff;
      *(undefined1 *)(lVar39 + lVar46 + uVar23) = 0xff;
      *(undefined1 *)(lVar39 + uVar23 + lVar46 * 2) = 0xff;
      *(undefined1 *)(lVar39 + lVar46 * 3 + uVar23) = 0xff;
      lVar39 = lVar28;
    } while (iVar38 != 0);
  }
  if (uVar33 == 0) {
    return;
  }
  puVar31 = (undefined1 *)(lVar28 + uVar23);
  do {
    *puVar31 = 0xff;
    uVar33 = uVar33 - 1;
    puVar31 = puVar31 + lVar46;
  } while (uVar33 != 0);
  return;
code_r0x031a52c8:
  switch(bVar7) {
  case 3:
    if (0 < (int)param_3) {
      bVar7 = *(byte *)((long)param_1 + 0xd);
      uVar23 = (ulong)bVar7;
      if ((bVar7 == *(byte *)((long)param_2 + 0xd)) && (bVar7 != 0)) {
        lVar28 = *param_2;
        uVar33 = 0;
        lVar46 = param_2[1];
        lVar26 = param_1[1];
        puVar18 = (ushort *)(lVar28 + 8);
        lVar39 = *param_1;
        do {
          if (uVar23 - 1 < 7) {
            uVar45 = 0;
          }
          else {
            uVar45 = 0;
            puVar22 = puVar18;
            do {
              pbVar34 = (byte *)(lVar39 + uVar45);
              uVar45 = uVar45 + 8;
              puVar22[-4] = (ushort)*pbVar34;
              puVar22[-3] = (ushort)pbVar34[1];
              puVar22[-2] = (ushort)pbVar34[2];
              puVar22[-1] = (ushort)pbVar34[3];
              *puVar22 = (ushort)pbVar34[4];
              puVar22[1] = (ushort)pbVar34[5];
              puVar22[2] = (ushort)pbVar34[6];
              puVar22[3] = (ushort)pbVar34[7];
              puVar22 = puVar22 + 8;
            } while ((uVar23 & 0xf8) != uVar45);
          }
          if ((bVar7 & 7) != 0) {
            uVar49 = uVar23 & 7;
            do {
              uVar49 = uVar49 - 1;
              *(ushort *)(lVar28 + uVar45 * 2) = (ushort)*(byte *)(lVar39 + uVar45);
              uVar45 = uVar45 + 1;
            } while (uVar49 != 0);
          }
          uVar33 = uVar33 + 1;
          lVar28 = lVar28 + (int)lVar46;
          lVar39 = lVar39 + (int)lVar26;
          puVar18 = (ushort *)((long)puVar18 + (long)(int)lVar46);
        } while (uVar33 != param_3);
      }
    }
    break;
  case 4:
    bVar7 = *(byte *)((long)param_1 + 0xd);
    uVar23 = (ulong)bVar7;
    bVar8 = *(byte *)((long)param_2 + 0xd);
    uVar45 = (ulong)bVar8;
    if ((bVar7 <= bVar8) && (0 < (int)param_3)) {
      lVar46 = (long)(int)param_1[1];
      uVar49 = uVar23 - 1;
      uVar33 = (uint)bVar7;
      uVar24 = (uint)bVar8;
      lVar26 = (long)(int)param_2[1];
      lVar28 = *param_2;
      lVar39 = *param_1;
      if (uVar33 == 0) {
        if (uVar24 > uVar33) {
          uVar33 = 0;
          lVar19 = lVar28 + 0xe;
          do {
            uVar25 = uVar23;
            if ((bVar8 & 7) != 0) {
              uVar16 = (ulong)uVar24 & 7;
              do {
                uVar16 = uVar16 - 1;
                *(ushort *)(lVar28 + uVar25 * 2) = (ushort)*(byte *)(lVar39 + uVar49);
                uVar25 = uVar25 + 1;
              } while (uVar16 != 0);
            }
            if (6 < ~uVar23 + uVar45) {
              lVar21 = uVar45 - uVar25;
              lVar20 = lVar19;
              do {
                puVar18 = (ushort *)(lVar20 + uVar25 * 2);
                lVar20 = lVar20 + 0x10;
                puVar18[-7] = (ushort)*(byte *)(lVar39 + uVar49);
                lVar21 = lVar21 + -8;
                puVar18[-6] = (ushort)*(byte *)(lVar39 + uVar49);
                puVar18[-5] = (ushort)*(byte *)(lVar39 + uVar49);
                puVar18[-4] = (ushort)*(byte *)(lVar39 + uVar49);
                puVar18[-3] = (ushort)*(byte *)(lVar39 + uVar49);
                puVar18[-2] = (ushort)*(byte *)(lVar39 + uVar49);
                puVar18[-1] = (ushort)*(byte *)(lVar39 + uVar49);
                *puVar18 = (ushort)*(byte *)(lVar39 + uVar49);
              } while (lVar21 != 0);
            }
            uVar33 = uVar33 + 1;
            lVar28 = lVar28 + lVar26;
            lVar39 = lVar39 + lVar46;
            lVar19 = lVar19 + lVar26;
          } while (uVar33 != param_3);
        }
      }
      else if (uVar24 <= uVar33) {
        uVar33 = 0;
        puVar18 = (ushort *)(lVar28 + 8);
        do {
          if (uVar49 < 7) {
            uVar45 = 0;
          }
          else {
            uVar45 = 0;
            puVar22 = puVar18;
            do {
              pbVar34 = (byte *)(lVar39 + uVar45);
              uVar45 = uVar45 + 8;
              puVar22[-4] = (ushort)*pbVar34;
              puVar22[-3] = (ushort)pbVar34[1];
              puVar22[-2] = (ushort)pbVar34[2];
              puVar22[-1] = (ushort)pbVar34[3];
              *puVar22 = (ushort)pbVar34[4];
              puVar22[1] = (ushort)pbVar34[5];
              puVar22[2] = (ushort)pbVar34[6];
              puVar22[3] = (ushort)pbVar34[7];
              puVar22 = puVar22 + 8;
            } while ((uVar23 & 0xf8) != uVar45);
          }
          if ((bVar7 & 7) != 0) {
            uVar25 = uVar23 & 7;
            do {
              uVar25 = uVar25 - 1;
              *(ushort *)(lVar28 + uVar45 * 2) = (ushort)*(byte *)(lVar39 + uVar45);
              uVar45 = uVar45 + 1;
            } while (uVar25 != 0);
          }
          uVar33 = uVar33 + 1;
          lVar28 = lVar28 + lVar26;
          lVar39 = lVar39 + lVar46;
          puVar18 = (ushort *)((long)puVar18 + lVar26);
        } while (uVar33 != param_3);
      }
      else {
        uVar44 = 0;
        puVar18 = (ushort *)(lVar28 + 8);
        lVar19 = lVar28 + 0xe;
        do {
          if (uVar49 < 7) {
            uVar25 = 0;
          }
          else {
            uVar25 = 0;
            puVar22 = puVar18;
            do {
              pbVar34 = (byte *)(lVar39 + uVar25);
              uVar25 = uVar25 + 8;
              puVar22[-4] = (ushort)*pbVar34;
              puVar22[-3] = (ushort)pbVar34[1];
              puVar22[-2] = (ushort)pbVar34[2];
              puVar22[-1] = (ushort)pbVar34[3];
              *puVar22 = (ushort)pbVar34[4];
              puVar22[1] = (ushort)pbVar34[5];
              puVar22[2] = (ushort)pbVar34[6];
              puVar22[3] = (ushort)pbVar34[7];
              puVar22 = puVar22 + 8;
            } while ((uVar23 & 0xf8) != uVar25);
          }
          if ((bVar7 & 7) != 0) {
            uVar16 = uVar23 & 7;
            do {
              uVar16 = uVar16 - 1;
              *(ushort *)(lVar28 + uVar25 * 2) = (ushort)*(byte *)(lVar39 + uVar25);
              uVar25 = uVar25 + 1;
            } while (uVar16 != 0);
          }
          uVar25 = uVar23;
          if ((uVar24 - uVar33 & 7) != 0) {
            uVar16 = (ulong)(uVar24 - uVar33) & 7;
            do {
              uVar16 = uVar16 - 1;
              *(ushort *)(lVar28 + uVar25 * 2) = (ushort)*(byte *)(lVar39 + uVar49);
              uVar25 = uVar25 + 1;
            } while (uVar16 != 0);
          }
          if (6 < ~uVar23 + uVar45) {
            lVar21 = uVar45 - uVar25;
            lVar20 = lVar19;
            do {
              puVar22 = (ushort *)(lVar20 + uVar25 * 2);
              lVar20 = lVar20 + 0x10;
              puVar22[-7] = (ushort)*(byte *)(lVar39 + uVar49);
              lVar21 = lVar21 + -8;
              puVar22[-6] = (ushort)*(byte *)(lVar39 + uVar49);
              puVar22[-5] = (ushort)*(byte *)(lVar39 + uVar49);
              puVar22[-4] = (ushort)*(byte *)(lVar39 + uVar49);
              puVar22[-3] = (ushort)*(byte *)(lVar39 + uVar49);
              puVar22[-2] = (ushort)*(byte *)(lVar39 + uVar49);
              puVar22[-1] = (ushort)*(byte *)(lVar39 + uVar49);
              *puVar22 = (ushort)*(byte *)(lVar39 + uVar49);
            } while (lVar21 != 0);
          }
          uVar44 = uVar44 + 1;
          lVar28 = lVar28 + lVar26;
          lVar39 = lVar39 + lVar46;
          puVar18 = (ushort *)((long)puVar18 + lVar26);
          lVar19 = lVar19 + lVar26;
        } while (uVar44 != param_3);
      }
    }
    break;
  case 7:
  case 8:
    bVar7 = *(byte *)((long)param_1 + 0xd);
    uVar33 = (uint)bVar7;
    if (uVar33 != *(byte *)((long)param_2 + 0xd)) {
      return;
    }
    puVar32 = (uint *)*param_2;
    puVar27 = (uint *)*param_1;
    if (uVar33 - 1 < 4) {
      lVar28 = (long)(int)param_1[1];
      lVar39 = (long)(int)param_2[1];
      switch(uVar33) {
      case 1:
        if (0 < (int)param_3) {
          uVar33 = param_3 & 3;
          if (2 < param_3 - 1) {
            iVar38 = -(param_3 & 0xfffffffc);
            do {
              *puVar32 = (uint)(byte)*puVar27;
              pbVar34 = (byte *)((long)puVar27 + lVar28) + lVar28;
              *(uint *)((long)puVar32 + lVar39) = (uint)*(byte *)((long)puVar27 + lVar28);
              puVar32 = (uint *)((long)puVar32 + lVar39 + lVar39);
              *puVar32 = (uint)*pbVar34;
              puVar32 = (uint *)((long)puVar32 + lVar39);
              *puVar32 = (uint)pbVar34[lVar28];
              puVar27 = (uint *)(pbVar34 + lVar28 + lVar28);
              puVar32 = (uint *)((long)puVar32 + lVar39);
              iVar38 = iVar38 + 4;
            } while (iVar38 != 0);
          }
          for (; uVar33 != 0; uVar33 = uVar33 - 1) {
            *puVar32 = (uint)(byte)*puVar27;
            puVar27 = (uint *)((long)puVar27 + lVar28);
            puVar32 = (uint *)((long)puVar32 + lVar39);
          }
        }
        break;
      case 2:
        if ((int)param_3 < 1) {
          return;
        }
        if (param_3 != 1) {
          iVar38 = -(param_3 & 0xfffffffe);
          do {
            *puVar32 = (uint)(ushort)*puVar27;
            *(uint *)((long)puVar32 + lVar39) = (uint)*(ushort *)((long)puVar27 + lVar28);
            puVar27 = (uint *)((long)puVar27 + lVar28 + lVar28);
            puVar32 = (uint *)((long)puVar32 + lVar39 + lVar39);
            iVar38 = iVar38 + 2;
          } while (iVar38 != 0);
        }
        goto LAB_031a61e8;
      case 3:
        if (0 < (int)param_3) {
          puVar31 = (undefined1 *)((long)puVar27 + 2);
          do {
            puVar4 = (undefined2 *)(puVar31 + -2);
            uVar33 = (int)uVar23 - 1;
            uVar23 = (ulong)uVar33;
            uVar37 = *puVar31;
            puVar31 = puVar31 + lVar28;
            *puVar32 = (uint)CONCAT12(uVar37,*puVar4);
            puVar32 = (uint *)((long)puVar32 + lVar39);
          } while (uVar33 != 0);
        }
        break;
      case 4:
        if (0 < (int)param_3) {
          lVar46 = (long)puVar27 + 3;
          do {
            *puVar32 = *(uint *)(lVar46 + -3);
            puVar32 = (uint *)((long)puVar32 + lVar39);
            uVar33 = (int)uVar23 - 1;
            uVar23 = (ulong)uVar33;
            lVar46 = lVar46 + lVar28;
          } while (uVar33 != 0);
        }
      }
    }
    else {
      if ((int)param_3 < 1) {
        return;
      }
      bVar8 = bVar7 & 3;
      bVar9 = bVar7 >> 2;
      if (bVar9 != 0) {
        uVar33 = (uint)bVar9;
        if (bVar8 == 3) {
          uVar24 = 0;
          do {
            puVar41 = puVar32;
            puVar40 = puVar27;
            if (uVar33 != 1) {
              iVar38 = -(uVar33 & 0x3e);
              do {
                puVar42 = puVar40;
                *puVar41 = *puVar42;
                puVar41[1] = puVar42[1];
                puVar40 = puVar42 + 2;
                puVar41 = puVar41 + 2;
                iVar38 = iVar38 + 2;
              } while (iVar38 != 0);
              in_x16 = puVar42 + 1;
            }
            puVar42 = puVar41;
            puVar43 = puVar40;
            puVar47 = in_x16;
            if ((bVar7 >> 2 & 1) != 0) {
              puVar43 = puVar40 + 1;
              puVar42 = puVar41 + 1;
              *puVar41 = *puVar40;
              puVar47 = puVar40;
            }
            uVar24 = uVar24 + 1;
            in_x16 = (uint *)(ulong)*(byte *)((long)puVar47 + 6);
            *puVar42 = (uint)CONCAT12(*(byte *)((long)puVar47 + 6),
                                      CONCAT11(*(undefined1 *)((long)puVar47 + 5),(char)*puVar43));
          } while (uVar24 != param_3);
          return;
        }
        uVar24 = 0;
        do {
          puVar41 = puVar32;
          puVar40 = puVar27;
          if (uVar33 != 1) {
            iVar38 = -(bVar9 & 0x3e);
            do {
              puVar42 = puVar40;
              *puVar41 = *puVar42;
              puVar41[1] = puVar42[1];
              puVar40 = puVar42 + 2;
              puVar41 = puVar41 + 2;
              iVar38 = iVar38 + 2;
            } while (iVar38 != 0);
            in_x17 = puVar42 + 1;
          }
          puVar42 = puVar41;
          puVar43 = puVar40;
          if ((bVar7 >> 2 & 1) != 0) {
            puVar43 = puVar40 + 1;
            puVar42 = puVar41 + 1;
            *puVar41 = *puVar40;
            in_x17 = puVar40;
          }
          if (bVar8 == 1) {
            uVar44 = (uint)(byte)*puVar43;
LAB_031a6b3c:
            *puVar42 = uVar44;
          }
          else if (bVar8 == 2) {
            pbVar34 = (byte *)((long)in_x17 + 5);
            in_x17 = (uint *)(ulong)*pbVar34;
            uVar44 = (uint)CONCAT11(*pbVar34,(char)*puVar43);
            goto LAB_031a6b3c;
          }
          uVar24 = uVar24 + 1;
          if (uVar24 == param_3) {
            return;
          }
        } while( true );
      }
      if (bVar8 == 3) {
        do {
          uVar33 = (int)uVar23 - 1;
          uVar23 = (ulong)uVar33;
          *puVar32 = (uint)(uint3)*puVar27;
        } while (uVar33 != 0);
        return;
      }
      if (bVar8 == 1) {
        uVar33 = param_3 & 3;
        if (2 < param_3 - 1) {
          iVar38 = -(param_3 & 0xfffffffc);
          do {
            *puVar32 = (uint)(byte)*puVar27;
            *puVar32 = (uint)(byte)*puVar27;
            *puVar32 = (uint)(byte)*puVar27;
            iVar38 = iVar38 + 4;
            *puVar32 = (uint)(byte)*puVar27;
          } while (iVar38 != 0);
        }
        for (; uVar33 != 0; uVar33 = uVar33 - 1) {
          *puVar32 = (uint)(byte)*puVar27;
        }
        return;
      }
      if (bVar8 != 2) {
        return;
      }
      if (param_3 != 1) {
        iVar38 = -(param_3 & 0xfffffffe);
        do {
          *puVar32 = (uint)(ushort)*puVar27;
          iVar38 = iVar38 + 2;
          *puVar32 = (uint)(ushort)*puVar27;
        } while (iVar38 != 0);
      }
LAB_031a61e8:
      if ((param_3 & 1) != 0) {
        *puVar32 = (uint)(ushort)*puVar27;
      }
    }
    break;
  case 10:
    bVar7 = *(byte *)((long)param_1 + 0xd);
    uVar45 = (ulong)bVar7;
    bVar8 = *(byte *)((long)param_2 + 0xd);
    uVar23 = (ulong)bVar8;
    lVar26 = (long)(int)param_1[1];
    lVar46 = (long)(int)param_2[1];
    lVar39 = *param_1;
    lVar28 = *param_2;
    if ((uint)bVar7 == (uint)bVar8) {
      if ((int)param_3 < 1) {
        return;
      }
      if (bVar7 == 0) {
        return;
      }
      uVar33 = 0;
      pfVar30 = (float *)(lVar28 + 8);
      do {
        if (uVar45 - 1 < 3) {
          uVar23 = 0;
        }
        else {
          uVar23 = 0;
          pfVar15 = pfVar30;
          do {
            pbVar34 = (byte *)(lVar39 + uVar23);
            uVar23 = uVar23 + 4;
            fVar51 = (float)NEON_ucvtf((uint)*pbVar34);
            pfVar15[-2] = fVar51 * 0.003921569;
            fVar51 = (float)NEON_ucvtf((uint)pbVar34[1]);
            pfVar15[-1] = fVar51 * 0.003921569;
            fVar51 = (float)NEON_ucvtf((uint)pbVar34[2]);
            *pfVar15 = fVar51 * 0.003921569;
            fVar51 = (float)NEON_ucvtf((uint)pbVar34[3]);
            pfVar15[1] = fVar51 * 0.003921569;
            pfVar15 = pfVar15 + 4;
          } while ((uVar45 & 0xfc) != uVar23);
        }
        if ((bVar7 & 3) != 0) {
          uVar49 = uVar45 & 3;
          do {
            uVar49 = uVar49 - 1;
            fVar51 = (float)NEON_ucvtf((uint)*(byte *)(lVar39 + uVar23));
            *(float *)(lVar28 + uVar23 * 4) = fVar51 * 0.003921569;
            uVar23 = uVar23 + 1;
          } while (uVar49 != 0);
        }
        uVar33 = uVar33 + 1;
        lVar28 = lVar28 + lVar46;
        lVar39 = lVar39 + lVar26;
        pfVar30 = (float *)((long)pfVar30 + lVar46);
      } while (uVar33 != param_3);
      return;
    }
    uVar33 = (uint)bVar8;
    if (*(char *)((long)param_1 + 0xe) == '\a') {
      cVar10 = *(char *)((long)param_2 + 0xe);
      if (cVar10 == '\b') {
        if ((int)param_3 < 1) {
          return;
        }
        if (bVar8 - 1 != (uint)bVar7) {
          return;
        }
        if (uVar33 == 0) {
          return;
        }
        uVar33 = 0;
        pfVar30 = (float *)(lVar28 + 8);
        do {
          if (uVar23 - 1 < 3) {
            uVar45 = 0;
          }
          else {
            uVar45 = 0;
            pfVar15 = pfVar30;
            do {
              pbVar34 = (byte *)(lVar39 + uVar45);
              uVar45 = uVar45 + 4;
              fVar51 = (float)NEON_ucvtf((uint)*pbVar34);
              pfVar15[-2] = fVar51 * 0.003921569;
              fVar51 = (float)NEON_ucvtf((uint)pbVar34[1]);
              pfVar15[-1] = fVar51 * 0.003921569;
              fVar51 = (float)NEON_ucvtf((uint)pbVar34[2]);
              *pfVar15 = fVar51 * 0.003921569;
              fVar51 = (float)NEON_ucvtf((uint)pbVar34[3]);
              pfVar15[1] = fVar51 * 0.003921569;
              pfVar15 = pfVar15 + 4;
            } while ((uVar23 & 0xfc) != uVar45);
          }
          if ((bVar8 & 3) != 0) {
            uVar49 = uVar23 & 3;
            do {
              uVar49 = uVar49 - 1;
              fVar51 = (float)NEON_ucvtf((uint)*(byte *)(lVar39 + uVar45));
              *(float *)(lVar28 + uVar45 * 4) = fVar51 * 0.003921569;
              uVar45 = uVar45 + 1;
            } while (uVar49 != 0);
          }
          uVar33 = uVar33 + 1;
          lVar28 = lVar28 + lVar46;
          lVar39 = lVar39 + lVar26;
          pfVar30 = (float *)((long)pfVar30 + lVar46);
        } while (uVar33 != param_3);
        return;
      }
LAB_031a6564:
      if (cVar10 != '\a') {
        return;
      }
    }
    else if (*(char *)((long)param_1 + 0xe) != '\b') {
      cVar10 = *(char *)((long)param_2 + 0xe);
      goto LAB_031a6564;
    }
    if ((0 < (int)param_3) && (bVar7 - 1 == uVar33)) {
      if (uVar33 == 0) {
        uVar33 = param_3 & 3;
        if (2 < param_3 - 1) {
          iVar38 = -(param_3 & 0xfffffffc);
          lVar39 = lVar28;
          do {
            lVar28 = lVar39 + lVar46 * 4;
            iVar38 = iVar38 + 4;
            *(undefined4 *)(lVar39 + uVar23 * 4) = 0x3f800000;
            *(undefined4 *)(lVar39 + lVar46 + uVar23 * 4) = 0x3f800000;
            *(undefined4 *)(lVar39 + uVar23 * 4 + lVar46 * 2) = 0x3f800000;
            *(undefined4 *)(lVar39 + lVar46 * 3 + uVar23 * 4) = 0x3f800000;
            lVar39 = lVar28;
          } while (iVar38 != 0);
        }
        if (uVar33 != 0) {
          puVar13 = (undefined4 *)(lVar28 + uVar23 * 4);
          do {
            *puVar13 = 0x3f800000;
            uVar33 = uVar33 - 1;
            puVar13 = (undefined4 *)((long)puVar13 + lVar46);
          } while (uVar33 != 0);
        }
      }
      else {
        uVar33 = 0;
        pfVar30 = (float *)(lVar28 + 8);
        do {
          fVar51 = 0.0;
          if (uVar23 - 1 < 3) {
            uVar45 = 0;
          }
          else {
            uVar45 = 0;
            pfVar15 = pfVar30;
            do {
              pbVar34 = (byte *)(lVar39 + uVar45);
              uVar45 = uVar45 + 4;
              uVar59 = NEON_scvtf((ulong)CONCAT14(*pbVar34,(uint)*pbVar34),4);
              pfVar15[-2] = (float)uVar59 * 0.003921569;
              uVar62 = NEON_scvtf((ulong)CONCAT14(pbVar34[1],(uint)pbVar34[1]),4);
              pfVar15[-1] = (float)uVar62 * 0.003921569;
              uVar57 = NEON_scvtf((ulong)CONCAT14(pbVar34[2],(uint)pbVar34[2]),4);
              *pfVar15 = (float)uVar57 * 0.003921569;
              uVar58 = NEON_scvtf((ulong)CONCAT14(pbVar34[3],(uint)pbVar34[3]),4);
              fVar51 = fVar51 + (float)uVar59 + (float)uVar62 + (float)uVar57 + (float)uVar58;
              pfVar15[1] = (float)uVar58 * 0.003921569;
              pfVar15 = pfVar15 + 4;
            } while ((uVar23 & 0xfc) != uVar45);
          }
          if ((bVar8 & 3) != 0) {
            uVar49 = uVar23 & 3;
            do {
              uVar49 = uVar49 - 1;
              uVar59 = NEON_scvtf((ulong)CONCAT14(*(byte *)(lVar39 + uVar45),
                                                  (uint)*(byte *)(lVar39 + uVar45)),4);
              fVar51 = fVar51 + (float)uVar59;
              *(float *)(lVar28 + uVar45 * 4) = (float)uVar59 * 0.003921569;
              uVar45 = uVar45 + 1;
            } while (uVar49 != 0);
          }
          uVar33 = uVar33 + 1;
          lVar39 = lVar39 + lVar26;
          *(float *)(lVar28 + uVar23 * 4) = (255.0 - fVar51) * 0.003921569;
          lVar28 = lVar28 + lVar46;
          pfVar30 = (float *)((long)pfVar30 + lVar46);
        } while (uVar33 != param_3);
      }
    }
  }
  return;
}


