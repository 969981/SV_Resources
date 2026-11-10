/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004560c0; name: FUN_004560c0
 */


void FUN_004560c0(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  param_1[0x2e] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_3 == 0xc) {
    uVar20 = 2;
    uVar8 = param_2[1];
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)uVar8;
    *(undefined4 *)((long)param_1 + 0xc) = 0x1000000;
    goto LAB_004564ec;
  }
  puVar7 = param_1 + 8;
  *puVar7 = 0;
  param_1[9] = 0;
  uVar8 = param_3;
  if (param_3 < 0x10) {
    uVar10 = 0;
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar1 = 0;
    uVar2 = 0;
    uVar10 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    do {
      *(byte *)(param_1 + 8) = (byte)uVar24 ^ (byte)*param_2;
      *(byte *)((long)param_1 + 0x41) = (byte)uVar23 ^ *(byte *)((long)param_2 + 1);
      *(byte *)((long)param_1 + 0x42) = (byte)uVar22 ^ *(byte *)((long)param_2 + 2);
      *(byte *)((long)param_1 + 0x43) = (byte)uVar21 ^ *(byte *)((long)param_2 + 3);
      *(byte *)((long)param_1 + 0x44) = (byte)uVar6 ^ *(byte *)((long)param_2 + 4);
      *(byte *)((long)param_1 + 0x45) = (byte)uVar5 ^ *(byte *)((long)param_2 + 5);
      *(byte *)((long)param_1 + 0x46) = (byte)uVar4 ^ *(byte *)((long)param_2 + 6);
      *(byte *)((long)param_1 + 0x47) = (byte)uVar3 ^ *(byte *)((long)param_2 + 7);
      *(byte *)(param_1 + 9) = (byte)uVar10 ^ (byte)param_2[1];
      *(byte *)((long)param_1 + 0x49) = (byte)uVar2 ^ *(byte *)((long)param_2 + 9);
      *(byte *)((long)param_1 + 0x4a) = (byte)uVar1 ^ *(byte *)((long)param_2 + 10);
      *(byte *)((long)param_1 + 0x4b) = (byte)uVar19 ^ *(byte *)((long)param_2 + 0xb);
      *(byte *)((long)param_1 + 0x4c) = (byte)uVar18 ^ *(byte *)((long)param_2 + 0xc);
      *(byte *)((long)param_1 + 0x4d) = (byte)uVar17 ^ *(byte *)((long)param_2 + 0xd);
      *(byte *)((long)param_1 + 0x4e) = (byte)uVar16 ^ *(byte *)((long)param_2 + 0xe);
      uVar20 = (uint)uVar15 ^ (uint)*(byte *)((long)param_2 + 0xf);
      uVar2 = (ulong)uVar20;
      *(char *)((long)param_1 + 0x4f) = (char)uVar20;
      uVar10 = param_1[(uVar2 & 0xf) * 2 + 0xc];
      uVar1 = param_1[(uVar2 & 0xf) * 2 + 0xd];
      lVar13 = 0;
      while( true ) {
        uVar3 = *(ulong *)(&DAT_03cfa528 + (uVar1 & 0xf) * 8) ^ uVar10 >> 4 ^
                *(ulong *)((long)param_1 + (uVar2 & 0xfffffffffffffff0) + 0x60);
        uVar1 = *(ulong *)((long)param_1 + (uVar2 & 0xfffffffffffffff0) + 0x68) ^
                (uVar1 >> 4 | uVar10 << 0x3c);
        if (lVar13 == -0xf) break;
        uVar2 = (ulong)*(byte *)((long)param_1 + lVar13 + 0x4e);
        uVar10 = *(ulong *)(&DAT_03cfa528 + (uVar1 & 0xf) * 8) ^ uVar3 >> 4 ^
                 param_1[(uVar2 & 0xf) * 2 + 0xc];
        uVar1 = param_1[(uVar2 & 0xf) * 2 + 0xd] ^ (uVar1 >> 4 | uVar3 << 0x3c);
        lVar13 = lVar13 + -1;
      }
      uVar8 = uVar8 - 0x10;
      param_2 = param_2 + 2;
      uVar10 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar24 = uVar2 >> 0x20 | uVar2 << 0x20;
      uVar23 = uVar24 >> 8;
      uVar22 = uVar24 >> 0x10;
      uVar10 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar21 = uVar24 >> 0x18;
      uVar6 = uVar2 & 0xffffffff;
      uVar5 = (uVar2 & 0xffffffff) >> 8;
      uVar4 = (uVar2 & 0xffffffff) >> 0x10;
      param_1[8] = uVar24;
      param_1[9] = uVar10;
      uVar3 = (uVar2 & 0xffffffff) >> 0x18;
      uVar2 = uVar10 >> 8;
      uVar1 = uVar10 >> 0x10;
      uVar19 = uVar10 >> 0x18;
      uVar18 = uVar15 & 0xffffffff;
      uVar17 = (uVar15 & 0xffffffff) >> 8;
      uVar16 = (uVar15 & 0xffffffff) >> 0x10;
      uVar15 = (uVar15 & 0xffffffff) >> 0x18;
    } while (0xf < uVar8);
  }
  if (uVar8 != 0) {
    if ((uVar8 < 0x40) ||
       ((param_1 + 8 < (ulong *)((long)param_2 + uVar8) &&
        (param_2 < (ulong *)((long)(param_1 + 8) + uVar8))))) {
      uVar10 = 0;
LAB_00456320:
      uVar1 = uVar10;
      if ((uVar8 & 1) != 0) {
        *(byte *)((long)puVar7 + uVar10) =
             *(byte *)((long)puVar7 + uVar10) ^ *(byte *)((long)param_2 + uVar10);
        uVar1 = uVar10 | 1;
      }
      if (uVar8 != (uVar10 | 1)) {
        lVar13 = uVar8 - uVar1;
        pbVar9 = (byte *)((long)param_1 + uVar1 + 0x41);
        pbVar11 = (byte *)((long)param_2 + uVar1 + 1);
        do {
          lVar13 = lVar13 + -2;
          pbVar9[-1] = pbVar9[-1] ^ pbVar11[-1];
          *pbVar9 = *pbVar9 ^ *pbVar11;
          pbVar9 = pbVar9 + 2;
          pbVar11 = pbVar11 + 2;
        } while (lVar13 != 0);
      }
    }
    else {
      uVar10 = uVar8 & 0xffffffffffffffc0;
      puVar14 = param_1 + 0xe;
      puVar12 = param_2 + 4;
      uVar1 = uVar10;
      do {
        uVar3 = puVar12[-3];
        uVar2 = puVar12[-4];
        uVar5 = puVar12[-1];
        uVar4 = puVar12[-2];
        uVar1 = uVar1 - 0x40;
        uVar19 = puVar14[-5];
        uVar18 = puVar14[-6];
        uVar22 = puVar14[-3];
        uVar21 = puVar14[-4];
        uVar15 = puVar12[1];
        uVar6 = *puVar12;
        uVar17 = puVar12[3];
        uVar16 = puVar12[2];
        puVar14[-5] = CONCAT17((byte)(uVar19 >> 0x38) ^ (byte)(uVar3 >> 0x38),
                               CONCAT16((byte)(uVar19 >> 0x30) ^ (byte)(uVar3 >> 0x30),
                                        CONCAT15((byte)(uVar19 >> 0x28) ^ (byte)(uVar3 >> 0x28),
                                                 CONCAT14((byte)(uVar19 >> 0x20) ^
                                                          (byte)(uVar3 >> 0x20),
                                                          CONCAT13((byte)(uVar19 >> 0x18) ^
                                                                   (byte)(uVar3 >> 0x18),
                                                                   CONCAT12((byte)(uVar19 >> 0x10) ^
                                                                            (byte)(uVar3 >> 0x10),
                                                                            CONCAT11((byte)(uVar19 
                                                  >> 8) ^ (byte)(uVar3 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar3)))))));
        puVar14[-6] = CONCAT17((byte)(uVar18 >> 0x38) ^ (byte)(uVar2 >> 0x38),
                               CONCAT16((byte)(uVar18 >> 0x30) ^ (byte)(uVar2 >> 0x30),
                                        CONCAT15((byte)(uVar18 >> 0x28) ^ (byte)(uVar2 >> 0x28),
                                                 CONCAT14((byte)(uVar18 >> 0x20) ^
                                                          (byte)(uVar2 >> 0x20),
                                                          CONCAT13((byte)(uVar18 >> 0x18) ^
                                                                   (byte)(uVar2 >> 0x18),
                                                                   CONCAT12((byte)(uVar18 >> 0x10) ^
                                                                            (byte)(uVar2 >> 0x10),
                                                                            CONCAT11((byte)(uVar18 
                                                  >> 8) ^ (byte)(uVar2 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar2)))))));
        puVar14[-3] = CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)(uVar5 >> 0x38),
                               CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)(uVar5 >> 0x30),
                                        CONCAT15((byte)(uVar22 >> 0x28) ^ (byte)(uVar5 >> 0x28),
                                                 CONCAT14((byte)(uVar22 >> 0x20) ^
                                                          (byte)(uVar5 >> 0x20),
                                                          CONCAT13((byte)(uVar22 >> 0x18) ^
                                                                   (byte)(uVar5 >> 0x18),
                                                                   CONCAT12((byte)(uVar22 >> 0x10) ^
                                                                            (byte)(uVar5 >> 0x10),
                                                                            CONCAT11((byte)(uVar22 
                                                  >> 8) ^ (byte)(uVar5 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar5)))))));
        puVar14[-4] = CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)(uVar4 >> 0x38),
                               CONCAT16((byte)(uVar21 >> 0x30) ^ (byte)(uVar4 >> 0x30),
                                        CONCAT15((byte)(uVar21 >> 0x28) ^ (byte)(uVar4 >> 0x28),
                                                 CONCAT14((byte)(uVar21 >> 0x20) ^
                                                          (byte)(uVar4 >> 0x20),
                                                          CONCAT13((byte)(uVar21 >> 0x18) ^
                                                                   (byte)(uVar4 >> 0x18),
                                                                   CONCAT12((byte)(uVar21 >> 0x10) ^
                                                                            (byte)(uVar4 >> 0x10),
                                                                            CONCAT11((byte)(uVar21 
                                                  >> 8) ^ (byte)(uVar4 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar4)))))));
        uVar3 = puVar14[-1];
        uVar2 = puVar14[-2];
        uVar5 = puVar14[1];
        uVar4 = *puVar14;
        puVar14[-1] = CONCAT17((byte)(uVar3 >> 0x38) ^ (byte)(uVar15 >> 0x38),
                               CONCAT16((byte)(uVar3 >> 0x30) ^ (byte)(uVar15 >> 0x30),
                                        CONCAT15((byte)(uVar3 >> 0x28) ^ (byte)(uVar15 >> 0x28),
                                                 CONCAT14((byte)(uVar3 >> 0x20) ^
                                                          (byte)(uVar15 >> 0x20),
                                                          CONCAT13((byte)(uVar3 >> 0x18) ^
                                                                   (byte)(uVar15 >> 0x18),
                                                                   CONCAT12((byte)(uVar3 >> 0x10) ^
                                                                            (byte)(uVar15 >> 0x10),
                                                                            CONCAT11((byte)(uVar3 >>
                                                                                           8) ^
                                                                                     (byte)(uVar15 
                                                  >> 8),(byte)uVar3 ^ (byte)uVar15)))))));
        puVar14[-2] = CONCAT17((byte)(uVar2 >> 0x38) ^ (byte)(uVar6 >> 0x38),
                               CONCAT16((byte)(uVar2 >> 0x30) ^ (byte)(uVar6 >> 0x30),
                                        CONCAT15((byte)(uVar2 >> 0x28) ^ (byte)(uVar6 >> 0x28),
                                                 CONCAT14((byte)(uVar2 >> 0x20) ^
                                                          (byte)(uVar6 >> 0x20),
                                                          CONCAT13((byte)(uVar2 >> 0x18) ^
                                                                   (byte)(uVar6 >> 0x18),
                                                                   CONCAT12((byte)(uVar2 >> 0x10) ^
                                                                            (byte)(uVar6 >> 0x10),
                                                                            CONCAT11((byte)(uVar2 >>
                                                                                           8) ^
                                                                                     (byte)(uVar6 >>
                                                                                           8),(byte)
                                                  uVar2 ^ (byte)uVar6)))))));
        puVar14[1] = CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)(uVar17 >> 0x38),
                              CONCAT16((byte)(uVar5 >> 0x30) ^ (byte)(uVar17 >> 0x30),
                                       CONCAT15((byte)(uVar5 >> 0x28) ^ (byte)(uVar17 >> 0x28),
                                                CONCAT14((byte)(uVar5 >> 0x20) ^
                                                         (byte)(uVar17 >> 0x20),
                                                         CONCAT13((byte)(uVar5 >> 0x18) ^
                                                                  (byte)(uVar17 >> 0x18),
                                                                  CONCAT12((byte)(uVar5 >> 0x10) ^
                                                                           (byte)(uVar17 >> 0x10),
                                                                           CONCAT11((byte)(uVar5 >> 
                                                  8) ^ (byte)(uVar17 >> 8),
                                                  (byte)uVar5 ^ (byte)uVar17)))))));
        *puVar14 = CONCAT17((byte)(uVar4 >> 0x38) ^ (byte)(uVar16 >> 0x38),
                            CONCAT16((byte)(uVar4 >> 0x30) ^ (byte)(uVar16 >> 0x30),
                                     CONCAT15((byte)(uVar4 >> 0x28) ^ (byte)(uVar16 >> 0x28),
                                              CONCAT14((byte)(uVar4 >> 0x20) ^
                                                       (byte)(uVar16 >> 0x20),
                                                       CONCAT13((byte)(uVar4 >> 0x18) ^
                                                                (byte)(uVar16 >> 0x18),
                                                                CONCAT12((byte)(uVar4 >> 0x10) ^
                                                                         (byte)(uVar16 >> 0x10),
                                                                         CONCAT11((byte)(uVar4 >> 8)
                                                                                  ^ (byte)(uVar16 >>
                                                                                          8),
                                                                                  (byte)uVar4 ^
                                                                                  (byte)uVar16))))))
                           );
        puVar14 = puVar14 + 8;
        puVar12 = puVar12 + 8;
      } while (uVar1 != 0);
      if (uVar8 != uVar10) goto LAB_00456320;
    }
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x4f);
    uVar8 = param_1[(uVar1 & 0xf) * 2 + 0xc];
    uVar10 = param_1[(uVar1 & 0xf) * 2 + 0xd];
    lVar13 = 0;
    while( true ) {
      uVar2 = *(ulong *)(&DAT_03cfa528 + (uVar10 & 0xf) * 8) ^ uVar8 >> 4 ^
              *(ulong *)((long)param_1 + (uVar1 & 0xfffffffffffffff0) + 0x60);
      uVar10 = *(ulong *)((long)param_1 + (uVar1 & 0xfffffffffffffff0) + 0x68) ^
               (uVar10 >> 4 | uVar8 << 0x3c);
      if (lVar13 == -0xf) break;
      uVar1 = (ulong)*(byte *)((long)param_1 + lVar13 + 0x4e);
      uVar8 = *(ulong *)(&DAT_03cfa528 + (uVar10 & 0xf) * 8) ^ uVar2 >> 4 ^
              param_1[(uVar1 & 0xf) * 2 + 0xc];
      uVar10 = param_1[(uVar1 & 0xf) * 2 + 0xd] ^ (uVar10 >> 4 | uVar2 << 0x3c);
      lVar13 = lVar13 + -1;
    }
    uVar8 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    param_1[8] = uVar8 >> 0x20 | uVar8 << 0x20;
    param_1[9] = uVar10;
  }
  uVar8 = (param_3 << 3 & 0xff00ff00ff00ff00) >> 8 | (param_3 << 3 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 ^ (uVar8 >> 0x20 | uVar8 << 0x20);
  param_1[9] = uVar10;
  uVar1 = uVar10 >> 0x38;
  uVar10 = uVar10 >> 0x38 & 0xf;
  uVar8 = param_1[uVar10 * 2 + 0xc];
  uVar10 = param_1[uVar10 * 2 + 0xd];
  lVar13 = 0xe;
  while( true ) {
    uVar2 = *(ulong *)(&DAT_03cfa528 + (uVar10 & 0xf) * 8) ^ uVar8 >> 4 ^
            *(ulong *)((long)param_1 + (uVar1 & 0xfffffffffffffff0) + 0x60);
    uVar10 = *(ulong *)((long)param_1 + (uVar1 & 0xfffffffffffffff0) + 0x68) ^
             (uVar10 >> 4 | uVar8 << 0x3c);
    if (lVar13 == -1) break;
    uVar1 = (ulong)*(byte *)((long)puVar7 + lVar13);
    uVar8 = *(ulong *)(&DAT_03cfa528 + (uVar10 & 0xf) * 8) ^ uVar2 >> 4 ^
            param_1[(uVar1 & 0xf) * 2 + 0xc];
    uVar10 = param_1[(uVar1 & 0xf) * 2 + 0xd] ^ (uVar10 >> 4 | uVar2 << 0x3c);
    lVar13 = lVar13 + -1;
  }
  uVar8 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar8 >> 0x20 | uVar8 << 0x20;
  uVar20 = ((uint)uVar8 & 0xff00ff00) >> 8 | ((uint)uVar8 & 0xff00ff) << 8;
  uVar20 = (uVar20 >> 0x10 | uVar20 << 0x10) + 1;
  uVar8 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
  param_1[8] = uVar8;
  param_1[9] = uVar10;
  *param_1 = uVar8;
  param_1[1] = uVar10;
LAB_004564ec:
  param_1[8] = 0;
  param_1[9] = 0;
  (*(code *)param_1[0x2f])(param_1,param_1 + 4,param_1[0x30]);
  uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
  *(uint *)((long)param_1 + 0xc) = uVar20 >> 0x10 | uVar20 << 0x10;
  return;
}


