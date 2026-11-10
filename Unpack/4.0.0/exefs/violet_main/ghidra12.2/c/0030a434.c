/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030a434; name: FUN_0030a434
 */


void FUN_0030a434(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_1[3];
  plVar1 = param_1 + 4;
  uVar6 = *(undefined8 *)(lVar5 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (long *)0x0) && (lVar4 == 1)) {
    (**(code **)(*param_1 + 8))();
    param_1 = (long *)FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  *(undefined1 *)(lVar5 + 0x788) = 0;
  FUN_00308af0(param_1,lVar5);
  FUN_00308da0(uVar6,lVar5);
  return;
}


