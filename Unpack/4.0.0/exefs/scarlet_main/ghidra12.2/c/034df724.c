/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034df724; name: FUN_034df724
 */


int FUN_034df724(long *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong unaff_x24;
  uint uVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined4 local_6c;
  uint *local_68;
  
  local_6c = param_3;
  local_68 = param_2;
  iVar9 = (**(code **)(*param_1 + 0x88))();
  if (iVar9 != 4) {
    (**(code **)(*param_1 + 0x88))(param_1);
    return 0x5b;
  }
  local_68 = param_2 + 1;
  iVar9 = FUN_034ae500(param_1,&local_68,&local_6c,0);
  if (iVar9 != 1) {
    return iVar9;
  }
  uVar14 = *local_68;
  pbVar2 = (byte *)((long)local_68 + 1);
  uVar4 = *(undefined4 *)((long)local_68 + 5);
  bVar6 = *(byte *)((long)local_68 + 9);
  local_68 = (uint *)((long)local_68 + 10);
  puVar15 = local_68;
  if (((int)param_1[0x28] != *(int *)pbVar2) ||
     (*(uint *)((long)param_1 + 0x13c) != (uint)(byte)uVar14)) {
    lVar17 = param_1[0x12];
    *(int *)(param_1 + 0x28) = *(int *)pbVar2;
    *(uint *)((long)param_1 + 0x13c) = (uint)(byte)uVar14;
    if (((lVar17 != 0) && ((0 < *(short *)(lVar17 + 0x90) || (0 < *(short *)(lVar17 + 0x94))))) &&
       ((bVar6 != 0 || ((char)param_1[0x29] != '\0')))) {
      iVar9 = FUN_034de99c(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x29) = 1;
      if (iVar9 != 1) {
        return iVar9;
      }
      puVar15 = local_68;
    }
  }
  *(undefined4 *)((long)param_1 + 0x144) = uVar4;
  *(uint *)((long)param_1 + 0xda) =
       *(uint *)((long)param_1 + 0xda) & 0xf0000000 |
       *(uint *)((long)param_1 + 0xda) & 0x7ffffff | (uint)(bVar6 != 0) << 0x1b;
  local_68 = puVar15 + 1;
  uVar14 = *puVar15;
  uVar20 = (ulong)uVar14;
  if (uVar14 != 0) {
    if (uVar14 == 1) {
      param_1[0x20] = (long)(param_1 + 0x1f);
    }
    else {
      lVar17 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar20 << 3,1);
      param_1[0x20] = lVar17;
      if (lVar17 == 0) {
        return 0x34;
      }
    }
    *(uint *)((long)param_1 + 0x10c) = uVar14;
    do {
      uVar14 = *local_68;
      local_68 = local_68 + 1;
      iVar9 = (**(code **)(*param_1 + 0x58))(param_1,uVar14);
      if (iVar9 != 0xf && iVar9 != 1) {
        return iVar9;
      }
      uVar14 = (int)uVar20 - 1;
      uVar20 = (ulong)uVar14;
    } while (uVar14 != 0);
    if (iVar9 != 1) {
      return iVar9;
    }
  }
  uVar14 = *local_68;
  if (uVar14 == 0) {
    uVar13 = local_68[1];
    local_68 = local_68 + 2;
  }
  else {
    local_68 = local_68 + 1;
    puVar10 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar14 * 0x28);
    param_1[0x2d] = (long)puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      uVar13 = 0;
      *(uint *)(param_1 + 0x2e) = uVar14;
      param_1[0x2c] = (long)puVar10;
      do {
        puVar7 = puVar10;
        puVar7[3] = 0;
        puVar7[4] = 0;
        uVar13 = uVar13 + 1;
        *puVar7 = puVar7 + 5;
        puVar10 = puVar7 + 5;
      } while (uVar13 < *(uint *)(param_1 + 0x2e));
      *puVar7 = 0;
    }
    uVar21 = 0;
    uVar13 = *local_68;
    local_68 = local_68 + 1;
    do {
      for (plVar24 = (long *)param_1[0x2a]; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        puVar15 = local_68;
        if (*(uint *)(plVar24 + 1) == uVar13) goto LAB_034dfa08;
      }
      plVar24 = (long *)param_1[0x2c];
      if (plVar24 == (long *)0x0) {
        plVar24 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x28);
        if (plVar24 == (long *)0x0) {
          return 2;
        }
        plVar24[3] = 0;
        plVar24[4] = 0;
        *plVar24 = param_1[0x2c];
        param_1[0x2c] = (long)plVar24;
      }
      if ((undefined8 *)param_1[0x2b] == (undefined8 *)0x0) {
        param_1[0x2a] = (long)plVar24;
      }
      else {
        *(undefined8 *)param_1[0x2b] = plVar24;
        plVar24 = (long *)param_1[0x2c];
      }
      param_1[0x2b] = (long)plVar24;
      param_1[0x2c] = *plVar24;
      *plVar24 = 0;
      plVar24 = (long *)param_1[0x2b];
      *(int *)((long)param_1 + 0x174) = *(int *)((long)param_1 + 0x174) + 1;
      *(uint *)((long)plVar24 + 8) = uVar13;
      puVar15 = local_68;
LAB_034dfa08:
      local_68 = puVar15 + 1;
      uVar13 = *puVar15;
      if (uVar13 != 0) {
        puVar15 = (uint *)((long)plVar24 + 0x10);
        if (uVar13 == 1) {
          *(uint **)((long)plVar24 + 0x18) = puVar15;
          puVar12 = puVar15;
        }
        else {
          puVar12 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar13 << 2,1);
          *(uint **)((long)plVar24 + 0x18) = puVar12;
          if (puVar12 == (uint *)0x0) goto LAB_034dfa5c;
        }
        *(uint *)((long)plVar24 + 0x24) = uVar13;
LAB_034dfa5c:
        uVar19 = 0;
        do {
          puVar16 = local_68 + 1;
          uVar5 = *local_68;
          uVar3 = *(uint *)((long)plVar24 + 0x20);
          unaff_x24 = (ulong)uVar3;
          puVar11 = puVar12;
          if ((uVar3 != 0) && (*puVar12 != uVar5)) {
            lVar17 = unaff_x24 * 4;
            puVar18 = puVar12;
            do {
              lVar17 = lVar17 + -4;
              puVar11 = puVar12 + unaff_x24;
              if (lVar17 == 0) break;
              puVar11 = puVar18 + 1;
              puVar1 = puVar18 + 1;
              puVar18 = puVar11;
            } while (*puVar1 != uVar5);
          }
          if ((puVar11 != (uint *)0x0) && (puVar12 + unaff_x24 != puVar11)) {
            return 0x39;
          }
          uVar22 = *(uint *)((long)plVar24 + 0x24);
          local_68 = puVar16;
          if (uVar3 < uVar22) {
            puVar11 = puVar12;
          }
          else {
            iVar9 = uVar22 + (uVar22 >> 1);
            if (uVar22 == 0) {
              iVar9 = 1;
            }
            uVar22 = iVar9 + uVar22;
            puVar11 = puVar15;
            if (1 < uVar22) {
              if (puVar15 == puVar12) {
                puVar11 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar22 << 2,1);
                if (puVar11 == (uint *)0x0) {
                  return 2;
                }
                memcpy(puVar11,puVar15,(unaff_x24 & 0x3fffffff) << 2);
              }
              else {
                puVar11 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))
                                            (0,puVar12,(ulong)uVar22 << 2,1);
                if (puVar11 == (uint *)0x0) {
                  return 2;
                }
              }
            }
            *(uint **)((long)plVar24 + 0x18) = puVar11;
            *(uint *)((long)plVar24 + 0x24) = uVar22;
          }
          if (uVar22 <= uVar3) {
            return 2;
          }
          uVar3 = *(uint *)((long)plVar24 + 0x20);
          *(uint *)((long)plVar24 + 0x20) = uVar3 + 1;
          if (puVar11 == (uint *)0x0) {
            return 2;
          }
          uVar19 = uVar19 + 1;
          puVar11[uVar3] = uVar5;
          if (uVar19 == uVar13) break;
          puVar12 = *(uint **)((long)plVar24 + 0x18);
        } while( true );
      }
      puVar15 = local_68 + 1;
      uVar13 = *local_68;
      uVar21 = uVar21 + 1;
      local_68 = puVar15;
    } while (uVar21 != uVar14);
  }
  puVar8 = PTR_DAT_047e2fd0;
  if (uVar13 == 0) {
    return 1;
  }
  puVar10 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar13 * 0x18);
  param_1[0x32] = (long)puVar10;
  if (puVar10 != (undefined8 *)0x0) {
    uVar14 = 0;
    *(uint *)(param_1 + 0x33) = uVar13;
    param_1[0x31] = (long)puVar10;
    do {
      puVar7 = puVar10;
      *puVar7 = puVar7 + 3;
      uVar14 = uVar14 + 1;
      puVar10 = puVar7 + 3;
    } while (uVar14 < *(uint *)(param_1 + 0x33));
    *puVar7 = 0;
  }
  uVar14 = 0;
  do {
    uVar21 = *local_68;
    uVar19 = local_68[1];
    bVar6 = *(byte *)((long)local_68 + 5);
    puVar15 = (uint *)((long)local_68 + 0xe);
    uVar23 = *(undefined8 *)((long)local_68 + 6);
    for (plVar24 = (long *)param_1[0x2f]; local_68 = puVar15, plVar24 != (long *)0x0;
        plVar24 = (long *)*plVar24) {
      if (*(uint *)(plVar24 + 1) == uVar21) goto LAB_034dfcc8;
    }
    plVar24 = (long *)param_1[0x31];
    if (plVar24 == (long *)0x0) {
      plVar24 = (long *)(**(code **)(puVar8 + 0x10))(0,0x18);
      if (plVar24 == (long *)0x0) {
        return 2;
      }
      *plVar24 = param_1[0x31];
      param_1[0x31] = (long)plVar24;
    }
    if ((undefined8 *)param_1[0x30] == (undefined8 *)0x0) {
      param_1[0x2f] = (long)plVar24;
    }
    else {
      *(undefined8 *)param_1[0x30] = plVar24;
      plVar24 = (long *)param_1[0x31];
    }
    param_1[0x30] = (long)plVar24;
    param_1[0x31] = *plVar24;
    *plVar24 = 0;
    *(int *)((long)param_1 + 0x19c) = *(int *)((long)param_1 + 0x19c) + 1;
    plVar24 = (long *)param_1[0x30];
    *(uint *)((long)plVar24 + 8) = uVar21;
LAB_034dfcc8:
    uVar14 = uVar14 + 1;
    *(undefined8 *)((long)plVar24 + 0xc) = uVar23;
    uVar21 = (uint)unaff_x24 & 0xffffff00 |
             (uint)unaff_x24 & 0xe0 | ((byte)uVar19 & 1) << 3 | ((byte)((byte)uVar19 >> 1) & 1) << 4
             | bVar6 & 7;
    unaff_x24 = (ulong)uVar21;
    *(uint *)((long)plVar24 + 0x14) = uVar21;
    if (uVar14 == uVar13) {
      return 1;
    }
  } while( true );
}


