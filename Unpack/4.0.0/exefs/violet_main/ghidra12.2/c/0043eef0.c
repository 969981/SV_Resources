/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043eef0; name: FUN_0043eef0
 */


void FUN_0043eef0(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  uint7 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  uint uVar32;
  uint uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  uint uVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  
  uStack_b8 = param_2[param_3 * 0x10 + -7];
  local_c0 = param_2[param_3 * 0x10 + -8];
  local_a8 = param_2[param_3 * 0x10 + -5];
  local_b0 = param_2[param_3 * 0x10 + -6];
  uStack_98 = param_2[param_3 * 0x10 + -3];
  local_a0 = param_2[param_3 * 0x10 + -4];
  local_88 = param_2[param_3 * 0x10 + -1];
  local_90 = param_2[param_3 * 0x10 + -2];
  if (param_3 * 2 != 0) {
    uVar25 = 0;
    do {
      uVar17 = 10;
      uVar34 = param_2[1];
      uVar29 = *param_2;
      uVar37 = CONCAT13((byte)((ulong)local_c0 >> 0x18) ^ (byte)((ulong)uVar29 >> 0x18),
                        CONCAT12((byte)((ulong)local_c0 >> 0x10) ^ (byte)((ulong)uVar29 >> 0x10),
                                 CONCAT11((byte)((ulong)local_c0 >> 8) ^ (byte)((ulong)uVar29 >> 8),
                                          (byte)local_c0 ^ (byte)uVar29)));
      uVar39 = CONCAT13((byte)((ulong)uStack_b8 >> 0x18) ^ (byte)((ulong)uVar34 >> 0x18),
                        CONCAT12((byte)((ulong)uStack_b8 >> 0x10) ^ (byte)((ulong)uVar34 >> 0x10),
                                 CONCAT11((byte)((ulong)uStack_b8 >> 8) ^ (byte)((ulong)uVar34 >> 8)
                                          ,(byte)uStack_b8 ^ (byte)uVar34)));
      uVar35 = param_2[3];
      uVar30 = param_2[2];
      iVar26 = CONCAT13((byte)((ulong)local_b0 >> 0x18) ^ (byte)((ulong)uVar30 >> 0x18),
                        CONCAT12((byte)((ulong)local_b0 >> 0x10) ^ (byte)((ulong)uVar30 >> 0x10),
                                 CONCAT11((byte)((ulong)local_b0 >> 8) ^ (byte)((ulong)uVar30 >> 8),
                                          (byte)local_b0 ^ (byte)uVar30)));
      uVar28 = CONCAT16((byte)((ulong)local_b0 >> 0x30) ^ (byte)((ulong)uVar30 >> 0x30),
                        CONCAT15((byte)((ulong)local_b0 >> 0x28) ^ (byte)((ulong)uVar30 >> 0x28),
                                 CONCAT14((byte)((ulong)local_b0 >> 0x20) ^
                                          (byte)((ulong)uVar30 >> 0x20),iVar26)));
      uVar32 = CONCAT13((byte)((ulong)local_a8 >> 0x18) ^ (byte)((ulong)uVar35 >> 0x18),
                        CONCAT12((byte)((ulong)local_a8 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10),
                                 CONCAT11((byte)((ulong)local_a8 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                          (byte)local_a8 ^ (byte)uVar35)));
      uVar36 = param_2[5];
      uVar31 = param_2[4];
      uVar40 = param_2[7];
      uVar38 = param_2[6];
      uVar27 = CONCAT13((byte)((ulong)local_90 >> 0x18) ^ (byte)((ulong)uVar38 >> 0x18),
                        CONCAT12((byte)((ulong)local_90 >> 0x10) ^ (byte)((ulong)uVar38 >> 0x10),
                                 CONCAT11((byte)((ulong)local_90 >> 8) ^ (byte)((ulong)uVar38 >> 8),
                                          (byte)local_90 ^ (byte)uVar38)));
      uVar33 = CONCAT13((byte)((ulong)local_88 >> 0x18) ^ (byte)((ulong)uVar40 >> 0x18),
                        CONCAT12((byte)((ulong)local_88 >> 0x10) ^ (byte)((ulong)uVar40 >> 0x10),
                                 CONCAT11((byte)((ulong)local_88 >> 8) ^ (byte)((ulong)uVar40 >> 8),
                                          (byte)local_88 ^ (byte)uVar40)));
      uVar15 = (ulong)uVar28 & 0xffffffff;
      uStack_6c = (uint)(CONCAT17((byte)((ulong)local_b0 >> 0x38) ^ (byte)((ulong)uVar30 >> 0x38),
                                  uVar28) >> 0x20);
      uStack_7c = (uint)(CONCAT17((byte)((ulong)local_c0 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                                  CONCAT16((byte)((ulong)local_c0 >> 0x30) ^
                                           (byte)((ulong)uVar29 >> 0x30),
                                           CONCAT15((byte)((ulong)local_c0 >> 0x28) ^
                                                    (byte)((ulong)uVar29 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_c0 >> 0x20) ^
                                                             (byte)((ulong)uVar29 >> 0x20),uVar37)))
                                 ) >> 0x20);
      uVar7 = uStack_7c;
      uStack_74 = (uint)(CONCAT17((byte)((ulong)uStack_b8 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                                  CONCAT16((byte)((ulong)uStack_b8 >> 0x30) ^
                                           (byte)((ulong)uVar34 >> 0x30),
                                           CONCAT15((byte)((ulong)uStack_b8 >> 0x28) ^
                                                    (byte)((ulong)uVar34 >> 0x28),
                                                    CONCAT14((byte)((ulong)uStack_b8 >> 0x20) ^
                                                             (byte)((ulong)uVar34 >> 0x20),uVar39)))
                                 ) >> 0x20);
      uStack_64 = (uint)(CONCAT17((byte)((ulong)local_a8 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                  CONCAT16((byte)((ulong)local_a8 >> 0x30) ^
                                           (byte)((ulong)uVar35 >> 0x30),
                                           CONCAT15((byte)((ulong)local_a8 >> 0x28) ^
                                                    (byte)((ulong)uVar35 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_a8 >> 0x20) ^
                                                             (byte)((ulong)uVar35 >> 0x20),uVar32)))
                                 ) >> 0x20);
      uVar8 = uStack_64;
      uVar6 = CONCAT13((byte)((ulong)uStack_98 >> 0x18) ^ (byte)((ulong)uVar36 >> 0x18),
                       CONCAT12((byte)((ulong)uStack_98 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10),
                                CONCAT11((byte)((ulong)uStack_98 >> 8) ^ (byte)((ulong)uVar36 >> 8),
                                         (byte)uStack_98 ^ (byte)uVar36)));
      uVar5 = CONCAT13((byte)((ulong)local_a0 >> 0x18) ^ (byte)((ulong)uVar31 >> 0x18),
                       CONCAT12((byte)((ulong)local_a0 >> 0x10) ^ (byte)((ulong)uVar31 >> 0x10),
                                CONCAT11((byte)((ulong)local_a0 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                         (byte)local_a0 ^ (byte)uVar31)));
      uStack_5c = (uint)(CONCAT17((byte)((ulong)local_a0 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                  CONCAT16((byte)((ulong)local_a0 >> 0x30) ^
                                           (byte)((ulong)uVar31 >> 0x30),
                                           CONCAT15((byte)((ulong)local_a0 >> 0x28) ^
                                                    (byte)((ulong)uVar31 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_a0 >> 0x20) ^
                                                             (byte)((ulong)uVar31 >> 0x20),uVar5))))
                        >> 0x20);
      uVar9 = uStack_5c;
      uStack_4c = (uint)(CONCAT17((byte)((ulong)local_90 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                                  CONCAT16((byte)((ulong)local_90 >> 0x30) ^
                                           (byte)((ulong)uVar38 >> 0x30),
                                           CONCAT15((byte)((ulong)local_90 >> 0x28) ^
                                                    (byte)((ulong)uVar38 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_90 >> 0x20) ^
                                                             (byte)((ulong)uVar38 >> 0x20),uVar27)))
                                 ) >> 0x20);
      uVar11 = uStack_4c;
      uStack_44 = (uint)(CONCAT17((byte)((ulong)local_88 >> 0x38) ^ (byte)((ulong)uVar40 >> 0x38),
                                  CONCAT16((byte)((ulong)local_88 >> 0x30) ^
                                           (byte)((ulong)uVar40 >> 0x30),
                                           CONCAT15((byte)((ulong)local_88 >> 0x28) ^
                                                    (byte)((ulong)uVar40 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_88 >> 0x20) ^
                                                             (byte)((ulong)uVar40 >> 0x20),uVar33)))
                                 ) >> 0x20);
      uVar12 = uStack_44;
      uStack_54 = (uint)(CONCAT17((byte)((ulong)uStack_98 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                                  CONCAT16((byte)((ulong)uStack_98 >> 0x30) ^
                                           (byte)((ulong)uVar36 >> 0x30),
                                           CONCAT15((byte)((ulong)uStack_98 >> 0x28) ^
                                                    (byte)((ulong)uVar36 >> 0x28),
                                                    CONCAT14((byte)((ulong)uStack_98 >> 0x20) ^
                                                             (byte)((ulong)uVar36 >> 0x20),uVar6))))
                        >> 0x20);
      uVar10 = uStack_54;
      uVar19 = uStack_6c;
      uVar24 = uVar37;
      uVar13 = uVar39;
      uVar22 = uVar32;
      uVar21 = uVar5;
      uVar20 = uVar27;
      uVar14 = uVar33;
      uVar23 = uVar6;
      uVar16 = uStack_74;
      do {
        uVar4 = (uint)uVar15 ^ (uVar24 + uVar20 >> 0x19 | (uVar24 + uVar20) * 0x80);
        uStack_5c = uStack_5c ^ (uVar19 + uStack_7c >> 0x19 | (uVar19 + uStack_7c) * 0x80);
        uVar14 = uVar14 ^ (uVar23 + uVar22 >> 0x19 | (uVar23 + uVar22) * 0x80);
        uVar16 = uVar16 ^ (uStack_44 + uStack_54 >> 0x19 | (uStack_44 + uStack_54) * 0x80);
        uVar21 = uVar21 ^ (uVar4 + uVar24 >> 0x17 | (uVar4 + uVar24) * 0x200);
        uStack_4c = uStack_4c ^ (uStack_5c + uVar19 >> 0x17 | (uStack_5c + uVar19) * 0x200);
        uVar13 = uVar13 ^ (uVar14 + uVar23 >> 0x17 | (uVar14 + uVar23) * 0x200);
        uStack_64 = uStack_64 ^ (uVar16 + uStack_44 >> 0x17 | (uVar16 + uStack_44) * 0x200);
        uVar20 = uVar20 ^ (uVar21 + uVar4 >> 0x13 | (uVar21 + uVar4) * 0x2000);
        uStack_7c = uStack_7c ^ (uStack_4c + uStack_5c >> 0x13 | (uStack_4c + uStack_5c) * 0x2000);
        uVar22 = uVar22 ^ (uVar13 + uVar14 >> 0x13 | (uVar13 + uVar14) * 0x2000);
        uStack_54 = uStack_54 ^ (uStack_64 + uVar16 >> 0x13 | (uStack_64 + uVar16) * 0x2000);
        uVar1 = uVar20 + uVar21;
        uVar24 = uVar24 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uStack_7c + uStack_4c;
        uVar19 = uVar19 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uVar22 + uVar13;
        uVar23 = uVar23 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uStack_54 + uStack_64;
        uStack_44 = uStack_44 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uStack_7c = uStack_7c ^ (uVar24 + uVar16 >> 0x19 | (uVar24 + uVar16) * 0x80);
        uVar22 = uVar22 ^ (uVar19 + uVar4 >> 0x19 | (uVar19 + uVar4) * 0x80);
        uVar13 = uVar13 ^ (uStack_7c + uVar24 >> 0x17 | (uStack_7c + uVar24) * 0x200);
        uStack_64 = uStack_64 ^ (uVar22 + uVar19 >> 0x17 | (uVar22 + uVar19) * 0x200);
        uVar16 = uVar16 ^ (uVar13 + uStack_7c >> 0x13 | (uVar13 + uStack_7c) * 0x2000);
        uVar4 = uVar4 ^ (uStack_64 + uVar22 >> 0x13 | (uStack_64 + uVar22) * 0x2000);
        uVar15 = (ulong)uVar4;
        uVar24 = uVar24 ^ (uVar16 + uVar13 >> 0xe | (uVar16 + uVar13) * 0x40000);
        uVar19 = uVar19 ^ (uVar4 + uStack_64 >> 0xe | (uVar4 + uStack_64) * 0x40000);
        uStack_54 = uStack_54 ^ (uVar23 + uStack_5c >> 0x19 | (uVar23 + uStack_5c) * 0x80);
        uVar21 = uVar21 ^ (uStack_54 + uVar23 >> 0x17 | (uStack_54 + uVar23) * 0x200);
        uStack_5c = uStack_5c ^ (uVar21 + uStack_54 >> 0x13 | (uVar21 + uStack_54) * 0x2000);
        uVar23 = uVar23 ^ (uStack_5c + uVar21 >> 0xe | (uStack_5c + uVar21) * 0x40000);
        uVar20 = uVar20 ^ (uStack_44 + uVar14 >> 0x19 | (uStack_44 + uVar14) * 0x80);
        uStack_4c = uStack_4c ^ (uVar20 + uStack_44 >> 0x17 | (uVar20 + uStack_44) * 0x200);
        uVar14 = uVar14 ^ (uStack_4c + uVar20 >> 0x13 | (uStack_4c + uVar20) * 0x2000);
        uVar17 = uVar17 - 2;
        uStack_44 = uStack_44 ^ (uVar14 + uStack_4c >> 0xe | (uVar14 + uStack_4c) * 0x40000);
      } while (2 < uVar17);
      _local_80 = CONCAT44(uStack_7c,uVar24);
      local_c0 = CONCAT44(uVar7 + uStack_7c,uVar37 + uVar24);
      uStack_b8 = CONCAT44(uStack_74 + uVar16,uVar39 + uVar13);
      iVar2 = uStack_6c + uVar19;
      _local_70 = CONCAT44(uVar19,uVar4);
      _local_48 = CONCAT44(uStack_44,uVar14);
      _uStack_78 = CONCAT44(uVar16,uVar13);
      _local_60 = CONCAT44(uStack_5c,uVar21);
      _local_50 = CONCAT44(uStack_4c,uVar20);
      _uStack_58 = CONCAT44(uStack_54,uVar23);
      _local_68 = CONCAT44(uStack_64,uVar22);
      local_b0 = CONCAT44(iVar2,iVar26 + uVar4);
      param_2 = param_2 + 8;
      local_a8 = CONCAT44(uVar8 + uStack_64,uVar32 + uVar22);
      local_a0 = CONCAT44(uVar9 + uStack_5c,uVar5 + uVar21);
      uStack_98 = CONCAT44(uVar10 + uStack_54,uVar6 + uVar23);
      local_90 = CONCAT44(uVar11 + uStack_4c,uVar27 + uVar20);
      local_88 = CONCAT44(uVar12 + uStack_44,uVar33 + uVar14);
      FUN_00453300(&local_80,0x40);
      uVar18 = uVar25 & 1;
      uVar15 = uVar25 >> 1;
      uVar25 = uVar25 + 1;
      puVar3 = (undefined8 *)(param_1 + (uVar18 * param_3 + uVar15) * 0x40);
      puVar3[5] = uStack_98;
      puVar3[4] = local_a0;
      puVar3[7] = local_88;
      puVar3[6] = local_90;
      puVar3[1] = uStack_b8;
      *puVar3 = local_c0;
      puVar3[3] = local_a8;
      puVar3[2] = local_b0;
    } while (uVar25 != param_3 * 2);
  }
  FUN_00453300(&local_c0,0x40);
  return;
}


