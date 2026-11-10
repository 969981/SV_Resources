/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368470; name: FUN_00368470
 */


void FUN_00368470(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1[2] != 0) {
    uVar6 = 0;
    do {
      puVar3 = *(undefined8 **)(param_1[1] + uVar6 * 0x20);
      if ((puVar3 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
        do {
          lVar5 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          (*(code *)puVar3[3])(puVar3[4]);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)param_1[2]);
  }
  puVar3 = (undefined8 *)*param_1;
  param_1[4] = 0;
  param_1[1] = puVar3;
  param_1[2] = 0;
  if (param_1 + 5 == puVar3) {
    return;
  }
  free(puVar3);
  return;
}


