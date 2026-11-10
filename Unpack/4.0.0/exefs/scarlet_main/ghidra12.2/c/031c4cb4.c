/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c4cb4; name: FUN_031c4cb4
 */


void FUN_031c4cb4(long *param_1,ulong param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  char cVar19;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined1 local_90;
  ulong local_88;
  undefined1 local_80;
  ulong local_78;
  char local_70;
  ulong local_68;
  
  uVar15 = param_2 * -0xae502812aa7333;
  uVar18 = uVar15 >> ((ulong)*(uint *)(param_1 + 2) & 0x3f);
  puVar2 = (ulong *)(*param_1 + (param_1[1] & uVar18) * 0x80);
  puVar1 = puVar2 + 1;
  do {
    uVar5 = *puVar1;
    cVar19 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar5 | 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if ((uVar5 & 1) != 0) {
    uVar5 = FUN_031c456c(puVar2);
  }
  local_68 = *puVar2;
  uVar3 = (uint)local_68 & 0xff;
  uVar16 = (ulong)uVar3;
  cVar19 = (char)(uVar15 >> 0x38);
  uVar17 = uVar5 | 1;
  if (0xcc < uVar3) {
    uVar16 = ~(-1L << ((ulong)(uVar3 - 0xc5) & 0x3f));
  }
  puVar7 = puVar2;
  if ((local_68 & 0xff) == 0) {
    for (uVar5 = uVar5 & 0x101010101010100 &
                 CONCAT17(-(cVar19 == (char)(local_68 >> 0x38)),
                          CONCAT16(-(cVar19 == (char)(local_68 >> 0x30)),
                                   CONCAT15(-(cVar19 == (char)(local_68 >> 0x28)),
                                            CONCAT14(-(cVar19 == (char)(local_68 >> 0x20)),
                                                     CONCAT13(-(cVar19 == (char)(local_68 >> 0x18)),
                                                              CONCAT12(-(cVar19 ==
                                                                        (char)(local_68 >> 0x10)),
                                                                       CONCAT11(-(cVar19 ==
                                                                                 (char)(local_68 >>
                                                                                       8)),
                                                                                -(cVar19 ==
                                                                                 (char)local_68)))))
                                           ))); uVar5 != 0; uVar5 = 1L << (local_a0 & 0x3f) ^ uVar5)
    {
      uVar16 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      local_a0 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      lVar10 = (local_a0 >> 3) - 1;
      if (puVar2[lVar10 * 2 + 2] == param_2) {
        local_a8 = 0;
LAB_031c50e0:
        local_88 = puVar7[lVar10 * 2 + 3];
        local_80 = 1;
        (*(code *)*param_3)(&local_78,param_3[1],&local_88);
        if (local_70 != '\0') {
          puVar7[lVar10 * 2 + 3] = local_78;
          do {
            cVar19 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar13) {
              *puVar1 = *puVar1 & 0xfffffffffffffffe;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          return;
        }
        uVar15 = ~(1L << (local_a0 & 0x3f));
        puVar7 = puVar7 + 1;
        if (local_a8 == 0) {
          do {
            cVar19 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar13) {
              *puVar7 = *puVar7 & uVar15 & 0xfffffffffffffffe;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          return;
        }
        do {
          cVar19 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar13) {
            *puVar7 = *puVar7 & uVar15;
            cVar19 = ExclusiveMonitorsStatus();
          }
        } while (cVar19 != '\0');
        do {
          cVar19 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 & 0xfffffffffffffffe;
            cVar19 = ExclusiveMonitorsStatus();
          }
        } while (cVar19 != '\0');
        return;
      }
    }
  }
  else {
    local_a8 = 0;
    uVar5 = local_68;
    uVar14 = uVar17;
    while( true ) {
      for (uVar5 = uVar14 & 0x101010101010100 &
                   CONCAT17(-(cVar19 == (char)(uVar5 >> 0x38)),
                            CONCAT16(-(cVar19 == (char)(uVar5 >> 0x30)),
                                     CONCAT15(-(cVar19 == (char)(uVar5 >> 0x28)),
                                              CONCAT14(-(cVar19 == (char)(uVar5 >> 0x20)),
                                                       CONCAT13(-(cVar19 == (char)(uVar5 >> 0x18)),
                                                                CONCAT12(-(cVar19 ==
                                                                          (char)(uVar5 >> 0x10)),
                                                                         CONCAT11(-(cVar19 ==
                                                                                   (char)(uVar5 >> 8
                                                                                         )),
                                                                                  -(cVar19 ==
                                                                                   (char)uVar5))))))
                                    )); uVar5 != 0; uVar5 = 1L << (local_a0 & 0x3f) ^ uVar5) {
        uVar14 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        local_a0 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
        lVar10 = (local_a0 >> 3) - 1;
        if (puVar7[lVar10 * 2 + 2] == param_2) goto LAB_031c50e0;
      }
      if (uVar16 == local_a8) break;
      local_a8 = local_a8 + 1;
      puVar7 = (ulong *)(*param_1 + (param_1[1] & local_a8 + uVar18) * 0x80);
      uVar14 = puVar7[1];
      uVar5 = *puVar7;
    }
  }
  local_98 = 0;
  local_90 = 0;
  (*(code *)*param_3)(&local_78,param_3[1],&local_98);
  if (local_70 == '\0') {
    return;
  }
  uVar5 = 0;
  puVar7 = &local_68;
  puVar8 = puVar2;
  do {
    uVar16 = (~uVar17 & 0xff) * 0x101010101010100 &
             ((uVar17 ^ 0xffffffffffffffff) & 0x101010101010100) * 0xff;
    if ((uVar16 & 0x8040201008040200) == 0) {
      uVar16 = param_1[1];
      if (uVar5 == uVar16) {
        do {
          cVar19 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 & 0xfffffffffffffffe;
            cVar19 = ExclusiveMonitorsStatus();
          }
        } while (cVar19 != '\0');
        return;
      }
    }
    else {
      uVar14 = *puVar7;
      puVar7 = puVar8 + 1;
      if (*puVar7 == uVar17) {
        uVar16 = (uVar16 & 0x8000200008000200) >> 1 | (uVar16 & 0x40001000040000) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar16 = uVar12 >> 3;
        uVar11 = 1L << uVar16;
        uVar9 = uVar11 | uVar17;
        cVar19 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar13) {
          *puVar7 = uVar9;
          cVar19 = ExclusiveMonitorsStatus();
        }
        if (cVar19 == '\0') {
          puVar8[uVar16 * 2] = param_2;
          (puVar8 + uVar16 * 2)[1] = local_78;
          uVar12 = uVar12 & 0x38;
          uVar18 = *puVar8;
          uVar16 = (uVar15 >> 0x38) << uVar12;
          uVar15 = 0xffL << uVar12;
          if (uVar18 == uVar14) {
            cVar19 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar13) {
              *puVar8 = uVar14 & (uVar15 ^ 0xffffffffffffffff) | uVar16;
              cVar19 = ExclusiveMonitorsStatus();
            }
            if (cVar19 != '\0') goto LAB_031c4eb0;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_031c4eb0:
            bVar13 = false;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar16 = param_1[1];
    }
    uVar17 = uVar18 + 1 + uVar5;
    uVar5 = uVar5 + 1;
    puVar7 = (ulong *)(*param_1 + (uVar16 & uVar17) * 0x80);
    uVar17 = puVar7[1];
    puVar8 = puVar7;
  } while( true );
joined_r0x031c4eb8:
  if (!bVar13) {
    uVar14 = *puVar8;
    if (uVar14 == uVar18) {
      cVar19 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar13) {
        *puVar8 = uVar18 & ~uVar15 | uVar16;
        cVar19 = ExclusiveMonitorsStatus();
      }
      if (cVar19 != '\0') goto LAB_031c5024;
      bVar13 = true;
      uVar18 = uVar14;
    }
    else {
      ClearExclusiveLocal();
LAB_031c5024:
      bVar13 = false;
      uVar18 = uVar14;
    }
    goto joined_r0x031c4eb8;
  }
  uVar16 = ~uVar15 & ((ulong)(uVar5 == 0) ^ 0xffffffffffffffff) & (uVar11 ^ 0xffffffffffffffff);
  uVar18 = *puVar7;
  uVar15 = (-1L << uVar12) + uVar17 & uVar15;
  if (uVar18 == uVar9) {
    cVar19 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar13) {
      *puVar7 = uVar16 & uVar17 | uVar15;
      cVar19 = ExclusiveMonitorsStatus();
    }
    if (cVar19 == '\0') {
      bVar13 = true;
      goto joined_r0x031c4f04;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar13 = false;
joined_r0x031c4f04:
  while (!bVar13) {
    uVar17 = *puVar7;
    if (uVar17 == uVar18) {
      cVar19 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar13) {
        *puVar7 = uVar18 & uVar16 | uVar15;
        cVar19 = ExclusiveMonitorsStatus();
      }
      if (cVar19 != '\0') goto LAB_031c505c;
      bVar13 = true;
      uVar18 = uVar17;
    }
    else {
      ClearExclusiveLocal();
LAB_031c505c:
      bVar13 = false;
      uVar18 = uVar17;
    }
  }
  if (uVar5 != 0) {
    if (uVar5 < 0xcd) {
      uVar6 = (uint)uVar5;
    }
    else {
      uVar6 = 0xcc;
      do {
        uVar4 = uVar6 - 0xc4;
        uVar6 = uVar6 + 1;
      } while (uVar5 >> ((ulong)uVar4 & 0x3f) != 0);
    }
    if (uVar3 < uVar6) {
      do {
        uVar15 = *puVar2;
        if (uVar15 == local_68) {
          cVar19 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar13) {
            *puVar2 = local_68 & 0xffffffffffffff00 | (ulong)uVar6;
            cVar19 = ExclusiveMonitorsStatus();
          }
          if (cVar19 != '\0') goto LAB_031c50b0;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_031c50b0:
          bVar13 = false;
        }
      } while ((!bVar13) && (local_68 = uVar15, ((uint)uVar15 & 0xff) < uVar6));
    }
    do {
      cVar19 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = *puVar1 & 0xfffffffffffffffe;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
  }
  return;
}


