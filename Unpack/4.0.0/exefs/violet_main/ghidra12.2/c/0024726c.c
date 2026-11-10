/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024726c; name: FUN_0024726c
 */


void FUN_0024726c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[2] = (long)(param_1 + 1);
  *param_1 = (long)(PTR_DAT_047cc0d0 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  param_1[3] = *param_2;
  lVar4 = param_2[1];
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


