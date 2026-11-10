/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0016dde0; name: FUN_0016dde0
 */


bool FUN_0016dde0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  size_t __n;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *__src;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *__src_00;
  uint *puVar18;
  uint *puVar19;
  byte *pbVar21;
  byte *pbVar20;
  undefined8 *local_220;
  undefined8 local_150 [25];
  int aiStack_88 [10];
  
  if ((long)param_4 - (long)param_3 < 0x10) {
    return false;
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  puVar18 = *(uint **)(param_1 + 0x20);
  pbVar20 = *(byte **)(param_1 + 0x30);
  lVar6 = *(long *)(param_1 + 0x38);
  puVar1 = puVar18 + *(long *)(param_1 + 0x28);
  __src = *(undefined8 **)(param_1 + 0x40);
  __n = *(size_t *)(param_1 + 0x48);
  aiStack_88[4] = -8;
  aiStack_88[5] = 0xfffffff8;
  aiStack_88[6] = 0xfffffff8;
  if (0x14f < (long)param_4 - (long)param_3) {
    param_3 = param_4 + -0x2a;
  }
  puVar1[0] = 3;
  puVar1[1] = 3;
  puVar1[2] = 3;
  puVar1[3] = 3;
  puVar1[4] = 3;
  puVar1[5] = 3;
  puVar1[6] = 3;
  puVar1[7] = 3;
  local_220 = (undefined8 *)((long)__src + __n);
  puVar1[0xc] = 3;
  puVar1[0xd] = 3;
  puVar1[0xe] = 3;
  puVar1[0xf] = 3;
  if (199 < (long)__n) {
    __n = 200;
  }
  __src_00 = (undefined8 *)((long)local_220 - __n);
  pbVar2 = pbVar20 + lVar6;
  puVar1[8] = 3;
  puVar1[9] = 3;
  puVar1[10] = 3;
  puVar1[0xb] = 3;
  memcpy((void *)((long)local_150 - __n),__src_00,__n);
  local_150[0x18] = 0;
  local_150[0] = 0;
  local_150[1] = 0;
  local_150[2] = 0;
  local_150[3] = 0;
  local_150[4] = 0;
  local_150[5] = 0;
  local_150[6] = 0;
  local_150[7] = 0;
  local_150[8] = 0;
  local_150[9] = 0;
  local_150[10] = 0;
  local_150[0xb] = 0;
  local_150[0xc] = 0;
  local_150[0xd] = 0;
  local_150[0xe] = 0;
  local_150[0xf] = 0;
  local_150[0x10] = 0;
  local_150[0x11] = 0;
  local_150[0x12] = 0;
  local_150[0x13] = 0;
  local_150[0x14] = 0;
  local_150[0x15] = 0;
  local_150[0x16] = 0;
  local_150[0x17] = 0;
  puVar10 = puVar4;
  do {
    if ((pbVar2 <= pbVar20) || (param_3 <= param_2)) {
      while( true ) {
        if (pbVar2 <= pbVar20) {
          if (puVar18 != puVar1) {
            return false;
          }
          if (puVar10 != puVar4 + lVar5) {
            return false;
          }
          if (param_2 < param_4) {
            if ((long)local_220 - (long)__src != (long)param_4 - (long)param_2) {
              return false;
            }
            memcpy(param_2,__src,(long)param_4 - (long)param_2);
            param_2 = param_4;
          }
          return param_2 == param_4;
        }
        if (__src_00 <= __src) {
          if (local_220 <= __src && (long)__src - (long)local_220 != 0) {
            return false;
          }
          __src = (undefined8 *)((long)local_150 + ((long)__src - (long)local_220));
          __src_00 = local_150;
          local_220 = local_150;
        }
        bVar8 = *pbVar20;
        aiStack_88[7] = *puVar10;
        uVar12 = (ulong)*puVar18;
        puVar19 = puVar18 + 1;
        if (((ulong)bVar8 & 3) != 3) {
          uVar12 = (ulong)bVar8 & 3;
          puVar19 = puVar18;
        }
        if ((long)param_4 + (-0x10 - (long)param_2) < (long)uVar12) break;
        *param_2 = *__src;
        if (((8 < uVar12) && (param_2[1] = __src[1], 0x10 < uVar12)) &&
           (param_2[2] = __src[2], 0x18 < uVar12)) {
          if (((long)__src_00 - (long)__src <= (long)uVar12) &&
             ((long)local_220 - (long)__src < (long)uVar12)) {
            return false;
          }
          uVar12 = uVar12 - 0x18;
          puVar16 = __src + 3;
          puVar17 = param_2 + 3;
          do {
            __src = puVar16 + 1;
            uVar12 = uVar12 - 8;
            param_2 = puVar17 + 1;
            *puVar17 = *puVar16;
            puVar16 = __src;
            puVar17 = param_2;
          } while (0 < (long)uVar12);
        }
        uVar13 = (ulong)(bVar8 >> 6);
        uVar15 = uVar13 << 2 | 0x10;
        iVar3 = aiStack_88[uVar13 + 2];
        iVar9 = *(int *)((long)aiStack_88 + uVar15);
        uVar14 = (ulong)iVar9;
        iVar7 = aiStack_88[uVar13 + 1];
        *(int *)((long)aiStack_88 + uVar15) = aiStack_88[uVar13 + 3];
        puVar16 = (undefined8 *)((long)param_2 + uVar12);
        aiStack_88[uVar13 + 2] = iVar7;
        aiStack_88[uVar13 + 3] = iVar3;
        aiStack_88[4] = iVar9;
        if (uVar14 < (ulong)(param_5 - (long)puVar16)) {
          return false;
        }
        uVar15 = (ulong)(bVar8 >> 2) & 0xf;
        puVar17 = (undefined8 *)((long)puVar16 + uVar14);
        if (uVar15 == 0xf) {
          puVar18 = puVar19 + 1;
          if ((long)param_4 + (-8 - (long)puVar16) < (long)(ulong)(*puVar19 + 0xe)) {
            return false;
          }
          param_2 = (undefined8 *)((long)puVar16 + (ulong)(*puVar19 + 0xe));
          *puVar16 = *puVar17;
          puVar16[1] = puVar17[1];
          puVar16[2] = puVar17[2];
          for (puVar16 = puVar16 + 3; puVar16 < param_2; puVar16 = puVar16 + 1) {
            *puVar16 = *(undefined8 *)((long)puVar16 + uVar14);
          }
        }
        else {
          param_2 = (undefined8 *)((long)puVar16 + uVar15 + 2);
          *puVar16 = *puVar17;
          puVar16[1] = puVar17[1];
          puVar18 = puVar19;
        }
        puVar10 = (uint *)((long)puVar10 + (uVar13 + 1 & 4));
        if (puVar1 < puVar10) {
          return false;
        }
        __src = (undefined8 *)((long)__src + uVar12);
        pbVar20 = pbVar20 + 1;
        if (puVar1 < puVar18) {
          return false;
        }
      }
      return false;
    }
    if (__src_00 <= __src) {
      if (local_220 <= __src && (long)__src - (long)local_220 != 0) {
        return false;
      }
      __src = (undefined8 *)((long)local_150 + ((long)__src - (long)local_220));
      __src_00 = local_150;
      local_220 = local_150;
    }
    pbVar11 = pbVar2;
    if (7 < (long)pbVar2 - (long)pbVar20) {
      pbVar11 = pbVar20 + 8;
    }
    while( true ) {
      puVar19 = puVar18;
      pbVar21 = pbVar20;
      if (pbVar11 <= pbVar20) break;
      while( true ) {
        pbVar20 = pbVar21 + 1;
        bVar8 = *pbVar21;
        aiStack_88[7] = *puVar10;
        puVar19 = puVar18 + 1;
        uVar12 = (ulong)*puVar18;
        if (((ulong)bVar8 & 3) != 3) {
          puVar19 = puVar18;
          uVar12 = (ulong)bVar8 & 3;
        }
        *param_2 = *__src;
        if (((8 < uVar12) && (param_2[1] = __src[1], 0x10 < uVar12)) &&
           (param_2[2] = __src[2], 0x18 < uVar12)) {
          if (((long)__src_00 - (long)__src <= (long)uVar12) &&
             (pbVar11 = pbVar20, (long)local_220 - (long)__src < (long)uVar12)) {
            return false;
          }
          if (((long)param_3 - (long)param_2 < (long)uVar12) &&
             (pbVar11 = pbVar20, (long)param_4 + (-0x10 - (long)param_2) < (long)uVar12)) {
            return false;
          }
          uVar12 = uVar12 - 0x18;
          puVar16 = __src + 3;
          puVar17 = param_2 + 3;
          do {
            __src = puVar16 + 1;
            uVar12 = uVar12 - 8;
            param_2 = puVar17 + 1;
            *puVar17 = *puVar16;
            puVar16 = __src;
            puVar17 = param_2;
          } while (0 < (long)uVar12);
        }
        uVar13 = (ulong)(bVar8 >> 6);
        uVar15 = uVar13 << 2 | 0x10;
        iVar7 = aiStack_88[uVar13 + 1];
        iVar3 = aiStack_88[uVar13 + 2];
        iVar9 = *(int *)((long)aiStack_88 + uVar15);
        uVar14 = (ulong)iVar9;
        *(int *)((long)aiStack_88 + uVar15) = aiStack_88[uVar13 + 3];
        puVar16 = (undefined8 *)((long)param_2 + uVar12);
        aiStack_88[uVar13 + 2] = iVar7;
        aiStack_88[uVar13 + 3] = iVar3;
        aiStack_88[4] = iVar9;
        if (uVar14 < (ulong)(param_5 - (long)puVar16)) {
          return false;
        }
        uVar15 = (ulong)(bVar8 >> 2) & 0xf;
        __src = (undefined8 *)((long)__src + uVar12);
        puVar10 = (uint *)((long)puVar10 + (uVar13 + 1 & 4));
        puVar17 = (undefined8 *)((long)puVar16 + uVar14);
        if (uVar15 == 0xf) break;
        *puVar16 = *puVar17;
        param_2 = (undefined8 *)((long)puVar16 + uVar15 + 2);
        puVar16[1] = puVar17[1];
        puVar18 = puVar19;
        pbVar21 = pbVar20;
        if (pbVar11 <= pbVar20) goto LAB_0016e0cc;
      }
      puVar18 = puVar19 + 1;
      if ((long)param_4 + (-8 - (long)puVar16) < (long)(ulong)(*puVar19 + 0xe)) {
        return false;
      }
      param_2 = (undefined8 *)((long)puVar16 + (ulong)(*puVar19 + 0xe));
      *puVar16 = *puVar17;
      puVar16[1] = puVar17[1];
      puVar16[2] = puVar17[2];
      for (puVar16 = puVar16 + 3; puVar16 < param_2; puVar16 = puVar16 + 1) {
        *puVar16 = *(undefined8 *)((long)puVar16 + uVar14);
      }
      puVar19 = puVar18;
      if (param_3 <= param_2) break;
    }
LAB_0016e0cc:
    if (puVar1 < puVar19) {
      return false;
    }
    puVar18 = puVar19;
    if (puVar1 < puVar10) {
      return false;
    }
  } while( true );
}


