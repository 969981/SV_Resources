/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003504e0; name: FUN_003504e0
 */


void FUN_003504e0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  do {
    lVar4 = *param_1;
    lVar3 = lVar4 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 != 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = FUN_0038f2a4(param_1 + 1,auStack_1c);
    if (lVar3 == 0) {
      do {
        lVar3 = FUN_0038f2a4(param_1 + 1,auStack_1c);
      } while (lVar3 == 0);
    }
    FUN_0035351c(auStack_18,lVar3,*(undefined8 *)(lVar3 + 0x18));
  }
  return;
}


