/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043d480; name: FUN_0043d480
 */


undefined8
FUN_0043d480(char *param_1,ulong param_2,undefined8 param_3,int param_4,int param_5,
            undefined8 param_6,uint param_7,byte *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  size_t sVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint local_a4;
  byte local_a0 [32];
  undefined8 auStack_80 [4];
  
  sVar17 = param_2 & 0xffffffff;
  uVar2 = FUN_0043b720(param_6);
  if (-1 < (int)uVar2) {
    lVar5 = FUN_00445b60();
    if (lVar5 == 0) {
      return 0;
    }
    if (param_1 == (char *)0x0) {
      sVar17 = 0;
      param_1 = "";
    }
    else if ((int)param_2 == -1) {
      sVar17 = strlen(param_1);
    }
    iVar3 = FUN_00445600(lVar5,param_1,sVar17 & 0xffffffff,param_6,0);
    if ((iVar3 != 0) && (lVar6 = FUN_00445b60(), lVar6 != 0)) {
      if (param_7 != 0) {
        uVar15 = 1;
        do {
          uVar1 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
          local_a4 = uVar1 >> 0x10 | uVar1 << 0x10;
          uVar1 = uVar2;
          if ((int)param_7 <= (int)uVar2) {
            uVar1 = param_7;
          }
          iVar3 = FUN_00445c50(lVar6,lVar5);
          if ((((iVar3 == 0) || (iVar3 = FUN_00445a80(lVar6,param_3,(long)param_4), iVar3 == 0)) ||
              (iVar3 = FUN_00445a80(lVar6,&local_a4,4), iVar3 == 0)) ||
             (iVar3 = FUN_00445aa0(lVar6,local_a0,0), iVar3 == 0)) {
LAB_0043d7c0:
            FUN_00445bf0(lVar6);
            goto LAB_0043d7c8;
          }
          memcpy(param_8,local_a0,(long)(int)uVar1);
          if (1 < param_5) {
            iVar3 = param_5 + -1;
            if ((int)uVar1 < 1) {
              do {
                iVar4 = FUN_00445c50(lVar6,lVar5);
                if (((iVar4 == 0) || (iVar4 = FUN_00445a80(lVar6,local_a0,uVar2), iVar4 == 0)) ||
                   (iVar4 = FUN_00445aa0(lVar6,local_a0,0), iVar4 == 0)) goto LAB_0043d7c0;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            else {
              uVar16 = (ulong)uVar1;
              uVar14 = uVar16 & 0xffffffc0;
              iVar3 = 1;
              do {
                iVar4 = FUN_00445c50(lVar6,lVar5);
                if (((iVar4 == 0) || (iVar4 = FUN_00445a80(lVar6,local_a0,uVar2), iVar4 == 0)) ||
                   (iVar4 = FUN_00445aa0(lVar6,local_a0,0), iVar4 == 0)) goto LAB_0043d7c0;
                if (uVar1 < 0x40 || param_8 < local_a0 + uVar16 && local_a0 < param_8 + uVar16) {
                  uVar8 = 0;
LAB_0043d6ec:
                  uVar10 = ~uVar8;
                  uVar12 = uVar16 & 3;
                  if ((uVar1 & 3) != 0) {
                    do {
                      uVar12 = uVar12 - 1;
                      param_8[uVar8] = param_8[uVar8] ^ local_a0[uVar8];
                      uVar8 = uVar8 + 1;
                    } while (uVar12 != 0);
                  }
                  if (2 < uVar10 + uVar16) {
                    lVar11 = uVar16 - uVar8;
                    pbVar9 = (byte *)(((ulong)local_a0 | 3) + uVar8);
                    pbVar13 = param_8 + uVar8 + 3;
                    do {
                      lVar11 = lVar11 + -4;
                      pbVar13[-3] = pbVar13[-3] ^ pbVar9[-3];
                      pbVar13[-2] = pbVar13[-2] ^ pbVar9[-2];
                      pbVar13[-1] = pbVar13[-1] ^ pbVar9[-1];
                      *pbVar13 = *pbVar13 ^ *pbVar9;
                      pbVar9 = pbVar9 + 4;
                      pbVar13 = pbVar13 + 4;
                    } while (lVar11 != 0);
                  }
                }
                else {
                  puVar7 = auStack_80;
                  pbVar9 = param_8 + 0x20;
                  uVar8 = uVar14;
                  do {
                    uVar19 = puVar7[-3];
                    uVar18 = puVar7[-4];
                    uVar21 = puVar7[-1];
                    uVar20 = puVar7[-2];
                    uVar8 = uVar8 - 0x40;
                    uVar27 = *(undefined8 *)(pbVar9 + -0x18);
                    uVar26 = *(undefined8 *)(pbVar9 + -0x20);
                    uVar29 = *(undefined8 *)(pbVar9 + -8);
                    uVar28 = *(undefined8 *)(pbVar9 + -0x10);
                    uVar23 = puVar7[1];
                    uVar22 = *puVar7;
                    uVar25 = puVar7[3];
                    uVar24 = puVar7[2];
                    *(ulong *)(pbVar9 + -0x18) =
                         CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                           (byte)((ulong)uVar19 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                    (byte)((ulong)uVar19 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                             (byte)((ulong)uVar19 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar27 >> 0x18)
                                                                      ^ (byte)((ulong)uVar19 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar27
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar19
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar27 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar19)))))));
                    *(ulong *)(pbVar9 + -0x20) =
                         CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                           (byte)((ulong)uVar18 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                    (byte)((ulong)uVar18 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                             (byte)((ulong)uVar18 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar26 >> 0x18)
                                                                      ^ (byte)((ulong)uVar18 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar26
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar18
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar26 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar18)))))));
                    *(ulong *)(pbVar9 + -8) =
                         CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                           (byte)((ulong)uVar21 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                    (byte)((ulong)uVar21 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                             (byte)((ulong)uVar21 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar29 >> 0x18)
                                                                      ^ (byte)((ulong)uVar21 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar29
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar21
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar29 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar21)))))));
                    *(ulong *)(pbVar9 + -0x10) =
                         CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                           (byte)((ulong)uVar20 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                    (byte)((ulong)uVar20 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                             (byte)((ulong)uVar20 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar28 >> 0x18)
                                                                      ^ (byte)((ulong)uVar20 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar28
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar20
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar28 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar20)))))));
                    uVar19 = *(undefined8 *)(pbVar9 + 8);
                    uVar18 = *(undefined8 *)pbVar9;
                    uVar21 = *(undefined8 *)(pbVar9 + 0x18);
                    uVar20 = *(undefined8 *)(pbVar9 + 0x10);
                    *(ulong *)(pbVar9 + 8) =
                         CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                           (byte)((ulong)uVar23 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                    (byte)((ulong)uVar23 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                             (byte)((ulong)uVar23 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar19 >> 0x18)
                                                                      ^ (byte)((ulong)uVar23 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar19
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar23
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar19 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar23)))))));
                    *(ulong *)pbVar9 =
                         CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                           (byte)((ulong)uVar22 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                    (byte)((ulong)uVar22 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                             (byte)((ulong)uVar22 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar18 >> 0x18)
                                                                      ^ (byte)((ulong)uVar22 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar18
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar22
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar18 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar22)))))));
                    *(ulong *)(pbVar9 + 0x18) =
                         CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                           (byte)((ulong)uVar25 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                    (byte)((ulong)uVar25 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                             (byte)((ulong)uVar25 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar21 >> 0x18)
                                                                      ^ (byte)((ulong)uVar25 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar21
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar25
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar21 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar25)))))));
                    *(ulong *)(pbVar9 + 0x10) =
                         CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                           (byte)((ulong)uVar24 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                    (byte)((ulong)uVar24 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                             (byte)((ulong)uVar24 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar20 >> 0x18)
                                                                      ^ (byte)((ulong)uVar24 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar20
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar24
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar20 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar24)))))));
                    puVar7 = puVar7 + 8;
                    pbVar9 = pbVar9 + 0x40;
                  } while (uVar8 != 0);
                  uVar8 = uVar14;
                  if (uVar14 != uVar16) goto LAB_0043d6ec;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 != param_5);
            }
          }
          param_7 = param_7 - uVar1;
          uVar15 = uVar15 + 1;
          param_8 = param_8 + (int)uVar1;
        } while (param_7 != 0);
      }
      FUN_00445bf0(lVar6);
      FUN_00445bf0(lVar5);
      return 1;
    }
LAB_0043d7c8:
    FUN_00445bf0(lVar5);
  }
  return 0;
}


