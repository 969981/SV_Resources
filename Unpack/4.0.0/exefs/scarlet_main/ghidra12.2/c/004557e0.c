/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004557e0; name: FUN_004557e0
 */


void FUN_004557e0(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,char *param_5,
                 ulong *param_6,uint *param_7,code *param_8)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  for (uVar7 = *param_7; (uVar13 = uVar7, param_3 != 0 && (uVar13 = 0, uVar7 != 0));
      uVar7 = uVar7 + 1 & 0xf) {
    param_3 = param_3 - 1;
    *(byte *)param_2 = *(byte *)((long)param_6 + (ulong)uVar7) ^ (byte)*param_1;
    param_2 = (ulong *)((long)param_2 + 1);
    param_1 = (ulong *)((long)param_1 + 1);
  }
  if (0xf < param_3) {
    do {
      (*param_8)(param_5,param_6,param_4);
      bVar8 = param_5[0xf];
      param_5[0xf] = (char)(bVar8 + 1);
      uVar7 = (uint)(byte)param_5[0xe] + (bVar8 + 1 >> 8);
      param_5[0xe] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[0xd] + (uVar7 >> 8);
      param_5[0xd] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[0xc] + (uVar7 >> 8);
      param_5[0xc] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[0xb] + (uVar7 >> 8);
      param_5[0xb] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[10] + (uVar7 >> 8);
      param_5[10] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[9] + (uVar7 >> 8);
      param_5[9] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[8] + (uVar7 >> 8);
      param_5[8] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[7] + (uVar7 >> 8);
      param_5[7] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[6] + (uVar7 >> 8);
      param_5[6] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[5] + (uVar7 >> 8);
      param_5[5] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[4] + (uVar7 >> 8);
      param_5[4] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[3] + (uVar7 >> 8);
      param_5[3] = (char)uVar7;
      uVar7 = (uint)(byte)param_5[2] + (uVar7 >> 8);
      param_5[2] = (char)uVar7;
      iVar2 = (uint)(byte)param_5[1] + (uVar7 >> 8);
      param_5[1] = (char)iVar2;
      *param_5 = *param_5 + (char)((uint)iVar2 >> 8);
      *param_2 = *param_6 ^ *param_1;
      puVar1 = param_1 + 1;
      param_3 = param_3 - 0x10;
      param_1 = param_1 + 2;
      param_2[1] = param_6[1] ^ *puVar1;
      param_2 = param_2 + 2;
    } while (0xf < param_3);
    uVar13 = 0;
  }
  if (param_3 != 0) {
    (*param_8)(param_5,param_6,param_4);
    bVar8 = param_5[0xf];
    param_5[0xf] = (char)(bVar8 + 1);
    uVar7 = (uint)(byte)param_5[0xe] + (bVar8 + 1 >> 8);
    param_5[0xe] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[0xd] + (uVar7 >> 8);
    param_5[0xd] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[0xc] + (uVar7 >> 8);
    param_5[0xc] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[0xb] + (uVar7 >> 8);
    param_5[0xb] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[10] + (uVar7 >> 8);
    param_5[10] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[9] + (uVar7 >> 8);
    param_5[9] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[8] + (uVar7 >> 8);
    param_5[8] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[7] + (uVar7 >> 8);
    param_5[7] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[6] + (uVar7 >> 8);
    param_5[6] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[5] + (uVar7 >> 8);
    param_5[5] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[4] + (uVar7 >> 8);
    param_5[4] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[3] + (uVar7 >> 8);
    param_5[3] = (char)uVar7;
    uVar7 = (uint)(byte)param_5[2] + (uVar7 >> 8);
    param_5[2] = (char)uVar7;
    iVar2 = (uint)(byte)param_5[1] + (uVar7 >> 8);
    param_5[1] = (char)iVar2;
    *param_5 = *param_5 + (char)((uint)iVar2 >> 8);
    uVar10 = param_3;
    if (0x1f < param_3) {
      if ((!CARRY4(uVar13,(uint)(param_3 - 1))) && (param_3 - 1 >> 0x20 == 0)) {
        uVar9 = (ulong)uVar13;
        lVar3 = param_3 + uVar9;
        if (((byte *)((long)param_1 + lVar3) <= (byte *)((long)param_2 + uVar9) ||
             (byte *)((long)param_2 + lVar3) <= (byte *)((long)param_1 + uVar9)) &&
           ((byte *)((long)param_6 + lVar3) <= (byte *)((long)param_2 + uVar9) ||
            (byte *)((long)param_2 + lVar3) <= (byte *)((long)param_6 + uVar9))) {
          uVar11 = param_3 & 0xffffffffffffffe0;
          uVar7 = uVar13 + (int)uVar11;
          uVar10 = param_3 & 0x1f;
          uVar9 = uVar11;
          do {
            uVar12 = (ulong)uVar13;
            uVar13 = uVar13 + 0x20;
            pbVar4 = (byte *)((long)param_1 + uVar12);
            puVar5 = (undefined8 *)((long)param_6 + uVar12);
            pbVar6 = (byte *)((long)param_2 + uVar12);
            uVar9 = uVar9 - 0x20;
            uVar15 = *(undefined8 *)(pbVar4 + 8);
            uVar14 = *(undefined8 *)pbVar4;
            uVar17 = *(undefined8 *)(pbVar4 + 0x18);
            uVar16 = *(undefined8 *)(pbVar4 + 0x10);
            uVar19 = puVar5[1];
            uVar18 = *puVar5;
            uVar21 = puVar5[3];
            uVar20 = puVar5[2];
            *(ulong *)(pbVar6 + 8) =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                            (byte)((ulong)uVar15 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     (byte)((ulong)uVar15 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              (byte)((ulong)uVar15 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ (byte)((ulong)uVar15 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar15
                                                                                      >> 8),
                                                                                (byte)uVar19 ^
                                                                                (byte)uVar15)))))));
            *(ulong *)pbVar6 =
                 CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                          CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                            (byte)((ulong)uVar14 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                     (byte)((ulong)uVar14 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                              (byte)((ulong)uVar14 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar18 >> 0x10)
                                                                       ^ (byte)((ulong)uVar14 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar18
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar14
                                                                                      >> 8),
                                                                                (byte)uVar18 ^
                                                                                (byte)uVar14)))))));
            *(ulong *)(pbVar6 + 0x18) =
                 CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                          CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                            (byte)((ulong)uVar17 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                     (byte)((ulong)uVar17 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                              (byte)((ulong)uVar17 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar21 >> 0x10)
                                                                       ^ (byte)((ulong)uVar17 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar21
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar17
                                                                                      >> 8),
                                                                                (byte)uVar21 ^
                                                                                (byte)uVar17)))))));
            *(ulong *)(pbVar6 + 0x10) =
                 CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                          CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                            (byte)((ulong)uVar16 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                     (byte)((ulong)uVar16 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                              (byte)((ulong)uVar16 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar20 >> 0x10)
                                                                       ^ (byte)((ulong)uVar16 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar20
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar16
                                                                                      >> 8),
                                                                                (byte)uVar20 ^
                                                                                (byte)uVar16)))))));
          } while (uVar9 != 0);
          uVar13 = uVar7;
          if (param_3 == uVar11) goto LAB_00455b5c;
        }
      }
    }
    uVar9 = uVar10;
    if ((param_3 & 1) != 0) {
      uVar9 = (ulong)uVar13;
      uVar13 = uVar13 + 1;
      *(byte *)((long)param_2 + uVar9) =
           *(byte *)((long)param_6 + uVar9) ^ *(byte *)((long)param_1 + uVar9);
      uVar9 = uVar10 - 1;
    }
    if (uVar10 != 1) {
      do {
        uVar10 = (ulong)uVar13;
        *(byte *)((long)param_2 + uVar10) =
             *(byte *)((long)param_6 + uVar10) ^ *(byte *)((long)param_1 + uVar10);
        uVar10 = (ulong)(uVar13 + 1);
        uVar13 = uVar13 + 2;
        uVar9 = uVar9 - 2;
        *(byte *)((long)param_2 + uVar10) =
             *(byte *)((long)param_6 + uVar10) ^ *(byte *)((long)param_1 + uVar10);
      } while (uVar9 != 0);
    }
  }
LAB_00455b5c:
  *param_7 = uVar13;
  return;
}


