/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001201e0; name: FUN_001201e0
 */


void FUN_001201e0(long *param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_2;
  do {
    if (*param_1 != lVar3) {
      ClearExclusiveLocal();
      *param_2 = *param_1;
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


