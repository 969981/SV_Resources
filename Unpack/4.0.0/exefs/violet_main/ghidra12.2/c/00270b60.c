/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00270b60; name: FUN_00270b60
 */


void FUN_00270b60(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      FUN_00270ba4(plVar4);
      FUN_0049e790(PTR_LAB_047cba48,plVar4);
      return;
    }
  }
  return;
}


