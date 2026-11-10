/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038c8b0; name: FUN_0038c8b0
 */


long FUN_0038c8b0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  while( true ) {
    lVar6 = *param_1;
    lVar1 = lVar6 + param_2;
    lVar2 = param_4;
    if (lVar1 <= param_4) {
      lVar2 = lVar1;
    }
    lVar3 = param_3;
    if (param_3 <= lVar1) {
      lVar3 = lVar2;
    }
    if (lVar3 == lVar6) break;
    while (*param_1 == lVar6) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar5) {
        *param_1 = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        return lVar3;
      }
    }
    ClearExclusiveLocal();
  }
  return lVar6;
}


