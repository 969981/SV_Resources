/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00455b80; name: FUN_00455b80
 */


void FUN_00455b80(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,char *param_5,
                 undefined8 *param_6,uint *param_7,code *param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar14 = *param_7;
  uVar7 = param_3;
  pbVar11 = param_2;
  pbVar12 = param_1;
  if (!(uVar14 == 0 || param_3 == 0)) {
    do {
      param_1 = pbVar12 + 1;
      param_3 = uVar7 - 1;
      param_2 = pbVar11 + 1;
      *pbVar11 = *(byte *)((long)param_6 + (ulong)uVar14) ^ *pbVar12;
      uVar14 = uVar14 + 1 & 0xf;
      if (uVar14 == 0) break;
      bVar6 = uVar7 != 1;
      uVar7 = param_3;
      pbVar11 = param_2;
      pbVar12 = param_1;
    } while (bVar6);
  }
  uVar5 = (*(uint *)(param_5 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(param_5 + 0xc) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  for (; 0xf < param_3; param_3 = param_3 + lVar13 * -0x10) {
    uVar7 = param_3 >> 4;
    if (param_3 >> 0x20 != 0) {
      uVar7 = 0x10000000;
    }
    uVar1 = uVar5 + (int)uVar7;
    uVar8 = (ulong)uVar1;
    uVar5 = 0;
    if (uVar7 <= uVar8) {
      uVar8 = 0;
      uVar5 = uVar1;
    }
    lVar13 = uVar7 - uVar8;
    (*param_8)(param_1,param_2,lVar13,param_4,param_5);
    uVar1 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    *(uint *)(param_5 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    if (uVar5 == 0) {
      bVar4 = param_5[0xb];
      param_5[0xb] = (char)(bVar4 + 1);
      uVar1 = (uint)(byte)param_5[10] + (bVar4 + 1 >> 8);
      param_5[10] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[9] + (uVar1 >> 8);
      param_5[9] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[8] + (uVar1 >> 8);
      param_5[8] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[7] + (uVar1 >> 8);
      param_5[7] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[6] + (uVar1 >> 8);
      param_5[6] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[5] + (uVar1 >> 8);
      param_5[5] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[4] + (uVar1 >> 8);
      param_5[4] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[3] + (uVar1 >> 8);
      param_5[3] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[2] + (uVar1 >> 8);
      param_5[2] = (char)uVar1;
      iVar2 = (uint)(byte)param_5[1] + (uVar1 >> 8);
      param_5[1] = (char)iVar2;
      *param_5 = *param_5 + (char)((uint)iVar2 >> 8);
    }
    param_2 = param_2 + lVar13 * 0x10;
    param_1 = param_1 + lVar13 * 0x10;
  }
  if (param_3 != 0) {
    *param_6 = 0;
    param_6[1] = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    uVar1 = (uVar5 + 1 & 0xff00ff00) >> 8 | (uVar5 + 1 & 0xff00ff) << 8;
    *(uint *)(param_5 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    if (uVar5 == 0xffffffff) {
      bVar4 = param_5[0xb];
      param_5[0xb] = (char)(bVar4 + 1);
      uVar5 = (uint)(byte)param_5[10] + (bVar4 + 1 >> 8);
      param_5[10] = (char)uVar5;
      uVar5 = (uint)(byte)param_5[9] + (uVar5 >> 8);
      param_5[9] = (char)uVar5;
      uVar5 = (uint)(byte)param_5[8] + (uVar5 >> 8);
      param_5[8] = (char)uVar5;
      uVar5 = (uint)(byte)param_5[7] + (uVar5 >> 8);
      param_5[7] = (char)uVar5;
      uVar5 = (uint)(byte)param_5[6] + (uVar5 >> 8);
      param_5[6] = (char)uVar5;
      uVar5 = (uint)(byte)param_5[5] + (uVar5 >> 8);
      param_5[5] = (char)uVar5;
      uVar5 = (uint)(byte)param_5[4] + (uVar5 >> 8);
      param_5[4] = (char)uVar5;
      uVar5 = (uint)(byte)param_5[3] + (uVar5 >> 8);
      param_5[3] = (char)uVar5;
      uVar5 = (uint)(byte)param_5[2] + (uVar5 >> 8);
      param_5[2] = (char)uVar5;
      iVar2 = (uint)(byte)param_5[1] + (uVar5 >> 8);
      param_5[1] = (char)iVar2;
      *param_5 = *param_5 + (char)((uint)iVar2 >> 8);
    }
    uVar7 = param_3;
    if (0x1f < param_3) {
      if ((!CARRY4(uVar14,(uint)(param_3 - 1))) && (param_3 - 1 >> 0x20 == 0)) {
        uVar8 = (ulong)uVar14;
        lVar13 = param_3 + uVar8;
        if ((param_1 + lVar13 <= param_2 + uVar8 || param_2 + lVar13 <= param_1 + uVar8) &&
           ((byte *)((long)param_6 + lVar13) <= param_2 + uVar8 ||
            param_2 + lVar13 <= (byte *)((long)param_6 + uVar8))) {
          uVar9 = param_3 & 0xffffffffffffffe0;
          uVar7 = param_3 & 0x1f;
          uVar5 = uVar14 + (int)uVar9;
          uVar8 = uVar9;
          do {
            uVar10 = (ulong)uVar14;
            uVar14 = uVar14 + 0x20;
            pbVar11 = param_1 + uVar10;
            puVar3 = (undefined8 *)((long)param_6 + uVar10);
            pbVar12 = param_2 + uVar10;
            uVar8 = uVar8 - 0x20;
            uVar16 = *(undefined8 *)(pbVar11 + 8);
            uVar15 = *(undefined8 *)pbVar11;
            uVar18 = *(undefined8 *)(pbVar11 + 0x18);
            uVar17 = *(undefined8 *)(pbVar11 + 0x10);
            uVar20 = puVar3[1];
            uVar19 = *puVar3;
            uVar22 = puVar3[3];
            uVar21 = puVar3[2];
            *(ulong *)(pbVar12 + 8) =
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
            *(ulong *)pbVar12 =
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
            *(ulong *)(pbVar12 + 0x18) =
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
            *(ulong *)(pbVar12 + 0x10) =
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
          } while (uVar8 != 0);
          uVar14 = uVar5;
          if (param_3 == uVar9) goto LAB_00455f08;
        }
      }
    }
    uVar8 = uVar7;
    if ((param_3 & 1) != 0) {
      uVar8 = (ulong)uVar14;
      uVar14 = uVar14 + 1;
      param_2[uVar8] = *(byte *)((long)param_6 + uVar8) ^ param_1[uVar8];
      uVar8 = uVar7 - 1;
    }
    if (uVar7 != 1) {
      do {
        uVar7 = (ulong)uVar14;
        param_2[uVar7] = *(byte *)((long)param_6 + uVar7) ^ param_1[uVar7];
        uVar7 = (ulong)(uVar14 + 1);
        uVar14 = uVar14 + 2;
        uVar8 = uVar8 - 2;
        param_2[uVar7] = *(byte *)((long)param_6 + uVar7) ^ param_1[uVar7];
      } while (uVar8 != 0);
    }
  }
LAB_00455f08:
  *param_7 = uVar14;
  return;
}


