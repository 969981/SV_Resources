/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc0210; name: FUN_02fc0210
 */


void FUN_02fc0210(undefined8 param_1,long *param_2,long param_3,long param_4,long *param_5,
                 long param_6,ulong param_7,short param_8,short param_9,long param_10)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar15;
  undefined8 *puVar14;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  short *psVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  short *psVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  int iVar30;
  long lVar31;
  undefined1 *local_2e8;
  int local_2e0;
  uint local_2dc;
  undefined1 auStack_2d8 [256];
  short *local_1d8;
  uint local_1d0;
  uint local_1cc;
  short local_1c8 [32];
  undefined1 *local_188;
  uint local_180;
  uint local_17c;
  undefined1 local_178 [128];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [136];
  
  uVar13 = *(uint *)(param_4 + 0x1c);
  uVar18 = (ulong)uVar13;
  uVar11 = *(uint *)(param_4 + 0x20);
  local_f8 = local_e8;
  local_f0 = -0x7fffffe000000000;
  if ((int)uVar13 < 0x21) {
    local_f0._0_4_ = 0;
  }
  else {
    FUN_02e9b320(&local_f8,PTR_PTR_047d1a50,uVar18);
  }
  if ((int)(uint)local_f0 < (int)uVar13) {
    lVar25 = (long)(int)(uint)local_f0;
    uVar9 = ~(uint)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,uVar13);
    memset(local_f8 + lVar25 * 4,0xff,(ulong)(uVar13 + uVar9) * 4 + 4);
  }
  else if ((int)uVar13 < (int)(uint)local_f0) {
    local_f0 = CONCAT44(local_f0._4_4_,uVar13);
  }
  local_188 = local_178;
  local_180 = 0;
  local_17c = 0x80000020;
  if (0x20 < (int)uVar13) {
    FUN_02e9b320(&local_188,PTR_PTR_047d1a50,uVar18);
  }
  uVar9 = uVar13 - local_180;
  if (uVar9 == 0 || (int)uVar13 < (int)local_180) {
    if ((int)uVar13 < (int)local_180) {
      local_180 = uVar13;
    }
  }
  else {
    puVar15 = (undefined8 *)(local_188 + (long)(int)local_180 * 4);
    uVar2 = uVar9 & 3;
    if (2 < uVar13 + ~local_180) {
      iVar26 = -(uVar9 & 0xfffffffc);
      puVar14 = puVar15;
      do {
        puVar15 = puVar14 + 2;
        *puVar14 = 0x100000001;
        puVar14[1] = 0x100000001;
        iVar26 = iVar26 + 4;
        puVar14 = puVar15;
      } while (iVar26 != 0);
    }
    for (; local_180 = uVar13, uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)puVar15 = 1;
      puVar15 = (undefined8 *)((long)puVar15 + 4);
    }
  }
  if (0 < (int)uVar13) {
    if ((param_7 & 0xff) == 0) {
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 1;
      } while ((int)(uVar9 & 0xff) < (int)uVar13);
    }
    else if (1 < (int)uVar13) {
      uVar29 = 0;
      uVar16 = 1;
      do {
        uVar23 = 0;
        do {
          if (uVar23 < 2) {
            lVar25 = *(long *)(param_6 + uVar23 * 8);
            uVar27 = uVar16;
            do {
              iVar26 = (int)uVar27;
              if (*(char *)(*(long *)(lVar25 + 0x20) +
                           ((iVar26 * 0x10000 + 0x10000U >> 0x10) * iVar26 >> 1) + uVar29) != '\0')
              {
                *(undefined4 *)(local_188 + uVar29 * 4) = 0;
                *(undefined4 *)(local_188 + uVar27 * 4) = 0;
              }
              uVar27 = (ulong)(iVar26 + 1U & 0xff);
            } while ((int)(iVar26 + 1U & 0xff) < (int)uVar13);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != (param_7 & 0xff));
        uVar9 = (int)uVar16 + 1;
        uVar29 = uVar16;
        uVar16 = (ulong)(uVar9 & 0xff);
      } while ((int)(uVar9 & 0xff) < (int)uVar13);
    }
  }
  local_1d8 = local_1c8;
  local_1d0 = 0;
  local_1cc = 0x80000020;
  if (0x20 < (int)uVar13) {
    FUN_02e80588(&local_1d8,PTR_PTR_047d1a50,uVar18);
  }
  uVar9 = uVar13 - local_1d0;
  if (uVar9 == 0 || (int)uVar13 < (int)local_1d0) {
    if ((int)uVar13 < (int)local_1d0) {
      local_1d0 = uVar13;
    }
  }
  else {
    psVar24 = local_1d8 + (int)local_1d0;
    uVar2 = uVar9 & 3;
    if (2 < uVar13 + ~local_1d0) {
      iVar26 = -(uVar9 & 0xfffffffc);
      psVar19 = psVar24;
      do {
        psVar24 = psVar19 + 4;
        *psVar19 = param_8;
        iVar26 = iVar26 + 4;
        psVar19[1] = param_8;
        psVar19[2] = param_8;
        psVar19[3] = param_8;
        psVar19 = psVar24;
      } while (iVar26 != 0);
    }
    for (; local_1d0 = uVar13, uVar2 != 0; uVar2 = uVar2 - 1) {
      *psVar24 = param_8;
      psVar24 = psVar24 + 1;
    }
  }
  local_2e8 = auStack_2d8;
  local_2e0 = 0;
  local_2dc = 0x80000020;
  if (0x20 < (int)uVar13) {
    FUN_02fc2b54(&local_2e8,uVar18);
  }
  if (0 < (int)uVar13) {
    if ((param_7 & 0xff) == 0) {
      uVar29 = 0;
      lVar25 = 4;
      do {
        if ((*(int *)(local_188 + uVar29 * 4) != 0) && (*(int *)(*param_5 + lVar25) != 0)) {
          lVar20 = (long)local_2e0;
          if ((int)(local_2dc & 0x7fffffff) <= local_2e0) {
            FUN_02fc2ccc(&local_2e8,lVar20 + 1);
          }
          lVar21 = (long)local_2e0;
          local_2e0 = (int)(lVar20 + 1);
          *(int *)((long)(local_2e8 + lVar21 * 8) + 4) = (int)uVar29;
          *(undefined4 *)(local_2e8 + lVar21 * 8) = *(undefined4 *)(*param_5 + lVar25);
        }
        uVar29 = uVar29 + 1;
        lVar25 = lVar25 + 8;
      } while (uVar18 != uVar29);
    }
    else {
      uVar29 = 0;
      do {
        if (*(int *)(local_188 + uVar29 * 4) != 0) {
          iVar26 = (int)uVar29;
          uVar16 = (ulong)(iVar26 + ((iVar26 * 0x10000 + 0x10000 >> 0x10) * (int)(short)uVar29 >> 1)
                          );
          if (((uint)param_7 & 0xff) == 1) {
            uVar23 = 0;
            iVar30 = 0;
          }
          else {
            uVar23 = 0;
            iVar30 = 0;
            do {
              plVar17 = (long *)(param_6 + uVar23 * 8);
              uVar27 = uVar16;
              if (uVar23 != 0) {
                uVar27 = uVar29;
              }
              if (*(char *)(*(long *)(*plVar17 + 0x20) + uVar27) != '\0') {
                iVar30 = iVar30 + 1;
              }
              uVar23 = uVar23 + 2;
              if (*(char *)(*(long *)(plVar17[1] + 0x20) + uVar27) != '\0') {
                iVar30 = iVar30 + 1;
              }
            } while ((param_7 & 0xfe) != uVar23);
          }
          if ((param_7 & 1) != 0) {
            if (1 < uVar23) {
              uVar16 = uVar29;
            }
            if (*(char *)(*(long *)(*(long *)(param_6 + uVar23 * 8) + 0x20) + uVar16) != '\0') {
              iVar30 = iVar30 + 1;
            }
          }
          if ((iVar30 != 0) || (*(int *)(*param_5 + uVar29 * 8 + 4) != 0)) {
            lVar25 = (long)local_2e0;
            if ((int)(local_2dc & 0x7fffffff) <= local_2e0) {
              FUN_02fc2ccc(&local_2e8,lVar25 + 1);
            }
            lVar20 = (long)local_2e0;
            local_2e0 = (int)(lVar25 + 1);
            *(int *)((long)(local_2e8 + lVar20 * 8) + 4) = iVar26;
            *(int *)(local_2e8 + lVar20 * 8) = *(int *)(*param_5 + uVar29 * 8 + 4) * (iVar30 + 1);
          }
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar18);
    }
  }
  if (local_2e0 + -1 != 0 && 0 < local_2e0) {
    FUN_02fc2e50(local_2e8,0,local_2e0 + -1);
  }
  if (0 < local_2e0) {
    lVar25 = 0;
    do {
      uVar9 = *(uint *)(local_2e8 + lVar25 * 8 + 4);
      lVar20 = param_2[1];
      *(int *)(local_f8 + ((ulong)uVar9 & 0xff) * 4) = (int)lVar20;
      *(int *)(local_f8 + ((ulong)uVar9 & 0xff) * 4) = (int)lVar20;
      lVar20 = (long)(int)param_2[1];
      *(int *)(param_2 + 1) = (int)(lVar20 + 1);
      puVar15 = (undefined8 *)(*param_2 + lVar20 * 0x20);
      lVar20 = (lVar20 + 1) * 0x20 + lVar20 * -0x20;
      puVar14 = puVar15;
      do {
        lVar20 = lVar20 + -0x20;
        *puVar14 = &PTR_LAB_04612058;
        puVar14 = puVar14 + 4;
      } while (lVar20 != 0);
      puVar15[3] = 0;
      *puVar15 = &PTR_LAB_04612058;
      puVar15[1] = param_1;
      *(undefined2 *)(puVar15 + 2) = 0x301;
      *(short *)((long)puVar15 + 0x12) =
           (short)((uint)(((int)(uVar9 * 0x10000 + 0x10000) >> 0x10) * (int)(short)uVar9) >> 1) +
           (short)uVar9;
      *(char *)((long)puVar15 + 0x14) = (char)uVar9;
      *(char *)((long)puVar15 + 0x15) = (char)uVar9;
      *(undefined1 *)((long)puVar15 + 0x16) = 0;
      uVar2 = *(uint *)(param_10 + 0x20);
      uVar10 = uVar2;
      if ((int)(*(uint *)(param_10 + 0x24) & 0x7fffffff) <= (int)uVar2) {
        FUN_0323ff70(param_10 + 0x18,PTR_PTR_047d1a50,(long)(int)uVar2 + 1);
        uVar10 = *(uint *)(param_10 + 0x20);
      }
      plVar17 = (long *)(*(long *)(param_10 + 0x18) + (long)(int)uVar10 * 0x18);
      *(int *)(param_10 + 0x20) = (int)((long)(int)uVar2 + 1);
      *(undefined2 *)(plVar17 + 1) = 1;
      *plVar17 = (long)puVar15;
      *(undefined1 *)((long)plVar17 + 10) = 0x40;
      plVar17[2] = 0;
      if (((~uVar2 & 0xffff) != 0) && (sVar5 = local_1d8[(int)uVar9], sVar5 != -1)) {
        iVar26 = *(int *)(param_10 + 0x330);
        lVar20 = (long)iVar26;
        if ((int)(*(uint *)(param_10 + 0x334) & 0x7fffffff) <= iVar26) {
          FUN_02e7f7cc(param_10 + 0x328,PTR_PTR_047d1a50,lVar20 + 1);
          iVar26 = *(int *)(param_10 + 0x330);
        }
        psVar24 = (short *)(*(long *)(param_10 + 0x328) + (long)iVar26 * 4);
        *(int *)(param_10 + 0x330) = (int)(lVar20 + 1);
        *psVar24 = sVar5;
        psVar24[1] = (short)uVar2;
      }
      local_1d8[(int)uVar9] = (short)uVar2;
      lVar25 = lVar25 + 1;
    } while (lVar25 < local_2e0);
  }
  local_2e0 = 0;
  if ((-1 < (int)local_2dc) && (local_2e8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_2e8,(ulong)local_2dc << 3);
  }
  iVar26 = (int)param_2[1];
  lVar25 = (long)iVar26;
  if ((param_7 & 0xff) != 0) {
    uVar29 = 0;
    do {
      lVar20 = *(long *)(param_6 + uVar29 * 8);
      if (uVar29 < 2) {
        if (0 < (int)uVar11) {
          uVar16 = 0;
          lVar21 = *(long *)(param_4 + 8);
          do {
            pbVar1 = (byte *)(lVar21 + uVar16 * 2);
            bVar3 = *pbVar1;
            uVar23 = (ulong)bVar3;
            bVar4 = pbVar1[1];
            uVar27 = (ulong)bVar4;
            if (((bVar3 != bVar4) || (*(int *)(local_188 + uVar23 * 4) == 0)) &&
               (lVar31 = uVar23 + ((uVar27 * 0x10000 + 0x10000 >> 0x10) * uVar27 >> 1),
               *(char *)(*(long *)(lVar20 + 0x20) + lVar31) != '\0')) {
              lVar28 = param_2[1];
              *(int *)(local_f8 + uVar23 * 4) = (int)lVar28;
              *(int *)(local_f8 + uVar27 * 4) = (int)lVar28;
              lVar28 = (long)(int)param_2[1];
              *(int *)(param_2 + 1) = (int)(lVar28 + 1);
              puVar15 = (undefined8 *)(*param_2 + lVar28 * 0x20);
              lVar28 = (lVar28 + 1) * 0x20 + lVar28 * -0x20;
              puVar14 = puVar15;
              do {
                lVar28 = lVar28 + -0x20;
                *puVar14 = &PTR_LAB_04612058;
                puVar14 = puVar14 + 4;
              } while (lVar28 != 0);
              *puVar15 = &PTR_LAB_04612058;
              puVar15[1] = param_1;
              puVar15[3] = 0;
              *(undefined1 *)(puVar15 + 2) = 0;
              *(char *)((long)puVar15 + 0x11) = (char)uVar29;
              *(short *)((long)puVar15 + 0x12) = (short)lVar31;
              *(byte *)((long)puVar15 + 0x14) = bVar3;
              *(byte *)((long)puVar15 + 0x15) = bVar4;
              *(undefined1 *)((long)puVar15 + 0x16) = 0;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar11);
        }
      }
      else {
        local_2e0 = 0;
        local_2dc = 0x80000020;
        local_2e8 = auStack_2d8;
        if (0x20 < (int)uVar13) {
          FUN_02fc2b54(&local_2e8,(long)(int)uVar13);
        }
        if (0 < (int)uVar13) {
          uVar16 = 0;
          lVar21 = 1;
          do {
            if ((*(int *)(local_188 + uVar16 * 4) == 0) &&
               (*(char *)(*(long *)(lVar20 + 0x20) + uVar16) != '\0')) {
              *(long *)(local_2e8 + (long)local_2e0 * 8) = lVar21;
              local_2e0 = local_2e0 + 1;
            }
            uVar16 = uVar16 + 1;
            lVar21 = lVar21 + 0x100000000;
          } while (uVar18 != uVar16);
        }
        if (0 < local_2e0) {
          lVar20 = 0;
          do {
            uVar9 = *(uint *)(local_2e8 + lVar20 * 8 + 4);
            lVar21 = param_2[1];
            *(int *)(local_f8 + ((ulong)uVar9 & 0xff) * 4) = (int)lVar21;
            *(int *)(local_f8 + ((ulong)uVar9 & 0xff) * 4) = (int)lVar21;
            lVar21 = (long)(int)param_2[1];
            *(int *)(param_2 + 1) = (int)(lVar21 + 1);
            puVar15 = (undefined8 *)(*param_2 + lVar21 * 0x20);
            lVar21 = (lVar21 + 1) * 0x20 + lVar21 * -0x20;
            puVar14 = puVar15;
            do {
              lVar21 = lVar21 + -0x20;
              *puVar14 = &PTR_LAB_04612058;
              puVar14 = puVar14 + 4;
            } while (lVar21 != 0);
            *puVar15 = &PTR_LAB_04612058;
            puVar15[1] = param_1;
            lVar20 = lVar20 + 1;
            puVar15[3] = 0;
            *(undefined1 *)(puVar15 + 2) = 0;
            *(char *)((long)puVar15 + 0x11) = (char)uVar29;
            *(ushort *)((long)puVar15 + 0x12) = (ushort)uVar9 & 0xff;
            *(char *)((long)puVar15 + 0x14) = (char)uVar9;
            *(char *)((long)puVar15 + 0x15) = (char)uVar9;
            *(undefined1 *)((long)puVar15 + 0x16) = 0;
          } while (lVar20 < local_2e0);
        }
        local_2e0 = 0;
        if ((-1 < (int)local_2dc) && (local_2e8 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,local_2e8,(ulong)local_2dc << 3);
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != (param_7 & 0xff));
  }
  if (0 < (int)uVar13) {
    uVar18 = 0;
    do {
      uVar18 = uVar18 & 0xff;
      uVar11 = (uint)uVar18;
      if (*(int *)(local_188 + uVar18 * 4) == 0) {
        lVar20 = *param_2 + (long)*(int *)(local_f8 + uVar18 * 4) * 0x20;
        if (*(byte *)(lVar20 + 0x14) == uVar11) {
          *(byte *)(lVar20 + 0x16) = *(byte *)(lVar20 + 0x16) | 4;
        }
        if (*(byte *)(lVar20 + 0x15) == uVar11 &&
            (uint)*(byte *)(lVar20 + 0x14) != (uint)*(byte *)(lVar20 + 0x15)) {
          *(byte *)(lVar20 + 0x16) = *(byte *)(lVar20 + 0x16) | 8;
        }
      }
      uVar18 = (ulong)(uVar11 + 1);
    } while ((int)(uVar11 + 1 & 0xff) < (int)uVar13);
  }
  if (0 < *(int *)(param_3 + 0x70)) {
    lVar20 = param_10 + 0x328;
    uVar18 = (ulong)*(uint *)(param_2 + 1);
    iVar30 = 0;
    do {
      if ((iVar26 < (int)uVar18) && (*(float *)(param_3 + 0x84) < 1.8446726e+19)) {
        lVar31 = lVar25 << 5;
        lVar21 = lVar25;
        do {
          lVar28 = *param_2 + lVar31;
          if (*(char *)(lVar28 + 0x11) == '\x02') {
            uVar13 = *(uint *)(param_10 + 0x20);
            uVar11 = uVar13;
            if ((int)(*(uint *)(param_10 + 0x24) & 0x7fffffff) <= (int)uVar13) {
              FUN_0323ff70(param_10 + 0x18,PTR_PTR_047d1a50,(long)(int)uVar13 + 1);
              uVar11 = *(uint *)(param_10 + 0x20);
            }
            plVar17 = (long *)(*(long *)(param_10 + 0x18) + (long)(int)uVar11 * 0x18);
            *(int *)(param_10 + 0x20) = (int)((long)(int)uVar13 + 1);
            *(undefined2 *)(plVar17 + 1) = 1;
            *plVar17 = lVar28;
            *(undefined1 *)((long)plVar17 + 10) = 0x40;
            plVar17[2] = 0;
            bVar3 = *(byte *)(lVar28 + 0x14);
            sVar5 = local_1d8[bVar3];
            if (sVar5 == param_8) {
              *(byte *)(lVar28 + 0x16) = *(byte *)(lVar28 + 0x16) | 1;
            }
            if (((~uVar13 & 0xffff) != 0) && (sVar5 != -1)) {
              iVar12 = *(int *)(param_10 + 0x330);
              lVar28 = (long)iVar12;
              if ((int)(*(uint *)(param_10 + 0x334) & 0x7fffffff) <= iVar12) {
                FUN_02e7f7cc(lVar20,PTR_PTR_047d1a50,lVar28 + 1);
                iVar12 = *(int *)(param_10 + 0x330);
              }
              psVar24 = (short *)(*(long *)(param_10 + 0x328) + (long)iVar12 * 4);
              *(int *)(param_10 + 0x330) = (int)(lVar28 + 1);
              *psVar24 = sVar5;
              psVar24[1] = (short)uVar13;
            }
            local_1d8[bVar3] = (short)uVar13;
            uVar18 = (ulong)*(uint *)(param_2 + 1);
          }
          lVar21 = lVar21 + 1;
          lVar31 = lVar31 + 0x20;
        } while (lVar21 < (int)uVar18);
      }
      iVar12 = *(int *)(param_3 + 0x78);
      if (0 < iVar12) {
        iVar22 = 0;
        do {
          lVar21 = lVar25;
          lVar31 = lVar25 << 5;
          if (iVar26 < (int)uVar18) {
            do {
              lVar28 = *param_2 + lVar31;
              uVar13 = *(uint *)(param_10 + 0x20);
              uVar11 = uVar13;
              if ((int)(*(uint *)(param_10 + 0x24) & 0x7fffffff) <= (int)uVar13) {
                FUN_0323ff70(param_10 + 0x18,PTR_PTR_047d1a50,(long)(int)uVar13 + 1);
                uVar11 = *(uint *)(param_10 + 0x20);
              }
              plVar17 = (long *)(*(long *)(param_10 + 0x18) + (long)(int)uVar11 * 0x18);
              *(int *)(param_10 + 0x20) = (int)((long)(int)uVar13 + 1);
              *(undefined2 *)(plVar17 + 1) = 1;
              *plVar17 = lVar28;
              *(undefined1 *)((long)plVar17 + 10) = 0x40;
              plVar17[2] = 0;
              bVar3 = *(byte *)(lVar28 + 0x14);
              bVar4 = *(byte *)(lVar28 + 0x15);
              sVar5 = local_1d8[bVar3];
              sVar6 = local_1d8[bVar4];
              if (sVar5 == param_8) {
                *(byte *)(lVar28 + 0x16) = *(byte *)(lVar28 + 0x16) | 1;
              }
              if ((bVar3 != bVar4) && (sVar6 == param_8)) {
                *(byte *)(lVar28 + 0x16) = *(byte *)(lVar28 + 0x16) | 2;
              }
              sVar7 = (short)uVar13;
              if (sVar5 != -1 && (~uVar13 & 0xffff) != 0) {
                iVar12 = *(int *)(param_10 + 0x330);
                lVar28 = (long)iVar12;
                if ((int)(*(uint *)(param_10 + 0x334) & 0x7fffffff) <= iVar12) {
                  FUN_02e7f7cc(lVar20,PTR_PTR_047d1a50,lVar28 + 1);
                  iVar12 = *(int *)(param_10 + 0x330);
                }
                psVar24 = (short *)(*(long *)(param_10 + 0x328) + (long)iVar12 * 4);
                *(int *)(param_10 + 0x330) = (int)(lVar28 + 1);
                *psVar24 = sVar5;
                psVar24[1] = sVar7;
              }
              if (sVar6 != -1 && sVar6 != sVar5) {
                iVar12 = *(int *)(param_10 + 0x330);
                lVar28 = (long)iVar12;
                if ((int)(*(uint *)(param_10 + 0x334) & 0x7fffffff) <= iVar12) {
                  FUN_02e7f7cc(lVar20,PTR_PTR_047d1a50,lVar28 + 1);
                  iVar12 = *(int *)(param_10 + 0x330);
                }
                psVar24 = (short *)(*(long *)(param_10 + 0x328) + (long)iVar12 * 4);
                *(int *)(param_10 + 0x330) = (int)(lVar28 + 1);
                *psVar24 = sVar6;
                psVar24[1] = sVar7;
              }
              local_1d8[bVar3] = sVar7;
              local_1d8[bVar4] = sVar7;
              uVar18 = (ulong)(int)param_2[1];
              lVar21 = lVar21 + 1;
              lVar31 = lVar31 + 0x20;
            } while (lVar21 < (long)uVar18);
            iVar12 = *(int *)(param_3 + 0x78);
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < iVar12);
      }
      iVar30 = iVar30 + 1;
    } while (iVar30 < *(int *)(param_3 + 0x70));
  }
  if (param_9 != -1) {
    if (1 < (int)local_1d0) {
      FUN_02fc2f20(local_1d8,0,local_1d0 - 1);
    }
    puVar8 = PTR_PTR_047d1a50;
    if (local_1d0 != 0) {
      if ((int)local_1d0 < 2) {
        uVar13 = 1;
      }
      else {
        lVar25 = 0;
        lVar20 = (ulong)local_1d0 - 1;
        psVar24 = local_1d8;
        do {
          psVar24 = psVar24 + 1;
          if (local_1d8[(int)lVar25] != *psVar24) {
            lVar25 = (long)(int)lVar25 + 1;
            local_1d8[lVar25] = *psVar24;
          }
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        if ((int)lVar25 < 0) goto LAB_02fc0ffc;
        uVar13 = (int)lVar25 + 1;
      }
      uVar18 = 0;
      do {
        sVar5 = local_1d8[uVar18];
        if (sVar5 != param_8) {
          iVar26 = *(int *)(param_10 + 0x330);
          lVar25 = (long)iVar26;
          if ((int)(*(uint *)(param_10 + 0x334) & 0x7fffffff) <= iVar26) {
            FUN_02e7f7cc(param_10 + 0x328,puVar8,lVar25 + 1);
            iVar26 = *(int *)(param_10 + 0x330);
          }
          psVar24 = (short *)(*(long *)(param_10 + 0x328) + (long)iVar26 * 4);
          *(int *)(param_10 + 0x330) = (int)(lVar25 + 1);
          *psVar24 = sVar5;
          psVar24[1] = param_9;
        }
        uVar18 = uVar18 + 1;
      } while (uVar13 != uVar18);
    }
  }
LAB_02fc0ffc:
  local_1d0 = 0;
  if ((-1 < (int)local_1cc) && (local_1d8 != (short *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_1d8,(ulong)local_1cc << 1);
  }
  local_180 = 0;
  if ((-1 < (int)local_17c) && (local_188 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_188,(ulong)local_17c << 2);
  }
  lVar25 = local_f0;
  uVar18 = (ulong)local_f0._4_4_;
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  if ((-1 < lVar25) && (local_f8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_f8,uVar18 << 2);
  }
  return;
}


