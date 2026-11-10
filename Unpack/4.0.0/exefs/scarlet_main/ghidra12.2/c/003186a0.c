/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003186a0; name: FUN_003186a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003186a0(long *param_1,long param_2,long param_3,uint param_4,ulong param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar51;
  int iVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar53;
  int iVar54;
  int iVar56;
  int iVar57;
  undefined1 auVar55 [16];
  int iVar58;
  int iVar59;
  int iVar62;
  int iVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar64;
  int iVar65;
  int iVar68;
  int iVar69;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar70;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_5 == 0) {
    iVar12 = 0;
  }
  else {
    if (0xf < param_5) {
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar14 = (int)_UNK_03cab988;
      iVar15 = (int)((ulong)_UNK_03cab988 >> 0x20);
      iVar12 = (int)_DAT_03cab980;
      iVar13 = (int)((ulong)_DAT_03cab980 >> 0x20);
      iVar22 = 0;
      iVar23 = 0;
      iVar20 = 0;
      iVar21 = 0;
      uVar6 = param_5 & 0xfffffffffffffff0;
      iVar26 = 0;
      iVar27 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar28 = 0;
      iVar29 = 0;
      puVar7 = (undefined8 *)(param_3 + 0x20);
      piVar9 = (int *)(param_2 + 0x20);
      uVar11 = uVar6;
      do {
        uVar11 = uVar11 - 0x10;
        iVar36 = -(uint)((int)puVar7[-2] == piVar9[-4]);
        iVar37 = -(uint)((int)((ulong)puVar7[-2] >> 0x20) == piVar9[-3]);
        iVar38 = -(uint)((int)puVar7[-1] == piVar9[-2]);
        iVar39 = -(uint)((int)((ulong)puVar7[-1] >> 0x20) == piVar9[-1]);
        iVar32 = -(uint)((int)puVar7[-4] == piVar9[-8]);
        iVar33 = -(uint)((int)((ulong)puVar7[-4] >> 0x20) == piVar9[-7]);
        iVar34 = -(uint)((int)puVar7[-3] == piVar9[-6]);
        iVar35 = -(uint)((int)((ulong)puVar7[-3] >> 0x20) == piVar9[-5]);
        auVar49._0_4_ = iVar12 + 4;
        auVar49._4_4_ = iVar13 + 4;
        auVar49._8_4_ = iVar14 + 4;
        auVar49._12_4_ = iVar15 + 4;
        auVar50._4_4_ = iVar13;
        auVar50._0_4_ = iVar12;
        auVar50._8_4_ = iVar14;
        auVar50._12_4_ = iVar15;
        auVar55._8_4_ = 1;
        auVar55._0_8_ = 0x100000001;
        auVar55._12_4_ = 1;
        auVar55 = NEON_ushl(auVar55,auVar50,4);
        iVar40 = -(uint)((int)*puVar7 == *piVar9);
        iVar41 = -(uint)((int)((ulong)*puVar7 >> 0x20) == piVar9[1]);
        iVar42 = -(uint)((int)puVar7[1] == piVar9[2]);
        iVar43 = -(uint)((int)((ulong)puVar7[1] >> 0x20) == piVar9[3]);
        iVar44 = -(uint)((int)puVar7[2] == piVar9[4]);
        iVar45 = -(uint)((int)((ulong)puVar7[2] >> 0x20) == piVar9[5]);
        iVar46 = -(uint)((int)puVar7[3] == piVar9[6]);
        iVar47 = -(uint)((int)((ulong)puVar7[3] >> 0x20) == piVar9[7]);
        auVar60._0_4_ = iVar12 + 8;
        auVar60._4_4_ = iVar13 + 8;
        auVar60._8_4_ = iVar14 + 8;
        auVar60._12_4_ = iVar15 + 8;
        auVar66._0_4_ = iVar12 + 0xc;
        auVar66._4_4_ = iVar13 + 0xc;
        auVar66._8_4_ = iVar14 + 0xc;
        auVar66._12_4_ = iVar15 + 0xc;
        auVar61._8_4_ = 1;
        auVar61._0_8_ = 0x100000001;
        auVar61._12_4_ = 1;
        auVar50 = NEON_ushl(auVar61,auVar49,4);
        auVar67._8_4_ = 1;
        auVar67._0_8_ = 0x100000001;
        auVar67._12_4_ = 1;
        auVar61 = NEON_ushl(auVar67,auVar60,4);
        auVar3._8_4_ = 1;
        auVar3._0_8_ = 0x100000001;
        auVar3._12_4_ = 1;
        auVar67 = NEON_ushl(auVar3,auVar66,4);
        iVar54 = -(uint)((auVar55._0_4_ & param_4) != 0);
        iVar56 = -(uint)((auVar55._4_4_ & param_4) != 0);
        iVar57 = -(uint)((auVar55._8_4_ & param_4) != 0);
        iVar58 = -(uint)((auVar55._12_4_ & param_4) != 0);
        iVar59 = -(uint)((auVar61._0_4_ & param_4) != 0);
        iVar62 = -(uint)((auVar61._4_4_ & param_4) != 0);
        iVar63 = -(uint)((auVar61._8_4_ & param_4) != 0);
        iVar64 = -(uint)((auVar61._12_4_ & param_4) != 0);
        iVar65 = -(uint)((auVar67._0_4_ & param_4) != 0);
        iVar68 = -(uint)((auVar67._4_4_ & param_4) != 0);
        iVar69 = -(uint)((auVar67._8_4_ & param_4) != 0);
        iVar70 = -(uint)((auVar67._12_4_ & param_4) != 0);
        iVar48 = -(uint)((auVar50._0_4_ & param_4) != 0);
        iVar51 = -(uint)((auVar50._4_4_ & param_4) != 0);
        iVar52 = -(uint)((auVar50._8_4_ & param_4) != 0);
        iVar53 = -(uint)((auVar50._12_4_ & param_4) != 0);
        iVar32 = CONCAT13((byte)((uint)iVar54 >> 0x18) | ~(byte)((uint)iVar32 >> 0x18),
                          CONCAT12((byte)((uint)iVar54 >> 0x10) | ~(byte)((uint)iVar32 >> 0x10),
                                   CONCAT11((byte)((uint)iVar54 >> 8) | ~(byte)((uint)iVar32 >> 8),
                                            (byte)iVar54 | ~(byte)iVar32)));
        iVar34 = CONCAT13((byte)((uint)iVar57 >> 0x18) | ~(byte)((uint)iVar34 >> 0x18),
                          CONCAT12((byte)((uint)iVar57 >> 0x10) | ~(byte)((uint)iVar34 >> 0x10),
                                   CONCAT11((byte)((uint)iVar57 >> 8) | ~(byte)((uint)iVar34 >> 8),
                                            (byte)iVar57 | ~(byte)iVar34)));
        iVar16 = iVar16 - iVar32;
        iVar17 = iVar17 - (int)(CONCAT17((byte)((uint)iVar56 >> 0x18) |
                                         ~(byte)((uint)iVar33 >> 0x18),
                                         CONCAT16((byte)((uint)iVar56 >> 0x10) |
                                                  ~(byte)((uint)iVar33 >> 0x10),
                                                  CONCAT15((byte)((uint)iVar56 >> 8) |
                                                           ~(byte)((uint)iVar33 >> 8),
                                                           CONCAT14((byte)iVar56 | ~(byte)iVar33,
                                                                    iVar32)))) >> 0x20);
        iVar18 = iVar18 - iVar34;
        iVar19 = iVar19 - (int)(CONCAT17((byte)((uint)iVar58 >> 0x18) |
                                         ~(byte)((uint)iVar35 >> 0x18),
                                         CONCAT16((byte)((uint)iVar58 >> 0x10) |
                                                  ~(byte)((uint)iVar35 >> 0x10),
                                                  CONCAT15((byte)((uint)iVar58 >> 8) |
                                                           ~(byte)((uint)iVar35 >> 8),
                                                           CONCAT14((byte)iVar58 | ~(byte)iVar35,
                                                                    iVar34)))) >> 0x20);
        iVar32 = CONCAT13((byte)((uint)iVar48 >> 0x18) | ~(byte)((uint)iVar36 >> 0x18),
                          CONCAT12((byte)((uint)iVar48 >> 0x10) | ~(byte)((uint)iVar36 >> 0x10),
                                   CONCAT11((byte)((uint)iVar48 >> 8) | ~(byte)((uint)iVar36 >> 8),
                                            (byte)iVar48 | ~(byte)iVar36)));
        iVar33 = CONCAT13((byte)((uint)iVar52 >> 0x18) | ~(byte)((uint)iVar38 >> 0x18),
                          CONCAT12((byte)((uint)iVar52 >> 0x10) | ~(byte)((uint)iVar38 >> 0x10),
                                   CONCAT11((byte)((uint)iVar52 >> 8) | ~(byte)((uint)iVar38 >> 8),
                                            (byte)iVar52 | ~(byte)iVar38)));
        iVar34 = CONCAT13((byte)((uint)iVar59 >> 0x18) | ~(byte)((uint)iVar40 >> 0x18),
                          CONCAT12((byte)((uint)iVar59 >> 0x10) | ~(byte)((uint)iVar40 >> 0x10),
                                   CONCAT11((byte)((uint)iVar59 >> 8) | ~(byte)((uint)iVar40 >> 8),
                                            (byte)iVar59 | ~(byte)iVar40)));
        iVar35 = CONCAT13((byte)((uint)iVar63 >> 0x18) | ~(byte)((uint)iVar42 >> 0x18),
                          CONCAT12((byte)((uint)iVar63 >> 0x10) | ~(byte)((uint)iVar42 >> 0x10),
                                   CONCAT11((byte)((uint)iVar63 >> 8) | ~(byte)((uint)iVar42 >> 8),
                                            (byte)iVar63 | ~(byte)iVar42)));
        iVar36 = CONCAT13((byte)((uint)iVar65 >> 0x18) | ~(byte)((uint)iVar44 >> 0x18),
                          CONCAT12((byte)((uint)iVar65 >> 0x10) | ~(byte)((uint)iVar44 >> 0x10),
                                   CONCAT11((byte)((uint)iVar65 >> 8) | ~(byte)((uint)iVar44 >> 8),
                                            (byte)iVar65 | ~(byte)iVar44)));
        iVar38 = CONCAT13((byte)((uint)iVar69 >> 0x18) | ~(byte)((uint)iVar46 >> 0x18),
                          CONCAT12((byte)((uint)iVar69 >> 0x10) | ~(byte)((uint)iVar46 >> 0x10),
                                   CONCAT11((byte)((uint)iVar69 >> 8) | ~(byte)((uint)iVar46 >> 8),
                                            (byte)iVar69 | ~(byte)iVar46)));
        iVar28 = iVar28 - iVar36;
        iVar29 = iVar29 - (int)(CONCAT17((byte)((uint)iVar68 >> 0x18) |
                                         ~(byte)((uint)iVar45 >> 0x18),
                                         CONCAT16((byte)((uint)iVar68 >> 0x10) |
                                                  ~(byte)((uint)iVar45 >> 0x10),
                                                  CONCAT15((byte)((uint)iVar68 >> 8) |
                                                           ~(byte)((uint)iVar45 >> 8),
                                                           CONCAT14((byte)iVar68 | ~(byte)iVar45,
                                                                    iVar36)))) >> 0x20);
        iVar30 = iVar30 - iVar38;
        iVar31 = iVar31 - (int)(CONCAT17((byte)((uint)iVar70 >> 0x18) |
                                         ~(byte)((uint)iVar47 >> 0x18),
                                         CONCAT16((byte)((uint)iVar70 >> 0x10) |
                                                  ~(byte)((uint)iVar47 >> 0x10),
                                                  CONCAT15((byte)((uint)iVar70 >> 8) |
                                                           ~(byte)((uint)iVar47 >> 8),
                                                           CONCAT14((byte)iVar70 | ~(byte)iVar47,
                                                                    iVar38)))) >> 0x20);
        iVar12 = iVar12 + 0x10;
        iVar13 = iVar13 + 0x10;
        iVar14 = iVar14 + 0x10;
        iVar15 = iVar15 + 0x10;
        iVar24 = iVar24 - iVar34;
        iVar25 = iVar25 - (int)(CONCAT17((byte)((uint)iVar62 >> 0x18) |
                                         ~(byte)((uint)iVar41 >> 0x18),
                                         CONCAT16((byte)((uint)iVar62 >> 0x10) |
                                                  ~(byte)((uint)iVar41 >> 0x10),
                                                  CONCAT15((byte)((uint)iVar62 >> 8) |
                                                           ~(byte)((uint)iVar41 >> 8),
                                                           CONCAT14((byte)iVar62 | ~(byte)iVar41,
                                                                    iVar34)))) >> 0x20);
        iVar26 = iVar26 - iVar35;
        iVar27 = iVar27 - (int)(CONCAT17((byte)((uint)iVar64 >> 0x18) |
                                         ~(byte)((uint)iVar43 >> 0x18),
                                         CONCAT16((byte)((uint)iVar64 >> 0x10) |
                                                  ~(byte)((uint)iVar43 >> 0x10),
                                                  CONCAT15((byte)((uint)iVar64 >> 8) |
                                                           ~(byte)((uint)iVar43 >> 8),
                                                           CONCAT14((byte)iVar64 | ~(byte)iVar43,
                                                                    iVar35)))) >> 0x20);
        iVar20 = iVar20 - iVar32;
        iVar21 = iVar21 - (int)(CONCAT17((byte)((uint)iVar51 >> 0x18) |
                                         ~(byte)((uint)iVar37 >> 0x18),
                                         CONCAT16((byte)((uint)iVar51 >> 0x10) |
                                                  ~(byte)((uint)iVar37 >> 0x10),
                                                  CONCAT15((byte)((uint)iVar51 >> 8) |
                                                           ~(byte)((uint)iVar37 >> 8),
                                                           CONCAT14((byte)iVar51 | ~(byte)iVar37,
                                                                    iVar32)))) >> 0x20);
        iVar22 = iVar22 - iVar33;
        iVar23 = iVar23 - (int)(CONCAT17((byte)((uint)iVar53 >> 0x18) |
                                         ~(byte)((uint)iVar39 >> 0x18),
                                         CONCAT16((byte)((uint)iVar53 >> 0x10) |
                                                  ~(byte)((uint)iVar39 >> 0x10),
                                                  CONCAT15((byte)((uint)iVar53 >> 8) |
                                                           ~(byte)((uint)iVar39 >> 8),
                                                           CONCAT14((byte)iVar53 | ~(byte)iVar39,
                                                                    iVar33)))) >> 0x20);
        puVar7 = puVar7 + 8;
        piVar9 = piVar9 + 0x10;
      } while (uVar11 != 0);
      iVar12 = iVar28 + iVar24 + iVar20 + iVar16 + iVar29 + iVar25 + iVar21 + iVar17 +
               iVar30 + iVar26 + iVar22 + iVar18 + iVar31 + iVar27 + iVar23 + iVar19;
      goto joined_r0x003187c8;
    }
    iVar12 = 0;
    uVar6 = 0;
    do {
      lVar10 = uVar6 * 4;
      uVar5 = (uint)uVar6;
      uVar6 = uVar6 + 1;
      iVar12 = iVar12 + (param_4 >> (ulong)(uVar5 & 0x1f) & 1 |
                        (uint)(*(int *)(param_3 + lVar10) != *(int *)(param_2 + lVar10)));
joined_r0x003187c8:
    } while (uVar6 != param_5);
    iVar12 = iVar12 * 6;
  }
  FUN_003670f0(&local_60,iVar12 + 9);
  param_1[1] = lStack_58;
  *param_1 = local_60;
  param_1[3] = lStack_48;
  param_1[2] = lStack_50;
  puVar2 = (undefined1 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar2 = (undefined1 *)param_1[2];
  }
  *puVar2 = (char)((uint)iVar12 >> 0x10);
  puVar2[1] = (char)((uint)iVar12 >> 8);
  *(undefined2 *)(puVar2 + 3) = 4;
  puVar8 = (ushort *)(puVar2 + 9);
  puVar2[2] = (char)iVar12;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar4 = PTR_DAT_047ccb20;
  if (param_5 != 0) {
    uVar6 = 0;
    do {
      lVar10 = uVar6 * 4;
      if ((*(int *)(param_3 + lVar10) != *(int *)(param_2 + lVar10)) ||
         ((param_4 >> (ulong)((uint)uVar6 & 0x1f) & 1) != 0)) {
        *puVar8 = *(ushort *)(puVar4 + uVar6 * 2) >> 8 | *(ushort *)(puVar4 + uVar6 * 2) << 8;
        puVar1 = (undefined4 *)(param_3 + lVar10);
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)((long)puVar1 + 3);
        *(char *)((long)puVar8 + 3) = (char)*(undefined2 *)((long)puVar1 + 2);
        *(char *)(puVar8 + 2) = (char)((uint)*puVar1 >> 8);
        *(char *)((long)puVar8 + 5) = (char)*puVar1;
        puVar8 = puVar8 + 3;
        *(undefined4 *)(param_2 + lVar10) = *puVar1;
      }
      uVar6 = uVar6 + 1;
    } while (param_5 != uVar6);
  }
  puVar2 = (undefined1 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar2 = (undefined1 *)param_1[2];
  }
  uVar6 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar6 = param_1[1];
  }
  if (puVar8 != (ushort *)(puVar2 + uVar6)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


