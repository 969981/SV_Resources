/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003504a8; name: FUN_003504a8
 */


void FUN_003504a8(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auStack_8 [8];
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 == 0) {
    FUN_0035351c(auStack_8);
    return;
  }
  *(undefined8 *)(param_2 + 0x18) = param_3;
  FUN_0038f210(param_1 + 1);
  return;
}


