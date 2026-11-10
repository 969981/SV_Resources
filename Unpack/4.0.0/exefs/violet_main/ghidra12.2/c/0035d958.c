/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035d958; name: FUN_0035d958
 */


void FUN_0035d958(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  iVar4 = *(int *)(param_1 + 0x38) + -1;
  *(int *)(param_1 + 0x38) = iVar4;
  FUN_0038db40(param_1 + 0x18);
                    /* try { // try from 0035d97c to 0035d987 has its CatchHandler @ 0035d9cc */
  lVar5 = FUN_0035dfa0(param_1,iVar4);
                    /* try { // try from 0035d98c to 0035d993 has its CatchHandler @ 0035d9c8 */
  FUN_0038db60(param_1 + 0x18);
  plVar1 = (long *)(lVar5 + 0x128);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    FUN_00368510(lVar5);
    return;
  }
  return;
}


