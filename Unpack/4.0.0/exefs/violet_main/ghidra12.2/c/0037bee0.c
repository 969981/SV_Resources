/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037bee0; name: FUN_0037bee0
 */


undefined8 FUN_0037bee0(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *local_50 [4];
  undefined8 *local_30 [4];
  
  if ((param_2 == -1) || (param_3 == -1)) {
    FUN_00367020(local_30);
  }
  else {
    FUN_003676d0(local_30,param_1 + param_2,param_3 - param_2);
  }
  FUN_00366d00(local_50,local_30);
  uVar3 = FUN_0036a0b0(local_50,2);
  if ((local_30[0] != (undefined8 *)0x0) && (plVar4 = (long *)*local_30[0], plVar4 != (long *)0x0))
  {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)local_30[0][3])(local_30[0][4]);
    }
  }
  if ((local_50[0] != (undefined8 *)0x0) && (plVar4 = (long *)*local_50[0], plVar4 != (long *)0x0))
  {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)local_50[0][3])(local_50[0][4]);
    }
  }
  return uVar3;
}


