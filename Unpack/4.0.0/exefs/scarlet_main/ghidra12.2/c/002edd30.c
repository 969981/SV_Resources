/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002edd30; name: FUN_002edd30
 */


void FUN_002edd30(long *param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = 2;
  do {
    uVar7 = uVar5;
    uVar5 = uVar7 << 1;
  } while (uVar7 < param_1[1] + 1U);
  lVar6 = FUN_0038c7f0(*param_1,uVar7 << 3);
  uVar2 = (uint)param_2 & 3;
  *param_1 = lVar6;
  if (1 < uVar2) {
    plVar1 = (long *)((param_2 & 0xfffffffffffffffc) + 0x40);
    if (uVar2 == 2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  lVar6 = param_1[1];
  param_1[1] = lVar6 + 1;
  *(ulong *)(*param_1 + lVar6 * 8) = param_2;
  return;
}


