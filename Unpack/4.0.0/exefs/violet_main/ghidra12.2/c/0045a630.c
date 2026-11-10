/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045a630; name: FUN_0045a630
 */


undefined8
FUN_0045a630(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
            int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong extraout_x9;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong local_60 [3];
  ulong uStack_48;
  int iStack_44;
  
  if (param_5 < 0x10) {
    return 0xffffffff;
  }
  uStack_48 = param_2[1];
  local_60[2] = *param_2;
  (*(code *)param_1[3])(local_60 + 2,local_60 + 2,param_1[1]);
  uVar11 = param_5;
  if (param_6 == 0 && (param_5 & 0xf) != 0) {
    uVar11 = param_5 - 0x10;
  }
  uVar13 = param_5 & 0xf;
  uVar10 = extraout_x9;
  uVar4 = local_60[0];
  uVar12 = local_60[1];
  if (0xf < uVar11) {
    do {
      local_60[0] = local_60[2] ^ *param_3;
      local_60[1] = uStack_48 ^ param_3[1];
      (*(code *)param_1[2])(local_60,local_60,*param_1);
      uVar11 = uVar11 - 0x10;
      local_60[0] = local_60[0] ^ local_60[2];
      *param_4 = local_60[0];
      local_60[1] = local_60[1] ^ uStack_48;
      param_4[1] = local_60[1];
      if (uVar11 == 0) {
        return 0;
      }
      uVar4 = local_60[2] >> 0x3f;
      param_4 = param_4 + 2;
      param_3 = param_3 + 2;
      local_60[2] = (ulong)(iStack_44 >> 0x1f & 0x87) ^ local_60[2] << 1;
      uStack_48 = uVar4 | uStack_48 << 1;
      uVar13 = local_60[0];
      uVar10 = local_60[1];
      uVar4 = local_60[0];
      uVar12 = local_60[1];
    } while (0xf < uVar11);
  }
  local_60[1] = uVar10;
  local_60[0] = uVar13;
  if (param_6 == 0) {
    uVar12 = (ulong)((uint)((long)uStack_48 >> 0x3f) & 0x87) ^ local_60[2] << 1;
    local_60[0] = uVar12 ^ *param_3;
    uVar4 = local_60[2] >> 0x3f | uStack_48 << 1;
    local_60[1] = param_3[1] ^ uVar4;
    (*(code *)param_1[2])(local_60,local_60,*param_1);
    local_60[0] = local_60[0] ^ uVar12;
    local_60[1] = local_60[1] ^ uVar4;
    if (uVar11 != 0) {
      if (uVar11 < 0x20) {
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        uVar4 = 0;
        uVar6 = (uint)(uVar11 - 1);
        if (((uVar6 != 0xffffffff) && (uVar11 - 1 >> 0x20 == 0)) && (uVar6 < 0xfffffff0)) {
          puVar7 = (ulong *)((long)param_4 + uVar11 + 0x10);
          puVar8 = (ulong *)((long)param_3 + uVar11 + 0x10);
          uVar5 = 0;
          uVar4 = 0;
          if (((!(param_4 + 2 < (ulong *)((long)local_60 + uVar11) && local_60 < puVar7)) &&
              (!(param_4 + 2 < puVar8 && param_3 + 2 < puVar7))) &&
             (!(local_60 < puVar8 && param_3 + 2 < (ulong *)((long)local_60 + uVar11)))) {
            uVar4 = uVar11 & 0xffffffffffffffe0;
            uVar5 = (uint)uVar11 & 0xffffffe0;
            uVar12 = 0;
            do {
              uVar10 = uVar12 & 0xffffffe0 | 0x10;
              uVar14 = *(undefined8 *)((long)local_60 + uVar12);
              uVar18 = *(undefined8 *)((long)local_60 + uVar12 + 0x18);
              uVar16 = *(undefined8 *)((long)local_60 + uVar12 + 0x10);
              puVar1 = (undefined8 *)((long)param_3 + uVar10);
              uVar13 = uVar12 + 0x20;
              puVar2 = (undefined8 *)((long)param_4 + uVar10);
              uVar21 = puVar1[1];
              uVar20 = *puVar1;
              uVar25 = puVar1[3];
              uVar23 = puVar1[2];
              puVar2[1] = *(undefined8 *)((long)local_60 + uVar12 + 8);
              *puVar2 = uVar14;
              puVar2[3] = uVar18;
              puVar2[2] = uVar16;
              *(undefined8 *)((long)local_60 + uVar12 + 8) = uVar21;
              *(undefined8 *)((long)local_60 + uVar12) = uVar20;
              *(undefined8 *)((long)local_60 + uVar12 + 0x18) = uVar25;
              *(undefined8 *)((long)local_60 + uVar12 + 0x10) = uVar23;
              uVar12 = uVar13;
            } while (uVar4 != uVar13);
            if (uVar11 == uVar4) goto LAB_0045a7dc;
          }
        }
      }
      uVar5 = uVar5 + 0x10;
      do {
        uVar3 = *(undefined1 *)((long)param_3 + (ulong)uVar5);
        *(undefined1 *)((long)param_4 + (ulong)uVar5) = *(undefined1 *)((long)local_60 + uVar4);
        *(undefined1 *)((long)local_60 + uVar4) = uVar3;
        uVar4 = (ulong)(uVar5 - 0xf);
        uVar5 = uVar5 + 1;
      } while (uVar4 < uVar11);
    }
LAB_0045a7dc:
    local_60[0] = local_60[0] ^ local_60[2];
    local_60[1] = local_60[1] ^ uStack_48;
    (*(code *)param_1[2])(local_60,local_60,*param_1);
    param_4[1] = CONCAT17((byte)(uStack_48 >> 0x38) ^ (byte)(local_60[1] >> 0x38),
                          CONCAT16((byte)(uStack_48 >> 0x30) ^ (byte)(local_60[1] >> 0x30),
                                   CONCAT15((byte)(uStack_48 >> 0x28) ^ (byte)(local_60[1] >> 0x28),
                                            CONCAT14((byte)(uStack_48 >> 0x20) ^
                                                     (byte)(local_60[1] >> 0x20),
                                                     CONCAT13((byte)(uStack_48 >> 0x18) ^
                                                              (byte)(local_60[1] >> 0x18),
                                                              CONCAT12((byte)(uStack_48 >> 0x10) ^
                                                                       (byte)(local_60[1] >> 0x10),
                                                                       CONCAT11((byte)(uStack_48 >>
                                                                                      8) ^
                                                                                (byte)(local_60[1]
                                                                                      >> 8),
                                                                                (byte)uStack_48 ^
                                                                                (byte)local_60[1])))
                                                    ))));
    *param_4 = CONCAT17((byte)(local_60[2] >> 0x38) ^ (byte)(local_60[0] >> 0x38),
                        CONCAT16((byte)(local_60[2] >> 0x30) ^ (byte)(local_60[0] >> 0x30),
                                 CONCAT15((byte)(local_60[2] >> 0x28) ^ (byte)(local_60[0] >> 0x28),
                                          CONCAT14((byte)(local_60[2] >> 0x20) ^
                                                   (byte)(local_60[0] >> 0x20),
                                                   CONCAT13((byte)(local_60[2] >> 0x18) ^
                                                            (byte)(local_60[0] >> 0x18),
                                                            CONCAT12((byte)(local_60[2] >> 0x10) ^
                                                                     (byte)(local_60[0] >> 0x10),
                                                                     CONCAT11((byte)(local_60[2] >>
                                                                                    8) ^
                                                                              (byte)(local_60[0] >>
                                                                                    8),(byte)
                                                  local_60[2] ^ (byte)local_60[0])))))));
    return 0;
  }
  if (uVar11 != 0) {
    local_60[0] = uVar4;
    local_60[1] = uVar12;
    if (uVar11 < 0x20) {
      uVar4 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar4 = 0;
      if (((int)(uVar11 - 1) != -1) && (uVar11 - 1 >> 0x20 == 0)) {
        uVar5 = 0;
        uVar4 = 0;
        if ((!(param_4 < (ulong *)((long)local_60 + uVar11) &&
              local_60 < (ulong *)((long)param_4 + uVar11))) &&
           ((!(param_4 < (ulong *)((long)param_3 + uVar11) &&
              param_3 < (ulong *)((long)param_4 + uVar11)) &&
            (!(local_60 < (ulong *)((long)param_3 + uVar11) &&
              param_3 < (ulong *)((long)local_60 + uVar11)))))) {
          uVar4 = uVar11 & 0xffffffffffffffe0;
          puVar7 = param_3 + 2;
          uVar5 = (uint)uVar11 & 0xffffffe0;
          puVar8 = local_60 + 2;
          puVar9 = param_4 + 2;
          uVar12 = uVar4;
          do {
            uVar10 = puVar7[-1];
            uVar13 = puVar7[-2];
            uVar17 = puVar7[1];
            uVar15 = *puVar7;
            puVar7 = puVar7 + 4;
            uVar12 = uVar12 - 0x20;
            uVar19 = puVar8[-2];
            uVar24 = puVar8[1];
            uVar22 = *puVar8;
            puVar9[-1] = puVar8[-1];
            puVar9[-2] = uVar19;
            puVar9[1] = uVar24;
            *puVar9 = uVar22;
            puVar9 = puVar9 + 4;
            puVar8[-1] = uVar10;
            puVar8[-2] = uVar13;
            puVar8[1] = uVar17;
            *puVar8 = uVar15;
            puVar8 = puVar8 + 4;
          } while (uVar12 != 0);
          if (uVar11 == uVar4) goto LAB_0045a90c;
        }
      }
    }
    do {
      uVar5 = uVar5 + 1;
      uVar3 = *(undefined1 *)((long)param_3 + uVar4);
      *(undefined1 *)((long)param_4 + uVar4) = *(undefined1 *)((long)local_60 + uVar4);
      *(undefined1 *)((long)local_60 + uVar4) = uVar3;
      uVar4 = (ulong)uVar5;
    } while (uVar4 < uVar11);
  }
LAB_0045a90c:
  local_60[0] = local_60[0] ^ local_60[2];
  local_60[1] = local_60[1] ^ uStack_48;
  (*(code *)param_1[2])(local_60,local_60,*param_1);
  param_4[-1] = CONCAT17((byte)(local_60[1] >> 0x38) ^ (byte)(uStack_48 >> 0x38),
                         CONCAT16((byte)(local_60[1] >> 0x30) ^ (byte)(uStack_48 >> 0x30),
                                  CONCAT15((byte)(local_60[1] >> 0x28) ^ (byte)(uStack_48 >> 0x28),
                                           CONCAT14((byte)(local_60[1] >> 0x20) ^
                                                    (byte)(uStack_48 >> 0x20),
                                                    CONCAT13((byte)(local_60[1] >> 0x18) ^
                                                             (byte)(uStack_48 >> 0x18),
                                                             CONCAT12((byte)(local_60[1] >> 0x10) ^
                                                                      (byte)(uStack_48 >> 0x10),
                                                                      CONCAT11((byte)(local_60[1] >>
                                                                                     8) ^
                                                                               (byte)(uStack_48 >> 8
                                                                                     ),(byte)
                                                  local_60[1] ^ (byte)uStack_48)))))));
  param_4[-2] = CONCAT17((byte)(local_60[0] >> 0x38) ^ (byte)(local_60[2] >> 0x38),
                         CONCAT16((byte)(local_60[0] >> 0x30) ^ (byte)(local_60[2] >> 0x30),
                                  CONCAT15((byte)(local_60[0] >> 0x28) ^ (byte)(local_60[2] >> 0x28)
                                           ,CONCAT14((byte)(local_60[0] >> 0x20) ^
                                                     (byte)(local_60[2] >> 0x20),
                                                     CONCAT13((byte)(local_60[0] >> 0x18) ^
                                                              (byte)(local_60[2] >> 0x18),
                                                              CONCAT12((byte)(local_60[0] >> 0x10) ^
                                                                       (byte)(local_60[2] >> 0x10),
                                                                       CONCAT11((byte)(local_60[0]
                                                                                      >> 8) ^
                                                                                (byte)(local_60[2]
                                                                                      >> 8),
                                                                                (byte)local_60[0] ^
                                                                                (byte)local_60[2])))
                                                    ))));
  return 0;
}


