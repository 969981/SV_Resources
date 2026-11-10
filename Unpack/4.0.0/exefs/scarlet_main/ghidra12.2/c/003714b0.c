/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003714b0; name: FUN_003714b0
 */


void FUN_003714b0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    (**(code **)(param_1[2] + 0x20))(param_1 + 10);
    (**(code **)(param_1[3] + 0x30))((long)(param_1 + 10) + *(long *)(param_1[2] + 8));
    free(param_1);
    return;
  }
  return;
}


