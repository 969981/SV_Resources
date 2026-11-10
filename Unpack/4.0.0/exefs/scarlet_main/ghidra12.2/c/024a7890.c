/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a7890; name: FUN_024a7890
 */


void FUN_024a7890(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *local_28;
  
  uVar4 = (**(code **)(*param_4 + 0x10))(param_4,0x50,0x10);
  FUN_024a7ad4(uVar4,param_3);
  local_28 = param_4;
  if (param_4 == (long *)0x0) {
    local_28 = (long *)FUN_024a7940();
  }
  *param_1 = uVar4;
  FUN_024a7c90(param_1 + 1,uVar4,param_4,&local_28);
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


