/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002eddd0; name: FUN_002eddd0
 */


void FUN_002eddd0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1[1] != 0) {
    uVar7 = 0;
    do {
      uVar5 = *(ulong *)(*param_1 + uVar7 * 8);
      uVar2 = (uint)uVar5 & 3;
      if (1 < uVar2) {
        uVar5 = uVar5 & 0xfffffffffffffffc;
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
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)param_1[1]);
  }
  free((void *)*param_1);
  return;
}


