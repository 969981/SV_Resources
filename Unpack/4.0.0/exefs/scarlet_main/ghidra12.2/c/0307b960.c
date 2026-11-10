/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307b960; name: FUN_0307b960
 */


void FUN_0307b960(long param_1,int *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int local_40 [2];
  int local_38 [2];
  
  lVar7 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
  lVar8 = *(long *)(lVar7 + 8);
  uVar2 = *(undefined4 *)(lVar7 + 0x18);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar5 = FUN_0307f764();
  }
  FUN_0086fc44(uVar5,uVar2);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0x100 + 0x18) = 0xffffffff;
  if (*(char *)(lVar8 + 0x30) == '\x01') {
    uVar5 = *(undefined8 *)(lVar8 + 0x20);
  }
  else {
    uVar5 = FUN_0307da18();
  }
  FUN_03087658(uVar5,param_1);
  local_38[0] = *param_2;
  FUN_0307ac14(param_1,local_38);
  lVar7 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
  plVar6 = *(long **)(lVar7 + 8);
  *(undefined8 *)(lVar7 + 8) = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar7 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
  *(byte *)(lVar7 + 0xf0) = *(byte *)(lVar7 + 0xf0) | 2;
  local_40[0] = *param_2;
  FUN_03079ee0(param_1,local_40,0xffffffff);
  return;
}


