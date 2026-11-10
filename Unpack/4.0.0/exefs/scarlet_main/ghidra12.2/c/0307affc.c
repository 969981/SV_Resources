/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307affc; name: FUN_0307affc
 */


void FUN_0307affc(long param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int local_30 [2];
  int local_28 [2];
  
  FUN_03087ea4(*(undefined8 *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0x100 + 0x10),param_1);
  local_28[0] = *param_2;
  FUN_0307b0c4(param_1,local_28);
  lVar5 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
  plVar4 = *(long **)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  lVar5 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
  *(byte *)(lVar5 + 0xf0) = *(byte *)(lVar5 + 0xf0) | 4;
  local_30[0] = *param_2;
  FUN_03079ee0(param_1,local_30,0xffffffff);
  return;
}


