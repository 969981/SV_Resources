/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00157900; name: FUN_00157900
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00157900(ushort *param_1,ushort *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  byte *pbVar14;
  ushort *puVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  ushort *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  size_t sVar31;
  ushort *puVar32;
  undefined8 *puVar33;
  ushort *local_e8;
  ushort local_e0 [25];
  ushort auStack_ae [31];
  ushort auStack_70 [8];
  
  puVar2 = (undefined8 *)((long)param_3 + param_4);
  if (0x13 < param_4) {
    param_4 = 0x14;
  }
  puVar33 = (undefined8 *)((long)puVar2 - param_4);
  puVar32 = param_2 + -0x1f;
  local_e8 = param_1;
  if ((long)param_3 - param_5 < 0x10000) {
    if (param_3 < puVar33) {
      puVar8 = PTR_DAT_047cb8c8;
      puVar25 = PTR_DAT_047cb8c0;
      puVar26 = param_1;
      do {
        param_1 = puVar26;
        if (puVar26 < puVar32) goto LAB_001579fc;
LAB_0015798c:
        if (param_2 <= param_1) {
          FUN_0015c3d0();
          pcVar16 = *(code **)PTR_PTR_047cb868;
          if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
          pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
LAB_0015a50c:
          pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
          uVar12 = 0x60b;
          goto LAB_0015ab94;
        }
        if (param_2 == auStack_70 + 8) {
          FUN_0015c3d0();
          pcVar16 = *(code **)PTR_PTR_047cb868;
          if (pcVar16 != (code *)0x0) {
            pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
            goto LAB_0015a50c;
          }
          goto LAB_0015ab98;
        }
        memmove(local_e0,param_1,(long)param_2 - (long)param_1);
        local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)param_1));
        param_1 = local_e0;
        puVar8 = PTR_DAT_047cb8c8;
        param_2 = auStack_70;
        puVar32 = auStack_ae;
LAB_001579fc:
        pbVar14 = (byte *)((long)param_1 + 1);
        bVar3 = (byte)*param_1;
        uVar17 = (ulong)bVar3 & 0xf;
        if (uVar17 < 9) {
          *param_3 = *(undefined8 *)pbVar14;
          puVar15 = (ushort *)(pbVar14 + uVar17);
          puVar10 = (undefined8 *)((long)param_3 + uVar17);
          uVar18 = (ulong)*puVar15;
          uVar17 = (ulong)(bVar3 >> 4);
          if (bVar3 < 0x90) {
            if ((ulong)((long)puVar10 - param_5) < uVar18) goto LAB_0015a1e8;
            uVar17 = uVar17 + 4;
            param_1 = puVar15 + 1;
            puVar9 = (undefined8 *)((long)puVar10 - uVar18);
            if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157a54;
            if ((long)uVar17 < (long)puVar2 - (long)puVar10) {
              if (7 < uVar17) {
                puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                *puVar10 = *puVar9;
                puVar9 = puVar33;
                do {
                  puVar30 = puVar9 + 1;
                  *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                  puVar9 = puVar30;
                } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                goto LAB_0015a368;
              }
              goto LAB_0015a298;
            }
            goto LAB_0015aaf8;
          }
          if (uVar17 != 0xf) {
            if ((ulong)((long)puVar10 - param_5) < uVar18) goto LAB_0015a214;
            uVar17 = uVar17 + 4;
            param_1 = puVar15 + 1;
            puVar9 = (undefined8 *)((long)puVar10 - uVar18);
            if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157aa0;
            if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015ab68;
            if (uVar17 < 8) goto LAB_0015a298;
            puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
            *puVar10 = *puVar9;
            puVar9 = puVar33;
            do {
              puVar30 = puVar9 + 1;
              *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
              puVar9 = puVar30;
            } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
LAB_0015a368:
            param_3 = (undefined8 *)((long)puVar10 + uVar17);
            break;
          }
          uVar21 = uVar18 & 0x7f;
          param_1 = (ushort *)((long)puVar15 + 1);
          if ((*puVar15 >> 7 & 1) != 0) {
            uVar17 = (uVar21 >> 3) + 4;
            if (uVar21 >> 3 == 0xf) {
              bVar3 = *(byte *)param_1;
              uVar21 = (ulong)bVar3;
              uVar17 = 0x13;
              param_1 = puVar15 + 1;
              if (0xbf < uVar21) {
                uVar17 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                param_1 = (ushort *)((long)puVar15 + 3);
                uVar21 = (ulong)(byte)puVar15[1];
              }
              uVar17 = uVar17 + uVar21;
              if ((ulong)((long)puVar10 - param_5) < (uVar18 & 7)) goto LAB_0015a8ac;
            }
            else if ((ulong)((long)puVar10 - param_5) < (uVar18 & 7)) goto LAB_0015a8ac;
            uVar18 = uVar18 & 7;
            if ((long)uVar17 < (long)puVar33 - (long)puVar10) {
              puVar22 = (undefined1 *)((long)puVar10 - uVar18);
              *(undefined1 *)puVar10 = *puVar22;
              *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
              *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
              iVar6 = *(int *)(puVar25 + uVar18 * 4);
              *(undefined1 *)((long)puVar10 + 3) = puVar22[3];
              *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar22 + iVar6);
              if (8 < uVar17) {
                iVar7 = *(int *)(puVar8 + uVar18 * 4);
                puVar9 = puVar10 + 1;
                do {
                  puVar30 = puVar9 + 1;
                  *puVar9 = *(undefined8 *)((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar18));
                  puVar9 = puVar30;
                } while (puVar30 < (undefined8 *)((long)(puVar10 + 1) + (uVar17 - 8)));
              }
              goto LAB_00157c00;
            }
            if ((long)uVar17 <= (long)puVar2 - (long)puVar10) {
              uVar21 = uVar17 & 3;
              uVar19 = uVar17;
              if (uVar21 == 0) {
                puVar22 = (undefined1 *)((long)puVar10 - uVar18);
                puVar33 = puVar10;
              }
              else {
                puVar9 = puVar10;
                do {
                  uVar19 = uVar19 - 1;
                  puVar33 = (undefined8 *)((long)puVar9 + 1);
                  *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + -uVar18);
                  uVar21 = uVar21 - 1;
                  puVar9 = puVar33;
                } while (uVar21 != 0);
                puVar22 = (undefined1 *)((long)puVar33 + -uVar18);
              }
              if (2 < uVar17 - 1) {
                do {
                  *(undefined1 *)puVar33 = *puVar22;
                  *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                  *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                  puVar1 = puVar22 + 3;
                  uVar19 = uVar19 - 4;
                  puVar22 = puVar22 + 4;
                  *(undefined1 *)((long)puVar33 + 3) = *puVar1;
                  puVar33 = (undefined8 *)((long)puVar33 + 4);
                } while (uVar19 != 0);
              }
LAB_0015ae1c:
              param_3 = (undefined8 *)((long)puVar10 + uVar17);
              break;
            }
            goto LAB_0015ad70;
          }
          puVar26 = (ushort *)((long)puVar15 + 3);
          uVar18 = (ulong)*param_1;
          if ((ulong)((long)puVar10 - param_5) < uVar18) goto LAB_0015a880;
          uVar17 = uVar21 + 0x13;
          if (uVar21 == 0x7f) {
            param_1 = puVar15 + 2;
            bVar3 = *(byte *)puVar26;
            if ((ulong)bVar3 < 0xc0) {
              uVar17 = (ulong)bVar3 + 0x92;
              puVar26 = param_1;
              if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
LAB_0015a920:
                if ((long)uVar17 < (long)puVar2 - (long)puVar10) {
                  puVar9 = (undefined8 *)((long)puVar10 - uVar18);
                  if (uVar17 < 8) goto LAB_0015a298;
                  puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                  *puVar10 = *puVar9;
                  puVar9 = puVar33;
                  do {
                    puVar30 = puVar9 + 1;
                    *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                    puVar9 = puVar30;
                  } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
                  goto LAB_0015a368;
                }
                goto LAB_0015b36c;
              }
            }
            else {
              puVar26 = (ushort *)((long)puVar15 + 5);
              uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)*param_1;
              param_1 = puVar26;
              if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015a920;
            }
          }
          else {
            param_1 = puVar26;
            if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015a920;
          }
          param_3 = (undefined8 *)((long)puVar10 + uVar17);
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
            puVar10 = puVar9;
          } while (puVar9 < param_3);
        }
        else {
          if (uVar17 != 0xf) {
            if ((long)puVar33 - (long)param_3 <= (long)uVar17) break;
            uVar12 = *(undefined8 *)((long)param_1 + 9);
            puVar10 = (undefined8 *)((long)param_3 + uVar17);
            puVar26 = (ushort *)(pbVar14 + uVar17);
            *param_3 = *(undefined8 *)pbVar14;
            param_3[1] = uVar12;
            uVar18 = (ulong)*puVar26;
            uVar17 = (ulong)(bVar3 >> 4);
            if (0x8f < bVar3) goto LAB_00157cb4;
LAB_00157afc:
            if ((ulong)((long)puVar10 - param_5) < uVar18) goto LAB_0015a1e8;
            uVar17 = uVar17 + 4;
            param_1 = puVar26 + 1;
            puVar9 = (undefined8 *)((long)puVar10 - uVar18);
            if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157a54;
            if ((long)uVar17 < (long)puVar2 - (long)puVar10) {
              if (7 < uVar17) {
                puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                *puVar10 = *puVar9;
                puVar9 = puVar33;
                do {
                  puVar30 = puVar9 + 1;
                  *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                  puVar9 = puVar30;
                } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                goto LAB_0015a368;
              }
              goto LAB_0015a298;
            }
LAB_0015aaf8:
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
            pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
            pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
            uVar12 = 0x2f;
            goto LAB_0015ab94;
          }
          bVar4 = *(byte *)((long)param_1 + 1);
          if ((ulong)bVar4 < 0xc0) {
            puVar26 = param_1 + 1;
            lVar24 = (ulong)bVar4 + 0xf;
            puVar15 = (ushort *)((long)puVar26 + lVar24);
          }
          else {
            puVar26 = (ushort *)((long)param_1 + 3);
            lVar24 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)param_1[1];
            puVar15 = (ushort *)((long)puVar26 + lVar24);
          }
          if ((puVar32 < puVar15) || ((long)puVar33 - (long)param_3 <= lVar24)) break;
          puVar10 = (undefined8 *)((long)param_3 + lVar24);
          do {
            puVar9 = param_3 + 1;
            *param_3 = *(undefined8 *)puVar26;
            puVar26 = puVar26 + 4;
            param_3 = puVar9;
          } while (puVar9 < puVar10);
          if (puVar15 < puVar32) {
            puVar26 = puVar15;
          }
          else {
            if (param_2 <= puVar15) goto LAB_0015b1b8;
            if (param_2 == auStack_70 + 8) goto LAB_0015b1e4;
            memmove(local_e0,puVar15,(long)param_2 - (long)puVar15);
            puVar26 = local_e0;
            local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar15));
            param_2 = auStack_70;
            puVar32 = auStack_ae;
          }
          uVar18 = (ulong)*puVar26;
          uVar17 = (ulong)(bVar3 >> 4);
          puVar8 = PTR_DAT_047cb8c8;
          puVar25 = PTR_DAT_047cb8c0;
          if (bVar3 < 0x90) goto LAB_00157afc;
LAB_00157cb4:
          if (uVar17 != 0xf) {
            if ((ulong)((long)puVar10 - param_5) < uVar18) goto LAB_0015a214;
            uVar17 = uVar17 + 4;
            param_1 = puVar26 + 1;
            puVar9 = (undefined8 *)((long)puVar10 - uVar18);
            if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
              if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015ab68;
              if (7 < uVar17) {
                puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                *puVar10 = *puVar9;
                puVar9 = puVar33;
                do {
                  puVar30 = puVar9 + 1;
                  *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                  puVar9 = puVar30;
                } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                goto LAB_0015a368;
              }
LAB_0015a298:
              memmove(puVar10,puVar9,uVar17);
              param_3 = (undefined8 *)((long)puVar10 + uVar17);
              break;
            }
LAB_00157aa0:
            *puVar10 = *puVar9;
            puVar10[1] = puVar9[1];
            *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar9 + 2);
            param_3 = (undefined8 *)((long)puVar10 + uVar17);
            if (puVar32 <= param_1) goto LAB_0015798c;
            goto LAB_001579fc;
          }
          uVar21 = uVar18 & 0x7f;
          if (((uint)uVar18 >> 7 & 1) != 0) {
            uVar17 = (uVar21 >> 3) + 4;
            if (uVar21 >> 3 == 0xf) {
              uVar21 = (ulong)*(byte *)((long)puVar26 + 1);
              if (uVar21 < 0xc0) {
                param_1 = puVar26 + 1;
                uVar17 = 0x13;
              }
              else {
                uVar17 = (ulong)((uint)*(byte *)((long)puVar26 + 1) * 0x100 - 0xc000) | 0x13;
                uVar21 = (ulong)(byte)puVar26[1];
                param_1 = (ushort *)((long)puVar26 + 3);
              }
              uVar17 = uVar17 + uVar21;
              if ((ulong)((long)puVar10 - param_5) < (uVar18 & 7)) goto LAB_0015a8ac;
            }
            else {
              param_1 = (ushort *)((long)puVar26 + 1);
              if ((ulong)((long)puVar10 - param_5) < (uVar18 & 7)) goto LAB_0015a8ac;
            }
            uVar18 = uVar18 & 7;
            if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
              if ((long)uVar17 <= (long)puVar2 - (long)puVar10) {
                uVar21 = uVar17 & 3;
                uVar19 = uVar17;
                if (uVar21 == 0) {
                  puVar22 = (undefined1 *)((long)puVar10 - uVar18);
                  puVar33 = puVar10;
                }
                else {
                  puVar9 = puVar10;
                  do {
                    uVar19 = uVar19 - 1;
                    puVar33 = (undefined8 *)((long)puVar9 + 1);
                    *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + -uVar18);
                    uVar21 = uVar21 - 1;
                    puVar9 = puVar33;
                  } while (uVar21 != 0);
                  puVar22 = (undefined1 *)((long)puVar33 + -uVar18);
                }
                if (2 < uVar17 - 1) {
                  do {
                    *(undefined1 *)puVar33 = *puVar22;
                    *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                    *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                    puVar1 = puVar22 + 3;
                    uVar19 = uVar19 - 4;
                    puVar22 = puVar22 + 4;
                    *(undefined1 *)((long)puVar33 + 3) = *puVar1;
                    puVar33 = (undefined8 *)((long)puVar33 + 4);
                  } while (uVar19 != 0);
                }
                goto LAB_0015ae1c;
              }
              goto LAB_0015ad70;
            }
            puVar22 = (undefined1 *)((long)puVar10 - uVar18);
            *(undefined1 *)puVar10 = *puVar22;
            *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
            *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
            iVar6 = *(int *)(puVar25 + uVar18 * 4);
            *(undefined1 *)((long)puVar10 + 3) = puVar22[3];
            *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar22 + iVar6);
            if (8 < uVar17) {
              iVar7 = *(int *)(puVar8 + uVar18 * 4);
              puVar9 = puVar10 + 1;
              do {
                puVar30 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar18));
                puVar9 = puVar30;
              } while (puVar30 < (undefined8 *)((long)puVar10 + uVar17));
            }
LAB_00157c00:
            param_3 = (undefined8 *)((long)puVar10 + uVar17);
            if (puVar32 <= param_1) goto LAB_0015798c;
            goto LAB_001579fc;
          }
          uVar18 = (ulong)*(ushort *)((long)puVar26 + 1);
          if ((ulong)((long)puVar10 - param_5) < uVar18) goto LAB_0015a880;
          uVar17 = uVar21 + 0x13;
          if (uVar21 == 0x7f) {
            bVar3 = *(byte *)((long)puVar26 + 3);
            if ((ulong)bVar3 < 0xc0) {
              param_1 = puVar26 + 2;
              uVar17 = (ulong)bVar3 + 0x92;
              if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
LAB_0015b0a4:
                if ((long)uVar17 < (long)puVar2 - (long)puVar10) {
                  puVar9 = (undefined8 *)((long)puVar10 - uVar18);
                  if (7 < uVar17) {
                    puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                    *puVar10 = *puVar9;
                    puVar9 = puVar33;
                    do {
                      puVar30 = puVar9 + 1;
                      *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                      puVar9 = puVar30;
                    } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
                    goto LAB_0015a368;
                  }
                  goto LAB_0015a298;
                }
LAB_0015b36c:
                FUN_0015c3d0();
                pcVar16 = *(code **)PTR_PTR_047cb868;
                if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
                pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
                pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
                uVar12 = 0xf1;
                goto LAB_0015ab94;
              }
            }
            else {
              param_1 = (ushort *)((long)puVar26 + 5);
              uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar26[2];
              if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015b0a4;
            }
          }
          else {
            param_1 = (ushort *)((long)puVar26 + 3);
            if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015b0a4;
          }
          param_3 = (undefined8 *)((long)puVar10 + uVar17);
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
            puVar26 = param_1;
            puVar10 = puVar9;
          } while (puVar9 < param_3);
        }
      } while( true );
    }
    puVar26 = param_1;
    if (param_3 < puVar2) {
      if (param_1 < puVar32) goto LAB_00159378;
LAB_00159334:
      if (param_1 < param_2) {
        if (param_2 != auStack_70 + 8) {
          memmove(local_e0,param_1,(long)param_2 - (long)param_1);
          local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)param_1));
          param_1 = local_e0;
          param_2 = auStack_70;
          puVar32 = auStack_ae;
LAB_00159378:
          pbVar14 = (byte *)((long)param_1 + 1);
          bVar3 = (byte)*param_1;
          sVar31 = (ulong)bVar3 & 0xf;
          if (sVar31 < 9) {
            if (((long)puVar2 - (long)param_3 < (long)sVar31) ||
               ((long)param_2 - (long)pbVar14 < (long)sVar31)) goto LAB_0015a514;
            memmove(param_3,pbVar14,sVar31);
            param_3 = (undefined8 *)((long)param_3 + sVar31);
            puVar26 = (ushort *)(pbVar14 + sVar31);
            if (param_3 == puVar2) goto LAB_0015a42c;
            uVar18 = (ulong)*puVar26;
            uVar17 = (ulong)(bVar3 >> 4);
            if (0x8f < bVar3) {
              if (uVar17 != 0xf) {
                if (uVar18 <= (ulong)((long)param_3 - param_5)) {
                  uVar17 = uVar17 + 4;
                  if ((long)uVar17 < (long)puVar2 - (long)param_3) {
                    param_1 = puVar26 + 1;
                    puVar33 = (undefined8 *)((long)param_3 - uVar18);
                    if (uVar17 < 8) goto LAB_00159464;
                    *param_3 = *puVar33;
                    puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
                    puVar10 = puVar33;
                    do {
                      puVar9 = puVar10 + 1;
                      *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                      puVar10 = puVar9;
                    } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                    goto LAB_001594ac;
                  }
                  goto LAB_0015a1bc;
                }
                goto LAB_0015a214;
              }
              uVar21 = uVar18 & 0x7f;
              param_1 = (ushort *)((long)puVar26 + 1);
              if ((*puVar26 >> 7 & 1) == 0) {
                uVar17 = (ulong)*param_1;
                if ((ulong)((long)param_3 - param_5) < uVar17) goto LAB_0015a880;
                uVar18 = uVar21 + 0x13;
                if (uVar21 == 0x7f) {
                  bVar3 = *(byte *)((long)puVar26 + 3);
                  if ((ulong)bVar3 < 0xc0) {
                    uVar18 = (ulong)bVar3 + 0x92;
                    param_1 = puVar26 + 2;
                    if ((long)puVar2 - (long)param_3 <= (long)uVar18) goto LAB_0015af74;
                  }
                  else {
                    param_1 = (ushort *)((long)puVar26 + 5);
                    uVar18 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                             (ulong)(byte)puVar26[2];
                    if ((long)puVar2 - (long)param_3 <= (long)uVar18) goto LAB_0015af74;
                  }
                }
                else {
                  param_1 = (ushort *)((long)puVar26 + 3);
                  if ((long)puVar2 - (long)param_3 <= (long)uVar18) goto LAB_0015af74;
                }
                if (uVar18 < 8) {
                  memmove(param_3,(undefined8 *)((long)param_3 - uVar17),uVar18);
                }
                else {
                  *param_3 = *(undefined8 *)((long)param_3 - uVar17);
                  puVar33 = (undefined8 *)((long)param_3 + (uVar18 & 7));
                  puVar10 = puVar33;
                  do {
                    puVar9 = puVar10 + 1;
                    *puVar10 = *(undefined8 *)((long)puVar10 - uVar17);
                    puVar10 = puVar9;
                  } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar18 & 0x1fffffff8)));
                }
                param_3 = (undefined8 *)((long)param_3 + uVar18);
                if (puVar32 <= param_1) goto LAB_00159334;
              }
              else {
                uVar17 = (uVar21 >> 3) + 4;
                if (uVar21 >> 3 == 0xf) {
                  bVar3 = *(byte *)param_1;
                  uVar21 = (ulong)bVar3;
                  uVar17 = 0x13;
                  param_1 = puVar26 + 1;
                  if (0xbf < uVar21) {
                    uVar17 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                    param_1 = (ushort *)((long)puVar26 + 3);
                    uVar21 = (ulong)(byte)puVar26[1];
                  }
                  uVar17 = uVar17 + uVar21;
                  if ((ulong)((long)param_3 - param_5) < (uVar18 & 7)) goto LAB_0015a8ac;
                }
                else if ((ulong)((long)param_3 - param_5) < (uVar18 & 7)) goto LAB_0015a8ac;
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a14c;
                uVar21 = uVar17 & 7;
                uVar19 = uVar17;
                if (uVar21 == 0) {
                  puVar22 = (undefined1 *)((long)param_3 - (uVar18 & 7));
                  puVar33 = param_3;
                }
                else {
                  lVar24 = -(uVar18 & 7);
                  puVar10 = param_3;
                  do {
                    uVar19 = uVar19 - 1;
                    puVar33 = (undefined8 *)((long)puVar10 + 1);
                    *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar24);
                    uVar21 = uVar21 - 1;
                    puVar10 = puVar33;
                  } while (uVar21 != 0);
                  puVar22 = (undefined1 *)((long)puVar33 + lVar24);
                }
                if (6 < uVar17 - 1) {
                  do {
                    *(undefined1 *)puVar33 = *puVar22;
                    *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                    *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                    *(undefined1 *)((long)puVar33 + 3) = puVar22[3];
                    *(undefined1 *)((long)puVar33 + 4) = puVar22[4];
                    *(undefined1 *)((long)puVar33 + 5) = puVar22[5];
                    *(undefined1 *)((long)puVar33 + 6) = puVar22[6];
                    puVar1 = puVar22 + 7;
                    uVar19 = uVar19 - 8;
                    puVar22 = puVar22 + 8;
                    *(undefined1 *)((long)puVar33 + 7) = *puVar1;
                    puVar33 = puVar33 + 1;
                  } while (uVar19 != 0);
                }
LAB_001596cc:
                param_3 = (undefined8 *)((long)param_3 + uVar17);
                if (puVar32 <= param_1) goto LAB_00159334;
              }
              goto LAB_00159378;
            }
            if ((ulong)((long)param_3 - param_5) < uVar18) goto LAB_0015a1e8;
            uVar17 = uVar17 + 4;
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a540;
            param_1 = puVar26 + 1;
            puVar33 = (undefined8 *)((long)param_3 - uVar18);
            if (7 < uVar17) {
              *param_3 = *puVar33;
              puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
              puVar10 = puVar33;
              do {
                puVar9 = puVar10 + 1;
                *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                puVar10 = puVar9;
              } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
              goto LAB_001594ac;
            }
LAB_00159464:
            memmove(param_3,puVar33,uVar17);
            param_3 = (undefined8 *)((long)param_3 + uVar17);
            if (param_1 < puVar32) goto LAB_00159378;
            goto LAB_00159334;
          }
          if (sVar31 == 0xf) {
            bVar4 = *(byte *)((long)param_1 + 1);
            if ((ulong)bVar4 < 0xc0) {
              puVar26 = param_1 + 1;
              sVar31 = (ulong)bVar4 + 0xf;
              if ((long)param_2 - (long)puVar26 < (long)sVar31) goto LAB_0015afa0;
            }
            else {
              puVar26 = (ushort *)((long)param_1 + 3);
              sVar31 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)param_1[1];
              if ((long)param_2 - (long)puVar26 < (long)sVar31) goto LAB_0015afa0;
            }
            if ((long)puVar2 - (long)param_3 < (long)sVar31) goto LAB_0015afa0;
            memmove(param_3,puVar26,sVar31);
            param_3 = (undefined8 *)((long)param_3 + sVar31);
            puVar26 = (ushort *)((long)puVar26 + sVar31);
            if (param_3 == puVar2) goto LAB_0015a42c;
            if (puVar26 < puVar32) goto LAB_001594fc;
            if (param_2 <= puVar26) goto LAB_0015b458;
            if (param_2 == auStack_70 + 8) goto LAB_0015b484;
            memmove(local_e0,puVar26,(long)param_2 - (long)puVar26);
            local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar26));
            puVar26 = local_e0;
            uVar18 = (ulong)local_e0[0];
            uVar17 = (ulong)(bVar3 >> 4);
            param_2 = auStack_70;
            puVar32 = auStack_ae;
            if (bVar3 < 0x90) goto LAB_0015950c;
LAB_001597c0:
            if (uVar17 != 0xf) {
              if ((ulong)((long)param_3 - param_5) < uVar18) goto LAB_0015a214;
              uVar17 = uVar17 + 4;
              if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a1bc;
              param_1 = puVar26 + 1;
              puVar33 = (undefined8 *)((long)param_3 - uVar18);
              if (uVar17 < 8) goto LAB_00159464;
              *param_3 = *puVar33;
              puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
              puVar10 = puVar33;
              do {
                puVar9 = puVar10 + 1;
                *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                puVar10 = puVar9;
              } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
LAB_001594ac:
              param_3 = (undefined8 *)((long)param_3 + uVar17);
              if (puVar32 <= param_1) goto LAB_00159334;
              goto LAB_00159378;
            }
            uVar21 = uVar18 & 0x7f;
            if (((uint)uVar18 >> 7 & 1) == 0) {
              uVar18 = (ulong)*(ushort *)((long)puVar26 + 1);
              if ((ulong)((long)param_3 - param_5) < uVar18) goto LAB_0015a880;
              uVar17 = uVar21 + 0x13;
              if (uVar21 == 0x7f) {
                bVar3 = *(byte *)((long)puVar26 + 3);
                if ((ulong)bVar3 < 0xc0) {
                  param_1 = puVar26 + 2;
                  uVar17 = (ulong)bVar3 + 0x92;
                  if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
                }
                else {
                  param_1 = (ushort *)((long)puVar26 + 5);
                  uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar26[2];
                  if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
                }
              }
              else {
                param_1 = (ushort *)((long)puVar26 + 3);
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
              }
              puVar33 = (undefined8 *)((long)param_3 - uVar18);
              if (uVar17 < 8) goto LAB_00159464;
              *param_3 = *puVar33;
              puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
              puVar10 = puVar33;
              do {
                puVar9 = puVar10 + 1;
                *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                puVar10 = puVar9;
              } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
              goto LAB_001594ac;
            }
            uVar17 = (uVar21 >> 3) + 4;
            if (uVar21 >> 3 == 0xf) {
              uVar21 = (ulong)*(byte *)((long)puVar26 + 1);
              if (uVar21 < 0xc0) {
                param_1 = puVar26 + 1;
                uVar17 = 0x13;
              }
              else {
                uVar17 = (ulong)((uint)*(byte *)((long)puVar26 + 1) * 0x100 - 0xc000) | 0x13;
                uVar21 = (ulong)(byte)puVar26[1];
                param_1 = (ushort *)((long)puVar26 + 3);
              }
              uVar17 = uVar17 + uVar21;
              if ((ulong)((long)param_3 - param_5) < (uVar18 & 7)) goto LAB_0015a8ac;
            }
            else {
              param_1 = (ushort *)((long)puVar26 + 1);
              if ((ulong)((long)param_3 - param_5) < (uVar18 & 7)) goto LAB_0015a8ac;
            }
            if ((long)uVar17 < (long)puVar2 - (long)param_3) {
              uVar21 = uVar17 & 7;
              uVar19 = uVar17;
              if (uVar21 == 0) {
                puVar22 = (undefined1 *)((long)param_3 - (uVar18 & 7));
                puVar33 = param_3;
              }
              else {
                lVar24 = -(uVar18 & 7);
                puVar10 = param_3;
                do {
                  uVar19 = uVar19 - 1;
                  puVar33 = (undefined8 *)((long)puVar10 + 1);
                  *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar24);
                  uVar21 = uVar21 - 1;
                  puVar10 = puVar33;
                } while (uVar21 != 0);
                puVar22 = (undefined1 *)((long)puVar33 + lVar24);
              }
              if (6 < uVar17 - 1) {
                do {
                  *(undefined1 *)puVar33 = *puVar22;
                  *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                  *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                  *(undefined1 *)((long)puVar33 + 3) = puVar22[3];
                  *(undefined1 *)((long)puVar33 + 4) = puVar22[4];
                  *(undefined1 *)((long)puVar33 + 5) = puVar22[5];
                  *(undefined1 *)((long)puVar33 + 6) = puVar22[6];
                  puVar1 = puVar22 + 7;
                  uVar19 = uVar19 - 8;
                  puVar22 = puVar22 + 8;
                  *(undefined1 *)((long)puVar33 + 7) = *puVar1;
                  puVar33 = puVar33 + 1;
                } while (uVar19 != 0);
              }
              goto LAB_001596cc;
            }
LAB_0015a14c:
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
            pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
            pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
            uVar12 = 200;
          }
          else {
            if ((long)puVar2 - (long)param_3 < (long)sVar31) {
              sVar31 = (size_t)(int)((long)puVar2 - (long)param_3);
              if ((long)param_2 - (long)pbVar14 < (long)sVar31) goto LAB_0015aeb0;
            }
            else if ((long)param_2 - (long)pbVar14 < (long)sVar31) goto LAB_0015aeb0;
            memmove(param_3,pbVar14,sVar31);
            param_3 = (undefined8 *)((long)param_3 + sVar31);
            puVar26 = (ushort *)(pbVar14 + sVar31);
            if (param_3 == puVar2) goto LAB_0015a42c;
LAB_001594fc:
            uVar18 = (ulong)*puVar26;
            uVar17 = (ulong)(bVar3 >> 4);
            if (0x8f < bVar3) goto LAB_001597c0;
LAB_0015950c:
            if ((ulong)((long)param_3 - param_5) < uVar18) goto LAB_0015a1e8;
            uVar17 = uVar17 + 4;
            if ((long)uVar17 < (long)puVar2 - (long)param_3) {
              param_1 = puVar26 + 1;
              puVar33 = (undefined8 *)((long)param_3 - uVar18);
              if (7 < uVar17) {
                *param_3 = *puVar33;
                puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
                puVar10 = puVar33;
                do {
                  puVar9 = puVar10 + 1;
                  *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                  puVar10 = puVar9;
                } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                goto LAB_001594ac;
              }
              goto LAB_00159464;
            }
LAB_0015a540:
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
            pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
            pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
            uVar12 = 0x3f;
          }
          goto LAB_0015ab94;
        }
        FUN_0015c3d0();
        pcVar16 = *(code **)PTR_PTR_047cb868;
        if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
        pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
        pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
        uVar12 = 0x61e;
        goto LAB_0015ab94;
      }
      FUN_0015c3d0();
      pcVar16 = *(code **)PTR_PTR_047cb868;
      if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
      pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
      pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
      uVar12 = 0x61e;
    }
    else {
joined_r0x0015a428:
      if (param_3 == puVar2) {
LAB_0015a42c:
        return (long)puVar26 - (long)local_e8;
      }
      FUN_0015c3d0();
      pcVar16 = *(code **)PTR_PTR_047cb868;
      if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
      pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
      pcVar13 = "OODLE ERROR : LZ corruption : LZB didn\'t stop at end\n";
      uVar12 = 0x676;
    }
  }
  else if (param_3 < puVar33) {
    puVar26 = auStack_70 + 8;
    if (param_1 < puVar32) goto LAB_00157f50;
LAB_001580b8:
    if (param_1 < param_2) {
      if (param_2 == puVar26) {
        FUN_0015c3d0();
        pcVar16 = *(code **)PTR_PTR_047cb868;
        if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
        pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
        pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
        uVar12 = 0x635;
      }
      else {
        memmove(local_e0,param_1,(long)param_2 - (long)param_1);
        local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)param_1));
        param_1 = local_e0;
        param_2 = auStack_70;
        puVar32 = auStack_ae;
        if (0x4f < (long)puVar2 - (long)param_3) goto LAB_00157f5c;
LAB_0015811c:
        if (param_3 < puVar2) {
LAB_00158050:
          pbVar14 = (byte *)((long)param_1 + 1);
          bVar3 = (byte)*param_1;
          uVar17 = (ulong)bVar3 & 0xf;
          if (uVar17 < 9) {
            *param_3 = *(undefined8 *)pbVar14;
            puVar15 = (ushort *)(pbVar14 + uVar17);
            puVar10 = (undefined8 *)((long)param_3 + uVar17);
            uVar18 = (ulong)*puVar15;
            uVar17 = (ulong)(bVar3 >> 4);
            if (bVar3 < 0x90) {
              uVar17 = uVar17 + 4;
              puVar28 = puVar15 + 1;
              puVar9 = (undefined8 *)((long)puVar10 - uVar18);
              param_1 = puVar28;
              if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_0015809c;
              if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015aaf8;
              if (uVar17 < 8) goto LAB_0015a408;
              puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar33;
              do {
                puVar30 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                puVar9 = puVar30;
              } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
            }
            else if (uVar17 == 0xf) {
              uVar21 = uVar18 & 0x7f;
              param_1 = (ushort *)((long)puVar15 + 1);
              if ((*puVar15 >> 7 & 1) != 0) {
                uVar17 = (uVar21 >> 3) + 4;
                if (uVar21 >> 3 == 0xf) {
                  bVar3 = *(byte *)param_1;
                  uVar21 = (ulong)bVar3;
                  uVar17 = 0x13;
                  param_1 = puVar15 + 1;
                  if (0xbf < uVar21) {
                    uVar17 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                    param_1 = (ushort *)((long)puVar15 + 3);
                    uVar21 = (ulong)(byte)puVar15[1];
                  }
                  uVar17 = uVar17 + uVar21;
                  if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_0015861c;
                }
                else if ((long)uVar17 < (long)puVar33 - (long)puVar10) {
LAB_0015861c:
                  uVar18 = uVar18 & 7;
                  puVar22 = (undefined1 *)((long)puVar10 - uVar18);
                  *(undefined1 *)puVar10 = *puVar22;
                  *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
                  *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
                  iVar6 = *(int *)(PTR_DAT_047cb8c0 + uVar18 * 4);
                  *(undefined1 *)((long)puVar10 + 3) = puVar22[3];
                  *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar22 + iVar6);
                  if (uVar17 < 9) goto LAB_0015868c;
                  iVar7 = *(int *)(PTR_DAT_047cb8c8 + uVar18 * 4);
                  puVar9 = puVar10 + 1;
                  do {
                    puVar30 = puVar9 + 1;
                    *puVar9 = *(undefined8 *)((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar18))
                    ;
                    puVar9 = puVar30;
                    if ((undefined8 *)((long)(puVar10 + 1) + (uVar17 - 8)) <= puVar30)
                    goto LAB_0015868c;
                  } while( true );
                }
                if ((long)uVar17 <= (long)puVar2 - (long)puVar10) {
                  uVar21 = uVar17 & 3;
                  uVar19 = uVar17;
                  if (uVar21 == 0) {
                    puVar22 = (undefined1 *)((long)puVar10 - (uVar18 & 7));
                    puVar33 = puVar10;
                  }
                  else {
                    lVar24 = -(uVar18 & 7);
                    puVar9 = puVar10;
                    do {
                      uVar19 = uVar19 - 1;
                      puVar33 = (undefined8 *)((long)puVar9 + 1);
                      *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + lVar24);
                      uVar21 = uVar21 - 1;
                      puVar9 = puVar33;
                    } while (uVar21 != 0);
                    puVar22 = (undefined1 *)((long)puVar33 + lVar24);
                  }
                  if (2 < uVar17 - 1) {
                    do {
                      *(undefined1 *)puVar33 = *puVar22;
                      *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                      *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                      puVar1 = puVar22 + 3;
                      uVar19 = uVar19 - 4;
                      puVar22 = puVar22 + 4;
                      *(undefined1 *)((long)puVar33 + 3) = *puVar1;
                      puVar33 = (undefined8 *)((long)puVar33 + 4);
                    } while (uVar19 != 0);
                  }
                  goto LAB_0015af64;
                }
                goto LAB_0015ad70;
              }
              puVar27 = (ushort *)((long)puVar15 + 3);
              uVar18 = (ulong)*param_1;
              uVar17 = uVar21 + 0x13;
              if (uVar21 == 0x7f) {
                puVar28 = puVar15 + 2;
                bVar3 = *(byte *)puVar27;
                if ((ulong)bVar3 < 0xc0) {
                  uVar17 = (ulong)bVar3 + 0x92;
                  param_1 = puVar28;
                  if ((long)uVar17 < (long)puVar33 - (long)puVar10) {
LAB_0015854c:
                    param_3 = (undefined8 *)((long)puVar10 + uVar17);
                    do {
                      puVar9 = puVar10 + 1;
                      *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                      puVar10 = puVar9;
                    } while (puVar9 < param_3);
                    goto LAB_00157f48;
                  }
                }
                else {
                  param_1 = (ushort *)((long)puVar15 + 5);
                  uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)*puVar28;
                  puVar28 = param_1;
                  if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_0015854c;
                }
              }
              else {
                param_1 = puVar27;
                puVar28 = puVar27;
                if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_0015854c;
              }
              if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015b36c;
              puVar9 = (undefined8 *)((long)puVar10 - uVar18);
              if (uVar17 < 8) goto LAB_0015a408;
              puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar33;
              do {
                puVar30 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                puVar9 = puVar30;
              } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
            }
            else {
              uVar17 = uVar17 + 4;
              puVar28 = puVar15 + 1;
              puVar9 = (undefined8 *)((long)puVar10 - uVar18);
              param_1 = puVar28;
              if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157f2c;
              if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015ab68;
              if (uVar17 < 8) goto LAB_0015a408;
              puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar33;
              do {
                puVar30 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                puVar9 = puVar30;
              } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
            }
LAB_0015a414:
            param_3 = (undefined8 *)((long)puVar10 + uVar17);
            param_1 = puVar28;
            goto joined_r0x0015aaac;
          }
          if (uVar17 == 0xf) {
            bVar4 = *(byte *)((long)param_1 + 1);
            if ((ulong)bVar4 < 0xc0) {
              puVar15 = param_1 + 1;
              lVar24 = (ulong)bVar4 + 0xf;
              puVar28 = (ushort *)((long)puVar15 + lVar24);
            }
            else {
              puVar15 = (ushort *)((long)param_1 + 3);
              lVar24 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)param_1[1];
              puVar28 = (ushort *)((long)puVar15 + lVar24);
            }
            if ((puVar32 < puVar28) || ((long)puVar33 - (long)param_3 <= lVar24))
            goto joined_r0x0015a878;
            puVar10 = (undefined8 *)((long)param_3 + lVar24);
            do {
              puVar9 = param_3 + 1;
              *param_3 = *(undefined8 *)puVar15;
              puVar15 = puVar15 + 4;
              param_3 = puVar9;
            } while (puVar9 < puVar10);
            if (puVar28 < puVar32) {
              uVar5 = *puVar28;
            }
            else {
              if (param_2 <= puVar28) goto LAB_0015b1b8;
              if (param_2 == puVar26) goto LAB_0015b1e4;
              memmove(local_e0,puVar28,(long)param_2 - (long)puVar28);
              local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar28));
              puVar28 = local_e0;
              param_2 = auStack_70;
              puVar32 = auStack_ae;
              uVar5 = local_e0[0];
            }
          }
          else {
            if ((long)puVar33 - (long)param_3 <= (long)uVar17) goto joined_r0x0015a878;
            uVar12 = *(undefined8 *)((long)param_1 + 9);
            puVar10 = (undefined8 *)((long)param_3 + uVar17);
            puVar28 = (ushort *)(pbVar14 + uVar17);
            *param_3 = *(undefined8 *)pbVar14;
            param_3[1] = uVar12;
            uVar5 = *puVar28;
          }
          uVar17 = (ulong)(bVar3 >> 4);
          uVar18 = (ulong)uVar5;
          if (bVar3 < 0x90) {
            uVar17 = uVar17 + 4;
            puVar28 = puVar28 + 1;
            puVar9 = (undefined8 *)((long)puVar10 - uVar18);
            param_1 = puVar28;
            if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_0015809c;
            if ((long)uVar17 < (long)puVar2 - (long)puVar10) {
              if (uVar17 < 8) {
LAB_0015a408:
                memmove(puVar10,puVar9,uVar17);
              }
              else {
                puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                *puVar10 = *puVar9;
                puVar9 = puVar33;
                do {
                  puVar30 = puVar9 + 1;
                  *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                  puVar9 = puVar30;
                } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
              }
              goto LAB_0015a414;
            }
            goto LAB_0015aaf8;
          }
          if (uVar17 != 0xf) {
            uVar17 = uVar17 + 4;
            puVar28 = puVar28 + 1;
            puVar9 = (undefined8 *)((long)puVar10 - uVar18);
            param_1 = puVar28;
            if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157f2c;
            if ((long)uVar17 < (long)puVar2 - (long)puVar10) {
              if (uVar17 < 8) goto LAB_0015a408;
              puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar33;
              do {
                puVar30 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                puVar9 = puVar30;
              } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
              goto LAB_0015a414;
            }
            goto LAB_0015ab68;
          }
          uVar21 = uVar18 & 0x7f;
          if ((uVar5 >> 7 & 1) == 0) {
            uVar18 = (ulong)*(ushort *)((long)puVar28 + 1);
            uVar17 = uVar21 + 0x13;
            if (uVar21 == 0x7f) {
              bVar3 = *(byte *)((long)puVar28 + 3);
              if ((ulong)bVar3 < 0xc0) {
                param_1 = puVar28 + 2;
                uVar17 = (ulong)bVar3 + 0x92;
                puVar28 = param_1;
                if ((long)uVar17 < (long)puVar33 - (long)puVar10) {
LAB_00158cb0:
                  param_3 = (undefined8 *)((long)puVar10 + uVar17);
                  do {
                    puVar9 = puVar10 + 1;
                    *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                    puVar10 = puVar9;
                  } while (puVar9 < param_3);
LAB_00157f48:
                  do {
                    if (puVar32 <= param_1) goto LAB_001580b8;
LAB_00157f50:
                    if ((long)puVar2 - (long)param_3 < 0x50) goto LAB_0015811c;
LAB_00157f5c:
                    pbVar14 = (byte *)((long)param_1 + 1);
                    bVar3 = (byte)*param_1;
                    uVar18 = (ulong)bVar3;
                    uVar17 = uVar18 & 0xf;
                    if (8 < uVar17) {
                      if (uVar17 == 0xf) {
                        bVar4 = *(byte *)((long)param_1 + 1);
                        if ((ulong)bVar4 < 0xc0) {
                          puVar15 = param_1 + 1;
                          lVar24 = (ulong)bVar4 + 0xf;
                          puVar28 = (ushort *)((long)puVar15 + lVar24);
                        }
                        else {
                          puVar15 = (ushort *)((long)param_1 + 3);
                          lVar24 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) +
                                   (ulong)(byte)param_1[1];
                          puVar28 = (ushort *)((long)puVar15 + lVar24);
                        }
                        if ((puVar32 < puVar28) || ((long)puVar33 - (long)param_3 <= lVar24))
                        goto joined_r0x0015a878;
                        puVar10 = (undefined8 *)((long)param_3 + lVar24);
                        do {
                          puVar9 = param_3 + 1;
                          *param_3 = *(undefined8 *)puVar15;
                          puVar15 = puVar15 + 4;
                          param_3 = puVar9;
                        } while (puVar9 < puVar10);
                        if (puVar28 < puVar32) {
                          uVar5 = *puVar28;
                        }
                        else {
                          if (param_2 <= puVar28) goto LAB_0015b1b8;
                          if (param_2 == puVar26) goto LAB_0015b1e4;
                          memmove(local_e0,puVar28,(long)param_2 - (long)puVar28);
                          local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar28));
                          puVar28 = local_e0;
                          param_2 = auStack_70;
                          puVar32 = auStack_ae;
                          uVar5 = local_e0[0];
                        }
                      }
                      else {
                        if ((long)puVar33 - (long)param_3 <= (long)uVar17) goto joined_r0x0015a878;
                        uVar12 = *(undefined8 *)((long)param_1 + 9);
                        puVar10 = (undefined8 *)((long)param_3 + uVar17);
                        puVar28 = (ushort *)(pbVar14 + uVar17);
                        *param_3 = *(undefined8 *)pbVar14;
                        param_3[1] = uVar12;
                        uVar5 = *puVar28;
                      }
                      uVar17 = (ulong)(bVar3 >> 4);
                      uVar18 = (ulong)uVar5;
                      if (bVar3 < 0x90) {
                        uVar17 = uVar17 + 4;
                        puVar28 = puVar28 + 1;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar18);
                        param_1 = puVar28;
                        if ((long)uVar17 < (long)puVar33 - (long)puVar10) {
LAB_0015809c:
                          *puVar10 = *puVar9;
                          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
                          param_3 = (undefined8 *)((long)puVar10 + uVar17);
                          if (puVar32 <= param_1) goto LAB_001580b8;
                          goto LAB_00157f50;
                        }
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015aaf8;
                        if (uVar17 < 8) goto LAB_0015a408;
                        puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                        *puVar10 = *puVar9;
                        puVar9 = puVar33;
                        do {
                          puVar30 = puVar9 + 1;
                          *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                          puVar9 = puVar30;
                        } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                        goto LAB_0015a414;
                      }
                      if (uVar17 != 0xf) {
                        uVar17 = uVar17 + 4;
                        puVar28 = puVar28 + 1;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar18);
                        param_1 = puVar28;
                        if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157f2c;
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015ab68;
                        if (7 < uVar17) {
                          puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                          *puVar10 = *puVar9;
                          puVar9 = puVar33;
                          do {
                            puVar30 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                            puVar9 = puVar30;
                          } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                          goto LAB_0015a414;
                        }
                        goto LAB_0015a408;
                      }
                      uVar21 = uVar18 & 0x7f;
                      if ((uVar5 >> 7 & 1) != 0) {
                        uVar17 = (uVar21 >> 3) + 4;
                        if (uVar21 >> 3 == 0xf) {
                          uVar21 = (ulong)*(byte *)((long)puVar28 + 1);
                          if (uVar21 < 0xc0) {
                            param_1 = puVar28 + 1;
                            uVar17 = 0x13;
                          }
                          else {
                            uVar17 = (ulong)((uint)*(byte *)((long)puVar28 + 1) * 0x100 - 0xc000) |
                                     0x13;
                            uVar21 = (ulong)(byte)puVar28[1];
                            param_1 = (ushort *)((long)puVar28 + 3);
                          }
                          uVar17 = uVar17 + uVar21;
                          if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015b014;
                        }
                        else {
                          param_1 = (ushort *)((long)puVar28 + 1);
                          if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
LAB_0015b014:
                            if ((long)puVar2 - (long)puVar10 < (long)uVar17) goto LAB_0015ad70;
                            uVar21 = uVar17 & 3;
                            uVar19 = uVar17;
                            if (uVar21 == 0) {
                              puVar22 = (undefined1 *)((long)puVar10 - (uVar18 & 7));
                              puVar33 = puVar10;
                              if (uVar17 - 1 < 3) goto LAB_0015af64;
                              goto LAB_0015b2f0;
                            }
                            lVar24 = -(uVar18 & 7);
                            puVar9 = puVar10;
                            do {
                              uVar19 = uVar19 - 1;
                              puVar33 = (undefined8 *)((long)puVar9 + 1);
                              *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + lVar24);
                              uVar21 = uVar21 - 1;
                              puVar9 = puVar33;
                            } while (uVar21 != 0);
                            puVar22 = (undefined1 *)((long)puVar33 + lVar24);
                            if (2 < uVar17 - 1) {
LAB_0015b2f0:
                              do {
                                *(undefined1 *)puVar33 = *puVar22;
                                *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                                *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                                puVar1 = puVar22 + 3;
                                uVar19 = uVar19 - 4;
                                puVar22 = puVar22 + 4;
                                *(undefined1 *)((long)puVar33 + 3) = *puVar1;
                                puVar33 = (undefined8 *)((long)puVar33 + 4);
                              } while (uVar19 != 0);
                            }
                            goto LAB_0015af64;
                          }
                        }
                        uVar18 = uVar18 & 7;
                        puVar22 = (undefined1 *)((long)puVar10 - uVar18);
                        *(undefined1 *)puVar10 = *puVar22;
                        *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
                        *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
                        iVar6 = *(int *)(PTR_DAT_047cb8c0 + uVar18 * 4);
                        *(undefined1 *)((long)puVar10 + 3) = puVar22[3];
                        *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar22 + iVar6);
                        if (8 < uVar17) {
                          iVar7 = *(int *)(PTR_DAT_047cb8c8 + uVar18 * 4);
                          puVar9 = puVar10 + 1;
                          do {
                            puVar30 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)
                                       ((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar18));
                            puVar9 = puVar30;
                          } while (puVar30 < (undefined8 *)((long)puVar10 + uVar17));
                        }
                        goto LAB_0015868c;
                      }
                      uVar18 = (ulong)*(ushort *)((long)puVar28 + 1);
                      uVar17 = uVar21 + 0x13;
                      if (uVar21 == 0x7f) {
                        bVar3 = *(byte *)((long)puVar28 + 3);
                        if ((ulong)bVar3 < 0xc0) {
                          param_1 = puVar28 + 2;
                          uVar17 = (ulong)bVar3 + 0x92;
                          puVar28 = param_1;
                          if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
LAB_0015afcc:
                            if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015b36c;
                            puVar9 = (undefined8 *)((long)puVar10 - uVar18);
                            if (7 < uVar17) {
                              puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                              *puVar10 = *puVar9;
                              puVar9 = puVar33;
                              do {
                                puVar30 = puVar9 + 1;
                                *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                                puVar9 = puVar30;
                              } while (puVar30 < (undefined8 *)
                                                 ((long)puVar33 + (uVar17 & 0x1fffffff8)));
                              goto LAB_0015a414;
                            }
                            goto LAB_0015a408;
                          }
                        }
                        else {
                          param_1 = (ushort *)((long)puVar28 + 5);
                          uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                   (ulong)(byte)puVar28[2];
                          puVar28 = param_1;
                          if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015afcc;
                        }
                      }
                      else {
                        param_1 = (ushort *)((long)puVar28 + 3);
                        puVar28 = param_1;
                        if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015afcc;
                      }
                      param_3 = (undefined8 *)((long)puVar10 + uVar17);
                      do {
                        puVar9 = puVar10 + 1;
                        *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                        puVar10 = puVar9;
                      } while (puVar9 < param_3);
                      goto LAB_00157f48;
                    }
                    *param_3 = *(undefined8 *)pbVar14;
                    puVar15 = (ushort *)(pbVar14 + uVar17);
                    uVar19 = (ulong)*puVar15;
                    puVar10 = (undefined8 *)((long)param_3 + uVar17);
                    uVar21 = (ulong)(bVar3 >> 4);
                    if (0x8f < bVar3) {
                      if (uVar21 != 0xf) {
                        uVar17 = uVar21 + 4;
                        puVar28 = puVar15 + 1;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar19);
                        param_1 = puVar28;
                        if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157f2c;
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015ab68;
                        if (7 < uVar17) {
                          puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                          *puVar10 = *puVar9;
                          puVar9 = puVar33;
                          do {
                            puVar30 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)((long)puVar9 - uVar19);
                            puVar9 = puVar30;
                          } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                          goto LAB_0015a414;
                        }
                        goto LAB_0015a408;
                      }
                      uVar18 = uVar19 & 0x7f;
                      param_1 = (ushort *)((long)puVar15 + 1);
                      if ((*puVar15 >> 7 & 1) == 0) goto code_r0x00158280;
                      uVar17 = (uVar18 >> 3) + 4;
                      if (uVar18 >> 3 == 0xf) {
                        bVar3 = *(byte *)param_1;
                        uVar18 = (ulong)bVar3;
                        uVar17 = 0x13;
                        param_1 = puVar15 + 1;
                        if (0xbf < uVar18) {
                          uVar17 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                          param_1 = (ushort *)((long)puVar15 + 3);
                          uVar18 = (ulong)(byte)puVar15[1];
                        }
                        uVar17 = uVar17 + uVar18;
                        if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_001582d8;
                      }
                      else if ((long)uVar17 < (long)puVar33 - (long)puVar10) {
LAB_001582d8:
                        uVar19 = uVar19 & 7;
                        puVar22 = (undefined1 *)((long)puVar10 - uVar19);
                        *(undefined1 *)puVar10 = *puVar22;
                        *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
                        *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
                        iVar6 = *(int *)(PTR_DAT_047cb8c0 + uVar19 * 4);
                        *(undefined1 *)((long)puVar10 + 3) = puVar22[3];
                        *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar22 + iVar6);
                        if (8 < uVar17) {
                          iVar7 = *(int *)(PTR_DAT_047cb8c8 + uVar19 * 4);
                          puVar9 = puVar10 + 1;
                          do {
                            puVar30 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)
                                       ((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar19));
                            puVar9 = puVar30;
                          } while (puVar30 < (undefined8 *)((long)(puVar10 + 1) + (uVar17 - 8)));
                        }
                        goto LAB_0015868c;
                      }
                      if ((long)puVar2 - (long)puVar10 < (long)uVar17) goto LAB_0015ad70;
                      uVar18 = uVar17 & 3;
                      uVar21 = uVar17;
                      if (uVar18 == 0) {
                        puVar22 = (undefined1 *)((long)puVar10 - (uVar19 & 7));
                        puVar33 = puVar10;
                        if (uVar17 - 1 < 3) goto LAB_0015af64;
                        goto LAB_0015ace8;
                      }
                      lVar24 = -(uVar19 & 7);
                      puVar9 = puVar10;
                      do {
                        uVar21 = uVar21 - 1;
                        puVar33 = (undefined8 *)((long)puVar9 + 1);
                        *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + lVar24);
                        uVar18 = uVar18 - 1;
                        puVar9 = puVar33;
                      } while (uVar18 != 0);
                      puVar22 = (undefined1 *)((long)puVar33 + lVar24);
                      if (2 < uVar17 - 1) {
LAB_0015ace8:
                        do {
                          *(undefined1 *)puVar33 = *puVar22;
                          *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                          *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                          puVar1 = puVar22 + 3;
                          uVar21 = uVar21 - 4;
                          puVar22 = puVar22 + 4;
                          *(undefined1 *)((long)puVar33 + 3) = *puVar1;
                          puVar33 = (undefined8 *)((long)puVar33 + 4);
                        } while (uVar21 != 0);
                      }
                      goto LAB_0015af64;
                    }
                    *puVar10 = *(undefined8 *)((long)puVar10 - uVar19);
                    *(undefined4 *)(puVar10 + 1) =
                         *(undefined4 *)((undefined8 *)((long)puVar10 - uVar19) + 1);
                    bVar4 = (byte)puVar15[1];
                    uVar19 = (ulong)bVar4;
                    puVar9 = (undefined8 *)((long)puVar10 + uVar21 + 4);
                    uVar17 = uVar19 & 0xf;
                    pbVar14 = (byte *)((long)puVar15 + 3);
                    if (uVar17 < 9) {
                      *puVar9 = *(undefined8 *)pbVar14;
                      puVar15 = (ushort *)(pbVar14 + uVar17);
                      puVar10 = (undefined8 *)((long)puVar9 + uVar17);
                      uVar20 = (ulong)*puVar15;
                      uVar17 = (ulong)(bVar4 >> 4);
                      if (bVar4 < 0x90) {
                        *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                        *(undefined4 *)(puVar10 + 1) =
                             *(undefined4 *)((undefined8 *)((long)puVar10 - uVar20) + 1);
                        bVar3 = (byte)puVar15[1];
                        uVar29 = (ulong)bVar3;
                        puVar9 = (undefined8 *)((long)puVar10 + uVar17 + 4);
                        pbVar14 = (byte *)((long)puVar15 + 3);
                        uVar20 = uVar29 & 0xf;
                        if (8 < uVar20) {
                          if (uVar20 == 0xf) {
                            puVar27 = puVar15 + 2;
                            bVar4 = *pbVar14;
                            if ((ulong)bVar4 < 0xc0) {
                              lVar24 = (ulong)bVar4 + 0xf;
                              puVar28 = (ushort *)((long)puVar27 + lVar24);
                            }
                            else {
                              lVar24 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) +
                                       (ulong)(byte)*puVar27;
                              puVar28 = (ushort *)((long)puVar15 + 5 + lVar24);
                              puVar27 = (ushort *)((long)puVar15 + 5);
                            }
                            if ((puVar32 < puVar28) || ((long)puVar33 - (long)puVar9 <= lVar24))
                            goto LAB_0015a5ac;
                            puVar30 = (undefined8 *)((long)puVar9 + lVar24);
                            do {
                              puVar10 = puVar9 + 1;
                              *puVar9 = *(undefined8 *)puVar27;
                              puVar27 = puVar27 + 4;
                              puVar9 = puVar10;
                            } while (puVar10 < puVar30);
                            if (puVar28 < puVar32) {
                              uVar5 = *puVar28;
                            }
                            else {
                              if (param_2 <= puVar28) goto LAB_0015b1b8;
                              if (param_2 == puVar26) goto LAB_0015b1e4;
                              memmove(local_e0,puVar28,(long)param_2 - (long)puVar28);
                              local_e8 = (ushort *)
                                         ((long)local_e8 + ((long)local_e0 - (long)puVar28));
                              param_2 = auStack_70;
                              puVar32 = auStack_ae;
                              puVar28 = local_e0;
                              uVar5 = local_e0[0];
                            }
                          }
                          else {
                            if ((long)puVar33 - (long)puVar9 <= (long)uVar20) goto LAB_0015a5ac;
                            uVar12 = *(undefined8 *)((long)puVar15 + 0xb);
                            puVar30 = (undefined8 *)((long)puVar9 + uVar20);
                            puVar28 = (ushort *)(pbVar14 + uVar20);
                            *puVar9 = *(undefined8 *)pbVar14;
                            *(undefined8 *)((long)puVar10 + uVar17 + 0xc) = uVar12;
                            uVar5 = *puVar28;
                          }
                          uVar17 = (ulong)(bVar3 >> 4);
                          uVar18 = (ulong)uVar5;
                          if (bVar3 < 0x90) {
                            uVar17 = uVar17 + 4;
                            param_1 = puVar28 + 1;
                            puVar10 = (undefined8 *)((long)puVar30 - uVar18);
                            if ((long)puVar33 - (long)puVar30 <= (long)uVar17) {
                              if ((long)puVar2 - (long)puVar30 <= (long)uVar17) goto LAB_0015aaf8;
                              if (7 < uVar17) {
                                puVar33 = (undefined8 *)((long)puVar30 + (uVar17 & 7));
                                *puVar30 = *puVar10;
                                puVar10 = puVar33;
                                do {
                                  puVar9 = puVar10 + 1;
                                  *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                                  puVar10 = puVar9;
                                } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
LAB_0015adc8:
                                param_3 = (undefined8 *)((long)puVar30 + uVar17);
                                goto joined_r0x0015a878;
                              }
LAB_0015aa98:
                              memmove(puVar30,puVar10,uVar17);
                              param_3 = (undefined8 *)((long)puVar30 + uVar17);
                              goto joined_r0x0015aaac;
                            }
                            *puVar30 = *puVar10;
                            *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(puVar10 + 1);
joined_r0x001583b0:
                            param_3 = (undefined8 *)((long)puVar30 + uVar17);
                            if (puVar32 <= param_1) goto LAB_001580b8;
                            goto LAB_00157f50;
                          }
                          if (uVar17 != 0xf) {
                            uVar17 = uVar17 + 4;
                            param_1 = puVar28 + 1;
                            puVar10 = (undefined8 *)((long)puVar30 - uVar18);
                            if ((long)uVar17 < (long)puVar33 - (long)puVar30) {
                              *puVar30 = *puVar10;
                              puVar30[1] = puVar10[1];
                              *(undefined2 *)(puVar30 + 2) = *(undefined2 *)(puVar10 + 2);
                              goto joined_r0x001583b0;
                            }
                            if ((long)uVar17 < (long)puVar2 - (long)puVar30) {
                              if (uVar17 < 8) goto LAB_0015aa98;
                              puVar33 = (undefined8 *)((long)puVar30 + (uVar17 & 7));
                              *puVar30 = *puVar10;
                              puVar10 = puVar33;
                              do {
                                puVar9 = puVar10 + 1;
                                *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                                puVar10 = puVar9;
                              } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                              goto LAB_0015adc8;
                            }
                            goto LAB_0015ab68;
                          }
                          uVar21 = uVar18 & 0x7f;
                          if ((uVar5 >> 7 & 1) != 0) {
                            uVar17 = (uVar21 >> 3) + 4;
                            if (uVar21 >> 3 == 0xf) {
                              uVar21 = (ulong)*(byte *)((long)puVar28 + 1);
                              if (uVar21 < 0xc0) {
                                param_1 = puVar28 + 1;
                                uVar17 = 0x13;
                              }
                              else {
                                uVar17 = (ulong)((uint)*(byte *)((long)puVar28 + 1) * 0x100 - 0xc000
                                                ) | 0x13;
                                uVar21 = (ulong)(byte)puVar28[1];
                                param_1 = (ushort *)((long)puVar28 + 3);
                              }
                              uVar17 = uVar17 + uVar21;
                              if ((long)uVar17 < (long)puVar33 - (long)puVar30) {
LAB_00158d68:
                                uVar18 = uVar18 & 7;
                                puVar22 = (undefined1 *)((long)puVar30 - uVar18);
                                *(undefined1 *)puVar30 = *puVar22;
                                *(undefined1 *)((long)puVar30 + 1) = puVar22[1];
                                *(undefined1 *)((long)puVar30 + 2) = puVar22[2];
                                iVar6 = *(int *)(PTR_DAT_047cb8c0 + uVar18 * 4);
                                *(undefined1 *)((long)puVar30 + 3) = puVar22[3];
                                *(undefined4 *)((long)puVar30 + 4) =
                                     *(undefined4 *)(puVar22 + iVar6);
                                if (8 < uVar17) {
                                  iVar7 = *(int *)(PTR_DAT_047cb8c8 + uVar18 * 4);
                                  puVar10 = puVar30 + 1;
                                  do {
                                    puVar9 = puVar10 + 1;
                                    *puVar10 = *(undefined8 *)
                                                ((long)puVar10 +
                                                (((long)iVar6 - (long)iVar7) - uVar18));
                                    puVar10 = puVar9;
                                  } while (puVar9 < (undefined8 *)((long)puVar30 + uVar17));
                                }
                                goto joined_r0x001583b0;
                              }
                            }
                            else {
                              param_1 = (ushort *)((long)puVar28 + 1);
                              if ((long)uVar17 < (long)puVar33 - (long)puVar30) goto LAB_00158d68;
                            }
                            if ((long)puVar2 - (long)puVar30 < (long)uVar17) goto LAB_0015ad70;
                            uVar21 = uVar17 & 3;
                            uVar19 = uVar17;
                            if (uVar21 == 0) {
                              puVar22 = (undefined1 *)((long)puVar30 - (uVar18 & 7));
                              puVar10 = puVar30;
                            }
                            else {
                              lVar24 = -(uVar18 & 7);
                              puVar33 = puVar30;
                              do {
                                uVar19 = uVar19 - 1;
                                puVar10 = (undefined8 *)((long)puVar33 + 1);
                                *(undefined1 *)puVar33 = *(undefined1 *)((long)puVar33 + lVar24);
                                uVar21 = uVar21 - 1;
                                puVar33 = puVar10;
                              } while (uVar21 != 0);
                              puVar22 = (undefined1 *)((long)puVar10 + lVar24);
                            }
                            if (2 < uVar17 - 1) {
                              do {
                                *(undefined1 *)puVar10 = *puVar22;
                                *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
                                *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
                                puVar1 = puVar22 + 3;
                                uVar19 = uVar19 - 4;
                                puVar22 = puVar22 + 4;
                                *(undefined1 *)((long)puVar10 + 3) = *puVar1;
                                puVar10 = (undefined8 *)((long)puVar10 + 4);
                              } while (uVar19 != 0);
                            }
                            param_3 = (undefined8 *)((long)puVar30 + uVar17);
                            goto joined_r0x0015a878;
                          }
                          uVar18 = (ulong)*(ushort *)((long)puVar28 + 1);
                          uVar17 = uVar21 + 0x13;
                          if (uVar21 == 0x7f) {
                            bVar3 = *(byte *)((long)puVar28 + 3);
                            if ((ulong)bVar3 < 0xc0) {
                              param_1 = puVar28 + 2;
                              uVar17 = (ulong)bVar3 + 0x92;
                              if ((long)puVar33 - (long)puVar30 <= (long)uVar17) {
LAB_0015b210:
                                if ((long)uVar17 < (long)puVar2 - (long)puVar30) {
                                  puVar10 = (undefined8 *)((long)puVar30 - uVar18);
                                  if (uVar17 < 8) goto LAB_0015aa98;
                                  puVar33 = (undefined8 *)((long)puVar30 + (uVar17 & 7));
                                  *puVar30 = *puVar10;
                                  puVar10 = puVar33;
                                  do {
                                    puVar9 = puVar10 + 1;
                                    *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                                    puVar10 = puVar9;
                                  } while (puVar9 < (undefined8 *)
                                                    ((long)puVar33 + (uVar17 & 0x1fffffff8)));
                                  goto LAB_0015adc8;
                                }
                                goto LAB_0015b36c;
                              }
                            }
                            else {
                              param_1 = (ushort *)((long)puVar28 + 5);
                              uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                       (ulong)(byte)puVar28[2];
                              if ((long)puVar33 - (long)puVar30 <= (long)uVar17) goto LAB_0015b210;
                            }
                          }
                          else {
                            param_1 = (ushort *)((long)puVar28 + 3);
                            if ((long)puVar33 - (long)puVar30 <= (long)uVar17) goto LAB_0015b210;
                          }
                          param_3 = (undefined8 *)((long)puVar30 + uVar17);
                          do {
                            puVar10 = puVar30 + 1;
                            *puVar30 = *(undefined8 *)((long)puVar30 - uVar18);
                            puVar30 = puVar10;
                          } while (puVar10 < param_3);
                          goto LAB_00157f48;
                        }
                        *puVar9 = *(undefined8 *)pbVar14;
                        puVar15 = (ushort *)(pbVar14 + uVar20);
                        puVar10 = (undefined8 *)((long)puVar9 + uVar20);
                        uVar20 = (ulong)*puVar15;
                        uVar17 = (ulong)(bVar3 >> 4);
                        if (bVar3 < 0x90) {
                          *puVar10 = *(undefined8 *)((long)puVar10 - uVar20);
                          param_1 = puVar15 + 1;
                          param_3 = (undefined8 *)((long)puVar10 + uVar17 + 4);
                          *(undefined4 *)(puVar10 + 1) =
                               *(undefined4 *)((undefined8 *)((long)puVar10 - uVar20) + 1);
                          goto LAB_00158050;
                        }
                        if (uVar17 != 0xf) {
                          uVar17 = uVar17 + 4;
                          puVar28 = puVar15 + 1;
                          puVar9 = (undefined8 *)((long)puVar10 - uVar20);
                          param_1 = puVar28;
                          if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157f2c;
                          if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015ab68;
                          if (7 < uVar17) {
                            puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                            *puVar10 = *puVar9;
                            puVar9 = puVar33;
                            do {
                              puVar30 = puVar9 + 1;
                              *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                              puVar9 = puVar30;
                            } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                            goto LAB_0015a414;
                          }
                          goto LAB_0015a408;
                        }
                        uVar23 = uVar20 & 0x7f;
                        param_1 = (ushort *)((long)puVar15 + 1);
                        if ((*puVar15 >> 7 & 1) != 0) {
                          uVar17 = (uVar23 >> 3) + 4;
                          if (uVar23 >> 3 == 0xf) {
                            bVar3 = *(byte *)param_1;
                            uVar23 = (ulong)bVar3;
                            uVar17 = 0x13;
                            param_1 = puVar15 + 1;
                            if (0xbf < uVar23) {
                              uVar17 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
                              param_1 = (ushort *)((long)puVar15 + 3);
                              uVar23 = (ulong)(byte)puVar15[1];
                            }
                            uVar17 = uVar17 + uVar23;
                            if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
LAB_0015ac08:
                              if ((long)puVar2 - (long)puVar10 < (long)uVar17) goto LAB_0015ad70;
                              puVar22 = (undefined1 *)((long)puVar10 - (uVar20 & 7));
                              if ((uVar17 & 3) == 0) {
                                uVar21 = uVar17;
                                puVar33 = puVar10;
                                if (uVar17 - 1 < 3) goto LAB_0015af64;
                                goto LAB_0015aeec;
                              }
                              lVar24 = uVar21 + (bVar4 >> 4);
                              uVar20 = 0;
                              do {
                                *(undefined1 *)
                                 ((long)param_3 +
                                 uVar20 + lVar24 + (uVar18 & 0xf) + (uVar29 & 0xf) + (uVar19 & 0xf)
                                          + 8) = puVar22[uVar20];
                                uVar20 = uVar20 + 1;
                              } while ((uVar17 & 3) != uVar20);
                              puVar22 = puVar22 + uVar20;
                              uVar21 = uVar17 - uVar20;
                              puVar33 = (undefined8 *)
                                        ((long)param_3 +
                                        uVar20 + lVar24 + (uVar18 & 0xf) + (uVar29 & 0xf) +
                                                 (uVar19 & 0xf) + 8);
                              if (2 < uVar17 - 1) {
LAB_0015aeec:
                                do {
                                  *(undefined1 *)puVar33 = *puVar22;
                                  *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                                  *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                                  puVar1 = puVar22 + 3;
                                  uVar21 = uVar21 - 4;
                                  puVar22 = puVar22 + 4;
                                  *(undefined1 *)((long)puVar33 + 3) = *puVar1;
                                  puVar33 = (undefined8 *)((long)puVar33 + 4);
                                } while (uVar21 != 0);
                              }
                              goto LAB_0015af64;
                            }
                          }
                          else if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015ac08;
                          uVar20 = uVar20 & 7;
                          puVar22 = (undefined1 *)((long)puVar10 - uVar20);
                          *(undefined1 *)puVar10 = *puVar22;
                          *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
                          *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
                          iVar6 = *(int *)(PTR_DAT_047cb8c0 + uVar20 * 4);
                          *(undefined1 *)((long)puVar10 + 3) = puVar22[3];
                          *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar22 + iVar6);
                          if (8 < uVar17) {
                            iVar7 = *(int *)(PTR_DAT_047cb8c8 + uVar20 * 4);
                            puVar9 = puVar10 + 1;
                            do {
                              puVar30 = puVar9 + 1;
                              *puVar9 = *(undefined8 *)
                                         ((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar20));
                              puVar9 = puVar30;
                            } while (puVar30 < (undefined8 *)((long)(puVar10 + 1) + (uVar17 - 8)));
                          }
                          goto LAB_0015868c;
                        }
                        puVar27 = (ushort *)((long)puVar15 + 3);
                        uVar18 = (ulong)*param_1;
                        uVar17 = uVar23 + 0x13;
                        if (uVar23 == 0x7f) {
                          puVar28 = puVar15 + 2;
                          bVar3 = *(byte *)puVar27;
                          if ((ulong)bVar3 < 0xc0) {
                            uVar17 = (ulong)bVar3 + 0x92;
                            param_1 = puVar28;
                            if ((long)uVar17 < (long)puVar33 - (long)puVar10) {
LAB_00158508:
                              param_3 = (undefined8 *)((long)puVar10 + uVar17);
                              do {
                                puVar9 = puVar10 + 1;
                                *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                                puVar10 = puVar9;
                              } while (puVar9 < param_3);
                              goto LAB_00157f48;
                            }
                          }
                          else {
                            param_1 = (ushort *)((long)puVar15 + 5);
                            uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                     (ulong)(byte)*puVar28;
                            puVar28 = param_1;
                            if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00158508;
                          }
                        }
                        else {
                          param_1 = puVar27;
                          puVar28 = puVar27;
                          if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00158508;
                        }
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015b36c;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar18);
                        if (7 < uVar17) {
                          puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                          *puVar10 = *puVar9;
                          puVar9 = puVar33;
                          do {
                            puVar30 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                            puVar9 = puVar30;
                          } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)))
                          ;
                          goto LAB_0015a414;
                        }
                        goto LAB_0015a408;
                      }
                      if (uVar17 != 0xf) {
                        uVar17 = uVar17 + 4;
                        puVar28 = puVar15 + 1;
                        puVar9 = (undefined8 *)((long)puVar10 - uVar20);
                        param_1 = puVar28;
                        if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00157f2c;
                        if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015ab68;
                        if (7 < uVar17) {
                          puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                          *puVar10 = *puVar9;
                          puVar9 = puVar33;
                          do {
                            puVar30 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)((long)puVar9 - uVar20);
                            puVar9 = puVar30;
                          } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                          goto LAB_0015a414;
                        }
                        goto LAB_0015a408;
                      }
                      uVar21 = uVar20 & 0x7f;
                      param_1 = (ushort *)((long)puVar15 + 1);
                      if ((*puVar15 >> 7 & 1) != 0) {
                        uVar17 = (uVar21 >> 3) + 4;
                        if (uVar21 >> 3 == 0xf) {
                          bVar4 = *(byte *)param_1;
                          uVar21 = (ulong)bVar4;
                          uVar17 = 0x13;
                          param_1 = puVar15 + 1;
                          if (0xbf < uVar21) {
                            uVar17 = (ulong)((uint)bVar4 * 0x100 - 0xc000) | 0x13;
                            param_1 = (ushort *)((long)puVar15 + 3);
                            uVar21 = (ulong)(byte)puVar15[1];
                          }
                          uVar17 = uVar17 + uVar21;
                          if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015a968;
                        }
                        else if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
LAB_0015a968:
                          if ((long)puVar2 - (long)puVar10 < (long)uVar17) goto LAB_0015ad70;
                          if ((uVar17 & 3) == 0) {
                            puVar22 = (undefined1 *)((long)puVar10 - (uVar20 & 7));
                            uVar18 = uVar17;
                            puVar33 = puVar10;
                            if (uVar17 - 1 < 3) goto LAB_0015af64;
                            goto LAB_0015ae40;
                          }
                          lVar24 = (uVar18 & 0xf) + (ulong)(bVar3 >> 4) + (uVar19 & 0xf);
                          uVar21 = 0;
                          do {
                            *(undefined1 *)((long)param_3 + uVar21 + lVar24 + 4) =
                                 *(undefined1 *)
                                  ((long)param_3 + uVar21 + (lVar24 - (uVar20 & 7)) + 4);
                            uVar21 = uVar21 + 1;
                          } while ((uVar17 & 3) != uVar21);
                          lVar24 = (uVar18 & 0xf) + (ulong)(bVar3 >> 4) + (uVar19 & 0xf);
                          puVar22 = (undefined1 *)
                                    ((long)param_3 + uVar21 + (lVar24 - (uVar20 & 7)) + 4);
                          uVar18 = uVar17 - uVar21;
                          puVar33 = (undefined8 *)((long)param_3 + uVar21 + lVar24 + 4);
                          if (2 < uVar17 - 1) {
LAB_0015ae40:
                            do {
                              *(undefined1 *)puVar33 = *puVar22;
                              *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                              *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                              puVar1 = puVar22 + 3;
                              uVar18 = uVar18 - 4;
                              puVar22 = puVar22 + 4;
                              *(undefined1 *)((long)puVar33 + 3) = *puVar1;
                              puVar33 = (undefined8 *)((long)puVar33 + 4);
                            } while (uVar18 != 0);
                          }
                          goto LAB_0015af64;
                        }
                        uVar20 = uVar20 & 7;
                        puVar22 = (undefined1 *)((long)puVar10 - uVar20);
                        *(undefined1 *)puVar10 = *puVar22;
                        *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
                        *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
                        iVar6 = *(int *)(PTR_DAT_047cb8c0 + uVar20 * 4);
                        *(undefined1 *)((long)puVar10 + 3) = puVar22[3];
                        *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar22 + iVar6);
                        if (8 < uVar17) {
                          iVar7 = *(int *)(PTR_DAT_047cb8c8 + uVar20 * 4);
                          puVar9 = puVar10 + 1;
                          do {
                            puVar30 = puVar9 + 1;
                            *puVar9 = *(undefined8 *)
                                       ((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar20));
                            puVar9 = puVar30;
                          } while (puVar30 < (undefined8 *)((long)(puVar10 + 1) + (uVar17 - 8)));
                        }
LAB_0015868c:
                        param_3 = (undefined8 *)((long)puVar10 + uVar17);
                        if (puVar32 <= param_1) goto LAB_001580b8;
                        goto LAB_00157f50;
                      }
                      puVar27 = (ushort *)((long)puVar15 + 3);
                      uVar18 = (ulong)*param_1;
                      uVar17 = uVar21 + 0x13;
                      if (uVar21 == 0x7f) {
                        puVar28 = puVar15 + 2;
                        bVar3 = *(byte *)puVar27;
                        if ((ulong)bVar3 < 0xc0) {
                          uVar17 = (ulong)bVar3 + 0x92;
                          param_1 = puVar28;
                          if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
LAB_0015a9f8:
                            if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015b36c;
                            puVar9 = (undefined8 *)((long)puVar10 - uVar18);
                            if (7 < uVar17) {
                              puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
                              *puVar10 = *puVar9;
                              puVar9 = puVar33;
                              do {
                                puVar30 = puVar9 + 1;
                                *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                                puVar9 = puVar30;
                              } while (puVar30 < (undefined8 *)
                                                 ((long)puVar33 + (uVar17 & 0x1fffffff8)));
                              goto LAB_0015a414;
                            }
                            goto LAB_0015a408;
                          }
                        }
                        else {
                          param_1 = (ushort *)((long)puVar15 + 5);
                          uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                   (ulong)(byte)*puVar28;
                          puVar28 = param_1;
                          if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015a9f8;
                        }
                      }
                      else {
                        param_1 = puVar27;
                        puVar28 = puVar27;
                        if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015a9f8;
                      }
                      param_3 = (undefined8 *)((long)puVar10 + uVar17);
                      do {
                        puVar9 = puVar10 + 1;
                        *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                        puVar10 = puVar9;
                      } while (puVar9 < param_3);
                      goto LAB_00157f48;
                    }
                    if (uVar17 != 0xf) {
                      if ((long)uVar17 < (long)puVar33 - (long)puVar9) {
                        uVar12 = *(undefined8 *)((long)puVar15 + 0xb);
                        puVar30 = (undefined8 *)((long)puVar9 + uVar17);
                        puVar28 = (ushort *)(pbVar14 + uVar17);
                        *puVar9 = *(undefined8 *)pbVar14;
                        *(undefined8 *)((long)puVar10 + uVar21 + 0xc) = uVar12;
                        uVar5 = *puVar28;
                        goto joined_r0x00158238;
                      }
LAB_0015a5ac:
                      param_3 = puVar9;
                      param_1 = (ushort *)(pbVar14 + -1);
                      goto joined_r0x0015aaac;
                    }
                    puVar27 = puVar15 + 2;
                    bVar3 = *pbVar14;
                    if ((ulong)bVar3 < 0xc0) {
                      lVar24 = (ulong)bVar3 + 0xf;
                      puVar28 = (ushort *)((long)puVar27 + lVar24);
                    }
                    else {
                      lVar24 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)*puVar27
                      ;
                      puVar28 = (ushort *)((long)puVar15 + 5 + lVar24);
                      puVar27 = (ushort *)((long)puVar15 + 5);
                    }
                    if ((puVar32 < puVar28) || ((long)puVar33 - (long)puVar9 <= lVar24))
                    goto LAB_0015a5ac;
                    puVar30 = (undefined8 *)((long)puVar9 + lVar24);
                    do {
                      puVar10 = puVar9 + 1;
                      *puVar9 = *(undefined8 *)puVar27;
                      puVar27 = puVar27 + 4;
                      puVar9 = puVar10;
                    } while (puVar10 < puVar30);
                    if (puVar28 < puVar32) {
                      uVar5 = *puVar28;
                    }
                    else {
                      if (param_2 <= puVar28) goto LAB_0015b1b8;
                      if (param_2 == puVar26) goto LAB_0015b1e4;
                      memmove(local_e0,puVar28,(long)param_2 - (long)puVar28);
                      local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar28));
                      param_2 = auStack_70;
                      puVar32 = auStack_ae;
                      puVar28 = local_e0;
                      uVar5 = local_e0[0];
                    }
joined_r0x00158238:
                    uVar17 = (ulong)(bVar4 >> 4);
                    uVar18 = (ulong)uVar5;
                    if (bVar4 < 0x90) {
                      uVar17 = uVar17 + 4;
                      param_1 = puVar28 + 1;
                      puVar10 = (undefined8 *)((long)puVar30 - uVar18);
                      if ((long)uVar17 < (long)puVar33 - (long)puVar30) {
                        *puVar30 = *puVar10;
                        *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(puVar10 + 1);
                        goto joined_r0x0015826c;
                      }
                      if ((long)puVar2 - (long)puVar30 <= (long)uVar17) goto LAB_0015aaf8;
                      if (7 < uVar17) {
                        puVar33 = (undefined8 *)((long)puVar30 + (uVar17 & 7));
                        *puVar30 = *puVar10;
                        puVar10 = puVar33;
                        do {
                          puVar9 = puVar10 + 1;
                          *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                          puVar10 = puVar9;
                        } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                        goto LAB_0015acc4;
                      }
                      goto LAB_0015a864;
                    }
                    if (uVar17 != 0xf) {
                      uVar17 = uVar17 + 4;
                      param_1 = puVar28 + 1;
                      puVar10 = (undefined8 *)((long)puVar30 - uVar18);
                      if ((long)puVar33 - (long)puVar30 <= (long)uVar17) {
                        if ((long)puVar2 - (long)puVar30 <= (long)uVar17) goto LAB_0015ab68;
                        if (7 < uVar17) {
                          puVar33 = (undefined8 *)((long)puVar30 + (uVar17 & 7));
                          *puVar30 = *puVar10;
                          puVar10 = puVar33;
                          do {
                            puVar9 = puVar10 + 1;
                            *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                            puVar10 = puVar9;
                          } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
                          goto LAB_0015acc4;
                        }
                        goto LAB_0015a864;
                      }
                      *puVar30 = *puVar10;
                      puVar30[1] = puVar10[1];
                      *(undefined2 *)(puVar30 + 2) = *(undefined2 *)(puVar10 + 2);
joined_r0x0015826c:
                      param_3 = (undefined8 *)((long)puVar30 + uVar17);
                      if (puVar32 <= param_1) goto LAB_001580b8;
                      goto LAB_00157f50;
                    }
                    uVar21 = uVar18 & 0x7f;
                    if ((uVar5 >> 7 & 1) != 0) {
                      uVar17 = (uVar21 >> 3) + 4;
                      if (uVar21 >> 3 == 0xf) {
                        uVar21 = (ulong)*(byte *)((long)puVar28 + 1);
                        if (uVar21 < 0xc0) {
                          param_1 = puVar28 + 1;
                          uVar17 = 0x13;
                        }
                        else {
                          uVar17 = (ulong)((uint)*(byte *)((long)puVar28 + 1) * 0x100 - 0xc000) |
                                   0x13;
                          uVar21 = (ulong)(byte)puVar28[1];
                          param_1 = (ushort *)((long)puVar28 + 3);
                        }
                        uVar17 = uVar17 + uVar21;
                        if ((long)uVar17 < (long)puVar33 - (long)puVar30) {
LAB_00158b40:
                          uVar18 = uVar18 & 7;
                          puVar22 = (undefined1 *)((long)puVar30 - uVar18);
                          *(undefined1 *)puVar30 = *puVar22;
                          *(undefined1 *)((long)puVar30 + 1) = puVar22[1];
                          *(undefined1 *)((long)puVar30 + 2) = puVar22[2];
                          iVar6 = *(int *)(PTR_DAT_047cb8c0 + uVar18 * 4);
                          *(undefined1 *)((long)puVar30 + 3) = puVar22[3];
                          *(undefined4 *)((long)puVar30 + 4) = *(undefined4 *)(puVar22 + iVar6);
                          if (8 < uVar17) {
                            iVar7 = *(int *)(PTR_DAT_047cb8c8 + uVar18 * 4);
                            puVar10 = puVar30 + 1;
                            do {
                              puVar9 = puVar10 + 1;
                              *puVar10 = *(undefined8 *)
                                          ((long)puVar10 + (((long)iVar6 - (long)iVar7) - uVar18));
                              puVar10 = puVar9;
                            } while (puVar9 < (undefined8 *)((long)puVar30 + uVar17));
                          }
                          goto joined_r0x0015826c;
                        }
                      }
                      else {
                        param_1 = (ushort *)((long)puVar28 + 1);
                        if ((long)uVar17 < (long)puVar33 - (long)puVar30) goto LAB_00158b40;
                      }
                      if ((long)uVar17 <= (long)puVar2 - (long)puVar30) {
                        uVar21 = uVar17 & 3;
                        uVar19 = uVar17;
                        if (uVar21 == 0) {
                          puVar22 = (undefined1 *)((long)puVar30 - (uVar18 & 7));
                          puVar10 = puVar30;
                        }
                        else {
                          lVar24 = -(uVar18 & 7);
                          puVar33 = puVar30;
                          do {
                            uVar19 = uVar19 - 1;
                            puVar10 = (undefined8 *)((long)puVar33 + 1);
                            *(undefined1 *)puVar33 = *(undefined1 *)((long)puVar33 + lVar24);
                            uVar21 = uVar21 - 1;
                            puVar33 = puVar10;
                          } while (uVar21 != 0);
                          puVar22 = (undefined1 *)((long)puVar10 + lVar24);
                        }
                        if (2 < uVar17 - 1) {
                          do {
                            *(undefined1 *)puVar10 = *puVar22;
                            *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
                            *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
                            puVar1 = puVar22 + 3;
                            uVar19 = uVar19 - 4;
                            puVar22 = puVar22 + 4;
                            *(undefined1 *)((long)puVar10 + 3) = *puVar1;
                            puVar10 = (undefined8 *)((long)puVar10 + 4);
                          } while (uVar19 != 0);
                        }
                        param_3 = (undefined8 *)((long)puVar30 + uVar17);
                        goto joined_r0x0015a878;
                      }
                      goto LAB_0015ad70;
                    }
                    uVar18 = (ulong)*(ushort *)((long)puVar28 + 1);
                    uVar17 = uVar21 + 0x13;
                    if (uVar21 == 0x7f) {
                      bVar3 = *(byte *)((long)puVar28 + 3);
                      if (0xbf < (ulong)bVar3) {
                        param_1 = (ushort *)((long)puVar28 + 5);
                        uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) +
                                 (ulong)(byte)puVar28[2];
                        if ((long)puVar33 - (long)puVar30 <= (long)uVar17) goto LAB_0015b0ec;
                        goto LAB_001589b0;
                      }
                      param_1 = puVar28 + 2;
                      uVar17 = (ulong)bVar3 + 0x92;
                      if ((long)uVar17 < (long)puVar33 - (long)puVar30) goto LAB_001589b0;
LAB_0015b0ec:
                      if ((long)puVar2 - (long)puVar30 <= (long)uVar17) goto LAB_0015b36c;
                      puVar10 = (undefined8 *)((long)puVar30 - uVar18);
                      if (7 < uVar17) {
                        puVar33 = (undefined8 *)((long)puVar30 + (uVar17 & 7));
                        *puVar30 = *puVar10;
                        puVar10 = puVar33;
                        do {
                          puVar9 = puVar10 + 1;
                          *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
                          puVar10 = puVar9;
                        } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
LAB_0015acc4:
                        param_3 = (undefined8 *)((long)puVar30 + uVar17);
                        goto joined_r0x0015aaac;
                      }
LAB_0015a864:
                      memmove(puVar30,puVar10,uVar17);
                      param_3 = (undefined8 *)((long)puVar30 + uVar17);
                      goto joined_r0x0015a878;
                    }
                    param_1 = (ushort *)((long)puVar28 + 3);
                    if ((long)puVar33 - (long)puVar30 <= (long)uVar17) goto LAB_0015b0ec;
LAB_001589b0:
                    param_3 = (undefined8 *)((long)puVar30 + uVar17);
                    do {
                      puVar10 = puVar30 + 1;
                      *puVar30 = *(undefined8 *)((long)puVar30 - uVar18);
                      puVar30 = puVar10;
                    } while (puVar10 < param_3);
                  } while( true );
                }
              }
              else {
                param_1 = (ushort *)((long)puVar28 + 5);
                uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar28[2];
                puVar28 = param_1;
                if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00158cb0;
              }
            }
            else {
              param_1 = (ushort *)((long)puVar28 + 3);
              puVar28 = param_1;
              if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00158cb0;
            }
            if ((long)uVar17 < (long)puVar2 - (long)puVar10) {
              puVar9 = (undefined8 *)((long)puVar10 - uVar18);
              if (uVar17 < 8) goto LAB_0015a408;
              puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
              *puVar10 = *puVar9;
              puVar9 = puVar33;
              do {
                puVar30 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 - uVar18);
                puVar9 = puVar30;
              } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
              goto LAB_0015a414;
            }
            goto LAB_0015b36c;
          }
          uVar17 = (uVar21 >> 3) + 4;
          if (uVar21 >> 3 == 0xf) {
            uVar21 = (ulong)*(byte *)((long)puVar28 + 1);
            if (uVar21 < 0xc0) {
              param_1 = puVar28 + 1;
              uVar17 = 0x13;
            }
            else {
              uVar17 = (ulong)((uint)*(byte *)((long)puVar28 + 1) * 0x100 - 0xc000) | 0x13;
              uVar21 = (ulong)(byte)puVar28[1];
              param_1 = (ushort *)((long)puVar28 + 3);
            }
            uVar17 = uVar17 + uVar21;
            if ((long)uVar17 < (long)puVar33 - (long)puVar10) goto LAB_00158e5c;
          }
          else {
            param_1 = (ushort *)((long)puVar28 + 1);
            if ((long)uVar17 < (long)puVar33 - (long)puVar10) {
LAB_00158e5c:
              uVar18 = uVar18 & 7;
              puVar22 = (undefined1 *)((long)puVar10 - uVar18);
              *(undefined1 *)puVar10 = *puVar22;
              *(undefined1 *)((long)puVar10 + 1) = puVar22[1];
              *(undefined1 *)((long)puVar10 + 2) = puVar22[2];
              iVar6 = *(int *)(PTR_DAT_047cb8c0 + uVar18 * 4);
              *(undefined1 *)((long)puVar10 + 3) = puVar22[3];
              *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(puVar22 + iVar6);
              if (uVar17 < 9) goto LAB_0015868c;
              iVar7 = *(int *)(PTR_DAT_047cb8c8 + uVar18 * 4);
              puVar9 = puVar10 + 1;
              do {
                puVar30 = puVar9 + 1;
                *puVar9 = *(undefined8 *)((long)puVar9 + (((long)iVar6 - (long)iVar7) - uVar18));
                puVar9 = puVar30;
                if ((undefined8 *)((long)puVar10 + uVar17) <= puVar30) goto LAB_0015868c;
              } while( true );
            }
          }
          if ((long)uVar17 <= (long)puVar2 - (long)puVar10) {
            uVar21 = uVar17 & 3;
            uVar19 = uVar17;
            if (uVar21 == 0) {
              puVar22 = (undefined1 *)((long)puVar10 - (uVar18 & 7));
              puVar9 = puVar10;
            }
            else {
              lVar24 = -(uVar18 & 7);
              puVar33 = puVar10;
              do {
                uVar19 = uVar19 - 1;
                puVar9 = (undefined8 *)((long)puVar33 + 1);
                *(undefined1 *)puVar33 = *(undefined1 *)((long)puVar33 + lVar24);
                uVar21 = uVar21 - 1;
                puVar33 = puVar9;
              } while (uVar21 != 0);
              puVar22 = (undefined1 *)((long)puVar9 + lVar24);
            }
            if (2 < uVar17 - 1) {
              do {
                *(undefined1 *)puVar9 = *puVar22;
                *(undefined1 *)((long)puVar9 + 1) = puVar22[1];
                *(undefined1 *)((long)puVar9 + 2) = puVar22[2];
                puVar1 = puVar22 + 3;
                uVar19 = uVar19 - 4;
                puVar22 = puVar22 + 4;
                *(undefined1 *)((long)puVar9 + 3) = *puVar1;
                puVar9 = (undefined8 *)((long)puVar9 + 4);
              } while (uVar19 != 0);
            }
LAB_0015af64:
            param_3 = (undefined8 *)((long)puVar10 + uVar17);
joined_r0x0015a878:
            puVar26 = param_1;
            if (param_3 < puVar2) goto LAB_00159a7c;
            goto joined_r0x0015a428;
          }
LAB_0015ad70:
          FUN_0015c3d0();
          pcVar16 = *(code **)PTR_PTR_047cb868;
          if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
          pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
          pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
          uVar12 = 0xa7;
          goto LAB_0015ab94;
        }
        FUN_0015c3d0();
        pcVar16 = *(code **)PTR_PTR_047cb868;
        if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
        pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
        pcVar13 = "OODLE ERROR : LZ corruption : LZB raw went too far\n";
        uVar12 = 0x641;
      }
      goto LAB_0015ab94;
    }
    FUN_0015c3d0();
    pcVar16 = *(code **)PTR_PTR_047cb868;
    if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
    pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
    pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
    uVar12 = 0x635;
  }
  else {
joined_r0x0015aaac:
    puVar26 = param_1;
    if (puVar2 <= param_3) goto joined_r0x0015a428;
LAB_00159a7c:
    puVar26 = param_1;
    if (param_1 < puVar32) goto LAB_00159adc;
LAB_00159a98:
    if (puVar26 < param_2) {
      if (param_2 == auStack_70 + 8) {
        FUN_0015c3d0();
        pcVar16 = *(code **)PTR_PTR_047cb868;
        if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
        pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
        pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
        uVar12 = 0x666;
        goto LAB_0015ab94;
      }
      memmove(local_e0,puVar26,(long)param_2 - (long)puVar26);
      param_1 = local_e0;
      local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar26));
      param_2 = auStack_70;
      puVar32 = auStack_ae;
LAB_00159adc:
      do {
        while( true ) {
          pbVar14 = (byte *)((long)param_1 + 1);
          bVar3 = (byte)*param_1;
          sVar31 = (ulong)bVar3 & 0xf;
          if (sVar31 < 9) break;
          if (sVar31 == 0xf) {
            bVar4 = *(byte *)((long)param_1 + 1);
            if ((ulong)bVar4 < 0xc0) {
              puVar26 = param_1 + 1;
              sVar31 = (ulong)bVar4 + 0xf;
              if ((long)param_2 - (long)puVar26 < (long)sVar31) goto LAB_0015afa0;
            }
            else {
              puVar26 = (ushort *)((long)param_1 + 3);
              sVar31 = ((ulong)((uint)bVar4 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)param_1[1];
              if ((long)param_2 - (long)puVar26 < (long)sVar31) goto LAB_0015afa0;
            }
            if ((long)puVar2 - (long)param_3 < (long)sVar31) goto LAB_0015afa0;
            memmove(param_3,puVar26,sVar31);
            param_3 = (undefined8 *)((long)param_3 + sVar31);
            puVar26 = (ushort *)((long)puVar26 + sVar31);
            if (param_3 == puVar2) goto LAB_0015a42c;
            if (puVar26 < puVar32) goto LAB_00159c48;
            if (param_2 <= puVar26) goto LAB_0015b458;
            if (param_2 == auStack_70 + 8) goto LAB_0015b484;
            memmove(local_e0,puVar26,(long)param_2 - (long)puVar26);
            local_e8 = (ushort *)((long)local_e8 + ((long)local_e0 - (long)puVar26));
            param_2 = auStack_70;
            puVar32 = auStack_ae;
            puVar26 = local_e0;
            uVar5 = local_e0[0];
          }
          else {
            if ((long)puVar2 - (long)param_3 < (long)sVar31) {
              sVar31 = (size_t)(int)((long)puVar2 - (long)param_3);
              if ((long)param_2 - (long)pbVar14 < (long)sVar31) goto LAB_0015aeb0;
            }
            else if ((long)param_2 - (long)pbVar14 < (long)sVar31) goto LAB_0015aeb0;
            memmove(param_3,pbVar14,sVar31);
            param_3 = (undefined8 *)((long)param_3 + sVar31);
            puVar26 = (ushort *)(pbVar14 + sVar31);
            if (param_3 == puVar2) goto LAB_0015a42c;
LAB_00159c48:
            uVar5 = *puVar26;
          }
          uVar17 = (ulong)(bVar3 >> 4);
          uVar18 = (ulong)uVar5;
          if (bVar3 < 0x90) {
            uVar17 = uVar17 + 4;
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a540;
            param_1 = puVar26 + 1;
            puVar33 = (undefined8 *)((long)param_3 - uVar18);
            if (uVar17 < 8) goto LAB_00159bb0;
            *param_3 = *puVar33;
            puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
            puVar10 = puVar33;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
          }
          else if (uVar17 == 0xf) {
            uVar21 = uVar18 & 0x7f;
            if ((uVar5 >> 7 & 1) != 0) {
              uVar17 = (uVar21 >> 3) + 4;
              if (uVar21 >> 3 == 0xf) {
                bVar3 = *(byte *)((long)puVar26 + 1);
                if ((ulong)bVar3 < 0xc0) {
                  param_1 = puVar26 + 1;
                  uVar17 = (ulong)bVar3 + 0x13;
                  if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a14c;
                }
                else {
                  param_1 = (ushort *)((long)puVar26 + 3);
                  uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13) + (ulong)(byte)puVar26[1];
                  if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a14c;
                }
              }
              else {
                param_1 = (ushort *)((long)puVar26 + 1);
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a14c;
              }
              uVar21 = uVar17 & 7;
              uVar19 = uVar17;
              if (uVar21 == 0) {
                puVar22 = (undefined1 *)((long)param_3 - (uVar18 & 7));
                puVar33 = param_3;
              }
              else {
                lVar24 = -(uVar18 & 7);
                puVar10 = param_3;
                do {
                  uVar19 = uVar19 - 1;
                  puVar33 = (undefined8 *)((long)puVar10 + 1);
                  *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar24);
                  uVar21 = uVar21 - 1;
                  puVar10 = puVar33;
                } while (uVar21 != 0);
                puVar22 = (undefined1 *)((long)puVar33 + lVar24);
              }
              if (6 < uVar17 - 1) {
                do {
                  *(undefined1 *)puVar33 = *puVar22;
                  *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
                  *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
                  *(undefined1 *)((long)puVar33 + 3) = puVar22[3];
                  *(undefined1 *)((long)puVar33 + 4) = puVar22[4];
                  *(undefined1 *)((long)puVar33 + 5) = puVar22[5];
                  *(undefined1 *)((long)puVar33 + 6) = puVar22[6];
                  puVar1 = puVar22 + 7;
                  uVar19 = uVar19 - 8;
                  puVar22 = puVar22 + 8;
                  *(undefined1 *)((long)puVar33 + 7) = *puVar1;
                  puVar33 = puVar33 + 1;
                } while (uVar19 != 0);
              }
              goto LAB_00159dcc;
            }
            uVar5 = *(ushort *)((long)puVar26 + 1);
            uVar17 = uVar21 + 0x13;
            if (uVar21 == 0x7f) {
              bVar3 = *(byte *)((long)puVar26 + 3);
              if ((ulong)bVar3 < 0xc0) {
                param_1 = puVar26 + 2;
                uVar17 = (ulong)bVar3 + 0x92;
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
              }
              else {
                param_1 = (ushort *)((long)puVar26 + 5);
                uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar26[2];
                if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
              }
            }
            else {
              param_1 = (ushort *)((long)puVar26 + 3);
              if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
            }
            puVar33 = (undefined8 *)((long)param_3 - (ulong)uVar5);
            if (uVar17 < 8) goto LAB_00159bb0;
            *param_3 = *puVar33;
            puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
            puVar10 = puVar33;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - (ulong)uVar5);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
          }
          else {
            uVar17 = uVar17 + 4;
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a1bc;
            param_1 = puVar26 + 1;
            puVar33 = (undefined8 *)((long)param_3 - uVar18);
            if (uVar17 < 8) goto LAB_00159bb0;
            *param_3 = *puVar33;
            puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
            puVar10 = puVar33;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
          }
LAB_00159bf8:
          param_3 = (undefined8 *)((long)param_3 + uVar17);
          puVar26 = param_1;
          if (puVar32 <= param_1) goto LAB_00159a98;
        }
        if (((long)puVar2 - (long)param_3 < (long)sVar31) ||
           ((long)param_2 - (long)pbVar14 < (long)sVar31)) goto LAB_0015a514;
        memmove(param_3,pbVar14,sVar31);
        param_3 = (undefined8 *)((long)param_3 + sVar31);
        puVar26 = (ushort *)(pbVar14 + sVar31);
        if (param_3 == puVar2) goto LAB_0015a42c;
        uVar18 = (ulong)*puVar26;
        uVar17 = (ulong)(bVar3 >> 4);
        if (bVar3 < 0x90) {
          uVar17 = uVar17 + 4;
          if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a540;
          param_1 = puVar26 + 1;
          puVar33 = (undefined8 *)((long)param_3 - uVar18);
          if (7 < uVar17) {
            *param_3 = *puVar33;
            puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
            puVar10 = puVar33;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
            goto LAB_00159bf8;
          }
LAB_00159bb0:
          memmove(param_3,puVar33,uVar17);
          param_3 = (undefined8 *)((long)param_3 + uVar17);
          puVar26 = param_1;
          if (puVar32 <= param_1) break;
          goto LAB_00159adc;
        }
        if (uVar17 != 0xf) {
          uVar17 = uVar17 + 4;
          if ((long)uVar17 < (long)puVar2 - (long)param_3) {
            param_1 = puVar26 + 1;
            puVar33 = (undefined8 *)((long)param_3 - uVar18);
            if (uVar17 < 8) goto LAB_00159bb0;
            *param_3 = *puVar33;
            puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
            puVar10 = puVar33;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *(undefined8 *)((long)puVar10 - uVar18);
              puVar10 = puVar9;
            } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x18)));
            goto LAB_00159bf8;
          }
          goto LAB_0015a1bc;
        }
        uVar21 = uVar18 & 0x7f;
        param_1 = (ushort *)((long)puVar26 + 1);
        if ((*puVar26 >> 7 & 1) == 0) {
          uVar5 = *param_1;
          uVar17 = uVar21 + 0x13;
          if (uVar21 == 0x7f) {
            bVar3 = *(byte *)((long)puVar26 + 3);
            if ((ulong)bVar3 < 0xc0) {
              uVar17 = (ulong)bVar3 + 0x92;
              param_1 = puVar26 + 2;
              if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
            }
            else {
              param_1 = (ushort *)((long)puVar26 + 5);
              uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)puVar26[2];
              if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
            }
          }
          else {
            param_1 = (ushort *)((long)puVar26 + 3);
            if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015af74;
          }
          puVar33 = (undefined8 *)((long)param_3 - (ulong)uVar5);
          if (uVar17 < 8) goto LAB_00159bb0;
          *param_3 = *puVar33;
          puVar33 = (undefined8 *)((long)param_3 + (uVar17 & 7));
          puVar10 = puVar33;
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined8 *)((long)puVar10 - (ulong)uVar5);
            puVar10 = puVar9;
          } while (puVar9 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
          goto LAB_00159bf8;
        }
        uVar17 = (uVar21 >> 3) + 4;
        if (uVar21 >> 3 == 0xf) {
          bVar3 = *(byte *)param_1;
          uVar21 = (ulong)bVar3;
          uVar17 = 0x13;
          param_1 = puVar26 + 1;
          if (0xbf < uVar21) {
            uVar17 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
            param_1 = (ushort *)((long)puVar26 + 3);
            uVar21 = (ulong)(byte)puVar26[1];
          }
          uVar17 = uVar17 + uVar21;
          if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a14c;
        }
        else if ((long)puVar2 - (long)param_3 <= (long)uVar17) goto LAB_0015a14c;
        uVar21 = uVar17 & 7;
        uVar19 = uVar17;
        if (uVar21 == 0) {
          puVar22 = (undefined1 *)((long)param_3 - (uVar18 & 7));
          puVar33 = param_3;
        }
        else {
          lVar24 = -(uVar18 & 7);
          puVar10 = param_3;
          do {
            uVar19 = uVar19 - 1;
            puVar33 = (undefined8 *)((long)puVar10 + 1);
            *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar24);
            uVar21 = uVar21 - 1;
            puVar10 = puVar33;
          } while (uVar21 != 0);
          puVar22 = (undefined1 *)((long)puVar33 + lVar24);
        }
        if (6 < uVar17 - 1) {
          do {
            *(undefined1 *)puVar33 = *puVar22;
            *(undefined1 *)((long)puVar33 + 1) = puVar22[1];
            *(undefined1 *)((long)puVar33 + 2) = puVar22[2];
            *(undefined1 *)((long)puVar33 + 3) = puVar22[3];
            *(undefined1 *)((long)puVar33 + 4) = puVar22[4];
            *(undefined1 *)((long)puVar33 + 5) = puVar22[5];
            *(undefined1 *)((long)puVar33 + 6) = puVar22[6];
            puVar1 = puVar22 + 7;
            uVar19 = uVar19 - 8;
            puVar22 = puVar22 + 8;
            *(undefined1 *)((long)puVar33 + 7) = *puVar1;
            puVar33 = puVar33 + 1;
          } while (uVar19 != 0);
        }
LAB_00159dcc:
        param_3 = (undefined8 *)((long)param_3 + uVar17);
        puVar26 = param_1;
      } while (param_1 < puVar32);
      goto LAB_00159a98;
    }
    FUN_0015c3d0();
    pcVar16 = *(code **)PTR_PTR_047cb868;
    if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
    pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
    pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
    uVar12 = 0x666;
  }
LAB_0015ab94:
  (*pcVar16)(0,pcVar11,uVar12,pcVar13);
LAB_0015ab98:
  FUN_0015c3f0();
  return -1;
code_r0x00158280:
  puVar27 = (ushort *)((long)puVar15 + 3);
  uVar21 = (ulong)*param_1;
  uVar17 = uVar18 + 0x13;
  if (uVar18 == 0x7f) {
    puVar28 = puVar15 + 2;
    bVar3 = *(byte *)puVar27;
    if ((ulong)bVar3 < 0xc0) {
      uVar17 = (ulong)bVar3 + 0x92;
      param_1 = puVar28;
      if ((long)puVar33 - (long)puVar10 <= (long)uVar17) {
LAB_0015a77c:
        if ((long)puVar2 - (long)puVar10 <= (long)uVar17) goto LAB_0015b36c;
        puVar9 = (undefined8 *)((long)puVar10 - uVar21);
        if (7 < uVar17) {
          puVar33 = (undefined8 *)((long)puVar10 + (uVar17 & 7));
          *puVar10 = *puVar9;
          puVar9 = puVar33;
          do {
            puVar30 = puVar9 + 1;
            *puVar9 = *(undefined8 *)((long)puVar9 - uVar21);
            puVar9 = puVar30;
          } while (puVar30 < (undefined8 *)((long)puVar33 + (uVar17 & 0x1fffffff8)));
          goto LAB_0015a414;
        }
        goto LAB_0015a408;
      }
    }
    else {
      param_1 = (ushort *)((long)puVar15 + 5);
      uVar17 = ((ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92) + (ulong)(byte)*puVar28;
      puVar28 = param_1;
      if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015a77c;
    }
  }
  else {
    param_1 = puVar27;
    puVar28 = puVar27;
    if ((long)puVar33 - (long)puVar10 <= (long)uVar17) goto LAB_0015a77c;
  }
  param_3 = (undefined8 *)((long)puVar10 + uVar17);
  do {
    puVar9 = puVar10 + 1;
    *puVar10 = *(undefined8 *)((long)puVar10 - uVar21);
    puVar10 = puVar9;
  } while (puVar9 < param_3);
  goto LAB_00157f48;
LAB_00157f2c:
  *puVar10 = *puVar9;
  puVar10[1] = puVar9[1];
  *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar9 + 2);
  param_3 = (undefined8 *)((long)puVar10 + uVar17);
  goto LAB_00157f48;
LAB_0015b1b8:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
  uVar12 = 0x3d;
  goto LAB_0015ab94;
LAB_0015b1e4:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
  uVar12 = 0x3d;
  goto LAB_0015ab94;
LAB_00157a54:
  *puVar10 = *puVar9;
  *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
  param_3 = (undefined8 *)((long)puVar10 + uVar17);
  if (puVar32 <= param_1) goto LAB_0015798c;
  goto LAB_001579fc;
LAB_0015ab68:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  uVar12 = 0x62;
  goto LAB_0015ab94;
LAB_0015aeb0:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  uVar12 = 0x6f;
  goto LAB_0015ab94;
LAB_0015afa0:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  uVar12 = 0x42;
  goto LAB_0015ab94;
LAB_0015b458:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
  uVar12 = 0x4f;
  goto LAB_0015ab94;
LAB_0015b484:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
  uVar12 = 0x4f;
  goto LAB_0015ab94;
LAB_0015a514:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  uVar12 = 0x9b;
  goto LAB_0015ab94;
LAB_0015a1e8:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  uVar12 = 0x1a;
  goto LAB_0015ab94;
LAB_0015a1bc:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  uVar12 = 0x74;
  goto LAB_0015ab94;
LAB_0015a214:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  uVar12 = 0x4e;
  goto LAB_0015ab94;
LAB_0015a8ac:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  uVar12 = 0x9e;
  goto LAB_0015ab94;
LAB_0015a880:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  uVar12 = 0xd9;
  goto LAB_0015ab94;
LAB_0015af74:
  FUN_0015c3d0();
  pcVar16 = *(code **)PTR_PTR_047cb868;
  if (pcVar16 == (code *)0x0) goto LAB_0015ab98;
  pcVar11 = "v:/devel/projects/oodle2/core/lzb_decode_inner2.inl";
  pcVar13 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  uVar12 = 0x101;
  goto LAB_0015ab94;
}


