/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016327c4; name: FUN_016327c4
 */


void FUN_016327c4(long param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ushort *puVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined8 local_e8 [6];
  undefined2 local_b8 [6];
  byte local_ac [6];
  byte local_a6 [6];
  byte local_a0 [8];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  *param_2 = 0;
  if ((uint)((byte *)param_3[2])[1] + (uint)*(byte *)param_3[2] == 0) {
    return;
  }
  uVar5 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar4 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),uVar5);
  local_e8[4] = param_3[6];
  local_e8[3] = *param_3;
  local_e8[1] = param_3[1];
  local_e8[0] = param_3[2];
  local_e8[2] = param_3[3];
  FUN_0163354c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x8e0),&local_98,local_e8);
  local_e8[3] = param_3[3];
  local_e8[1] = param_3[4];
  local_e8[0] = *param_3;
  local_e8[2] = param_3[2];
  FUN_016343a0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x540),&local_98,local_e8);
  pbVar17 = (byte *)param_3[2];
  bVar10 = *pbVar17;
  bVar2 = pbVar17[1];
  if ((uint)bVar2 + (uint)bVar10 != 0) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x420);
    if ((pbVar17[0xe] >> 3 & 1) == 0) {
      local_e8[0] = FUN_01021c94(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),
                                 *(undefined4 *)(pbVar17 + 8));
      local_b8[0] = *(undefined2 *)(pbVar17 + 4);
      local_ac[0] = pbVar17[0xc];
      local_a0[0] = pbVar17[0xd];
      uVar15 = 1;
      local_a6[0] = 1;
      if ((pbVar17[0xe] & 2) != 0) {
        local_a6[0] = 2;
      }
      local_a6[0] = -(pbVar17[0xe] & 1) & local_a6[0];
      bVar10 = *pbVar17;
      bVar2 = pbVar17[1];
    }
    else {
      uVar15 = 0;
    }
    uVar11 = (ulong)bVar2;
    uVar8 = (ulong)bVar10;
    if (1 < uVar8 + uVar11) {
      if ((pbVar17[0x1a] >> 3 & 1) == 0) {
        uVar6 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),
                             *(undefined4 *)(pbVar17 + 0x14));
        local_e8[uVar15] = uVar6;
        *(undefined2 *)(((ulong)local_e8 | uVar15 << 1) + 0x30) = *(undefined2 *)(pbVar17 + 0x10);
        uVar8 = (ulong)local_e8 | uVar15;
        uVar15 = (ulong)((int)uVar15 + 1);
        *(byte *)(uVar8 + 0x3c) = pbVar17[0x18];
        *(byte *)(uVar8 + 0x48) = pbVar17[0x19];
        bVar10 = 1;
        if ((pbVar17[0x1a] & 2) != 0) {
          bVar10 = 2;
        }
        *(byte *)(uVar8 + 0x42) = -(pbVar17[0x1a] & 1) & bVar10;
        uVar8 = (ulong)*pbVar17;
        uVar11 = (ulong)pbVar17[1];
      }
      if (2 < uVar8 + uVar11) {
        pbVar18 = pbVar17 + 0x26;
        uVar19 = 2;
        uVar16 = uVar15;
        do {
          uVar15 = uVar16;
          if ((*pbVar18 >> 3 & 1) == 0) {
            uVar6 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),
                                 *(undefined4 *)(pbVar18 + -6));
            local_e8[uVar16] = uVar6;
            local_b8[uVar16] = *(undefined2 *)(pbVar18 + -10);
            uVar15 = (ulong)((int)uVar16 + 1);
            local_ac[uVar16] = pbVar18[-2];
            local_a0[uVar16] = pbVar18[-1];
            bVar10 = 1;
            if ((*pbVar18 & 2) != 0) {
              bVar10 = 2;
            }
            local_a6[uVar16] = -(*pbVar18 & 1) & bVar10;
            uVar8 = (ulong)*pbVar17;
            uVar11 = (ulong)pbVar17[1];
          }
          uVar19 = uVar19 + 1;
          pbVar18 = pbVar18 + 0xc;
          uVar16 = uVar15;
        } while (uVar19 < uVar8 + uVar11);
      }
    }
    uVar14 = (uint)uVar15;
    if ((uVar15 & 0xff) != 0) {
      uVar13 = uVar14 & 0xff;
      FUN_016368cc(*(undefined8 *)(param_1 + 0x20),*param_3,param_3[3],(ulong)uVar13,local_e8,
                   local_ac,local_b8);
      local_88 = *param_3;
      local_90 = param_3[3];
      local_80 = param_3[4];
      uVar3 = (undefined1)uVar15;
      local_78._0_2_ = CONCAT11(*(undefined1 *)(param_3 + 5),uVar3);
      local_98 = local_e8;
      FUN_01633cc8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x14a0),auStack_68,&local_98);
      local_98 = (undefined8 *)*param_3;
      local_88 = param_3[3];
      uStack_70 = param_3[6];
      local_80 = CONCAT71(local_80._1_7_,uVar3);
      local_90 = CONCAT71(local_90._1_7_,uVar4);
      local_78 = local_e8;
      FUN_01635450(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x15c0),auStack_68,&local_98);
      if (local_a0[0] != 0) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x1340);
        if (local_a0[0] == 6) {
LAB_01632c34:
          FUN_01932f0c();
        }
        else if (local_a0[0] == 1) {
          FUN_029810a0(lVar12,local_e8[0]);
        }
        else {
          if (local_a0[0] == 5) goto LAB_01632c34;
          FUN_02933bb4(*(undefined8 *)(lVar12 + 0x38));
        }
      }
      if (uVar13 != 1) {
        if (local_a0[1] != '\0') {
          lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x1340);
          if (local_a0[1] == '\x06') {
LAB_01632c68:
            FUN_01932f0c();
          }
          else if (local_a0[1] == '\x01') {
            FUN_029810a0(lVar12,local_e8[1]);
          }
          else {
            if (local_a0[1] == '\x05') goto LAB_01632c68;
            FUN_02933bb4(*(undefined8 *)(lVar12 + 0x38));
          }
        }
        if (uVar13 != 2) {
          lVar12 = 0;
          do {
            bVar10 = local_a0[lVar12 + 2];
            if (bVar10 != 0) {
              lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x1340);
              if ((bVar10 == 6) || (bVar10 == 5)) {
                FUN_01932f0c(lVar7,local_e8[lVar12 + 2]);
              }
              else if (bVar10 == 1) {
                FUN_029810a0();
              }
              else {
                FUN_02933bb4(*(undefined8 *)(lVar7 + 0x38));
              }
            }
            lVar12 = lVar12 + 1;
          } while ((ulong)uVar13 - 2 != lVar12);
        }
      }
      local_88 = param_3[3];
      local_80 = *param_3;
      local_90 = param_3[1];
      local_78 = (undefined8 *)CONCAT71(local_78._1_7_,uVar3);
      uVar13 = uVar14 & 0xff;
      local_98 = local_e8;
      FUN_01632dec(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1a40),auStack_68,&local_98);
      FUN_01633284(param_1,*param_3,param_3[3]);
      if (uVar13 < 2) {
        uVar14 = 1;
      }
      FUN_017d9d10(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x1a60) + 0x38),*param_3,
                   local_e8[0],param_3[3],local_ac[0],local_b8[0],local_a6[0] != 0,0);
      if (1 < uVar13) {
        FUN_017d9d10(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x1a60) + 0x38),*param_3,
                     local_e8[1],param_3[3],local_ac[1],local_b8[1],local_a6[1] != '\0',0);
        if ((int)((ulong)uVar14 & 0xff) != 2) {
          lVar12 = 0;
          do {
            FUN_017d9d10(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x1a60) + 0x38),
                         *param_3,local_e8[lVar12 + 2],param_3[3],local_ac[lVar12 + 2],
                         local_b8[lVar12 + 2],local_a6[lVar12 + 2] != 0,0);
            lVar12 = lVar12 + 1;
          } while (((ulong)uVar14 & 0xff) - 2 != lVar12);
        }
      }
      local_90 = param_3[3];
      local_88 = param_3[4];
      local_80 = *param_3;
      local_78 = (undefined8 *)CONCAT71(local_78._1_7_,uVar3);
      local_98 = local_e8;
      FUN_0163379c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x280),auStack_68,&local_98);
      goto LAB_01632b7c;
    }
  }
  local_88 = param_3[3];
  local_80 = *param_3;
  local_90 = param_3[1];
  local_78 = (undefined8 *)((ulong)local_78 & 0xffffffffffffff00);
  local_98 = local_e8;
  FUN_01632dec(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1a40),auStack_68,&local_98);
  FUN_01633284(param_1,*param_3,param_3[3]);
  if ((uint)((byte *)param_3[2])[1] + (uint)*(byte *)param_3[2] != 0) {
    FUN_01632fe4(param_1,*param_3,param_3[3]);
  }
LAB_01632b7c:
  pbVar17 = (byte *)param_3[2];
  if ((uint)pbVar17[1] + (uint)*pbVar17 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint)*(ushort *)(pbVar17 + 4);
    uVar14 = (uint)pbVar17[1] + (uint)*pbVar17;
    uVar1 = uVar14;
    if (uVar14 < 2) {
      uVar1 = 1;
    }
    if ((1 < uVar14) &&
       (uVar13 = (uint)*(ushort *)(pbVar17 + 4) + (uint)*(ushort *)(pbVar17 + 0x10), uVar1 != 2)) {
      lVar12 = (ulong)uVar1 - 2;
      puVar9 = (ushort *)(pbVar17 + 0x1c);
      do {
        uVar13 = uVar13 + *puVar9;
        lVar12 = lVar12 + -1;
        puVar9 = puVar9 + 6;
      } while (lVar12 != 0);
    }
  }
  FUN_01633ef0(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[3],uVar13);
  *param_2 = uVar13;
  return;
}


