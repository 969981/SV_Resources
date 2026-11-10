/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003707b0; name: FUN_003707b0
 */


void FUN_003707b0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_003707b0(param_1,*param_2);
  FUN_003707b0(param_1,param_2[1]);
  uVar2 = (uint)param_2[6] & 3;
  if (1 < uVar2) {
    uVar5 = param_2[6] & 0xfffffffffffffffc;
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
                    /* try { // try from 0037085c to 00370867 has its CatchHandler @ 0037086c */
      FUN_00376de0(uVar2,uVar5,*(undefined4 *)(uVar5 + 0x48));
    }
  }
  uVar2 = (uint)param_2[7] & 3;
  if (1 < uVar2) {
    uVar5 = param_2[7] & 0xfffffffffffffffc;
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
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


