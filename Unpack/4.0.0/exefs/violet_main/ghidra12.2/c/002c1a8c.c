/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c1a8c; name: FUN_002c1a8c
 */


void FUN_002c1a8c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = FUN_0049e770(PTR_FUN_047cba38,0xd0);
  *param_1 = lVar4;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  lVar5 = 0;
  if (*param_3 != 0) {
    plVar1 = (long *)(*param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = *param_3;
  }
  *(long *)(lVar4 + 0x20) = lVar5;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  lVar5 = 0;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = param_3[1];
  }
  *(long *)(lVar4 + 0x28) = lVar5;
                    /* try { // try from 002c1b14 to 002c1b1b has its CatchHandler @ 002c1b3c */
  FUN_00297298(lVar4 + 0x30,param_3 + 2,param_3 + 2);
  *(long *)(lVar4 + 200) = param_3[0x15];
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


