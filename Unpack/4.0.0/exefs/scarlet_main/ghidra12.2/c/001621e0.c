/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001621e0; name: FUN_001621e0
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_001621e0(long param_1,long param_2,long param_3,int param_4,undefined4 param_5,uint param_6
                 )

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  ulong *puVar20;
  long lVar21;
  byte *pbVar22;
  ulong *puVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  undefined8 uStack_68;
  
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = (**(code **)PTR_DAT_047cb878)("LRM_Fill",0);
  }
  if ((((param_3 < (int)param_6) &&
       (iVar5 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x173,
                             "LRM_Fill","bufSize >= hash_length"), iVar5 != 0)) ||
      (((int)param_6 < 8 &&
       (iVar5 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x174,
                             "LRM_Fill","hash_length >= LRM_MIN_MATCH_LEN"), iVar5 != 0)))) ||
     ((0x40000000 < param_3 &&
      (iVar5 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x178,
                            "LRM_Fill","bufSize <= (1<<30)"), iVar5 != 0)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar25 = param_3 - (int)param_6;
  lVar26 = (long)param_4;
  lVar7 = 0;
  if (lVar26 != 0) {
    lVar7 = lVar25 / lVar26;
  }
  *(long *)(param_1 + 0x48) = param_3;
  *(long *)(param_1 + 0x38) = param_2;
  *(long *)(param_1 + 0x40) = param_2;
  *(uint *)(param_1 + 0x30) = param_6;
  if ((int)(param_6 - 1) < 1) {
    iVar5 = 1;
  }
  else {
    uVar24 = param_6 - 1 & 3;
    if (param_6 - 2 < 3) {
      iVar5 = 1;
    }
    else {
      iVar19 = (uVar24 - param_6) + 1;
      iVar5 = 1;
      do {
        iVar5 = iVar5 * 0x511add11;
        iVar19 = iVar19 + 4;
      } while (iVar19 != 0);
    }
    for (; uVar24 != 0; uVar24 = uVar24 - 1) {
      iVar5 = iVar5 * 0x2c2c57ed;
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x18);
  uVar17 = lVar7 + 2;
  puVar14 = (undefined8 *)(param_1 + 8);
  *(int *)(param_1 + 0x34) = iVar5;
  if (uVar8 <= uVar17) {
    if ((*(ulong *)(param_1 + 0x10) < uVar17) && (lVar7 = FUN_0016443c(puVar14), lVar7 != 0)) {
      (**(code **)PTR_PTR_047cb898)();
    }
    uVar17 = (uVar17 - uVar8) + *(long *)(param_1 + 0x18);
  }
  *(ulong *)(param_1 + 0x18) = uVar17;
  if (uVar17 == 0) {
    puVar23 = (ulong *)0x0;
  }
  else {
    puVar23 = (ulong *)*puVar14;
  }
  if (lVar25 < 0) {
    uVar24 = 0;
  }
  else if (param_6 == 8) {
    uVar24 = 0;
    lVar7 = 0;
    uVar12 = 0xffffffff;
    do {
      pbVar22 = (byte *)(param_2 + lVar7);
      uVar18 = (uint)pbVar22[7] +
               ((uint)pbVar22[3] +
               ((uint)pbVar22[2] + ((uint)pbVar22[1] + (uint)*pbVar22 * 0x2c2c57ed) * 0x2c2c57ed) *
               0x2c2c57ed) * 0x511add11 +
               ((uint)pbVar22[6] + ((uint)pbVar22[5] + (uint)pbVar22[4] * 0x2c2c57ed) * 0x2c2c57ed)
               * 0x2c2c57ed;
      if (uVar18 != uVar12) {
        lVar9 = (long)(int)uVar24;
        uVar24 = uVar24 + 1;
        *(uint *)(puVar23 + lVar9) = uVar18;
        *(uint *)((long)(puVar23 + lVar9) + 4) = (uint)lVar7;
        uVar12 = uVar18;
      }
      lVar7 = lVar7 + lVar26;
    } while (lVar7 <= lVar25);
  }
  else {
    if (0 < (int)param_6) {
      uVar17 = (ulong)param_6;
      uVar24 = 0;
      lVar9 = 0;
      lVar7 = param_2 + 1;
      uVar12 = 0xffffffff;
      if (uVar17 - 1 < 3) goto LAB_001624b0;
      do {
        lVar21 = 0;
        uVar18 = 0;
        do {
          pbVar22 = (byte *)(lVar7 + lVar21);
          lVar21 = lVar21 + 4;
          uVar18 = (uint)pbVar22[2] +
                   ((uint)pbVar22[1] +
                   ((uint)*pbVar22 + ((uint)pbVar22[-1] + uVar18 * 0x2c2c57ed) * 0x2c2c57ed) *
                   0x2c2c57ed) * 0x2c2c57ed;
        } while (uVar17 - (uVar17 & 3) != lVar21);
        while( true ) {
          if ((param_6 & 3) != 0) {
            pbVar22 = (byte *)(param_2 + lVar21);
            uVar8 = uVar17 & 3;
            do {
              uVar18 = (uint)*pbVar22 + uVar18 * 0x2c2c57ed;
              uVar8 = uVar8 - 1;
              pbVar22 = pbVar22 + 1;
            } while (uVar8 != 0);
          }
          if (uVar18 != uVar12) {
            lVar21 = (long)(int)uVar24;
            uVar24 = uVar24 + 1;
            *(uint *)(puVar23 + lVar21) = uVar18;
            *(uint *)((long)(puVar23 + lVar21) + 4) = (uint)lVar9;
            uVar12 = uVar18;
          }
          lVar9 = lVar9 + lVar26;
          lVar7 = lVar7 + lVar26;
          param_2 = param_2 + lVar26;
          if (lVar25 < lVar9) goto LAB_00162550;
          if (2 < uVar17 - 1) break;
LAB_001624b0:
          lVar21 = 0;
          uVar18 = 0;
        }
      } while( true );
    }
    *puVar23 = 0;
    if (lVar26 <= lVar25) {
      lVar7 = lVar26;
      do {
        lVar7 = lVar7 + lVar26;
      } while (lVar7 <= lVar25);
    }
    uVar24 = 1;
  }
LAB_00162550:
  uVar8 = *(ulong *)(param_1 + 0x18);
  lVar7 = (long)(int)uVar24;
  uVar17 = lVar7 + 1;
  if (uVar8 <= uVar17) {
    if ((*(ulong *)(param_1 + 0x10) < uVar17) && (lVar25 = FUN_0016443c(puVar14), lVar25 != 0)) {
      (**(code **)PTR_PTR_047cb898)();
    }
    uVar17 = (uVar17 - uVar8) + *(long *)(param_1 + 0x18);
  }
  *(ulong *)(param_1 + 0x18) = uVar17;
  if (1 < uVar24) {
    puVar10 = puVar23 + (uVar24 - 1);
    puVar14 = &uStack_68;
    uVar12 = uVar24;
    do {
      puVar13 = puVar14;
      uVar12 = (uVar12 >> 1) + (uVar12 >> 2);
      puVar14 = puVar13 + -3;
    } while (uVar12 != 0);
    *(undefined4 *)(puVar13 + -4) = 0;
    puVar11 = puVar23;
    if (uVar24 != 0) {
joined_r0x001625d8:
      if (1 < uVar24) {
LAB_00162648:
        if (uVar24 == 2) {
          if ((uint)*puVar11 <= (uint)*puVar10) goto LAB_001625e4;
          uVar17 = *puVar11;
          *puVar11 = *puVar10;
          *puVar10 = uVar17;
          puVar11 = (ulong *)puVar14[-3];
          puVar10 = (ulong *)puVar14[-2];
          uVar24 = *(uint *)(puVar14 + -1);
        }
        else {
          uVar2 = uVar24 >> 1;
          puVar15 = puVar11 + uVar2;
          uVar12 = (uint)*puVar15;
          uVar18 = (uint)*puVar11;
          uVar1 = (uint)*puVar10;
          if (uVar12 < uVar18) {
            if (uVar1 <= uVar12) {
LAB_00162714:
              uVar17 = *puVar11;
              *puVar11 = *puVar10;
              goto LAB_00162798;
            }
            if (uVar1 <= uVar18) {
              uVar17 = *puVar15;
              *puVar15 = *puVar11;
              *puVar11 = uVar17;
              goto LAB_0016278c;
            }
            uVar17 = *puVar11;
            *puVar11 = *puVar15;
            *puVar15 = uVar17;
          }
          else if (uVar1 < uVar12) {
            if (uVar1 <= uVar18) {
              uVar17 = *puVar11;
              *puVar11 = *puVar15;
              *puVar15 = uVar17;
              goto LAB_00162714;
            }
LAB_0016278c:
            uVar17 = *puVar15;
            *puVar15 = *puVar10;
LAB_00162798:
            *puVar10 = uVar17;
          }
          if (4 < uVar24) {
            if (puVar14 == &uStack_68) goto joined_r0x00162828;
            uVar17 = *puVar15;
            *puVar15 = *puVar11;
            *puVar11 = uVar17;
            puVar15 = puVar11;
            puVar16 = puVar10;
            while( true ) {
              do {
                puVar16 = puVar16 + -1;
              } while ((uint)uVar17 < (uint)*puVar16);
              puVar20 = puVar15;
              if (puVar16 <= puVar15) break;
              do {
                puVar15 = puVar20;
                puVar20 = puVar15 + 1;
              } while ((uint)*puVar20 < (uint)uVar17);
              if (puVar16 <= puVar20) break;
              uVar17 = *puVar20;
              *puVar20 = *puVar16;
              *puVar16 = uVar17;
              uVar17 = (ulong)(uint)*puVar11;
              puVar15 = puVar20;
            }
            uVar17 = *puVar11;
            *puVar11 = *puVar15;
            *puVar15 = uVar17;
            puVar16 = puVar15;
            do {
              puVar16 = puVar16 + 1;
              uVar24 = (uint)uVar17;
              if (puVar10 <= puVar16) break;
            } while ((uint)*puVar16 <= uVar24);
            do {
              puVar15 = puVar15 + -1;
              if (puVar15 <= puVar11) break;
            } while (uVar24 <= (uint)*puVar15);
            iVar5 = (int)((ulong)((long)puVar10 - (long)puVar16) >> 3);
            uVar12 = iVar5 + 1;
            iVar19 = (int)((ulong)((long)puVar15 - (long)puVar11) >> 3);
            uVar24 = iVar19 + 1;
            bVar4 = uVar24 <= uVar12;
            puVar20 = puVar10;
            puVar3 = puVar16;
            if (bVar4) {
              uVar12 = iVar19 + 1;
              puVar20 = puVar15;
              puVar3 = puVar11;
            }
            *puVar14 = puVar3;
            puVar14[1] = puVar20;
            if (bVar4) {
              uVar24 = iVar5 + 1;
              puVar15 = puVar10;
            }
            *(uint *)(puVar14 + 2) = uVar12;
            if (bVar4) {
              puVar11 = puVar16;
            }
            puVar14 = puVar14 + 3;
            puVar10 = puVar15;
            if (uVar24 < 2) goto LAB_001625e4;
            goto LAB_00162648;
          }
          if (uVar24 == 3) goto LAB_001625e4;
          uVar24 = (uint)puVar11[1];
          if (uVar24 <= (uint)*puVar15) {
            if (uVar24 < (uint)*puVar11) {
              uVar17 = *puVar11;
              *puVar11 = puVar11[1];
              puVar11[1] = uVar17;
              puVar11 = (ulong *)puVar14[-3];
              puVar10 = (ulong *)puVar14[-2];
              uVar24 = *(uint *)(puVar14 + -1);
              goto joined_r0x00162818;
            }
            goto LAB_001625e4;
          }
          if (uVar24 < (uint)*puVar10) {
            uVar17 = puVar11[1];
            puVar11[1] = *puVar15;
            *puVar15 = uVar17;
            puVar11 = (ulong *)puVar14[-3];
            puVar10 = (ulong *)puVar14[-2];
            uVar24 = *(uint *)(puVar14 + -1);
          }
          else {
            uVar17 = *puVar15;
            *puVar15 = puVar11[1];
            puVar11[1] = uVar17;
            uVar17 = *puVar15;
            *puVar15 = *puVar10;
            *puVar10 = uVar17;
            puVar11 = (ulong *)puVar14[-3];
            puVar10 = (ulong *)puVar14[-2];
            uVar24 = *(uint *)(puVar14 + -1);
          }
        }
joined_r0x00162818:
        puVar14 = puVar14 + -3;
        goto joined_r0x00162818;
      }
      goto LAB_001625e4;
    }
  }
LAB_00162984:
  puVar23 = puVar23 + lVar7;
  *(uint *)puVar23 = 0xffffffff;
  *(uint *)((long)puVar23 + 4) = *(uint *)((long)puVar23 + -4);
  FUN_001629f0(param_1);
  FUN_00162bb0(param_1,param_5);
  if (*(code **)PTR_DAT_047cb880 != (code *)0x0) {
    (**(code **)PTR_DAT_047cb880)(uVar6);
  }
  return param_1;
joined_r0x00162828:
  uVar2 = uVar2 - 1;
  puVar15 = puVar15 + -1;
  if (uVar2 != 0) {
    uVar12 = uVar2 * 2 | 1;
    puVar16 = puVar15;
    do {
      puVar20 = puVar11 + uVar12;
      if (puVar20 + 1 <= puVar10) {
        if ((uint)*puVar20 < (uint)puVar20[1]) {
          uVar12 = uVar12 + 1;
          puVar20 = puVar20 + 1;
        }
        else {
        }
      }
      if ((uint)*puVar20 <= (uint)*puVar16) break;
      uVar12 = uVar12 << 1 | 1;
      uVar17 = *puVar16;
      *puVar16 = *puVar20;
      *puVar20 = uVar17;
      puVar16 = puVar20;
    } while (uVar12 < uVar24);
    goto joined_r0x00162828;
  }
  do {
    uVar17 = 1;
    do {
      iVar5 = (int)uVar17;
      puVar16 = puVar11 + uVar17;
      if (puVar16 + 1 <= puVar10) {
        if ((uint)*puVar16 < (uint)puVar16[1]) {
          iVar5 = iVar5 + 1;
          puVar16 = puVar16 + 1;
        }
        else {
        }
      }
      if ((uint)*puVar16 <= (uint)*puVar15) break;
      uVar12 = iVar5 << 1 | 1;
      uVar8 = *puVar15;
      *puVar15 = *puVar16;
      uVar17 = (ulong)uVar12;
      *puVar16 = uVar8;
      puVar15 = puVar16;
    } while (uVar12 < uVar24);
    uVar17 = *puVar11;
    uVar24 = uVar24 - 1;
    *puVar11 = *puVar10;
    *puVar10 = uVar17;
    puVar10 = puVar10 + -1;
    puVar15 = puVar11;
  } while (1 < uVar24);
  puVar14 = &uStack_68;
LAB_001625e4:
  puVar11 = (ulong *)puVar14[-3];
  puVar10 = (ulong *)puVar14[-2];
  uVar24 = *(uint *)(puVar14 + -1);
  puVar14 = puVar14 + -3;
joined_r0x00162818:
  if (uVar24 == 0) goto LAB_00162984;
  goto joined_r0x001625d8;
}


