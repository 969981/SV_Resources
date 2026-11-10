/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00459a00; name: FUN_00459a00
 */


void FUN_00459a00(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 uint *param_6,code *param_7)

{
  long lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  for (uVar5 = *param_6; (uVar12 = uVar5, param_3 != 0 && (uVar12 = 0, uVar5 != 0));
      uVar5 = uVar5 + 1 & 0xf) {
    param_3 = param_3 - 1;
    *(byte *)param_2 = *(byte *)((long)param_5 + (ulong)uVar5) ^ (byte)*param_1;
    param_2 = (ulong *)((long)param_2 + 1);
    param_1 = (ulong *)((long)param_1 + 1);
  }
  if (0xf < param_3) {
    (*param_7)(param_5,param_5,param_4);
    puVar10 = param_2;
    puVar11 = param_1;
    if (uVar12 < 0x10) {
      uVar6 = (ulong)uVar12;
      *(ulong *)((long)param_2 + uVar6) =
           *(ulong *)((long)param_5 + uVar6) ^ *(ulong *)((long)param_1 + uVar6);
      if (uVar12 < 8) {
        lVar1 = uVar6 + 8;
        *(ulong *)((long)param_2 + lVar1) =
             *(ulong *)((long)param_5 + lVar1) ^ *(ulong *)((long)param_1 + lVar1);
      }
    }
    while( true ) {
      param_3 = param_3 - 0x10;
      param_1 = puVar11 + 2;
      param_2 = puVar10 + 2;
      if (param_3 < 0x10) break;
      (*param_7)(param_5,param_5,param_4);
      *param_2 = *param_5 ^ *param_1;
      puVar10[3] = param_5[1] ^ puVar11[3];
      puVar10 = param_2;
      puVar11 = param_1;
    }
    uVar12 = 0;
  }
  if (param_3 != 0) {
    (*param_7)(param_5,param_5,param_4);
    uVar6 = param_3;
    if (0x1f < param_3) {
      if ((!CARRY4(uVar12,(uint)(param_3 - 1))) && (param_3 - 1 >> 0x20 == 0)) {
        uVar7 = (ulong)uVar12;
        lVar1 = param_3 + uVar7;
        if (((byte *)((long)param_1 + lVar1) <= (byte *)((long)param_2 + uVar7) ||
             (byte *)((long)param_2 + lVar1) <= (byte *)((long)param_1 + uVar7)) &&
           ((byte *)((long)param_5 + lVar1) <= (byte *)((long)param_2 + uVar7) ||
            (byte *)((long)param_2 + lVar1) <= (byte *)((long)param_5 + uVar7))) {
          uVar8 = param_3 & 0xffffffffffffffe0;
          uVar5 = uVar12 + (int)uVar8;
          uVar6 = param_3 & 0x1f;
          uVar7 = uVar8;
          do {
            uVar9 = (ulong)uVar12;
            uVar12 = uVar12 + 0x20;
            pbVar2 = (byte *)((long)param_1 + uVar9);
            puVar3 = (undefined8 *)((long)param_5 + uVar9);
            pbVar4 = (byte *)((long)param_2 + uVar9);
            uVar7 = uVar7 - 0x20;
            uVar14 = *(undefined8 *)(pbVar2 + 8);
            uVar13 = *(undefined8 *)pbVar2;
            uVar16 = *(undefined8 *)(pbVar2 + 0x18);
            uVar15 = *(undefined8 *)(pbVar2 + 0x10);
            uVar18 = puVar3[1];
            uVar17 = *puVar3;
            uVar20 = puVar3[3];
            uVar19 = puVar3[2];
            *(ulong *)(pbVar4 + 8) =
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
            *(ulong *)pbVar4 =
                 CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                          CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                            (byte)((ulong)uVar13 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                     (byte)((ulong)uVar13 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                              (byte)((ulong)uVar13 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar17 >> 0x10)
                                                                       ^ (byte)((ulong)uVar13 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar17
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar13
                                                                                      >> 8),
                                                                                (byte)uVar17 ^
                                                                                (byte)uVar13)))))));
            *(ulong *)(pbVar4 + 0x18) =
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
            *(ulong *)(pbVar4 + 0x10) =
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
          } while (uVar7 != 0);
          uVar12 = uVar5;
          if (param_3 == uVar8) goto LAB_00459c54;
        }
      }
    }
    uVar7 = uVar6;
    if ((param_3 & 1) != 0) {
      uVar7 = (ulong)uVar12;
      uVar12 = uVar12 + 1;
      *(byte *)((long)param_2 + uVar7) =
           *(byte *)((long)param_5 + uVar7) ^ *(byte *)((long)param_1 + uVar7);
      uVar7 = uVar6 - 1;
    }
    if (uVar6 != 1) {
      do {
        uVar6 = (ulong)uVar12;
        *(byte *)((long)param_2 + uVar6) =
             *(byte *)((long)param_5 + uVar6) ^ *(byte *)((long)param_1 + uVar6);
        uVar6 = (ulong)(uVar12 + 1);
        uVar12 = uVar12 + 2;
        uVar7 = uVar7 - 2;
        *(byte *)((long)param_2 + uVar6) =
             *(byte *)((long)param_5 + uVar6) ^ *(byte *)((long)param_1 + uVar6);
      } while (uVar7 != 0);
    }
  }
LAB_00459c54:
  *param_6 = uVar12;
  return;
}


