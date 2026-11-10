/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b69aec; name: FUN_02b69aec
 */


uint FUN_02b69aec(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  byte *pbVar3;
  size_t __n;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  size_t sVar13;
  void *__src;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  size_t sVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  uint local_49c;
  uint local_490 [10];
  undefined4 local_468;
  
  local_490[0] = 0;
  local_490[1] = 0;
  local_490[6] = 0;
  local_490[7] = 0;
  local_490[8] = 0;
  local_490[9] = 0;
  uVar2 = (param_1[1] - param_1[0xc]) + param_4;
  local_490[2] = 0;
  local_490[3] = 0;
  local_490[4] = 0;
  local_490[5] = 0;
  uVar12 = uVar2 + param_3 >> 2;
  if ((uVar2 + param_3 & 3) != 0) {
    uVar12 = uVar12 + 1;
  }
  if (param_3 < 1) {
    uVar17 = 1;
  }
  else {
    lVar16 = 0;
    uVar23 = uVar2 >> 2;
    plVar1 = param_1 + 9;
    uVar17 = 1;
    do {
      uVar10 = (ulong)(uint)((int)lVar16 + (int)uVar2);
      sVar13 = 0x28 - (uVar10 & 3);
      sVar18 = param_3 - lVar16;
      __n = sVar18;
      if ((long)sVar13 <= (long)sVar18) {
        __n = sVar13;
      }
      __src = (void *)((ulong)local_490 | uVar10 & 3);
      memset(&local_468,0,0x400);
      if ((long)sVar18 < 1) {
        local_49c = 1;
      }
      else {
        lVar19 = 0;
        local_49c = 1;
        do {
          uVar22 = __n - lVar19;
          uVar10 = uVar22;
          if (0x3ff < (long)uVar22) {
            uVar10 = 0x400;
          }
          lVar15 = lVar16 + param_4 + lVar19;
          plVar8 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
          uVar7 = 0;
          if ((0 < (long)uVar22) && (lVar11 = param_1[1] + lVar15, -1 < lVar11)) {
            uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar10,lVar11);
            if ((uVar9 & 1) == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar8 + 0x28))(plVar8,&local_468,uVar10,lVar11);
            }
          }
          local_49c = local_49c & uVar7;
          if (((0 < (long)uVar22) && (lVar11 = param_1[7], lVar11 != 0)) &&
             (lVar14 = param_1[6], lVar14 != 0)) {
            lVar15 = (param_1[1] + lVar15) - param_1[8];
            lVar4 = 0;
            if (lVar11 != 0) {
              lVar4 = lVar15 / lVar11;
            }
            lVar15 = lVar15 - lVar4 * lVar11;
            if (uVar10 == 1) {
              uVar9 = 0;
            }
            else {
              uVar22 = 0;
              do {
                lVar4 = lVar15 + uVar22;
                lVar5 = 0;
                if (lVar11 != 0) {
                  lVar5 = lVar4 / lVar11;
                }
                pbVar3 = (byte *)((long)local_490 + uVar22 + 0x28);
                uVar9 = uVar22 + 2;
                lVar6 = 0;
                if (lVar11 != 0) {
                  lVar6 = (lVar4 + 1) / lVar11;
                }
                *pbVar3 = *pbVar3 ^ *(byte *)(lVar14 + (lVar4 - lVar5 * lVar11));
                *(byte *)((long)local_490 + uVar22 + 0x29) =
                     *(byte *)((long)local_490 + uVar22 + 0x29) ^
                     *(byte *)(lVar14 + ((lVar4 + 1) - lVar6 * lVar11));
                uVar22 = uVar9;
              } while ((uVar10 & 0xfffffffffffffffe) != uVar9);
            }
            if ((uVar10 & 1) != 0) {
              lVar15 = uVar9 + lVar15;
              lVar4 = 0;
              if (lVar11 != 0) {
                lVar4 = lVar15 / lVar11;
              }
              *(byte *)((long)local_490 + uVar9 + 0x28) =
                   *(byte *)((long)local_490 + uVar9 + 0x28) ^
                   *(byte *)(lVar14 + (lVar15 - lVar4 * lVar11));
            }
          }
          memcpy((void *)((long)__src + lVar19),&local_468,uVar10);
          lVar19 = uVar10 + lVar19;
        } while (lVar19 < (long)__n);
      }
      puVar20 = local_490;
      uVar10 = uVar23;
      do {
        lVar19 = param_1[10];
        if ((long)uVar10 < lVar19) {
          (**(code **)param_1[9])(plVar1);
          lVar19 = 0;
          param_1[10] = 0;
        }
        uVar23 = uVar10 + 1;
        while (lVar19 < (long)uVar10) {
          (**(code **)(param_1[9] + 0x10))(plVar1);
          lVar19 = param_1[10] + 1;
          param_1[10] = lVar19;
        }
        uVar7 = (**(code **)(*plVar1 + 8))(plVar1);
        puVar21 = puVar20 + 1;
        *puVar20 = *puVar20 ^ uVar7;
        puVar20 = puVar21;
        uVar10 = uVar23;
      } while (puVar21 != &local_468 && uVar23 < uVar12);
      uVar17 = uVar17 & local_49c;
      memcpy((void *)(param_2 + lVar16),__src,__n);
      lVar16 = __n + lVar16;
    } while (lVar16 < param_3);
  }
  return uVar17;
}


