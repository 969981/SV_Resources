/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00567fc0; name: FUN_00567fc0
 */


void FUN_00567fc0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  lVar5 = param_2[1];
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = FUN_01cf7e20();
  param_1[5] = uVar4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar4 = FUN_01cf7e20();
  param_1[9] = uVar4;
  return;
}


