/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c46dc; name: FUN_031c46dc
 */


undefined8 FUN_031c46dc(long *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  char cVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_38;
  
  uVar19 = param_2 * -0xae502812aa7333;
  uVar18 = uVar19 >> ((ulong)*(uint *)(param_1 + 2) & 0x3f);
  puVar2 = (ulong *)(*param_1 + (param_1[1] & uVar18) * 0x80);
  puVar1 = puVar2 + 1;
  do {
    uVar5 = *puVar1;
    cVar13 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar5 | 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar5 & 1) != 0) {
    uVar5 = FUN_031c456c(puVar2);
  }
  local_38 = *puVar2;
  uVar3 = (uint)local_38 & 0xff;
  uVar10 = (ulong)uVar3;
  cVar13 = (char)(uVar19 >> 0x38);
  uVar12 = uVar5 | 1;
  if (0xcc < uVar3) {
    uVar10 = ~(-1L << ((ulong)(uVar3 - 0xc5) & 0x3f));
  }
  if ((local_38 & 0xff) == 0) {
    for (uVar5 = uVar5 & 0x101010101010100 &
                 CONCAT17(-(cVar13 == (char)(local_38 >> 0x38)),
                          CONCAT16(-(cVar13 == (char)(local_38 >> 0x30)),
                                   CONCAT15(-(cVar13 == (char)(local_38 >> 0x28)),
                                            CONCAT14(-(cVar13 == (char)(local_38 >> 0x20)),
                                                     CONCAT13(-(cVar13 == (char)(local_38 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(local_38 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(local_38 >>
                                                                                       8)),
                                                                                -(cVar13 ==
                                                                                 (char)local_38)))))
                                           ))); uVar5 != 0; uVar5 = 1L << (uVar10 & 0x3f) ^ uVar5) {
      uVar10 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
      if (puVar2[(uVar10 >> 3) * 2] == param_2) goto LAB_031c4ab8;
    }
  }
  else {
    uVar5 = 0;
    puVar14 = puVar2;
    uVar8 = local_38;
    uVar9 = uVar12;
    while( true ) {
      for (uVar8 = uVar9 & 0x101010101010100 &
                   CONCAT17(-(cVar13 == (char)(uVar8 >> 0x38)),
                            CONCAT16(-(cVar13 == (char)(uVar8 >> 0x30)),
                                     CONCAT15(-(cVar13 == (char)(uVar8 >> 0x28)),
                                              CONCAT14(-(cVar13 == (char)(uVar8 >> 0x20)),
                                                       CONCAT13(-(cVar13 == (char)(uVar8 >> 0x18)),
                                                                CONCAT12(-(cVar13 ==
                                                                          (char)(uVar8 >> 0x10)),
                                                                         CONCAT11(-(cVar13 ==
                                                                                   (char)(uVar8 >> 8
                                                                                         )),
                                                                                  -(cVar13 ==
                                                                                   (char)uVar8))))))
                                    )); uVar8 != 0; uVar8 = 1L << (uVar9 & 0x3f) ^ uVar8) {
        uVar9 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
        if (puVar14[(uVar9 >> 3) * 2] == param_2) goto LAB_031c4ab8;
      }
      if (uVar10 == uVar5) break;
      uVar5 = uVar5 + 1;
      puVar14 = (ulong *)(*param_1 + (param_1[1] & uVar5 + uVar18) * 0x80);
      uVar9 = puVar14[1];
      uVar8 = *puVar14;
    }
  }
  uVar5 = 0;
  puVar14 = &local_38;
  puVar15 = puVar2;
  do {
    uVar10 = (~uVar12 & 0xff) * 0x101010101010100 &
             ((uVar12 ^ 0xffffffffffffffff) & 0x101010101010100) * 0xff;
    if ((uVar10 & 0x8040201008040200) == 0) {
      uVar10 = param_1[1];
      if (uVar5 == uVar10) goto code_r0x031c4848;
    }
    else {
      uVar8 = *puVar14;
      puVar14 = puVar15 + 1;
      if (*puVar14 == uVar12) {
        uVar10 = (uVar10 & 0x8000200008000200) >> 1 | (uVar10 & 0x40001000040000) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        uVar10 = uVar9 >> 3;
        uVar17 = 1L << uVar10;
        uVar16 = uVar17 | uVar12;
        cVar13 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar7) {
          *puVar14 = uVar16;
          cVar13 = ExclusiveMonitorsStatus();
        }
        if (cVar13 == '\0') {
          puVar15[uVar10 * 2] = param_2;
          (puVar15 + uVar10 * 2)[1] = param_3;
          uVar18 = *puVar15;
          uVar9 = uVar9 & 0x38;
          uVar10 = (uVar19 >> 0x38) << uVar9;
          uVar19 = 0xffL << uVar9;
          if (uVar18 == uVar8) {
            cVar13 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar15,0x10);
            if (bVar7) {
              *puVar15 = uVar8 & (uVar19 ^ 0xffffffffffffffff) | uVar10;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 != '\0') goto LAB_031c4898;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_031c4898:
            bVar7 = false;
          }
          goto joined_r0x031c48a0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar10 = param_1[1];
    }
    uVar12 = uVar18 + 1 + uVar5;
    uVar5 = uVar5 + 1;
    puVar14 = (ulong *)(*param_1 + (uVar10 & uVar12) * 0x80);
    uVar12 = puVar14[1];
    puVar15 = puVar14;
  } while( true );
LAB_031c4ab8:
  uVar6 = 1;
  goto LAB_031c4aa4;
code_r0x031c4848:
  uVar6 = 2;
  goto LAB_031c4aa4;
joined_r0x031c48a0:
  if (!bVar7) {
    uVar8 = *puVar15;
    if (uVar8 == uVar18) {
      cVar13 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar15,0x10);
      if (bVar7) {
        *puVar15 = uVar18 & ~uVar19 | uVar10;
        cVar13 = ExclusiveMonitorsStatus();
      }
      if (cVar13 != '\0') goto LAB_031c4938;
      bVar7 = true;
      uVar18 = uVar8;
    }
    else {
      ClearExclusiveLocal();
LAB_031c4938:
      bVar7 = false;
      uVar18 = uVar8;
    }
    goto joined_r0x031c48a0;
  }
  uVar10 = (-1L << uVar9) + uVar12 & uVar19;
  uVar18 = *puVar14;
  uVar19 = ~uVar19 & ((ulong)(uVar5 == 0) ^ 0xffffffffffffffff) & (uVar17 ^ 0xffffffffffffffff);
  if (uVar18 == uVar16) {
    cVar13 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar7) {
      *puVar14 = uVar19 & uVar12 | uVar10;
      cVar13 = ExclusiveMonitorsStatus();
    }
    if (cVar13 != '\0') goto LAB_031c48e8;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_031c48e8:
    bVar7 = false;
  }
  while (!bVar7) {
    uVar12 = *puVar14;
    if (uVar12 == uVar18) {
      cVar13 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar14,0x10);
      if (bVar7) {
        *puVar14 = uVar18 & uVar19 | uVar10;
        cVar13 = ExclusiveMonitorsStatus();
      }
      if (cVar13 != '\0') goto LAB_031c4970;
      bVar7 = true;
      uVar18 = uVar12;
    }
    else {
      ClearExclusiveLocal();
LAB_031c4970:
      bVar7 = false;
      uVar18 = uVar12;
    }
  }
  if (uVar5 == 0) {
    return 0;
  }
  if (uVar5 < 0xcd) {
    uVar11 = (uint)uVar5;
  }
  else {
    uVar11 = 0xcc;
    do {
      uVar4 = uVar11 - 0xc4;
      uVar11 = uVar11 + 1;
    } while (uVar5 >> ((ulong)uVar4 & 0x3f) != 0);
  }
  if (uVar3 < uVar11) {
    do {
      uVar18 = *puVar2;
      if (uVar18 == local_38) {
        cVar13 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = local_38 & 0xffffffffffffff00 | (ulong)uVar11;
          cVar13 = ExclusiveMonitorsStatus();
        }
        if (cVar13 != '\0') goto LAB_031c4a50;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_031c4a50:
        bVar7 = false;
      }
    } while ((!bVar7) && (local_38 = uVar18, ((uint)uVar18 & 0xff) < uVar11));
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
  }
LAB_031c4aa4:
  do {
    cVar13 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffffffffffffe;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  return uVar6;
}


