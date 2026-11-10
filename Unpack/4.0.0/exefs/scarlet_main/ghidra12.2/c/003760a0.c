/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003760a0; name: FUN_003760a0
 */


void FUN_003760a0(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  puVar3 = PTR_LAB_047cba48;
  lVar8 = 0;
  do {
    FUN_0038db20(&DAT_047f1148 + lVar8 * 0x40);
    uVar4 = (&DAT_047f1178)[lVar8 * 8];
    if (uVar4 == 0) {
      lVar12 = (&DAT_047f1170)[lVar8 * 8];
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      uVar11 = 0;
      do {
        plVar9 = (long *)((&DAT_047f1168)[lVar8 * 8] + uVar11 * 8);
        lVar7 = *plVar9;
        if (lVar7 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          do {
            while( true ) {
              plVar5 = (long *)(lVar7 + 0x80);
              lVar6 = *plVar5;
              if (*(long *)(lVar7 + 0x40) == 0) break;
              lVar7 = lVar6;
              plVar9 = plVar5;
              if (lVar6 == 0) goto LAB_00376194;
            }
            *plVar9 = lVar6;
            FUN_00375df4(lVar7);
            FUN_0049e790(puVar3,lVar7);
            lVar12 = lVar12 + 1;
            lVar7 = lVar6;
          } while (lVar6 != 0);
LAB_00376194:
          uVar4 = (&DAT_047f1178)[lVar8 * 8];
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar12 + lVar10;
        lVar12 = (&DAT_047f1170)[lVar8 * 8] - lVar12;
        (&DAT_047f1170)[lVar8 * 8] = lVar12;
      } while (uVar11 < uVar4);
    }
    plVar9 = &DAT_047f1180 + lVar8 * 8;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 - lVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar12 != 0) && (uVar4 = FUN_003546b0(), (uVar4 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    free((void *)(&DAT_047f1168)[lVar8 * 8]);
    lVar8 = lVar8 + 1;
    if (lVar8 == 0x10) {
      return;
    }
  } while( true );
}


