/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003692b0; name: FUN_003692b0
 */


void FUN_003692b0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*puVar4;
  if (puVar3 == (undefined8 *)0x0) {
    param_1[4] = param_1[4] - (ulong)*(byte *)(puVar4 + 1);
  }
  else {
    param_1[4] = param_1[4] - puVar4[1];
    plVar5 = (long *)*puVar3;
    if (plVar5 != (long *)0x0) {
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (*(code *)puVar3[3])(puVar3[4]);
      }
    }
  }
  lVar6 = param_1[2];
  param_1[1] = param_1[1] + 0x20;
  param_1[2] = lVar6 + -1;
  if (lVar6 + -1 == 0) {
    param_1[1] = *param_1;
    return;
  }
  return;
}


