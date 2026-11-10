/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00454f40; name: FUN_00454f40
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00454f40(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 uint *param_6,int param_7,code *param_8)

{
  long lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar13 = *param_6;
  if (param_7 == 0) {
    puVar11 = param_2;
    puVar12 = param_1;
    if (uVar13 == 0 || param_3 == 0) {
      uVar14 = param_3 - 0x10;
    }
    else {
      do {
        uVar14 = param_3;
        param_1 = (ulong *)((long)puVar12 + 1);
        uVar8 = *puVar12;
        param_2 = (ulong *)((long)puVar11 + 1);
        *(byte *)puVar11 = (byte)uVar8 ^ *(byte *)((long)param_5 + (ulong)uVar13);
        *(byte *)((long)param_5 + (ulong)uVar13) = (byte)uVar8;
        param_3 = uVar14 - 1;
        uVar13 = uVar13 + 1 & 0xf;
        if (uVar13 == 0) break;
        puVar11 = param_2;
        puVar12 = param_1;
      } while (uVar14 != 1);
      uVar14 = uVar14 - 0x11;
    }
    if (0xf < param_3) {
      (*param_8)(param_5,param_5,param_4);
      if (uVar13 < 0x10) {
        uVar8 = (ulong)uVar13;
        uVar9 = *(ulong *)((long)param_1 + uVar8);
        *(ulong *)((long)param_2 + uVar8) = *(ulong *)((long)param_5 + uVar8) ^ uVar9;
        *(ulong *)((long)param_5 + uVar8) = uVar9;
        if (uVar13 < 8) {
          lVar1 = uVar8 + 8;
          uVar8 = *(ulong *)((long)param_1 + lVar1);
          *(ulong *)((long)param_2 + lVar1) = *(ulong *)((long)param_5 + lVar1) ^ uVar8;
          *(ulong *)((long)param_5 + lVar1) = uVar8;
        }
      }
      while( true ) {
        puVar12 = param_1 + 2;
        puVar11 = param_2 + 2;
        if (uVar14 < 0x10) break;
        (*param_8)(param_5,param_5,param_4);
        uVar8 = *puVar12;
        uVar14 = uVar14 - 0x10;
        *puVar11 = *param_5 ^ uVar8;
        *param_5 = uVar8;
        uVar8 = param_1[3];
        param_2[3] = param_5[1] ^ uVar8;
        param_5[1] = uVar8;
        param_2 = puVar11;
        param_1 = puVar12;
      }
      uVar13 = 0;
      param_3 = uVar14;
      param_2 = puVar11;
      param_1 = puVar12;
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      if (((0x1f < param_3) && (!CARRY4(uVar13,(uint)(param_3 - 1)))) && (param_3 - 1 >> 0x20 == 0))
      {
        uVar14 = (ulong)uVar13;
        lVar1 = param_3 + uVar14;
        if (((!((byte *)((long)param_2 + uVar14) < (byte *)((long)param_5 + lVar1) &&
               (byte *)((long)param_5 + uVar14) < (byte *)((long)param_2 + lVar1))) &&
            (!((byte *)((long)param_2 + uVar14) < (byte *)((long)param_1 + lVar1) &&
              (byte *)((long)param_1 + uVar14) < (byte *)((long)param_2 + lVar1)))) &&
           (!((byte *)((long)param_5 + uVar14) < (byte *)((long)param_1 + lVar1) &&
             (byte *)((long)param_1 + uVar14) < (byte *)((long)param_5 + lVar1)))) {
          uVar8 = param_3 & 0xffffffffffffffe0;
          uVar7 = uVar13 + (int)uVar8;
          uVar14 = uVar8;
          do {
            uVar9 = (ulong)uVar13;
            uVar13 = uVar13 + 0x20;
            puVar3 = (undefined8 *)((long)param_5 + uVar9);
            pbVar2 = (byte *)((long)param_1 + uVar9);
            pbVar4 = (byte *)((long)param_2 + uVar9);
            uVar14 = uVar14 - 0x20;
            uVar16 = puVar3[1];
            uVar15 = *puVar3;
            uVar18 = puVar3[3];
            uVar17 = puVar3[2];
            uVar20 = *(undefined8 *)(pbVar2 + 8);
            uVar19 = *(undefined8 *)pbVar2;
            uVar22 = *(undefined8 *)(pbVar2 + 0x18);
            uVar21 = *(undefined8 *)(pbVar2 + 0x10);
            *(ulong *)(pbVar4 + 8) =
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
            *(ulong *)pbVar4 =
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
            *(ulong *)(pbVar4 + 0x18) =
                 CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                          CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                            (byte)((ulong)uVar18 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                     (byte)((ulong)uVar18 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                              (byte)((ulong)uVar18 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar22 >> 0x10)
                                                                       ^ (byte)((ulong)uVar18 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar22
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar18
                                                                                      >> 8),
                                                                                (byte)uVar22 ^
                                                                                (byte)uVar18)))))));
            *(ulong *)(pbVar4 + 0x10) =
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
            puVar3[1] = uVar20;
            *puVar3 = uVar19;
            puVar3[3] = uVar22;
            puVar3[2] = uVar21;
          } while (uVar14 != 0);
          bVar6 = param_3 == uVar8;
          param_3 = param_3 & 0x1f;
          uVar13 = uVar7;
          if (bVar6) goto LAB_00455474;
        }
      }
      uVar7 = uVar13;
      uVar14 = param_3;
      if ((param_3 & 1) != 0) {
        uVar14 = (ulong)uVar13;
        bVar5 = *(byte *)((long)param_1 + uVar14);
        *(byte *)((long)param_2 + uVar14) = bVar5 ^ *(byte *)((long)param_5 + uVar14);
        *(byte *)((long)param_5 + uVar14) = bVar5;
        uVar7 = uVar13 + 1;
        uVar14 = param_3 - 1;
      }
      if (param_3 != 1) {
        do {
          uVar8 = (ulong)uVar7;
          bVar5 = *(byte *)((long)param_1 + uVar8);
          *(byte *)((long)param_2 + uVar8) = bVar5 ^ *(byte *)((long)param_5 + uVar8);
          uVar14 = uVar14 - 2;
          *(byte *)((long)param_5 + uVar8) = bVar5;
          uVar8 = (ulong)(uVar7 + 1);
          uVar7 = uVar7 + 2;
          bVar5 = *(byte *)((long)param_1 + uVar8);
          *(byte *)((long)param_2 + uVar8) = bVar5 ^ *(byte *)((long)param_5 + uVar8);
          *(byte *)((long)param_5 + uVar8) = bVar5;
        } while (uVar14 != 0);
      }
      goto LAB_00455474;
    }
  }
  else {
    puVar11 = param_2;
    puVar12 = param_1;
    if (uVar13 == 0 || param_3 == 0) {
      uVar14 = param_3 - 0x10;
    }
    else {
      do {
        uVar14 = param_3;
        param_1 = (ulong *)((long)puVar12 + 1);
        bVar5 = *(byte *)((long)param_5 + (ulong)uVar13) ^ (byte)*puVar12;
        *(byte *)((long)param_5 + (ulong)uVar13) = bVar5;
        param_2 = (ulong *)((long)puVar11 + 1);
        *(byte *)puVar11 = bVar5;
        param_3 = uVar14 - 1;
        uVar13 = uVar13 + 1 & 0xf;
        if (uVar13 == 0) break;
        puVar11 = param_2;
        puVar12 = param_1;
      } while (uVar14 != 1);
      uVar14 = uVar14 - 0x11;
    }
    if (0xf < param_3) {
      (*param_8)(param_5,param_5,param_4);
      if (uVar13 < 0x10) {
        uVar8 = (ulong)uVar13;
        uVar9 = *(ulong *)((long)param_5 + uVar8) ^ *(ulong *)((long)param_1 + uVar8);
        *(ulong *)((long)param_5 + uVar8) = uVar9;
        *(ulong *)((long)param_2 + uVar8) = uVar9;
        if (uVar13 < 8) {
          lVar1 = uVar8 + 8;
          uVar8 = *(ulong *)((long)param_5 + lVar1) ^ *(ulong *)((long)param_1 + lVar1);
          *(ulong *)((long)param_5 + lVar1) = uVar8;
          *(ulong *)((long)param_2 + lVar1) = uVar8;
        }
      }
      while( true ) {
        puVar12 = param_1 + 2;
        puVar11 = param_2 + 2;
        if (uVar14 < 0x10) break;
        (*param_8)(param_5,param_5,param_4);
        uVar8 = *puVar12;
        uVar14 = uVar14 - 0x10;
        uVar9 = *param_5;
        *param_5 = uVar9 ^ uVar8;
        *puVar11 = uVar9 ^ uVar8;
        uVar8 = param_1[3];
        uVar9 = param_5[1];
        param_5[1] = uVar9 ^ uVar8;
        param_2[3] = uVar9 ^ uVar8;
        param_2 = puVar11;
        param_1 = puVar12;
      }
      uVar13 = 0;
      param_2 = puVar11;
      param_1 = puVar12;
      param_3 = uVar14;
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      uVar7 = uVar13;
      uVar14 = param_3;
      if (((0x1f < param_3) && (!CARRY4(uVar13,(uint)(param_3 - 1)))) && (param_3 - 1 >> 0x20 == 0))
      {
        uVar8 = (ulong)uVar13;
        lVar1 = param_3 + uVar8;
        if ((((byte *)((long)param_2 + lVar1) <= (byte *)((long)param_5 + uVar8) ||
              (byte *)((long)param_5 + lVar1) <= (byte *)((long)param_2 + uVar8)) &&
            ((byte *)((long)param_1 + lVar1) <= (byte *)((long)param_5 + uVar8) ||
             (byte *)((long)param_5 + lVar1) <= (byte *)((long)param_1 + uVar8))) &&
           ((byte *)((long)param_1 + lVar1) <= (byte *)((long)param_2 + uVar8) ||
            (byte *)((long)param_2 + lVar1) <= (byte *)((long)param_1 + uVar8))) {
          uVar9 = param_3 & 0xffffffffffffffe0;
          uVar14 = param_3 & 0x1f;
          uVar7 = uVar13 + (int)uVar9;
          uVar8 = uVar9;
          do {
            uVar10 = (ulong)uVar13;
            uVar13 = uVar13 + 0x20;
            pbVar2 = (byte *)((long)param_1 + uVar10);
            uVar16 = *(undefined8 *)(pbVar2 + 8);
            uVar15 = *(undefined8 *)pbVar2;
            uVar18 = *(undefined8 *)(pbVar2 + 0x18);
            uVar17 = *(undefined8 *)(pbVar2 + 0x10);
            puVar3 = (undefined8 *)((long)param_5 + uVar10);
            pbVar2 = (byte *)((long)param_2 + uVar10);
            uVar8 = uVar8 - 0x20;
            uVar20 = puVar3[1];
            uVar19 = *puVar3;
            uVar22 = puVar3[3];
            uVar21 = puVar3[2];
            uVar17 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                 (byte)((ulong)uVar17 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                          (byte)((ulong)uVar17 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                   (byte)((ulong)uVar17 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar21 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar17)))))));
            uVar18 = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar18)))))));
            uVar15 = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                 (byte)((ulong)uVar15 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                          (byte)((ulong)uVar15 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                   (byte)((ulong)uVar15 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar19 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar15 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar15)))))));
            uVar16 = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                              CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                 (byte)((ulong)uVar16 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                          (byte)((ulong)uVar16 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                   (byte)((ulong)uVar16 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar20 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar16)))))));
            puVar3[1] = uVar16;
            *puVar3 = uVar15;
            puVar3[3] = uVar18;
            puVar3[2] = uVar17;
            *(undefined8 *)(pbVar2 + 8) = uVar16;
            *(undefined8 *)pbVar2 = uVar15;
            *(undefined8 *)(pbVar2 + 0x18) = uVar18;
            *(undefined8 *)(pbVar2 + 0x10) = uVar17;
          } while (uVar8 != 0);
          if (param_3 == uVar9) goto LAB_00455474;
        }
      }
      uVar8 = uVar14;
      if ((param_3 & 1) != 0) {
        uVar8 = (ulong)uVar7;
        uVar7 = uVar7 + 1;
        bVar5 = *(byte *)((long)param_5 + uVar8) ^ *(byte *)((long)param_1 + uVar8);
        *(byte *)((long)param_5 + uVar8) = bVar5;
        *(byte *)((long)param_2 + uVar8) = bVar5;
        uVar8 = uVar14 - 1;
      }
      if (uVar14 != 1) {
        do {
          uVar14 = (ulong)uVar7;
          bVar5 = *(byte *)((long)param_5 + uVar14) ^ *(byte *)((long)param_1 + uVar14);
          *(byte *)((long)param_5 + uVar14) = bVar5;
          uVar8 = uVar8 - 2;
          *(byte *)((long)param_2 + uVar14) = bVar5;
          uVar14 = (ulong)(uVar7 + 1);
          uVar7 = uVar7 + 2;
          bVar5 = *(byte *)((long)param_5 + uVar14) ^ *(byte *)((long)param_1 + uVar14);
          *(byte *)((long)param_5 + uVar14) = bVar5;
          *(byte *)((long)param_2 + uVar14) = bVar5;
        } while (uVar8 != 0);
      }
      goto LAB_00455474;
    }
  }
  uVar7 = uVar13;
LAB_00455474:
  *param_6 = uVar7;
  return;
}


