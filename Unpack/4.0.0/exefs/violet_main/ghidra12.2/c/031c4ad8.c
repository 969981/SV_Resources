/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c4ad8; name: FUN_031c4ad8
 */


undefined8 FUN_031c4ad8(long *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  
  uVar11 = param_2 * -0xae502812aa7333 >> ((ulong)*(uint *)(param_1 + 2) & 0x3f);
  puVar10 = (ulong *)(*param_1 + (param_1[1] & uVar11) * 0x80);
  puVar1 = puVar10 + 1;
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_031c456c(puVar10);
  }
  uVar8 = *puVar10;
  cVar5 = (char)(param_2 * -0xae502812aa7333 >> 0x38);
  uVar2 = (uint)uVar8 & 0xff;
  uVar6 = (ulong)uVar2;
  if (0xcc < uVar2) {
    uVar6 = ~(-1L << ((ulong)(uVar2 - 0xc5) & 0x3f));
  }
  if ((uVar8 & 0xff) == 0) {
    for (uVar11 = uVar4 & 0x101010101010100 &
                  CONCAT17(-(cVar5 == (char)(uVar8 >> 0x38)),
                           CONCAT16(-(cVar5 == (char)(uVar8 >> 0x30)),
                                    CONCAT15(-(cVar5 == (char)(uVar8 >> 0x28)),
                                             CONCAT14(-(cVar5 == (char)(uVar8 >> 0x20)),
                                                      CONCAT13(-(cVar5 == (char)(uVar8 >> 0x18)),
                                                               CONCAT12(-(cVar5 == (char)(uVar8 >> 
                                                  0x10)),CONCAT11(-(cVar5 == (char)(uVar8 >> 8)),
                                                                  -(cVar5 == (char)uVar8))))))));
        uVar11 != 0; uVar11 = uVar8 ^ uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
      uVar8 = 1L << (uVar4 & 0x3f);
      if (puVar10[(uVar4 >> 3) * 2] == param_2) {
        uVar8 = ~uVar8;
LAB_031c4c60:
        puVar10 = puVar10 + 1;
        do {
          cVar5 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
          if (bVar3) {
            *puVar10 = *puVar10 & uVar8 & 0xfffffffffffffffe;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        return 1;
      }
    }
  }
  else {
    uVar7 = 0;
    while( true ) {
      for (uVar4 = uVar4 & 0x101010101010100 &
                   CONCAT17(-(cVar5 == (char)(uVar8 >> 0x38)),
                            CONCAT16(-(cVar5 == (char)(uVar8 >> 0x30)),
                                     CONCAT15(-(cVar5 == (char)(uVar8 >> 0x28)),
                                              CONCAT14(-(cVar5 == (char)(uVar8 >> 0x20)),
                                                       CONCAT13(-(cVar5 == (char)(uVar8 >> 0x18)),
                                                                CONCAT12(-(cVar5 == (char)(uVar8 >> 
                                                  0x10)),CONCAT11(-(cVar5 == (char)(uVar8 >> 8)),
                                                                  -(cVar5 == (char)uVar8))))))));
          uVar4 != 0; uVar4 = uVar8 ^ uVar4) {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        uVar8 = 1L << (uVar9 & 0x3f);
        if (puVar10[(uVar9 >> 3) * 2] == param_2) {
          uVar8 = ~uVar8;
          if (uVar7 != 0) {
            puVar10 = puVar10 + 1;
            do {
              cVar5 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
              if (bVar3) {
                *puVar10 = *puVar10 & uVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              cVar5 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            return 1;
          }
          goto LAB_031c4c60;
        }
      }
      if (uVar6 == uVar7) break;
      uVar7 = uVar7 + 1;
      puVar10 = (ulong *)(*param_1 + (param_1[1] & uVar7 + uVar11) * 0x80);
      uVar4 = puVar10[1];
      uVar8 = *puVar10;
    }
  }
  do {
    cVar5 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xfffffffffffffffe;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return 0;
}


