/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a8fa0; name: FUN_024a8fa0
 */


void FUN_024a8fa0(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *local_28;
  
  uVar4 = (**(code **)(*param_4 + 0x10))(param_4,0x50,0x10);
  FUN_024a919c(uVar4,param_3);
  local_28 = param_4;
  if (param_4 == (long *)0x0) {
    local_28 = (long *)FUN_024a7940();
  }
  *param_1 = uVar4;
  FUN_024a9358(param_1 + 1,uVar4,param_4,&local_28);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  lVar5 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


