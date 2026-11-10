/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc10a8; name: FUN_02fc10a8
 */


void FUN_02fc10a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,ulong param_7,long *param_8,short param_9,short param_10,
                 long param_11)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  short sVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  short *psVar19;
  short *psVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  undefined1 *local_258;
  int local_250;
  uint local_24c;
  undefined1 auStack_248 [256];
  short *local_148;
  uint local_140;
  uint local_13c;
  short local_138 [32];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [136];
  
  uVar15 = *(uint *)(param_5 + 0x1c);
  uVar27 = (ulong)uVar15;
  local_f8 = auStack_e8;
  local_f0 = -0x7fffffe000000000;
  if ((int)uVar15 < 0x21) {
    local_f0._0_4_ = 0;
  }
  else {
    FUN_02e9b320(&local_f8,PTR_PTR_047d1a50,uVar27);
  }
  if ((int)(uint)local_f0 < (int)uVar15) {
    lVar22 = (long)(int)(uint)local_f0;
    uVar9 = ~(uint)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,uVar15);
    memset(local_f8 + lVar22 * 4,0xff,(ulong)(uVar15 + uVar9) * 4 + 4);
  }
  else if ((int)uVar15 < (int)(uint)local_f0) {
    local_f0 = CONCAT44(local_f0._4_4_,uVar15);
  }
  local_140 = 0;
  local_13c = 0x80000020;
  local_148 = local_138;
  if (0x20 < (int)uVar15) {
    FUN_02e80588(&local_148,PTR_PTR_047d1a50,uVar27);
  }
  uVar9 = uVar15 - local_140;
  if (uVar9 == 0 || (int)uVar15 < (int)local_140) {
    if ((int)uVar15 < (int)local_140) {
      local_140 = uVar15;
    }
  }
  else {
    psVar20 = local_148 + (int)local_140;
    uVar14 = uVar9 & 3;
    if (2 < uVar15 + ~local_140) {
      iVar26 = -(uVar9 & 0xfffffffc);
      psVar19 = psVar20;
      do {
        psVar20 = psVar19 + 4;
        *psVar19 = param_9;
        iVar26 = iVar26 + 4;
        psVar19[1] = param_9;
        psVar19[2] = param_9;
        psVar19[3] = param_9;
        psVar19 = psVar20;
      } while (iVar26 != 0);
    }
    for (; local_140 = uVar15, uVar14 != 0; uVar14 = uVar14 - 1) {
      *psVar20 = param_9;
      psVar20 = psVar20 + 1;
    }
  }
  if ((param_7 & 0xff) != 0) {
    uVar16 = 0;
    do {
      if ((uVar16 < 2) &&
         (uVar9 = *(int *)(param_5 + 0x10) - uVar15,
         uVar9 != 0 && (int)uVar15 <= *(int *)(param_5 + 0x10))) {
        uVar21 = 0;
        lVar23 = *(long *)(param_5 + 8);
        lVar22 = *(long *)(param_6 + uVar16 * 8);
        do {
          pbVar2 = (byte *)(lVar23 + (long)(int)uVar15 * 2 + uVar21 * 2);
          bVar5 = *pbVar2;
          bVar6 = pbVar2[1];
          uVar24 = (ulong)bVar6;
          lVar18 = (ulong)bVar5 + ((uVar24 * 0x10000 + 0x10000 >> 0x10) * uVar24 >> 1);
          if (*(char *)(*(long *)(lVar22 + 0x20) + lVar18) != '\0') {
            lVar12 = param_2[1];
            *(int *)(local_f8 + (ulong)bVar5 * 4) = (int)lVar12;
            *(int *)(local_f8 + uVar24 * 4) = (int)lVar12;
            lVar12 = (long)(int)param_2[1];
            *(int *)(param_2 + 1) = (int)(lVar12 + 1);
            puVar3 = (undefined8 *)(*param_2 + lVar12 * 0x20);
            lVar12 = (lVar12 + 1) * 0x20 + lVar12 * -0x20;
            puVar13 = puVar3;
            do {
              lVar12 = lVar12 + -0x20;
              *puVar13 = &PTR_LAB_04612058;
              puVar13 = puVar13 + 4;
            } while (lVar12 != 0);
            *puVar3 = &PTR_LAB_04612058;
            puVar3[1] = param_1;
            puVar3[3] = 0;
            *(undefined1 *)(puVar3 + 2) = 0;
            *(char *)((long)puVar3 + 0x11) = (char)uVar16;
            *(short *)((long)puVar3 + 0x12) = (short)lVar18;
            *(byte *)((long)puVar3 + 0x14) = bVar5;
            *(byte *)((long)puVar3 + 0x15) = bVar6;
            *(undefined1 *)((long)puVar3 + 0x16) = 0;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar9);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != (param_7 & 0xff));
  }
  if (0 < (int)param_2[1]) {
    lVar23 = 0;
    lVar22 = 0;
    do {
      lVar18 = *param_2 + lVar23;
      uVar9 = *(uint *)(param_11 + 0x20);
      uVar14 = uVar9;
      if ((int)(*(uint *)(param_11 + 0x24) & 0x7fffffff) <= (int)uVar9) {
        FUN_0323ff70(param_11 + 0x18,PTR_PTR_047d1a50,(long)(int)uVar9 + 1);
        uVar14 = *(uint *)(param_11 + 0x20);
      }
      plVar17 = (long *)(*(long *)(param_11 + 0x18) + (long)(int)uVar14 * 0x18);
      *(int *)(param_11 + 0x20) = (int)((long)(int)uVar9 + 1);
      *(undefined2 *)(plVar17 + 1) = 1;
      *plVar17 = lVar18;
      *(undefined1 *)((long)plVar17 + 10) = 0x40;
      plVar17[2] = 0;
      bVar5 = *(byte *)(lVar18 + 0x14);
      bVar6 = *(byte *)(lVar18 + 0x15);
      sVar7 = local_148[bVar5];
      sVar8 = local_148[bVar6];
      sVar10 = (short)uVar9;
      if (((~uVar9 & 0xffff) != 0) && (sVar7 != -1)) {
        iVar26 = *(int *)(param_11 + 0x330);
        lVar18 = (long)iVar26;
        if ((int)(*(uint *)(param_11 + 0x334) & 0x7fffffff) <= iVar26) {
          FUN_02e7f7cc(param_11 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
          iVar26 = *(int *)(param_11 + 0x330);
        }
        psVar20 = (short *)(*(long *)(param_11 + 0x328) + (long)iVar26 * 4);
        *(int *)(param_11 + 0x330) = (int)(lVar18 + 1);
        *psVar20 = sVar7;
        psVar20[1] = sVar10;
      }
      if ((sVar8 != sVar7 && (~uVar9 & 0xffff) != 0) && sVar8 != -1) {
        iVar26 = *(int *)(param_11 + 0x330);
        lVar18 = (long)iVar26;
        if ((int)(*(uint *)(param_11 + 0x334) & 0x7fffffff) <= iVar26) {
          FUN_02e7f7cc(param_11 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
          iVar26 = *(int *)(param_11 + 0x330);
        }
        psVar20 = (short *)(*(long *)(param_11 + 0x328) + (long)iVar26 * 4);
        *(int *)(param_11 + 0x330) = (int)(lVar18 + 1);
        *psVar20 = sVar8;
        psVar20[1] = sVar10;
      }
      local_148[bVar5] = sVar10;
      local_148[bVar6] = sVar10;
      lVar22 = lVar22 + 1;
      lVar23 = lVar23 + 0x20;
    } while (lVar22 < (int)param_2[1]);
  }
  local_258 = auStack_248;
  local_250 = 0;
  local_24c = 0x80000020;
  if ((int)uVar15 < 0x21) {
    if (0 < (int)uVar15) goto LAB_02fc14e8;
    local_250 = 0;
  }
  else {
    FUN_02fc2b54(&local_258,uVar27);
LAB_02fc14e8:
    if ((param_7 & 0xff) == 0) {
      uVar16 = 0;
      lVar22 = 4;
      do {
        lVar23 = (long)local_250;
        if ((int)(local_24c & 0x7fffffff) <= local_250) {
          FUN_02fc2ccc(&local_258,lVar23 + 1);
        }
        lVar18 = (long)local_250;
        local_250 = (int)(lVar23 + 1);
        *(int *)((long)(local_258 + lVar18 * 8) + 4) = (int)uVar16;
        uVar16 = uVar16 + 1;
        puVar1 = (undefined4 *)(*param_8 + lVar22);
        lVar22 = lVar22 + 8;
        *(undefined4 *)(local_258 + lVar18 * 8) = *puVar1;
      } while (uVar27 != uVar16);
    }
    else {
      uVar16 = 0;
      do {
        iVar26 = (int)uVar16;
        uVar21 = (ulong)(iVar26 + ((iVar26 * 0x10000 + 0x10000 >> 0x10) * (int)(short)uVar16 >> 1));
        if (((uint)param_7 & 0xff) == 1) {
          uVar24 = 0;
          iVar25 = 0;
        }
        else {
          uVar24 = 0;
          iVar25 = 0;
          do {
            plVar17 = (long *)(param_6 + uVar24 * 8);
            uVar4 = uVar21;
            if (uVar24 != 0) {
              uVar4 = uVar16;
            }
            if (*(char *)(*(long *)(*plVar17 + 0x20) + uVar4) != '\0') {
              iVar25 = iVar25 + 1;
            }
            uVar24 = uVar24 + 2;
            if (*(char *)(*(long *)(plVar17[1] + 0x20) + uVar4) != '\0') {
              iVar25 = iVar25 + 1;
            }
          } while ((param_7 & 0xfe) != uVar24);
        }
        if ((param_7 & 1) != 0) {
          if (1 < uVar24) {
            uVar21 = uVar16;
          }
          if (*(char *)(*(long *)(*(long *)(param_6 + uVar24 * 8) + 0x20) + uVar21) != '\0') {
            iVar25 = iVar25 + 1;
          }
        }
        lVar22 = (long)local_250;
        if ((int)(local_24c & 0x7fffffff) <= local_250) {
          FUN_02fc2ccc(&local_258,lVar22 + 1);
        }
        lVar23 = (long)local_250;
        local_250 = (int)(lVar22 + 1);
        *(int *)((long)(local_258 + lVar23 * 8) + 4) = iVar26;
        lVar22 = uVar16 * 8;
        uVar16 = uVar16 + 1;
        *(int *)(local_258 + lVar23 * 8) = *(int *)(*param_8 + lVar22 + 4) * (iVar25 + 1);
      } while (uVar16 != uVar27);
    }
    if (local_250 + -1 != 0 && 0 < local_250) {
      FUN_02fc2e50(local_258,0,local_250 + -1);
    }
    if (0 < local_250) {
      lVar22 = 0;
      do {
        uVar15 = *(uint *)(local_258 + lVar22 * 8 + 4);
        lVar23 = param_2[1];
        *(int *)(local_f8 + ((ulong)uVar15 & 0xff) * 4) = (int)lVar23;
        *(int *)(local_f8 + ((ulong)uVar15 & 0xff) * 4) = (int)lVar23;
        lVar23 = (long)(int)param_2[1];
        puVar3 = (undefined8 *)(*param_2 + lVar23 * 0x20);
        *(int *)(param_2 + 1) = (int)(lVar23 + 1);
        lVar23 = (lVar23 + 1) * 0x20 + lVar23 * -0x20;
        puVar13 = puVar3;
        do {
          lVar23 = lVar23 + -0x20;
          *puVar13 = &PTR_LAB_04612058;
          puVar13 = puVar13 + 4;
        } while (lVar23 != 0);
        puVar3[3] = 0;
        *puVar3 = &PTR_LAB_04612058;
        puVar3[1] = param_1;
        *(undefined2 *)(puVar3 + 2) = 0x301;
        *(short *)((long)puVar3 + 0x12) =
             (short)((uint)(((int)(uVar15 * 0x10000 + 0x10000) >> 0x10) * (int)(short)uVar15) >> 1)
             + (short)uVar15;
        *(char *)((long)puVar3 + 0x14) = (char)uVar15;
        *(char *)((long)puVar3 + 0x15) = (char)uVar15;
        *(undefined1 *)((long)puVar3 + 0x16) = 0;
        uVar9 = *(uint *)(param_11 + 0x20);
        uVar14 = uVar9;
        if ((int)(*(uint *)(param_11 + 0x24) & 0x7fffffff) <= (int)uVar9) {
          FUN_0323ff70(param_11 + 0x18,PTR_PTR_047d1a50,(long)(int)uVar9 + 1);
          uVar14 = *(uint *)(param_11 + 0x20);
        }
        plVar17 = (long *)(*(long *)(param_11 + 0x18) + (long)(int)uVar14 * 0x18);
        *(int *)(param_11 + 0x20) = (int)((long)(int)uVar9 + 1);
        *plVar17 = (long)puVar3;
        *(undefined2 *)(plVar17 + 1) = 1;
        *(undefined1 *)((long)plVar17 + 10) = 0x40;
        plVar17[2] = 0;
        if (((~uVar9 & 0xffff) != 0) && (sVar7 = local_148[(int)uVar15], sVar7 != -1)) {
          iVar26 = *(int *)(param_11 + 0x330);
          lVar23 = (long)iVar26;
          if ((int)(*(uint *)(param_11 + 0x334) & 0x7fffffff) <= iVar26) {
            FUN_02e7f7cc(param_11 + 0x328,PTR_PTR_047d1a50,lVar23 + 1);
            iVar26 = *(int *)(param_11 + 0x330);
          }
          psVar20 = (short *)(*(long *)(param_11 + 0x328) + (long)iVar26 * 4);
          *(int *)(param_11 + 0x330) = (int)(lVar23 + 1);
          *psVar20 = sVar7;
          psVar20[1] = (short)uVar9;
        }
        local_148[(int)uVar15] = (short)uVar9;
        lVar22 = lVar22 + 1;
      } while (lVar22 < local_250);
    }
    local_250 = 0;
    if ((-1 < (int)local_24c) && (local_258 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_258,(ulong)local_24c << 3);
    }
  }
  if (param_10 != -1) {
    if (1 < (int)local_140) {
      FUN_02fc2f20(local_148,0,local_140 - 1);
    }
    if (local_140 != 0) {
      if ((int)local_140 < 2) {
        uVar15 = 1;
      }
      else {
        lVar22 = 0;
        lVar23 = (ulong)local_140 - 1;
        psVar20 = local_148;
        do {
          psVar20 = psVar20 + 1;
          if (local_148[(int)lVar22] != *psVar20) {
            lVar22 = (long)(int)lVar22 + 1;
            local_148[lVar22] = *psVar20;
          }
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        if ((int)lVar22 < 0) goto LAB_02fc194c;
        uVar15 = (int)lVar22 + 1;
      }
      puVar11 = PTR_PTR_047d1a50;
      uVar27 = 0;
      do {
        sVar7 = local_148[uVar27];
        if (sVar7 != param_9) {
          iVar26 = *(int *)(param_11 + 0x330);
          lVar22 = (long)iVar26;
          if ((int)(*(uint *)(param_11 + 0x334) & 0x7fffffff) <= iVar26) {
            FUN_02e7f7cc(param_11 + 0x328,puVar11,lVar22 + 1);
            iVar26 = *(int *)(param_11 + 0x330);
          }
          psVar20 = (short *)(*(long *)(param_11 + 0x328) + (long)iVar26 * 4);
          *(int *)(param_11 + 0x330) = (int)(lVar22 + 1);
          *psVar20 = sVar7;
          psVar20[1] = param_10;
        }
        uVar27 = uVar27 + 1;
      } while (uVar15 != uVar27);
    }
  }
LAB_02fc194c:
  local_140 = 0;
  if ((-1 < (int)local_13c) && (local_148 != (short *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_148,(ulong)local_13c << 1);
  }
  lVar22 = local_f0;
  uVar27 = (ulong)local_f0._4_4_;
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_f8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_f8,uVar27 << 2);
  }
  return;
}


