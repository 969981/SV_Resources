/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0304648c; name: FUN_0304648c
 */


int FUN_0304648c(long param_1,long *param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint local_48;
  undefined4 uStack_44;
  
  uVar12 = *(uint *)(param_1 + 0x2c);
  uVar19 = param_4;
  uVar5 = param_3;
  if (param_4 <= param_3) {
    uVar19 = param_3;
    uVar5 = param_4;
  }
  if ((int)uVar12 < 1) {
    return 0;
  }
  uVar7 = (int)uVar19 * -0x61c8864f;
  lVar11 = *(long *)(param_1 + 0x20);
  uVar9 = (ulong)(uVar12 & uVar7);
  puVar17 = (ulong *)(lVar11 + uVar9 * 0x18);
  uVar14 = *puVar17;
  uVar18 = puVar17[1];
  if (uVar14 == 0xffffffffffffffff || uVar18 == 0xffffffffffffffff) {
    return 0;
  }
  uVar21 = uVar9;
  if (uVar14 != uVar5 || uVar18 != uVar19) {
    do {
      uVar21 = (ulong)((int)uVar21 + 1U & uVar12);
      puVar17 = (ulong *)(lVar11 + uVar21 * 0x18);
      uVar2 = *puVar17;
      uVar4 = puVar17[1];
      if (uVar2 == 0xffffffffffffffff || uVar4 == 0xffffffffffffffff) {
        return 0;
      }
    } while (uVar2 != uVar5 || uVar4 != uVar19);
  }
  iVar6 = *(int *)(lVar11 + uVar21 * 0x18 + 0x10);
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = iVar6 + -1;
  if (iVar6 != 0) {
    if ((int)uVar12 < *(int *)(param_1 + 0x28) * 2) {
      FUN_03046038((long *)(param_1 + 0x20),uVar12 * 2 + 2);
      uVar12 = *(uint *)(param_1 + 0x2c);
      uVar9 = (ulong)(uVar12 & uVar7);
      lVar11 = *(long *)(param_1 + 0x20);
      puVar17 = (ulong *)(lVar11 + uVar9 * 0x18);
      uVar14 = *puVar17;
      uVar18 = puVar17[1];
    }
    uVar7 = (uint)uVar9;
    iVar23 = 1;
    if ((uVar14 != 0xffffffffffffffff) && (uVar18 != 0xffffffffffffffff)) {
      do {
        uVar7 = (uint)uVar9;
        if ((uVar18 == uVar19) && (uVar14 == uVar5)) {
          iVar23 = 0;
          goto LAB_03046624;
        }
        uVar7 = uVar7 + 1 & uVar12;
        uVar9 = (ulong)uVar7;
        puVar17 = (ulong *)(lVar11 + uVar9 * 0x18);
        uVar14 = *puVar17;
        uVar18 = puVar17[1];
      } while (uVar14 != 0xffffffffffffffff && uVar18 != 0xffffffffffffffff);
      iVar23 = 1;
    }
LAB_03046624:
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar23;
    puVar17 = (ulong *)(lVar11 + (long)(int)uVar7 * 0x18);
    *puVar17 = uVar5;
    puVar17[1] = uVar19;
    *(int *)(*(long *)(param_1 + 0x20) + (long)(int)uVar7 * 0x18 + 0x10) = iVar6;
    return iVar6;
  }
  if (uVar14 != uVar5 || uVar18 != uVar19) {
    do {
      uVar9 = (ulong)((int)uVar9 + 1U & uVar12);
      puVar17 = (ulong *)(lVar11 + uVar9 * 0x18);
      uVar14 = *puVar17;
      uVar18 = puVar17[1];
      if (uVar14 == 0xffffffffffffffff || uVar18 == 0xffffffffffffffff) {
        uVar9 = (ulong)(uVar12 + 1);
        break;
      }
    } while (uVar14 != uVar5 || uVar18 != uVar19);
  }
  uVar7 = (uint)uVar9;
  if ((int)uVar7 <= (int)uVar12) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    puVar13 = (undefined8 *)(lVar11 + uVar9 * 0x18);
    *puVar13 = 0xffffffffffffffff;
    puVar13[1] = 0xffffffffffffffff;
    uVar12 = *(uint *)(param_1 + 0x2c);
    lVar11 = *(long *)(param_1 + 0x20);
    uVar1 = uVar7;
    do {
      uVar1 = uVar12 + uVar1 & uVar12;
      plVar20 = (long *)(lVar11 + (ulong)uVar1 * 0x18);
    } while (*plVar20 != -1 && plVar20[1] != -1);
    uVar19 = (ulong)(uVar12 & uVar7 + 1);
    plVar20 = (long *)(lVar11 + uVar19 * 0x18);
    lVar22 = plVar20[1];
    if (*plVar20 != -1 && lVar22 != -1) {
      uVar7 = uVar1 + 1 & uVar12;
      do {
        uVar1 = (int)lVar22 * -0x61c8864f & uVar12;
        uVar16 = (uint)uVar19;
        uVar8 = (uint)uVar9;
        if ((((uVar16 < uVar7) || (uVar1 <= uVar8)) &&
            ((uVar8 <= uVar16 || ((uVar1 <= uVar8 && (uVar16 < uVar1)))))) &&
           ((uVar1 <= uVar8 || (uVar7 <= uVar1)))) {
          puVar10 = (undefined8 *)(lVar11 + uVar9 * 0x18);
          puVar13 = (undefined8 *)(lVar11 + uVar19 * 0x18);
          uVar3 = *puVar13;
          uVar15 = puVar13[2];
          puVar10[1] = puVar13[1];
          puVar10[2] = uVar15;
          *puVar10 = uVar3;
          puVar13 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar19 * 0x18);
          *puVar13 = 0xffffffffffffffff;
          puVar13[1] = 0xffffffffffffffff;
          uVar12 = *(uint *)(param_1 + 0x2c);
          lVar11 = *(long *)(param_1 + 0x20);
          uVar9 = uVar19;
        }
        uVar19 = (ulong)(uVar12 & uVar16 + 1);
        plVar20 = (long *)(lVar11 + uVar19 * 0x18);
        lVar22 = plVar20[1];
      } while (*plVar20 != -1 && lVar22 != -1);
    }
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  iVar6 = (**(code **)(*param_2 + 0x100))(param_2,param_3);
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = (**(code **)(*param_2 + 0x100))(param_2,param_4);
  if (iVar6 == 0) {
    return 0;
  }
  lVar11 = param_2[0x10];
  if ((long)param_3 < 0) {
    param_3 = param_3 & 0xffffffff;
  }
  else {
    uVar19 = FUN_00dbb6c8(param_2 + 300,param_3,&local_48);
    param_3 = (ulong)local_48;
    if ((uVar19 & 1) == 0) {
      param_3 = 0xffffff;
    }
  }
  if ((long)param_4 < 0) {
    param_4 = param_4 & 0xffffffff;
  }
  else {
    uVar19 = FUN_00dbb6c8(param_2 + 300,param_4,&local_48);
    param_4 = (ulong)local_48;
    if ((uVar19 & 1) == 0) {
      param_4 = 0xffffff;
    }
  }
  puVar13 = (undefined8 *)(lVar11 + (param_3 & 0xffffff) * 0x18);
  puVar10 = (undefined8 *)(lVar11 + (param_4 & 0xffffff) * 0x18);
  iVar25 = -(uint)((float)puVar13[2] <= (float)*puVar10);
  iVar26 = -(uint)((float)((ulong)puVar13[2] >> 0x20) <= (float)((ulong)*puVar10 >> 0x20));
  iVar27 = -(uint)((float)((ulong)puVar13[1] >> 0x20) <= (float)puVar10[1]);
  iVar6 = -(uint)((float)puVar10[2] <= (float)*puVar13);
  iVar23 = -(uint)((float)((ulong)puVar10[2] >> 0x20) <= (float)((ulong)*puVar13 >> 0x20));
  iVar24 = -(uint)((float)((ulong)puVar10[1] >> 0x20) <= (float)puVar13[1]);
  if (CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
               (byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
               (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
               CONCAT12((byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                        (byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                        (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                        CONCAT11((byte)((uint)iVar23 >> 8) & (byte)((uint)iVar26 >> 8) &
                                 (byte)((uint)iVar6 >> 8) & (byte)((uint)iVar25 >> 8) &
                                 (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar27 >> 8),
                                 (byte)iVar23 & (byte)iVar26 & (byte)iVar6 & (byte)iVar25 &
                                 (byte)iVar24 & (byte)iVar27))) != 0) {
    local_48 = (uint)param_4;
    uStack_44 = (undefined4)param_3;
    FUN_02ff2cd0(param_2,&local_48,1,param_5);
  }
  return 0;
}


