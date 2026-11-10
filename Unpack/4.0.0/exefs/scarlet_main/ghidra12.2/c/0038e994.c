/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038e994; name: FUN_0038e994
 */


void FUN_0038e994(void)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  
  pcVar6 = *(char **)PTR_DAT_047ccff0;
  lVar5 = *(long *)(pcVar6 + 0x30);
  plVar1 = (long *)(pcVar6 + 0x30);
  pcVar2 = pcVar6 + 8;
  do {
    while (lVar5 < 2) {
      FUN_0038db40(pcVar2);
      if (*plVar1 < 2) {
        cVar3 = *pcVar6;
        while (cVar3 == '\0') {
          auVar7 = FUN_0038dd60(1);
          FUN_0038dbe0(pcVar6 + 0x28,pcVar2,auVar7._0_8_,auVar7._8_8_);
          cVar3 = *pcVar6;
        }
      }
      FUN_0038db60(pcVar2);
      lVar5 = *plVar1;
    }
    while (*plVar1 == lVar5) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
    lVar5 = *plVar1;
  } while( true );
}


