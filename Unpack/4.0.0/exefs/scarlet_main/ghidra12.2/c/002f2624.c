/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f2624; name: FUN_002f2624
 */


void FUN_002f2624(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_047cc990 + 0x10);
  uVar2 = (uint)param_1[8] & 3;
  if (1 < uVar2) {
    uVar5 = param_1[8] & 0xfffffffffffffffc;
    plVar1 = (long *)(uVar5 + 0x40);
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      FUN_00376de0(uVar2,uVar5,*(undefined4 *)(uVar5 + 0x48));
    }
  }
                    /* try { // try from 002f2670 to 002f2693 has its CatchHandler @ 002f2698 */
  FUN_0038db20(param_1 + 4);
  FUN_00358020(param_1 + 0xe);
  FUN_00358200();
  FUN_0034ee10(param_1 + 0xd);
  return;
}


