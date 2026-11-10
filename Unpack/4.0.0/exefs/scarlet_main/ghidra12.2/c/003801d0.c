/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003801d0; name: FUN_003801d0
 */


int FUN_003801d0(long *param_1,int param_2)

{
  ushort *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  bool bVar14;
  void *__dest;
  ulong uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 uVar21;
  ushort *puVar22;
  char *pcVar23;
  undefined1 *puVar24;
  int iVar25;
  uint *puVar26;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  undefined2 uVar33;
  uint uVar34;
  ulong uVar35;
  byte *pbVar36;
  uint uVar37;
  int iVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long lVar44;
  undefined8 *puVar45;
  ulong uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  int local_b8;
  int local_80;
  uint local_7c;
  undefined4 local_64;
  
  Libz_SigloMiddlewareInfo();
  if ((((param_1 != (long *)0x0) && (param_1[8] != 0)) && (param_1[9] != 0)) &&
     ((puVar45 = (undefined8 *)param_1[7], puVar45 != (undefined8 *)0x0 &&
      ((long *)*puVar45 == param_1)))) {
    puVar26 = (uint *)(puVar45 + 1);
    uVar41 = *puVar26;
    if (((uVar41 - 0x3f34 < 0x20) &&
        (puVar39 = (undefined1 *)param_1[3], puVar39 != (undefined1 *)0x0)) &&
       ((pbVar17 = (byte *)*param_1, pbVar17 != (byte *)0x0 || ((int)param_1[1] == 0)))) {
      if (uVar41 == 0x3f3f) {
        uVar41 = 0x3f40;
        *puVar26 = 0x3f40;
      }
      puVar2 = puVar45 + 4;
      puVar3 = puVar45 + 0xab;
      puVar4 = puVar45 + 0x12;
      local_7c = *(uint *)(param_1 + 4);
      uVar9 = *(uint *)(param_1 + 1);
      uVar43 = puVar45[10];
      uVar46 = (ulong)uVar9;
      uVar19 = (ulong)*(uint *)(puVar45 + 0xb);
      puVar5 = puVar45 + 99;
      local_80 = 0;
      uVar16 = local_7c;
LAB_003802fc:
      uVar20 = (uint)uVar46;
      uVar18 = (uint)uVar19;
      iVar25 = 1;
      switch(uVar41) {
      case 0x3f34:
        uVar41 = *(uint *)(puVar45 + 2);
        if (uVar41 != 0) {
          if (0xf < uVar18) {
LAB_0038037c:
            if (((uVar41 >> 1 & 1) == 0) || (uVar43 != 0x8b1f)) {
              *(undefined4 *)(puVar45 + 3) = 0;
              if (puVar45[6] != 0) {
                *(undefined4 *)(puVar45[6] + 0x48) = 0xffffffff;
              }
              if (((uVar41 & 1) != 0) &&
                 ((((ulong)(uint)((int)uVar43 << 8) & 0xff00) + (uVar43 >> 8)) * -0x1084210842108421
                  < 0x842108421084211)) {
                if ((uVar43 & 0xf) != 8) goto LAB_00381f1c;
                uVar15 = uVar43 >> 4 & 0xf;
                uVar20 = (uint)uVar15;
                uVar41 = uVar20 + 8;
                uVar18 = *(uint *)(puVar45 + 7);
                if (*(uint *)(puVar45 + 7) == 0) {
                  *(uint *)(puVar45 + 7) = uVar41;
                  uVar18 = uVar41;
                }
                if ((uVar20 < 8) && (uVar41 <= uVar18)) {
                  *(int *)((long)puVar45 + 0x1c) = 0x100 << uVar15;
                  lVar44 = FUN_0037fbe0(0,0,0);
                  puVar45[4] = lVar44;
                  uVar21 = 0x3f3f;
                  if ((uVar43 & 0x2000) != 0) {
                    uVar21 = 0x3f3d;
                  }
                  uVar19 = 0;
                  param_1[0xc] = lVar44;
                  *(undefined4 *)(puVar45 + 1) = uVar21;
                  uVar43 = 0;
                }
                else {
                  uVar43 = uVar43 >> 4;
                  uVar19 = (ulong)((int)uVar19 - 4);
                  param_1[6] = (long)"invalid window size";
                  *puVar26 = 0x3f51;
                }
                goto LAB_003802f4;
              }
              pcVar23 = "incorrect header check";
              goto LAB_00381f24;
            }
            if (*(int *)(puVar45 + 7) == 0) {
              *(undefined4 *)(puVar45 + 7) = 0xf;
            }
            uVar19 = FUN_0037fe70(0,0,0);
            *puVar2 = uVar19;
            local_64 = CONCAT22(local_64._2_2_,0x8b1f);
            uVar19 = FUN_0037fe70(uVar19,&local_64,2);
            *puVar2 = uVar19;
            uVar41 = 0x3f35;
            uVar43 = 0;
            uVar19 = 0;
            goto LAB_00381f30;
          }
          if (uVar20 == 0) goto LAB_0038220c;
          uVar42 = uVar20 - 1;
          bVar14 = 7 < uVar18;
          uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
          uVar15 = uVar19 + 8;
          uVar18 = (uint)uVar15;
          pbVar28 = pbVar17 + 1;
          if (bVar14) {
LAB_00380370:
            pbVar17 = pbVar28;
            uVar46 = (ulong)uVar42;
            uVar19 = uVar15 & 0xffffffff;
            goto LAB_0038037c;
          }
          if (uVar42 != 0) {
            uVar42 = uVar20 - 2;
            uVar43 = ((ulong)pbVar17[1] << (uVar15 & 0x3f)) + uVar43;
            uVar15 = uVar19 + 0x10;
            pbVar28 = pbVar17 + 2;
            goto LAB_00380370;
          }
          goto LAB_00382214;
        }
        uVar41 = 0x3f40;
        goto LAB_00381f30;
      case 0x3f35:
        if (uVar18 < 0x10) {
          if (uVar20 == 0) {
LAB_0038228c:
            pbVar28 = pbVar17;
            uVar41 = uVar18;
            goto LAB_00382290;
          }
          uVar42 = uVar20 - 1;
          uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
          uVar15 = uVar19 + 8;
          pbVar28 = pbVar17 + 1;
          if (uVar18 < 8) {
            uVar41 = (uint)uVar15;
            if (uVar42 == 0) goto LAB_00382290;
            uVar42 = uVar20 - 2;
            uVar43 = ((ulong)pbVar17[1] << (uVar15 & 0x3f)) + uVar43;
            uVar15 = uVar19 + 0x10;
            pbVar28 = pbVar17 + 2;
          }
          pbVar17 = pbVar28;
          uVar46 = (ulong)uVar42;
          uVar19 = uVar15 & 0xffffffff;
        }
        uVar20 = (uint)uVar46;
        uVar41 = (uint)uVar43;
        *(uint *)(puVar45 + 3) = uVar41;
        if ((uVar41 & 0xff) == 8) {
          if ((uVar43 & 0xe000) == 0) {
            if ((uint *)puVar45[6] != (uint *)0x0) {
              *(uint *)puVar45[6] = uVar41 >> 8 & 1;
            }
            if (((uVar41 >> 9 & 1) != 0) && ((*(byte *)(puVar45 + 2) >> 2 & 1) != 0)) {
              local_64 = CONCAT22(local_64._2_2_,(short)uVar43);
              uVar19 = FUN_0037fe70(*puVar2,&local_64,2);
              *puVar2 = uVar19;
            }
            uVar19 = 0;
            uVar43 = 0;
            *puVar26 = 0x3f36;
            goto LAB_00380c98;
          }
          pcVar23 = "unknown header flags set";
        }
        else {
LAB_00381f1c:
          pcVar23 = "unknown compression method";
        }
        goto LAB_00381f24;
      case 0x3f36:
        if (uVar18 < 0x20) {
LAB_00380c98:
          uVar18 = (uint)uVar19;
          if (uVar20 != 0) {
            pbVar36 = pbVar17 + 1;
            uVar41 = uVar20 - 1;
            uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
            if (0x17 < uVar18) {
LAB_00380d24:
              pbVar17 = pbVar36;
              uVar20 = uVar41;
              goto LAB_00380d2c;
            }
            uVar42 = (uint)(uVar19 + 8);
            if (uVar41 == 0) {
LAB_003822a4:
              uVar18 = uVar42;
            }
            else {
              uVar41 = uVar20 - 2;
              pbVar36 = pbVar17 + 2;
              uVar43 = ((ulong)pbVar17[1] << (uVar19 + 8 & 0x3f)) + uVar43;
              if (0xf < uVar18) goto LAB_00380d24;
              uVar42 = (uint)(uVar19 + 0x10);
              if (uVar41 == 0) goto LAB_003822a4;
              uVar41 = uVar20 - 3;
              uVar43 = ((ulong)pbVar17[2] << (uVar19 + 0x10 & 0x3f)) + uVar43;
              pbVar36 = pbVar17 + 3;
              if (7 < uVar18) goto LAB_00380d24;
              uVar18 = (uint)(uVar19 + 0x18);
              if (uVar41 != 0) {
                pbVar28 = pbVar17 + 3;
                pbVar17 = pbVar17 + 4;
                uVar43 = ((ulong)*pbVar28 << (uVar19 + 0x18 & 0x3f)) + uVar43;
                uVar20 = uVar20 - 4;
                goto LAB_00380d2c;
              }
            }
LAB_003822a8:
            pbVar17 = pbVar36;
          }
        }
        else {
LAB_00380d2c:
          if (puVar45[6] != 0) {
            *(ulong *)(puVar45[6] + 8) = uVar43;
          }
          if (((*(byte *)((long)puVar45 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(puVar45 + 2) >> 2 & 1) != 0)) {
            local_64 = (undefined4)uVar43;
            uVar19 = FUN_0037fe70(*puVar2,&local_64,4);
            *puVar2 = uVar19;
          }
          uVar19 = 0;
          uVar43 = 0;
          *puVar26 = 0x3f37;
          pbVar28 = pbVar17;
LAB_00380d88:
          uVar18 = (uint)uVar19;
          pbVar17 = pbVar28;
          if (uVar20 != 0) {
            pbVar17 = pbVar28 + 1;
            uVar43 = ((ulong)*pbVar28 << (uVar19 & 0x3f)) + uVar43;
            if (uVar18 < 8) {
              uVar18 = (uint)(uVar19 + 8);
              pbVar36 = pbVar17;
              if (uVar20 - 1 == 0) goto LAB_003822a8;
              pbVar17 = pbVar28 + 2;
              uVar46 = (ulong)(uVar20 - 2);
              uVar43 = ((ulong)pbVar28[1] << (uVar19 + 8 & 0x3f)) + uVar43;
            }
            else {
              uVar46 = (ulong)(uVar20 - 1);
            }
            goto LAB_00380dd4;
          }
        }
        break;
      case 0x3f37:
        pbVar28 = pbVar17;
        if (uVar18 < 0x10) goto LAB_00380d88;
LAB_00380dd4:
        uVar20 = (uint)uVar46;
        lVar44 = puVar45[6];
        if (lVar44 != 0) {
          *(uint *)(lVar44 + 0x10) = (uint)uVar43 & 0xff;
          *(int *)(lVar44 + 0x14) = (int)(uVar43 >> 8);
        }
        if (((*(byte *)((long)puVar45 + 0x19) >> 1 & 1) != 0) &&
           ((*(byte *)(puVar45 + 2) >> 2 & 1) != 0)) {
          local_64 = CONCAT22(local_64._2_2_,(short)uVar43);
          uVar19 = FUN_0037fe70(*puVar2,&local_64,2);
          *puVar2 = uVar19;
        }
        *(undefined4 *)(puVar45 + 1) = 0x3f38;
        uVar41 = *(uint *)(puVar45 + 3);
        uVar43 = 0;
        uVar19 = 0;
        pbVar36 = pbVar17;
        uVar15 = 0;
        if ((uVar41 >> 10 & 1) == 0) {
LAB_00380e40:
          if (puVar45[6] != 0) {
            *(undefined8 *)(puVar45[6] + 0x18) = 0;
          }
          goto LAB_00380eec;
        }
LAB_00380e50:
        uVar18 = (uint)uVar15;
        pbVar17 = pbVar36;
        if (uVar20 != 0) {
          pbVar17 = pbVar36 + 1;
          uVar43 = ((ulong)*pbVar36 << (uVar15 & 0x3f)) + uVar43;
          if (uVar18 < 8) {
            uVar18 = (uint)(uVar15 + 8);
            pbVar28 = pbVar17;
            if (uVar20 - 1 == 0) goto LAB_003822b4;
            pbVar17 = pbVar36 + 2;
            uVar46 = (ulong)(uVar20 - 2);
            uVar43 = ((ulong)pbVar36[1] << (uVar15 + 8 & 0x3f)) + uVar43;
          }
          else {
            uVar46 = (ulong)(uVar20 - 1);
          }
          goto LAB_00380e9c;
        }
        break;
      case 0x3f38:
        uVar41 = *(uint *)(puVar45 + 3);
        if ((uVar41 >> 10 & 1) == 0) goto LAB_00380e40;
        pbVar36 = pbVar17;
        uVar15 = uVar19;
        if (uVar18 < 0x10) goto LAB_00380e50;
LAB_00380e9c:
        *(int *)((long)puVar45 + 0x5c) = (int)uVar43;
        if (puVar45[6] != 0) {
          *(int *)(puVar45[6] + 0x20) = (int)uVar43;
        }
        if (((uVar41 >> 9 & 1) != 0) && ((*(byte *)(puVar45 + 2) >> 2 & 1) != 0)) {
          local_64 = CONCAT22(local_64._2_2_,(short)uVar43);
          uVar19 = FUN_0037fe70(*puVar2,&local_64,2);
          *puVar2 = uVar19;
        }
        uVar43 = 0;
        uVar19 = 0;
LAB_00380eec:
        *puVar26 = 0x3f39;
      case 0x3f39:
        uVar41 = *(uint *)(puVar45 + 3);
        if ((uVar41 >> 10 & 1) != 0) {
          uVar42 = *(uint *)((long)puVar45 + 0x5c);
          uVar20 = (uint)uVar46;
          uVar18 = uVar20;
          if (uVar42 <= uVar20) {
            uVar18 = uVar42;
          }
          if (uVar18 != 0) {
            lVar44 = puVar45[6];
            if ((lVar44 != 0) && (*(long *)(lVar44 + 0x18) != 0)) {
              uVar42 = *(int *)(lVar44 + 0x20) - uVar42;
              uVar41 = *(uint *)(lVar44 + 0x24) - uVar42;
              if (uVar42 + uVar18 <= *(uint *)(lVar44 + 0x24)) {
                uVar41 = uVar18;
              }
              memcpy((void *)(*(long *)(lVar44 + 0x18) + (ulong)uVar42),pbVar17,(ulong)uVar41);
              uVar41 = *(uint *)(puVar45 + 3);
            }
            if (((uVar41 >> 9 & 1) != 0) && ((*(byte *)(puVar45 + 2) >> 2 & 1) != 0)) {
              uVar46 = FUN_0037fe70(*puVar2,pbVar17,uVar18);
              *puVar2 = uVar46;
            }
            pbVar17 = pbVar17 + uVar18;
            uVar46 = (ulong)(uVar20 - uVar18);
            uVar42 = *(int *)((long)puVar45 + 0x5c) - uVar18;
            *(uint *)((long)puVar45 + 0x5c) = uVar42;
          }
          uVar20 = (uint)uVar46;
          if (uVar42 == 0) goto LAB_00380ff4;
LAB_00381fb4:
          uVar18 = (uint)uVar19;
          iVar25 = local_80;
          goto switchD_00380318_caseD_3f50;
        }
LAB_00380ff4:
        *(undefined4 *)((long)puVar45 + 0x5c) = 0;
        *(undefined4 *)(puVar45 + 1) = 0x3f3a;
switchD_00380318_caseD_3f3a:
        uVar18 = (uint)uVar19;
        local_b8 = (int)uVar46;
        if ((*(byte *)((long)puVar45 + 0x19) >> 3 & 1) != 0) {
          uVar20 = 0;
          if (local_b8 == 0) goto LAB_00381fb4;
          uVar15 = 0;
          do {
            bVar10 = pbVar17[uVar15];
            uVar15 = uVar15 + 1;
            lVar44 = puVar45[6];
            if ((lVar44 != 0) && (lVar29 = *(long *)(lVar44 + 0x28), lVar29 != 0)) {
              uVar41 = *(uint *)((long)puVar45 + 0x5c);
              if (uVar41 < *(uint *)(lVar44 + 0x30)) {
                *(uint *)((long)puVar45 + 0x5c) = uVar41 + 1;
                *(byte *)(lVar29 + (ulong)uVar41) = bVar10;
              }
            }
          } while ((uVar15 < (uVar46 & 0xffffffff)) && (bVar10 != 0));
          if (((*(byte *)((long)puVar45 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(puVar45 + 2) >> 2 & 1) != 0)) {
            uVar27 = FUN_0037fe70(*puVar2,pbVar17,uVar15 & 0xffffffff);
            *puVar2 = uVar27;
          }
          pbVar17 = pbVar17 + uVar15;
          if (bVar10 == 0) {
            uVar46 = (uVar46 & 0xffffffff) - uVar15;
            goto LAB_003810d0;
          }
LAB_003821fc:
          uVar20 = local_b8 - (int)uVar15;
          iVar25 = local_80;
          goto switchD_00380318_caseD_3f50;
        }
        if (puVar45[6] != 0) {
          *(undefined8 *)(puVar45[6] + 0x28) = 0;
        }
LAB_003810d0:
        *(undefined4 *)((long)puVar45 + 0x5c) = 0;
        *(undefined4 *)(puVar45 + 1) = 0x3f3b;
switchD_00380318_caseD_3f3b:
        uVar18 = (uint)uVar19;
        local_b8 = (int)uVar46;
        if ((*(byte *)((long)puVar45 + 0x19) >> 4 & 1) == 0) {
          if (puVar45[6] != 0) {
            *(undefined8 *)(puVar45[6] + 0x38) = 0;
          }
        }
        else {
          uVar20 = 0;
          if (local_b8 == 0) goto LAB_00381fb4;
          uVar15 = 0;
          do {
            bVar10 = pbVar17[uVar15];
            uVar15 = uVar15 + 1;
            lVar44 = puVar45[6];
            if ((lVar44 != 0) && (lVar29 = *(long *)(lVar44 + 0x38), lVar29 != 0)) {
              uVar41 = *(uint *)((long)puVar45 + 0x5c);
              if (uVar41 < *(uint *)(lVar44 + 0x40)) {
                *(uint *)((long)puVar45 + 0x5c) = uVar41 + 1;
                *(byte *)(lVar29 + (ulong)uVar41) = bVar10;
              }
            }
          } while ((uVar15 < (uVar46 & 0xffffffff)) && (bVar10 != 0));
          if (((*(byte *)((long)puVar45 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(puVar45 + 2) >> 2 & 1) != 0)) {
            uVar27 = FUN_0037fe70(*puVar2,pbVar17,uVar15 & 0xffffffff);
            *puVar2 = uVar27;
          }
          pbVar17 = pbVar17 + uVar15;
          if (bVar10 != 0) goto LAB_003821fc;
          uVar46 = (uVar46 & 0xffffffff) - uVar15;
        }
        *puVar26 = 0x3f3c;
switchD_00380318_caseD_3f3c:
        uVar18 = (uint)uVar19;
        if ((*(uint *)(puVar45 + 3) >> 9 & 1) == 0) {
LAB_00381244:
          lVar44 = puVar45[6];
          if (lVar44 != 0) {
            *(uint *)(lVar44 + 0x44) = *(uint *)(puVar45 + 3) >> 9 & 1;
            *(undefined4 *)(lVar44 + 0x48) = 1;
          }
          uVar15 = FUN_0037fe70(0,0,0);
          *puVar2 = uVar15;
          param_1[0xc] = uVar15;
          *puVar26 = 0x3f3f;
          goto LAB_003802f4;
        }
        if (uVar18 < 0x10) {
          iVar25 = (int)uVar46;
          if (iVar25 == 0) {
LAB_0038220c:
            pbVar28 = pbVar17;
LAB_00382214:
            pbVar17 = pbVar28;
LAB_00382274:
            uVar20 = 0;
            iVar25 = local_80;
            goto switchD_00380318_caseD_3f50;
          }
          uVar41 = iVar25 - 1;
          bVar14 = uVar18 < 8;
          uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
          uVar15 = uVar19 + 8;
          uVar18 = (uint)uVar15;
          pbVar28 = pbVar17 + 1;
          if (bVar14) {
            if (uVar41 == 0) goto LAB_00382214;
            uVar41 = iVar25 - 2;
            uVar43 = ((ulong)pbVar17[1] << (uVar15 & 0x3f)) + uVar43;
            uVar15 = uVar19 + 0x10;
            pbVar28 = pbVar17 + 2;
          }
          pbVar17 = pbVar28;
          uVar46 = (ulong)uVar41;
          uVar19 = uVar15 & 0xffffffff;
        }
        if (((*(byte *)(puVar45 + 2) >> 2 & 1) == 0) || (uVar43 == (ushort)*puVar2)) {
          uVar43 = 0;
          uVar19 = 0;
          goto LAB_00381244;
        }
        pcVar23 = "header crc mismatch";
LAB_00381f24:
        param_1[6] = (long)pcVar23;
        uVar41 = 0x3f51;
LAB_00381f30:
        *puVar26 = uVar41;
LAB_003802f4:
        uVar41 = *puVar26;
        goto LAB_003802fc;
      case 0x3f3a:
        goto switchD_00380318_caseD_3f3a;
      case 0x3f3b:
        goto switchD_00380318_caseD_3f3b;
      case 0x3f3c:
        goto switchD_00380318_caseD_3f3c;
      case 0x3f3d:
        if (0x1f < uVar18) {
LAB_00380990:
          uVar15 = uVar43 >> 8;
          iVar25 = (int)uVar43;
          uVar19 = uVar43 >> 0x18;
          uVar43 = 0;
          uVar15 = uVar15 & 0xff00 | uVar19 & 0xff | (ulong)(uint)(iVar25 << 8) & 0xff0000 |
                   (ulong)(uint)(iVar25 << 0x18);
          *puVar2 = uVar15;
          uVar19 = 0;
          param_1[0xc] = uVar15;
          *puVar26 = 0x3f3e;
          goto switchD_00380318_caseD_3f3e;
        }
        if (uVar20 == 0) {
          break;
        }
        pbVar28 = pbVar17 + 1;
        uVar41 = uVar20 - 1;
        uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
        if (0x17 < uVar18) {
LAB_00380988:
          pbVar17 = pbVar28;
          uVar46 = (ulong)uVar41;
          goto LAB_00380990;
        }
        uVar42 = (uint)(uVar19 + 8);
        if (uVar41 == 0) {
LAB_003822b0:
          uVar18 = uVar42;
        }
        else {
          uVar41 = uVar20 - 2;
          pbVar28 = pbVar17 + 2;
          uVar43 = ((ulong)pbVar17[1] << (uVar19 + 8 & 0x3f)) + uVar43;
          if (0xf < uVar18) goto LAB_00380988;
          uVar42 = (uint)(uVar19 + 0x10);
          if (uVar41 == 0) goto LAB_003822b0;
          uVar41 = uVar20 - 3;
          uVar43 = ((ulong)pbVar17[2] << (uVar19 + 0x10 & 0x3f)) + uVar43;
          pbVar28 = pbVar17 + 3;
          if (7 < uVar18) goto LAB_00380988;
          uVar18 = (uint)(uVar19 + 0x18);
          if (uVar41 != 0) {
            pbVar28 = pbVar17 + 3;
            pbVar17 = pbVar17 + 4;
            uVar46 = (ulong)(uVar20 - 4);
            uVar43 = ((ulong)*pbVar28 << (uVar19 + 0x18 & 0x3f)) + uVar43;
            goto LAB_00380990;
          }
        }
LAB_003822b4:
        pbVar17 = pbVar28;
        break;
      case 0x3f3e:
switchD_00380318_caseD_3f3e:
        if (*(int *)((long)puVar45 + 0x14) == 0) {
          param_1[3] = (long)puVar39;
          *(uint *)(param_1 + 4) = uVar16;
          *param_1 = (long)pbVar17;
          *(int *)(param_1 + 1) = (int)uVar46;
          puVar45[10] = uVar43;
          *(int *)(puVar45 + 0xb) = (int)uVar19;
          return 2;
        }
        uVar15 = FUN_0037fbe0(0,0,0);
        *puVar2 = uVar15;
        param_1[0xc] = uVar15;
        *puVar26 = 0x3f3f;
      case 0x3f3f:
        uVar20 = (uint)uVar46;
        if (param_2 - 5U < 2) goto LAB_00381fb4;
switchD_00380318_caseD_3f40:
        uVar18 = (uint)uVar19;
        if (*(int *)((long)puVar45 + 0xc) != 0) {
          uVar19 = (ulong)(uVar18 & 0xfffffff8);
          uVar43 = uVar43 >> (uVar18 & 7);
          uVar41 = 0x3f4e;
          goto LAB_00381f30;
        }
        if (uVar18 < 3) {
          uVar20 = 0;
          if ((int)uVar46 == 0) goto LAB_00381fb4;
          uVar18 = uVar18 + 8;
          uVar46 = (ulong)((int)uVar46 - 1);
          uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
          pbVar17 = pbVar17 + 1;
        }
        uVar20 = (uint)uVar46;
        uVar42 = (uint)uVar43;
        *(uint *)((long)puVar45 + 0xc) = uVar42 & 1;
        uVar47 = DAT_03cb5648;
        uVar41 = 0x3f41;
        uVar43 = uVar43 >> 3;
        switch(uVar42 >> 1 & 3) {
        case 1:
          puVar45[0xd] = &DAT_03cda0d0;
          puVar45[0xe] = &DAT_03cda8d0;
          *(undefined4 *)(puVar45 + 1) = 0x3f47;
          puVar45[0xf] = uVar47;
          if (param_2 != 6) goto LAB_00380b10;
          uVar18 = uVar18 - 3;
          iVar25 = local_80;
          goto switchD_00380318_caseD_3f50;
        case 2:
          uVar41 = 0x3f44;
          break;
        case 3:
          param_1[6] = (long)"invalid block type";
          uVar41 = 0x3f51;
        }
        *puVar26 = uVar41;
LAB_00380b10:
        uVar19 = (ulong)(uVar18 - 3);
        goto LAB_003802f4;
      case 0x3f40:
        goto switchD_00380318_caseD_3f40;
      case 0x3f41:
        uVar41 = uVar18 & 7;
        uVar15 = uVar19 & 0xfffffff8;
        uVar18 = uVar18 & 0xfffffff8;
        uVar19 = (ulong)uVar18;
        uVar43 = uVar43 >> uVar41;
        if (uVar18 < 0x20) {
          if (uVar20 == 0) goto LAB_0038228c;
          uVar42 = uVar20 - 1;
          uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
          uVar27 = uVar19 + 8;
          pbVar28 = pbVar17 + 1;
          if (uVar18 < 0x18) {
            uVar41 = (uint)uVar27;
            if (uVar42 == 0) {
LAB_00382290:
              uVar18 = uVar41;
              pbVar17 = pbVar28;
              uVar20 = 0;
              iVar25 = local_80;
              goto switchD_00380318_caseD_3f50;
            }
            uVar42 = uVar20 - 2;
            uVar43 = ((ulong)pbVar17[1] << (uVar27 & 0x3f)) + uVar43;
            uVar27 = uVar19 + 0x10;
            pbVar28 = pbVar17 + 2;
            if (uVar18 < 0x10) {
              uVar41 = (uint)uVar27;
              if (uVar42 == 0) goto LAB_00382290;
              uVar42 = uVar20 - 3;
              uVar43 = ((ulong)pbVar17[2] << (uVar27 & 0x3f)) + uVar43;
              uVar27 = uVar19 + 0x18;
              pbVar28 = pbVar17 + 3;
              if (uVar15 == 0) {
                uVar41 = (uint)uVar27;
                if (uVar42 == 0) goto LAB_00382290;
                uVar42 = uVar20 - 4;
                uVar43 = ((ulong)pbVar17[3] << (uVar27 & 0x3f)) + uVar43;
                uVar27 = uVar19 + 0x20;
                pbVar28 = pbVar17 + 4;
              }
            }
          }
          pbVar17 = pbVar28;
          uVar46 = (ulong)uVar42;
          uVar19 = uVar27 & 0xffffffff;
        }
        uVar20 = (uint)uVar46;
        if ((uVar43 >> 0x10 ^ 0xffff) != (uVar43 & 0xffff)) {
          pcVar23 = "invalid stored block lengths";
          goto LAB_00381f24;
        }
        uVar19 = 0;
        *(uint *)((long)puVar45 + 0x5c) = (uint)uVar43 & 0xffff;
        *(undefined4 *)(puVar45 + 1) = 0x3f42;
        uVar43 = 0;
        if (param_2 == 6) goto LAB_00381fb4;
        goto switchD_00380318_caseD_3f42;
      case 0x3f42:
switchD_00380318_caseD_3f42:
        *puVar26 = 0x3f43;
switchD_00380318_caseD_3f43:
        uVar20 = (uint)uVar46;
        uVar41 = *(uint *)((long)puVar45 + 0x5c);
        if (uVar41 == 0) {
          uVar41 = 0x3f3f;
          goto LAB_00381f30;
        }
        uVar18 = uVar20;
        if (uVar41 <= uVar20) {
          uVar18 = uVar41;
        }
        uVar41 = uVar16;
        if (uVar18 <= uVar16) {
          uVar41 = uVar18;
        }
        if (uVar41 == 0) goto LAB_00381fb4;
        uVar15 = (ulong)uVar41;
        memcpy(puVar39,pbVar17,uVar15);
        uVar46 = (ulong)(uVar20 - uVar41);
        pbVar17 = pbVar17 + uVar15;
        uVar16 = uVar16 - uVar41;
        puVar39 = puVar39 + uVar15;
        *(uint *)((long)puVar45 + 0x5c) = *(int *)((long)puVar45 + 0x5c) - uVar41;
        goto LAB_003802f4;
      case 0x3f43:
        goto switchD_00380318_caseD_3f43;
      case 0x3f44:
        if (uVar18 < 0xe) {
          if (uVar20 == 0) goto LAB_0038228c;
          uVar42 = uVar20 - 1;
          uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
          uVar41 = (uint)(uVar19 + 8);
          pbVar28 = pbVar17 + 1;
          if (uVar18 < 6) {
            if (uVar42 == 0) goto LAB_00382290;
            uVar42 = uVar20 - 2;
            uVar43 = ((ulong)pbVar17[1] << (uVar19 + 8 & 0x3f)) + uVar43;
            pbVar28 = pbVar17 + 2;
            uVar41 = uVar18 + 0x10;
          }
          uVar18 = uVar41;
          pbVar17 = pbVar28;
          uVar46 = (ulong)uVar42;
        }
        uVar42 = (uint)uVar43;
        uVar20 = uVar42 >> 5 & 0x1f;
        *(uint *)((long)puVar45 + 0x84) = (uVar42 & 0x1f) + 0x101;
        *(uint *)(puVar45 + 0x11) = uVar20 + 1;
        uVar41 = (uVar42 >> 10 & 0xf) + 4;
        *(uint *)(puVar45 + 0x10) = uVar41;
        uVar43 = uVar43 >> 0xe;
        uVar19 = (ulong)(uVar18 - 0xe);
        if ((0x1d < (uVar42 & 0x1f)) || (0x1d < uVar20)) {
          pcVar23 = "too many length or distance symbols";
          goto LAB_00381f24;
        }
        uVar15 = 0;
        *(undefined4 *)((long)puVar45 + 0x8c) = 0;
        *(undefined4 *)(puVar45 + 1) = 0x3f45;
LAB_00380758:
        do {
          uVar18 = (uint)uVar19;
          pbVar28 = pbVar17;
          if (uVar18 < 3) {
            uVar20 = 0;
            if ((int)uVar46 == 0) goto LAB_00381fb4;
            pbVar28 = pbVar17 + 1;
            uVar18 = uVar18 + 8;
            uVar46 = (ulong)((int)uVar46 - 1);
            uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
          }
          uVar11 = (ushort)uVar43;
          uVar12 = *(ushort *)(&DAT_03cda0aa + uVar15 * 2);
          uVar15 = uVar15 + 1;
          uVar43 = uVar43 >> 3;
          uVar19 = (ulong)(uVar18 - 3);
          *(uint *)((long)puVar45 + 0x8c) = (uint)uVar15;
          *(ushort *)((long)puVar45 + (ulong)uVar12 * 2 + 0x98) = uVar11 & 7;
          pbVar17 = pbVar28;
        } while ((uint)uVar15 < uVar41);
        goto LAB_003807b8;
      case 0x3f45:
        uVar15 = (ulong)*(uint *)((long)puVar45 + 0x8c);
        uVar41 = *(uint *)(puVar45 + 0x10);
        if (*(uint *)((long)puVar45 + 0x8c) < uVar41) goto LAB_00380758;
LAB_003807b8:
        if ((uint)uVar15 < 0x13) {
          uVar41 = 0x12 - (uint)uVar15;
          uVar15 = uVar15 & 0xffffffff;
          if (uVar41 < 3) {
            uVar32 = uVar15;
LAB_00380c08:
            iVar25 = (int)uVar32;
            uVar41 = 3U - iVar25 & 3;
            uVar15 = uVar32;
            if (uVar41 != 0) {
              do {
                uVar32 = uVar15 + 1;
                *(undefined2 *)
                 ((long)puVar45 + (ulong)*(ushort *)(&DAT_03cda0aa + uVar15 * 2) * 2 + 0x98) = 0;
                uVar41 = uVar41 - 1;
                uVar15 = uVar32;
              } while (uVar41 != 0);
            }
            if (2 < 0x12U - iVar25) {
              iVar25 = (int)uVar32 + -0x13;
              puVar22 = (ushort *)(&DAT_03cda0ae + uVar32 * 2);
              do {
                iVar25 = iVar25 + 4;
                *(undefined2 *)((long)puVar45 + (ulong)puVar22[-2] * 2 + 0x98) = 0;
                *(undefined2 *)((long)puVar45 + (ulong)puVar22[-1] * 2 + 0x98) = 0;
                *(undefined2 *)((long)puVar45 + (ulong)*puVar22 * 2 + 0x98) = 0;
                puVar1 = puVar22 + 1;
                puVar22 = puVar22 + 4;
                *(undefined2 *)((long)puVar45 + (ulong)*puVar1 * 2 + 0x98) = 0;
              } while (iVar25 != 0);
            }
          }
          else {
            uVar27 = (ulong)uVar41 + 1;
            uVar35 = uVar27 & 0x1fffffffc;
            uVar32 = uVar35 + uVar15;
            puVar22 = (ushort *)(&DAT_03cda0ae + uVar15 * 2);
            uVar15 = uVar35;
            do {
              puVar1 = puVar22 + -2;
              uVar15 = uVar15 - 4;
              uVar13 = puVar22[-1];
              uVar12 = *puVar22;
              uVar11 = puVar22[1];
              puVar22 = puVar22 + 4;
              *(undefined2 *)((long)puVar45 + (ulong)*puVar1 * 2 + 0x98) = 0;
              *(undefined2 *)((long)puVar45 + (ulong)uVar13 * 2 + 0x98) = 0;
              *(undefined2 *)((long)puVar45 + (ulong)uVar12 * 2 + 0x98) = 0;
              *(undefined2 *)((long)puVar45 + (ulong)uVar11 * 2 + 0x98) = 0;
            } while (uVar15 != 0);
            if (uVar27 != uVar35) goto LAB_00380c08;
          }
          *(undefined4 *)((long)puVar45 + 0x8c) = 0x13;
        }
        puVar45[0x12] = puVar3;
        puVar45[0xd] = puVar3;
        *(undefined4 *)(puVar45 + 0xf) = 7;
        local_80 = FUN_00382f10(0,puVar45 + 0x13,0x13,puVar4,puVar45 + 0xf,puVar5);
        if (local_80 != 0) {
          param_1[6] = (long)"invalid code lengths set";
          uVar41 = 0x3f51;
          goto LAB_00381f30;
        }
        uVar41 = 0;
        local_80 = 0;
        *(undefined4 *)((long)puVar45 + 0x8c) = 0;
        *(undefined4 *)(puVar45 + 1) = 0x3f46;
LAB_00381348:
        iVar25 = *(int *)((long)puVar45 + 0x84);
        uVar42 = *(int *)(puVar45 + 0x11) + iVar25;
        if (uVar41 < uVar42) {
          lVar44 = puVar45[0xd];
          uVar30 = ~(-1 << (ulong)(*(uint *)(puVar45 + 0xf) & 0x1f));
          pbVar28 = pbVar17;
          uVar15 = uVar46;
          do {
            uVar32 = (ulong)(uVar30 & (uint)uVar43);
            bVar10 = *(byte *)(lVar44 + uVar32 * 4 + 1);
            uVar27 = (ulong)bVar10;
            uVar18 = (uint)uVar19;
            pbVar36 = pbVar28;
            uVar46 = uVar15;
            if (uVar18 < bVar10) {
              uVar46 = uVar15 & 0xffffffff;
              pbVar17 = pbVar28;
              do {
                if ((int)uVar46 == 0) goto LAB_00381fa0;
                pbVar36 = pbVar17 + 1;
                uVar27 = uVar19 & 0x3f;
                uVar19 = uVar19 + 8;
                uVar43 = ((ulong)*pbVar17 << uVar27) + uVar43;
                uVar20 = uVar30 & (uint)uVar43;
                uVar27 = (ulong)*(byte *)(lVar44 + (ulong)uVar20 * 4 + 1);
                uVar46 = (ulong)((int)uVar46 - 1);
                pbVar17 = pbVar36;
              } while (uVar19 < uVar27);
              uVar32 = (ulong)uVar20;
              uVar19 = uVar19 & 0xffffffff;
            }
            uVar12 = *(ushort *)(lVar44 + uVar32 * 4 + 2);
            iVar31 = (int)uVar27;
            uVar18 = (uint)uVar19;
            if (0xf < uVar12) {
              pbVar17 = pbVar36;
              if (uVar12 == 0x10) {
                if (uVar18 < iVar31 + 2U) {
                  do {
                    uVar20 = 0;
                    if ((int)uVar46 == 0) goto LAB_00381fb4;
                    pbVar36 = pbVar17 + 1;
                    uVar15 = uVar19 & 0x3f;
                    uVar19 = uVar19 + 8;
                    uVar46 = (ulong)((int)uVar46 - 1);
                    uVar43 = ((ulong)*pbVar17 << uVar15) + uVar43;
                    pbVar17 = pbVar36;
                  } while (uVar19 < iVar31 + 2U);
                }
                uVar43 = uVar43 >> (uVar27 & 0x3f);
                uVar18 = (int)uVar19 - iVar31;
                uVar19 = (ulong)uVar18;
                if (uVar41 != 0) {
                  uVar20 = ((uint)uVar43 & 3) + 3;
                  uVar33 = *(undefined2 *)((long)puVar45 + (ulong)(uVar41 - 1) * 2 + 0x98);
                  uVar43 = uVar43 >> 2;
                  uVar19 = (ulong)(uVar18 - 2);
                  goto LAB_003814fc;
                }
              }
              else {
                if (uVar12 == 0x11) {
                  if (uVar18 < iVar31 + 3U) {
                    do {
                      uVar20 = 0;
                      if ((int)uVar46 == 0) goto LAB_00381fb4;
                      pbVar36 = pbVar17 + 1;
                      uVar15 = uVar19 & 0x3f;
                      uVar19 = uVar19 + 8;
                      uVar46 = (ulong)((int)uVar46 - 1);
                      uVar43 = ((ulong)*pbVar17 << uVar15) + uVar43;
                      pbVar17 = pbVar36;
                    } while (uVar19 < iVar31 + 3U);
                  }
                  uVar15 = uVar43 >> (uVar27 & 0x3f);
                  uVar33 = 0;
                  uVar43 = uVar15 >> 3;
                  uVar19 = (ulong)(((int)uVar19 - iVar31) - 3);
                  uVar20 = ((uint)uVar15 & 7) + 3;
                }
                else {
                  if (uVar18 < iVar31 + 7U) {
                    do {
                      uVar20 = 0;
                      if ((int)uVar46 == 0) goto LAB_00381fb4;
                      pbVar36 = pbVar17 + 1;
                      uVar15 = uVar19 & 0x3f;
                      uVar19 = uVar19 + 8;
                      uVar46 = (ulong)((int)uVar46 - 1);
                      uVar43 = ((ulong)*pbVar17 << uVar15) + uVar43;
                      pbVar17 = pbVar36;
                    } while (uVar19 < iVar31 + 7U);
                  }
                  uVar15 = uVar43 >> (uVar27 & 0x3f);
                  uVar33 = 0;
                  uVar43 = uVar15 >> 7;
                  uVar19 = (ulong)(((int)uVar19 - iVar31) - 7);
                  uVar20 = ((uint)uVar15 & 0x7f) + 0xb;
                }
LAB_003814fc:
                if (uVar20 + uVar41 <= uVar42) {
                  uVar18 = uVar41;
                  uVar34 = uVar20;
                  if ((uVar20 < 0x20) || (CARRY4(uVar41,uVar20 - 1))) {
LAB_003815e4:
                    uVar20 = uVar34 - 1;
                    uVar41 = uVar34 & 3;
                    if (uVar41 != 0) {
                      uVar37 = uVar18;
                      do {
                        uVar18 = uVar37 + 1;
                        uVar34 = uVar34 - 1;
                        uVar41 = uVar41 - 1;
                        *(undefined2 *)((long)puVar45 + (ulong)uVar37 * 2 + 0x98) = uVar33;
                        uVar37 = uVar18;
                      } while (uVar41 != 0);
                    }
                    if (2 < uVar20) {
                      do {
                        uVar41 = uVar18 + 2;
                        *(undefined2 *)((long)puVar45 + (ulong)uVar18 * 2 + 0x98) = uVar33;
                        uVar34 = uVar34 - 4;
                        *(undefined2 *)((long)puVar45 + (ulong)(uVar18 + 1) * 2 + 0x98) = uVar33;
                        uVar20 = uVar18 + 3;
                        uVar18 = uVar18 + 4;
                        *(undefined2 *)((long)puVar45 + (ulong)uVar41 * 2 + 0x98) = uVar33;
                        *(undefined2 *)((long)puVar45 + (ulong)uVar20 * 2 + 0x98) = uVar33;
                      } while (uVar34 != 0);
                    }
                  }
                  else {
                    uVar47 = CONCAT26(uVar33,CONCAT24(uVar33,CONCAT22(uVar33,uVar33)));
                    uVar48 = CONCAT26(uVar33,CONCAT24(uVar33,CONCAT22(uVar33,uVar33)));
                    uVar37 = uVar20 & 0xe0;
                    uVar18 = (uVar37 - 0x20 >> 5) + 1;
                    uVar8 = uVar18 & 3;
                    if (uVar37 - 0x20 < 0x60) {
                      iVar31 = 0;
                    }
                    else {
                      iVar31 = 0;
                      iVar38 = -(uVar18 & 0xffffffc);
                      do {
                        uVar18 = uVar41 + iVar31;
                        puVar6 = (undefined8 *)((long)puVar45 + (ulong)uVar18 * 2 + 0x98);
                        puVar6[1] = uVar48;
                        *puVar6 = uVar47;
                        puVar6[3] = uVar48;
                        puVar6[2] = uVar47;
                        iVar31 = iVar31 + 0x80;
                        iVar38 = iVar38 + 4;
                        puVar6[5] = uVar48;
                        puVar6[4] = uVar47;
                        puVar6[7] = uVar48;
                        puVar6[6] = uVar47;
                        puVar6 = (undefined8 *)((long)puVar45 + (ulong)(uVar18 + 0x20) * 2 + 0x98);
                        puVar6[1] = uVar48;
                        *puVar6 = uVar47;
                        puVar6[3] = uVar48;
                        puVar6[2] = uVar47;
                        puVar6[5] = uVar48;
                        puVar6[4] = uVar47;
                        puVar6[7] = uVar48;
                        puVar6[6] = uVar47;
                        puVar6 = (undefined8 *)((long)puVar45 + (ulong)(uVar18 + 0x40) * 2 + 0x98);
                        puVar7 = (undefined8 *)((long)puVar45 + (ulong)(uVar18 + 0x60) * 2 + 0x98);
                        puVar6[1] = uVar48;
                        *puVar6 = uVar47;
                        puVar6[3] = uVar48;
                        puVar6[2] = uVar47;
                        puVar6[5] = uVar48;
                        puVar6[4] = uVar47;
                        puVar6[7] = uVar48;
                        puVar6[6] = uVar47;
                        puVar7[1] = uVar48;
                        *puVar7 = uVar47;
                        puVar7[3] = uVar48;
                        puVar7[2] = uVar47;
                        puVar7[5] = uVar48;
                        puVar7[4] = uVar47;
                        puVar7[7] = uVar48;
                        puVar7[6] = uVar47;
                      } while (iVar38 != 0);
                    }
                    uVar18 = uVar41 + uVar37;
                    uVar34 = uVar20 & 0x1f;
                    if (uVar8 != 0) {
                      iVar38 = -uVar8;
                      uVar41 = uVar41 + iVar31;
                      do {
                        bVar14 = iVar38 != -1;
                        iVar38 = iVar38 + 1;
                        *(undefined8 *)((long)puVar45 + (ulong)uVar41 * 2 + 0xa0) = uVar48;
                        *(undefined8 *)((long)puVar45 + (ulong)uVar41 * 2 + 0x98) = uVar47;
                        *(undefined8 *)((long)puVar45 + (ulong)uVar41 * 2 + 0xb0) = uVar48;
                        *(undefined8 *)((long)puVar45 + (ulong)uVar41 * 2 + 0xa8) = uVar47;
                        *(undefined8 *)((long)puVar45 + (ulong)uVar41 * 2 + 0xc0) = uVar48;
                        *(undefined8 *)((long)puVar45 + (ulong)uVar41 * 2 + 0xb8) = uVar47;
                        *(undefined8 *)((long)puVar45 + (ulong)uVar41 * 2 + 0xd0) = uVar48;
                        *(undefined8 *)((long)puVar45 + (ulong)uVar41 * 2 + 200) = uVar47;
                        uVar41 = uVar41 + 0x20;
                      } while (bVar14);
                    }
                    if (uVar20 != uVar37) goto LAB_003815e4;
                  }
                  *(uint *)((long)puVar45 + 0x8c) = uVar18;
                  uVar41 = uVar18;
                  goto LAB_00381648;
                }
              }
              pcVar23 = "invalid bit length repeat";
              pbVar17 = pbVar36;
              goto LAB_00381f24;
            }
            uVar43 = uVar43 >> (uVar27 & 0x3f);
            *(uint *)((long)puVar45 + 0x8c) = uVar41 + 1;
            uVar19 = (ulong)(uVar18 - iVar31);
            *(ushort *)((long)puVar45 + (ulong)uVar41 * 2 + 0x98) = uVar12;
            uVar41 = uVar41 + 1;
LAB_00381648:
            pbVar17 = pbVar36;
            pbVar28 = pbVar36;
            uVar15 = uVar46;
          } while (uVar41 < uVar42);
        }
        uVar20 = (uint)uVar46;
        if (*(short *)(puVar45 + 0x53) == 0) {
          pcVar23 = "invalid code -- missing end-of-block";
          goto LAB_00381f24;
        }
        puVar45[0x12] = puVar3;
        puVar45[0xd] = puVar3;
        *(undefined4 *)(puVar45 + 0xf) = 9;
        local_80 = FUN_00382f10(1,puVar45 + 0x13,iVar25,puVar4,puVar45 + 0xf,puVar5);
        if (local_80 == 0) {
          puVar45[0xe] = puVar45[0x12];
          *(undefined4 *)((long)puVar45 + 0x7c) = 6;
          local_80 = FUN_00382f10(2,(long)puVar45 +
                                    (ulong)*(uint *)((long)puVar45 + 0x84) * 2 + 0x98,
                                  *(undefined4 *)(puVar45 + 0x11),puVar4,(long)puVar45 + 0x7c,puVar5
                                 );
          if (local_80 != 0) {
            pcVar23 = "invalid distances set";
            goto LAB_003816ec;
          }
          *puVar26 = 0x3f47;
          local_80 = 0;
          if (param_2 == 6) goto LAB_00381fb4;
switchD_00380318_caseD_3f47:
          *puVar26 = 0x3f48;
switchD_00380318_caseD_3f48:
          uVar18 = (uint)uVar19;
          if ((0x101 < uVar16) && (5 < (uint)uVar46)) {
            param_1[3] = (long)puVar39;
            *(uint *)(param_1 + 4) = uVar16;
            *param_1 = (long)pbVar17;
            *(uint *)(param_1 + 1) = (uint)uVar46;
            puVar45[10] = uVar43;
            *(uint *)(puVar45 + 0xb) = uVar18;
            FUN_00382380(param_1,local_7c);
            puVar39 = (undefined1 *)param_1[3];
            uVar16 = *(uint *)(param_1 + 4);
            pbVar17 = (byte *)*param_1;
            uVar46 = (ulong)*(uint *)(param_1 + 1);
            uVar43 = puVar45[10];
            uVar19 = (ulong)*(uint *)(puVar45 + 0xb);
            if (*(int *)(puVar45 + 1) == 0x3f3f) {
              *(undefined4 *)((long)puVar45 + 0x1bec) = 0xffffffff;
            }
            goto LAB_003802f4;
          }
          uVar41 = -1 << (ulong)(*(uint *)(puVar45 + 0xf) & 0x1f);
          lVar44 = puVar45[0xd];
          uVar32 = (ulong)((uint)uVar43 & (uVar41 ^ 0xffffffff));
          *(undefined4 *)((long)puVar45 + 0x1bec) = 0;
          bVar10 = *(byte *)(lVar44 + uVar32 * 4 + 1);
          uVar27 = (ulong)bVar10;
          pbVar28 = pbVar17;
          uVar15 = uVar46;
          if (uVar18 < bVar10) {
            uVar15 = uVar46 & 0xffffffff;
            pbVar36 = pbVar17;
            do {
              iVar25 = (int)uVar15;
              pbVar28 = pbVar17;
              uVar15 = uVar46;
              if (iVar25 == 0) goto LAB_00381fa0;
              pbVar28 = pbVar36 + 1;
              uVar15 = uVar19 & 0x3f;
              uVar19 = uVar19 + 8;
              uVar43 = ((ulong)*pbVar36 << uVar15) + uVar43;
              uVar20 = ~uVar41 & (uint)uVar43;
              uVar27 = (ulong)*(byte *)(lVar44 + (ulong)uVar20 * 4 + 1);
              uVar15 = (ulong)(iVar25 - 1);
              pbVar36 = pbVar28;
            } while (uVar19 < uVar27);
            uVar32 = (ulong)uVar20;
            uVar19 = uVar19 & 0xffffffff;
          }
          uVar41 = (uint)uVar27;
          uVar18 = (uint)uVar19;
          pbVar17 = (byte *)(lVar44 + uVar32 * 4);
          uVar12 = *(ushort *)(pbVar17 + 2);
          bVar10 = *pbVar17;
          pbVar17 = pbVar28;
          uVar46 = uVar15;
          if (bVar10 == 0 || (bVar10 & 0xf0) != 0) {
            uVar41 = 0;
            uVar32 = uVar27;
          }
          else {
            uVar20 = -1 << (ulong)(uVar41 + bVar10 & 0x1f);
            uVar35 = (ulong)((((uint)uVar43 & (uVar20 ^ 0xffffffff)) >> (ulong)(uVar41 & 0x1f)) +
                            (uint)uVar12);
            bVar10 = *(byte *)(lVar44 + uVar35 * 4 + 1);
            uVar32 = (ulong)bVar10;
            if (uVar18 < uVar41 + bVar10) {
              uVar46 = uVar15 & 0xffffffff;
              pbVar36 = pbVar28;
              do {
                if ((int)uVar46 == 0) goto LAB_00381fa0;
                pbVar17 = pbVar36 + 1;
                uVar32 = uVar19 & 0x3f;
                uVar19 = uVar19 + 8;
                uVar43 = ((ulong)*pbVar36 << uVar32) + uVar43;
                uVar42 = (((uint)uVar43 & ~uVar20) >> (ulong)(uVar41 & 0x1f)) + (uint)uVar12;
                uVar32 = (ulong)*(byte *)(lVar44 + (ulong)uVar42 * 4 + 1);
                uVar46 = (ulong)((int)uVar46 - 1);
                pbVar36 = pbVar17;
              } while (uVar19 < uVar27 + uVar32);
              uVar35 = (ulong)uVar42;
              uVar18 = (uint)uVar19;
            }
            pbVar28 = (byte *)(lVar44 + uVar35 * 4);
            uVar12 = *(ushort *)(pbVar28 + 2);
            bVar10 = *pbVar28;
            uVar43 = uVar43 >> (uVar27 & 0x3f);
            uVar18 = uVar18 - uVar41;
            *(uint *)((long)puVar45 + 0x1bec) = uVar41;
          }
          uVar43 = uVar43 >> (uVar32 & 0x3f);
          *(uint *)((long)puVar45 + 0x1bec) = uVar41 + (int)uVar32;
          uVar19 = (ulong)(uVar18 - (int)uVar32);
          *(uint *)((long)puVar45 + 0x5c) = (uint)uVar12;
          if (bVar10 == 0) {
            uVar41 = 0x3f4d;
            goto LAB_00381f30;
          }
          if ((bVar10 >> 5 & 1) != 0) {
            *(undefined4 *)((long)puVar45 + 0x1bec) = 0xffffffff;
            *(undefined4 *)(puVar45 + 1) = 0x3f3f;
            goto LAB_003802f4;
          }
          if ((bVar10 >> 6 & 1) == 0) {
            uVar41 = bVar10 & 0xf;
            *(uint *)((long)puVar45 + 100) = uVar41;
            *(undefined4 *)(puVar45 + 1) = 0x3f49;
            if ((bVar10 & 0xf) == 0) {
LAB_00381a7c:
              iVar25 = *(int *)((long)puVar45 + 0x5c);
            }
            else {
LAB_00380804:
              uVar18 = (uint)uVar19;
              if (uVar18 < uVar41) {
                uVar27 = uVar46 & 0xffffffff;
                pbVar36 = pbVar17;
                do {
                  pbVar28 = pbVar17;
                  uVar15 = uVar46;
                  if ((int)uVar27 == 0) goto LAB_00381fa0;
                  pbVar28 = pbVar36 + 1;
                  uVar15 = uVar19 & 0x3f;
                  uVar20 = (int)uVar19 + 8;
                  uVar19 = (ulong)uVar20;
                  uVar27 = (ulong)((int)uVar27 - 1);
                  uVar43 = ((ulong)*pbVar36 << uVar15) + uVar43;
                  pbVar36 = pbVar28;
                } while (uVar20 < uVar41);
              }
              else {
                uVar27 = uVar46 & 0xffffffff;
                pbVar28 = pbVar17;
                uVar20 = uVar18;
              }
              pbVar17 = pbVar28;
              uVar19 = (ulong)(uVar20 - uVar41);
              uVar18 = (uint)uVar43;
              uVar43 = uVar43 >> ((ulong)uVar41 & 0x3f);
              iVar25 = *(int *)((long)puVar45 + 0x5c) +
                       (uVar18 & (-1 << (ulong)(uVar41 & 0x1f) ^ 0xffffffffU));
              *(int *)((long)puVar45 + 0x5c) = iVar25;
              *(uint *)((long)puVar45 + 0x1bec) = *(int *)((long)puVar45 + 0x1bec) + uVar41;
              uVar46 = uVar27;
            }
            *(int *)(puVar45 + 0x37e) = iVar25;
            *(undefined4 *)(puVar45 + 1) = 0x3f4a;
switchD_00380318_caseD_3f4a:
            uVar41 = -1 << (ulong)(*(uint *)((long)puVar45 + 0x7c) & 0x1f);
            lVar44 = puVar45[0xe];
            uVar15 = (ulong)((uint)uVar43 & (uVar41 ^ 0xffffffff));
            bVar10 = *(byte *)(lVar44 + uVar15 * 4 + 1);
            uVar32 = (ulong)bVar10;
            uVar18 = (uint)uVar19;
            pbVar28 = pbVar17;
            uVar27 = uVar46;
            if (uVar18 < bVar10) {
              uVar27 = uVar46 & 0xffffffff;
              pbVar36 = pbVar17;
              do {
                pbVar28 = pbVar17;
                uVar15 = uVar46;
                if ((int)uVar27 == 0) goto LAB_00381fa0;
                pbVar28 = pbVar36 + 1;
                uVar15 = uVar19 & 0x3f;
                uVar19 = uVar19 + 8;
                uVar43 = ((ulong)*pbVar36 << uVar15) + uVar43;
                uVar20 = ~uVar41 & (uint)uVar43;
                uVar32 = (ulong)*(byte *)(lVar44 + (ulong)uVar20 * 4 + 1);
                uVar27 = (ulong)((int)uVar27 - 1);
                pbVar36 = pbVar28;
              } while (uVar19 < uVar32);
              uVar15 = (ulong)uVar20;
              uVar19 = uVar19 & 0xffffffff;
            }
            uVar18 = (uint)uVar19;
            pbVar17 = (byte *)(lVar44 + uVar15 * 4);
            uVar12 = *(ushort *)(pbVar17 + 2);
            bVar10 = *pbVar17;
            pbVar17 = pbVar28;
            uVar46 = uVar27;
            if ((bVar10 & 0xf0) == 0) {
              uVar20 = (uint)uVar32;
              uVar41 = -1 << (ulong)(uVar20 + bVar10 & 0x1f);
              uVar35 = (ulong)((((uint)uVar43 & (uVar41 ^ 0xffffffff)) >> (ulong)(uVar20 & 0x1f)) +
                              (uint)uVar12);
              bVar10 = *(byte *)(lVar44 + uVar35 * 4 + 1);
              uVar15 = (ulong)bVar10;
              if (uVar18 < uVar20 + bVar10) {
                uVar46 = uVar27 & 0xffffffff;
                pbVar36 = pbVar28;
                do {
                  uVar15 = uVar27;
                  if ((int)uVar46 == 0) goto LAB_00381fa0;
                  pbVar17 = pbVar36 + 1;
                  uVar15 = uVar19 & 0x3f;
                  uVar19 = uVar19 + 8;
                  uVar43 = ((ulong)*pbVar36 << uVar15) + uVar43;
                  uVar42 = (((uint)uVar43 & ~uVar41) >> (ulong)(uVar20 & 0x1f)) + (uint)uVar12;
                  uVar15 = (ulong)*(byte *)(lVar44 + (ulong)uVar42 * 4 + 1);
                  uVar46 = (ulong)((int)uVar46 - 1);
                  pbVar36 = pbVar17;
                } while (uVar19 < uVar32 + uVar15);
                uVar35 = (ulong)uVar42;
                uVar18 = (uint)uVar19;
              }
              pbVar28 = (byte *)(lVar44 + uVar35 * 4);
              uVar12 = *(ushort *)(pbVar28 + 2);
              bVar10 = *pbVar28;
              uVar43 = uVar43 >> (uVar32 & 0x3f);
              uVar18 = uVar18 - uVar20;
              iVar25 = *(int *)((long)puVar45 + 0x1bec) + uVar20;
              *(int *)((long)puVar45 + 0x1bec) = iVar25;
            }
            else {
              iVar25 = *(int *)((long)puVar45 + 0x1bec);
              uVar15 = uVar32;
            }
            uVar43 = uVar43 >> (uVar15 & 0x3f);
            uVar19 = (ulong)(uVar18 - (int)uVar15);
            *(int *)((long)puVar45 + 0x1bec) = iVar25 + (int)uVar15;
            if ((bVar10 >> 6 & 1) == 0) {
              uVar41 = bVar10 & 0xf;
              *(uint *)(puVar45 + 0xc) = (uint)uVar12;
              *(uint *)((long)puVar45 + 100) = uVar41;
              *(undefined4 *)(puVar45 + 1) = 0x3f4b;
LAB_00381be0:
              uVar18 = (uint)uVar19;
              uVar27 = uVar46;
              if (uVar41 != 0) {
                if (uVar18 < uVar41) {
                  uVar27 = uVar46 & 0xffffffff;
                  pbVar36 = pbVar17;
                  do {
                    pbVar28 = pbVar17;
                    uVar15 = uVar46;
                    if ((int)uVar27 == 0) goto LAB_00381fa0;
                    pbVar28 = pbVar36 + 1;
                    uVar15 = uVar19 & 0x3f;
                    uVar20 = (int)uVar19 + 8;
                    uVar19 = (ulong)uVar20;
                    uVar27 = (ulong)((int)uVar27 - 1);
                    uVar43 = ((ulong)*pbVar36 << uVar15) + uVar43;
                    pbVar36 = pbVar28;
                  } while (uVar20 < uVar41);
                }
                else {
                  uVar27 = uVar46 & 0xffffffff;
                  pbVar28 = pbVar17;
                  uVar20 = uVar18;
                }
                pbVar17 = pbVar28;
                uVar19 = (ulong)(uVar20 - uVar41);
                uVar18 = (uint)uVar43;
                uVar43 = uVar43 >> ((ulong)uVar41 & 0x3f);
                *(uint *)(puVar45 + 0xc) =
                     *(int *)(puVar45 + 0xc) +
                     (uVar18 & (-1 << (ulong)(uVar41 & 0x1f) ^ 0xffffffffU));
                *(uint *)((long)puVar45 + 0x1bec) = *(int *)((long)puVar45 + 0x1bec) + uVar41;
              }
              *puVar26 = 0x3f4c;
              uVar46 = uVar27;
switchD_00380318_caseD_3f4c:
              uVar20 = (uint)uVar46;
              if (uVar16 == 0) goto LAB_00381fb4;
              uVar41 = *(uint *)(puVar45 + 0xc);
              if (local_7c - uVar16 < uVar41) {
                uVar41 = uVar41 - (local_7c - uVar16);
                if ((*(uint *)(puVar45 + 8) < uVar41) && (*(int *)(puVar45 + 0x37d) != 0)) {
                  pcVar23 = "invalid distance too far back";
                  goto LAB_00381f24;
                }
                uVar18 = *(uint *)((long)puVar45 + 0x44);
                uVar20 = uVar41 - uVar18;
                if (uVar41 < uVar18 || uVar20 == 0) {
                  uVar18 = uVar18 - uVar41;
                }
                else {
                  uVar18 = *(int *)((long)puVar45 + 0x3c) - uVar20;
                  uVar41 = uVar20;
                }
                puVar24 = (undefined1 *)(puVar45[9] + (ulong)uVar18);
                uVar20 = *(uint *)((long)puVar45 + 0x5c);
                uVar18 = uVar20;
                if (uVar41 <= uVar20) {
                  uVar18 = uVar41;
                }
              }
              else {
                uVar20 = *(uint *)((long)puVar45 + 0x5c);
                puVar24 = puVar39 + -(ulong)uVar41;
                uVar18 = uVar20;
              }
              uVar41 = uVar16;
              if (uVar18 <= uVar16) {
                uVar41 = uVar18;
              }
              *(uint *)((long)puVar45 + 0x5c) = uVar20 - uVar41;
              uVar15 = (ulong)(uVar41 - 1);
              if ((uVar41 - 1 < 0x3f) ||
                 ((puVar39 < puVar24 + uVar15 + 1 && (puVar24 < puVar39 + uVar15 + 1)))) {
                uVar42 = uVar41 - 1;
                uVar18 = uVar41 & 7;
                puVar40 = puVar39;
                uVar20 = uVar41;
joined_r0x00381e74:
                for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                  uVar20 = uVar20 - 1;
                  *puVar40 = *puVar24;
                  puVar40 = puVar40 + 1;
                  puVar24 = puVar24 + 1;
                }
                puVar39 = puVar40;
                if (6 < uVar42) {
                  do {
                    *puVar39 = *puVar24;
                    puVar39[1] = puVar24[1];
                    puVar39[2] = puVar24[2];
                    puVar39[3] = puVar24[3];
                    puVar39[4] = puVar24[4];
                    puVar39[5] = puVar24[5];
                    puVar39[6] = puVar24[6];
                    puVar40 = puVar39 + 8;
                    uVar20 = uVar20 - 8;
                    puVar39[7] = puVar24[7];
                    puVar24 = puVar24 + 8;
                    puVar39 = puVar40;
                  } while (uVar20 != 0);
                }
              }
              else {
                uVar32 = uVar15 + 1 & 0x1ffffffc0;
                uVar27 = (uVar32 - 0x40 >> 6) + 1;
                lVar44 = 0;
                if (uVar32 - 0x40 != 0) {
                  lVar29 = -(uVar27 & 0x7fffffffffffffe);
                  do {
                    puVar6 = (undefined8 *)(puVar24 + lVar44 + 0x70);
                    puVar7 = (undefined8 *)(puVar39 + lVar44 + 0x40);
                    lVar44 = lVar44 + 0x80;
                    uVar47 = puVar6[-0xe];
                    uVar49 = puVar6[-0xb];
                    uVar48 = puVar6[-0xc];
                    uVar51 = puVar6[-9];
                    uVar50 = puVar6[-10];
                    uVar53 = puVar6[-7];
                    uVar52 = puVar6[-8];
                    puVar7[-7] = puVar6[-0xd];
                    puVar7[-8] = uVar47;
                    puVar7[-5] = uVar49;
                    puVar7[-6] = uVar48;
                    lVar29 = lVar29 + 2;
                    puVar7[-3] = uVar51;
                    puVar7[-4] = uVar50;
                    puVar7[-1] = uVar53;
                    puVar7[-2] = uVar52;
                    uVar47 = puVar6[-6];
                    uVar49 = puVar6[-3];
                    uVar48 = puVar6[-4];
                    uVar51 = puVar6[-1];
                    uVar50 = puVar6[-2];
                    uVar53 = puVar6[1];
                    uVar52 = *puVar6;
                    puVar7[1] = puVar6[-5];
                    *puVar7 = uVar47;
                    puVar7[3] = uVar49;
                    puVar7[2] = uVar48;
                    puVar7[5] = uVar51;
                    puVar7[4] = uVar50;
                    puVar7[7] = uVar53;
                    puVar7[6] = uVar52;
                  } while (lVar29 != 0);
                }
                puVar40 = puVar39 + uVar32;
                if ((uVar27 & 1) != 0) {
                  puVar6 = (undefined8 *)(puVar24 + lVar44);
                  puVar7 = (undefined8 *)(puVar39 + lVar44);
                  uVar47 = *puVar6;
                  uVar49 = puVar6[3];
                  uVar48 = puVar6[2];
                  uVar51 = puVar6[5];
                  uVar50 = puVar6[4];
                  uVar53 = puVar6[7];
                  uVar52 = puVar6[6];
                  puVar7[1] = puVar6[1];
                  *puVar7 = uVar47;
                  puVar7[3] = uVar49;
                  puVar7[2] = uVar48;
                  puVar7[5] = uVar51;
                  puVar7[4] = uVar50;
                  puVar7[7] = uVar53;
                  puVar7[6] = uVar52;
                }
                if (uVar15 + 1 != uVar32) {
                  uVar20 = uVar41 - (int)uVar32;
                  uVar42 = uVar20 - 1;
                  uVar18 = uVar20 & 7;
                  puVar24 = puVar24 + uVar32;
                  goto joined_r0x00381e74;
                }
              }
              uVar16 = uVar16 - uVar41;
              puVar39 = puVar40;
              if (*(int *)((long)puVar45 + 0x5c) == 0) {
                uVar41 = 0x3f48;
                goto LAB_00381f30;
              }
              goto LAB_003802f4;
            }
            pcVar23 = "invalid distance code";
          }
          else {
            pcVar23 = "invalid literal/length code";
          }
          goto LAB_00381f24;
        }
        pcVar23 = "invalid literal/lengths set";
LAB_003816ec:
        param_1[6] = (long)pcVar23;
        *puVar26 = 0x3f51;
        goto LAB_003802f4;
      case 0x3f46:
        uVar41 = *(uint *)((long)puVar45 + 0x8c);
        goto LAB_00381348;
      case 0x3f47:
        goto switchD_00380318_caseD_3f47;
      case 0x3f48:
        goto switchD_00380318_caseD_3f48;
      case 0x3f49:
        uVar41 = *(uint *)((long)puVar45 + 100);
        if (uVar41 == 0) goto LAB_00381a7c;
        goto LAB_00380804;
      case 0x3f4a:
        goto switchD_00380318_caseD_3f4a;
      case 0x3f4b:
        uVar41 = *(uint *)((long)puVar45 + 100);
        goto LAB_00381be0;
      case 0x3f4c:
        goto switchD_00380318_caseD_3f4c;
      case 0x3f4d:
        if (uVar16 == 0) goto LAB_00381fb4;
        uVar16 = uVar16 - 1;
        *puVar39 = (char)*(undefined4 *)((long)puVar45 + 0x5c);
        *(undefined4 *)(puVar45 + 1) = 0x3f48;
        puVar39 = puVar39 + 1;
        goto LAB_003802f4;
      case 0x3f4e:
        uVar41 = *(uint *)(puVar45 + 2);
        if (uVar41 != 0) {
          if (uVar18 < 0x20) {
            if (uVar20 == 0) {
              pbVar28 = pbVar17;
              uVar42 = uVar18;
LAB_003822d4:
              uVar18 = uVar42;
              pbVar17 = pbVar28;
              uVar20 = 0;
              iVar25 = local_80;
              goto switchD_00380318_caseD_3f50;
            }
            uVar30 = uVar20 - 1;
            uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
            uVar15 = uVar19 + 8;
            pbVar28 = pbVar17 + 1;
            if (uVar18 < 0x18) {
              uVar42 = (uint)uVar15;
              if (uVar30 == 0) goto LAB_003822d4;
              uVar30 = uVar20 - 2;
              uVar43 = ((ulong)pbVar17[1] << (uVar15 & 0x3f)) + uVar43;
              uVar15 = uVar19 + 0x10;
              pbVar28 = pbVar17 + 2;
              if (uVar18 < 0x10) {
                uVar42 = (uint)uVar15;
                if (uVar30 == 0) goto LAB_003822d4;
                uVar30 = uVar20 - 3;
                uVar43 = ((ulong)pbVar17[2] << (uVar15 & 0x3f)) + uVar43;
                uVar15 = uVar19 + 0x18;
                pbVar28 = pbVar17 + 3;
                if (uVar18 < 8) {
                  uVar42 = (uint)uVar15;
                  if (uVar30 == 0) goto LAB_003822d4;
                  uVar30 = uVar20 - 4;
                  uVar43 = ((ulong)pbVar17[3] << (uVar15 & 0x3f)) + uVar43;
                  uVar15 = uVar19 + 0x20;
                  pbVar28 = pbVar17 + 4;
                }
              }
            }
            pbVar17 = pbVar28;
            uVar46 = (ulong)uVar30;
            uVar19 = uVar15 & 0xffffffff;
          }
          uVar15 = (ulong)(local_7c - uVar16);
          param_1[5] = param_1[5] + uVar15;
          uVar41 = uVar41 & 4;
          puVar45[5] = puVar45[5] + uVar15;
          if ((local_7c - uVar16 != 0) && (uVar41 != 0)) {
            if (*(int *)(puVar45 + 3) == 0) {
              lVar44 = FUN_0037fbe0(puVar45[4],(long)puVar39 - uVar15);
            }
            else {
              lVar44 = FUN_0037fe70();
            }
            puVar45[4] = lVar44;
            param_1[0xc] = lVar44;
            uVar41 = *(uint *)(puVar45 + 2) & 4;
          }
          local_7c = uVar16;
          if (uVar41 != 0) {
            uVar15 = uVar43;
            if (*(int *)(puVar45 + 3) == 0) {
              uVar15 = uVar43 >> 8 & 0xff00 | uVar43 >> 0x18 & 0xff |
                       (ulong)(uint)((int)uVar43 << 8) & 0xff0000 |
                       (ulong)(uint)((int)uVar43 << 0x18);
            }
            if (uVar15 != *puVar2) {
              param_1[6] = (long)"incorrect data check";
              *puVar26 = 0x3f51;
              goto LAB_003802f4;
            }
          }
          uVar43 = 0;
          uVar19 = 0;
        }
        *puVar26 = 0x3f4f;
        goto switchD_00380318_caseD_3f4f;
      case 0x3f4f:
switchD_00380318_caseD_3f4f:
        uVar18 = (uint)uVar19;
        uVar20 = (uint)uVar46;
        if ((*(int *)(puVar45 + 2) != 0) && (*(int *)(puVar45 + 3) != 0)) {
          if (uVar18 < 0x20) {
            if (uVar20 != 0) {
              uVar41 = uVar20 - 1;
              uVar43 = ((ulong)*pbVar17 << (uVar19 & 0x3f)) + uVar43;
              uVar15 = uVar19 + 8;
              pbVar28 = pbVar17 + 1;
              if (uVar18 < 0x18) {
                uVar42 = (uint)uVar15;
                if (uVar41 == 0) goto LAB_0038226c;
                uVar41 = uVar20 - 2;
                uVar43 = ((ulong)pbVar17[1] << (uVar15 & 0x3f)) + uVar43;
                uVar15 = uVar19 + 0x10;
                pbVar28 = pbVar17 + 2;
                if (uVar18 < 0x10) {
                  uVar42 = (uint)uVar15;
                  if (uVar41 == 0) goto LAB_0038226c;
                  uVar41 = uVar20 - 3;
                  uVar43 = ((ulong)pbVar17[2] << (uVar15 & 0x3f)) + uVar43;
                  uVar15 = uVar19 + 0x18;
                  pbVar28 = pbVar17 + 3;
                  if (uVar18 < 8) {
                    uVar42 = (uint)uVar15;
                    if (uVar41 == 0) goto LAB_0038226c;
                    uVar41 = uVar20 - 4;
                    uVar43 = ((ulong)pbVar17[3] << (uVar15 & 0x3f)) + uVar43;
                    uVar15 = uVar19 + 0x20;
                    pbVar28 = pbVar17 + 4;
                  }
                }
              }
              pbVar17 = pbVar28;
              uVar46 = (ulong)uVar41;
              uVar19 = uVar15 & 0xffffffff;
              goto LAB_0038183c;
            }
            pbVar28 = pbVar17;
            uVar42 = uVar18;
LAB_0038226c:
            uVar18 = uVar42;
            pbVar17 = pbVar28;
            goto LAB_00382274;
          }
LAB_0038183c:
          uVar20 = (uint)uVar46;
          if (uVar43 == *(uint *)(puVar45 + 5)) {
            uVar43 = 0;
            uVar18 = 0;
            goto LAB_00382248;
          }
          pcVar23 = "incorrect length check";
          goto LAB_00381f24;
        }
LAB_00382248:
        *puVar26 = 0x3f50;
        iVar25 = 1;
      case 0x3f50:
        goto switchD_00380318_caseD_3f50;
      case 0x3f51:
        iVar25 = -3;
        goto switchD_00380318_caseD_3f50;
      case 0x3f52:
        return -4;
      default:
        goto switchD_00380318_default;
      }
      goto LAB_00381fac;
    }
  }
switchD_00380318_default:
  return -2;
LAB_00381fa0:
  uVar18 = uVar18 + (int)uVar15 * 8;
  pbVar17 = pbVar28 + (uVar15 & 0xffffffff);
LAB_00381fac:
  uVar20 = 0;
  iVar25 = local_80;
switchD_00380318_caseD_3f50:
  param_1[3] = (long)puVar39;
  *(uint *)(param_1 + 4) = uVar16;
  *param_1 = (long)pbVar17;
  *(uint *)(param_1 + 1) = uVar20;
  puVar45[10] = uVar43;
  *(uint *)(puVar45 + 0xb) = uVar18;
  if ((*(int *)((long)puVar45 + 0x3c) != 0) ||
     (((local_7c != uVar16 && (*puVar26 < 0x3f51)) && ((param_2 != 4 || (*puVar26 < 0x3f4e)))))) {
    lVar44 = param_1[7];
    __dest = *(void **)(lVar44 + 0x48);
    if (__dest == (void *)0x0) {
      __dest = (void *)(*(code *)param_1[8])
                                 (param_1[10],1 << (ulong)(*(uint *)(lVar44 + 0x38) & 0x1f),1);
      *(void **)(lVar44 + 0x48) = __dest;
      if (__dest == (void *)0x0) {
        *puVar26 = 0x3f52;
        return -4;
      }
    }
    uVar41 = *(uint *)(lVar44 + 0x3c);
    uVar16 = local_7c - uVar16;
    if (uVar41 == 0) {
      uVar41 = 1 << (ulong)(*(uint *)(lVar44 + 0x38) & 0x1f);
      *(undefined8 *)(lVar44 + 0x40) = 0;
      *(uint *)(lVar44 + 0x3c) = uVar41;
    }
    if (uVar16 < uVar41) {
      uVar41 = uVar41 - *(uint *)(lVar44 + 0x44);
      uVar18 = uVar16;
      if (uVar41 <= uVar16) {
        uVar18 = uVar41;
      }
      memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar44 + 0x44)),puVar39 + -(ulong)uVar16,
             (ulong)uVar18);
      uVar16 = uVar16 - uVar18;
      if (uVar16 == 0) {
        uVar41 = *(int *)(lVar44 + 0x44) + uVar18;
        uVar16 = 0;
        if (uVar41 != *(uint *)(lVar44 + 0x3c)) {
          uVar16 = uVar41;
        }
        *(uint *)(lVar44 + 0x44) = uVar16;
        if (*(uint *)(lVar44 + 0x3c) <= *(uint *)(lVar44 + 0x40)) goto LAB_003820e0;
        iVar31 = *(uint *)(lVar44 + 0x40) + uVar18;
      }
      else {
        memcpy(*(void **)(lVar44 + 0x48),puVar39 + -(ulong)uVar16,(ulong)uVar16);
        iVar31 = *(int *)(lVar44 + 0x3c);
        *(uint *)(lVar44 + 0x44) = uVar16;
      }
    }
    else {
      memcpy(__dest,puVar39 + -(ulong)uVar41,(ulong)uVar41);
      iVar31 = *(int *)(lVar44 + 0x3c);
      *(undefined4 *)(lVar44 + 0x44) = 0;
    }
    *(int *)(lVar44 + 0x40) = iVar31;
  }
LAB_003820e0:
  uVar9 = uVar9 - (int)param_1[1];
  local_7c = local_7c - (int)param_1[4];
  uVar19 = (ulong)local_7c;
  param_1[2] = param_1[2] + (ulong)uVar9;
  param_1[5] = param_1[5] + uVar19;
  puVar45[5] = puVar45[5] + uVar19;
  if ((local_7c != 0) && ((*(uint *)(puVar45 + 2) >> 2 & 1) != 0)) {
    if (*(int *)(puVar45 + 3) == 0) {
      uVar19 = FUN_0037fbe0(puVar45[4],param_1[3] - uVar19,uVar19);
    }
    else {
      uVar19 = FUN_0037fe70();
    }
    *puVar2 = uVar19;
    param_1[0xc] = uVar19;
  }
  iVar38 = *(int *)(puVar45 + 1);
  iVar31 = 0x100;
  if (iVar38 != 0x3f42 && iVar38 != 0x3f47) {
    iVar31 = 0;
  }
  *(uint *)(param_1 + 0xb) =
       *(int *)(puVar45 + 0xb) + (uint)(*(int *)((long)puVar45 + 0xc) != 0) * 0x40 +
       (uint)(iVar38 == 0x3f3f) * 0x80 + iVar31;
  iVar31 = -5;
  if ((local_7c != 0 || uVar9 != 0) && param_2 != 4 || iVar25 != 0) {
    iVar31 = iVar25;
  }
  return iVar31;
}


