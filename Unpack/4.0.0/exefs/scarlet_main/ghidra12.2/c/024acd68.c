/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024acd68; name: FUN_024acd68
 */


void FUN_024acd68(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *local_28;
  
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_045bc310;
  lVar5 = (**(code **)(*param_4 + 0x10))(param_4,0x118,0x10);
  FUN_024ad100(lVar5,param_2);
  *(undefined8 *)(lVar5 + 0xf8) = 0;
  uVar6 = *(ulong *)(param_2 + 0xf8);
  if (uVar6 != 0) {
    *(ulong *)(lVar5 + 0xf8) = uVar6;
    if ((uVar6 & 1) == 0) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(param_2 + 0x100,lVar5 + 0x100,0);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x100);
      uVar7 = *(undefined8 *)(param_2 + 0x110);
      *(undefined8 *)(lVar5 + 0x108) = *(undefined8 *)(param_2 + 0x108);
      *(undefined8 *)(lVar5 + 0x110) = uVar7;
      *(undefined8 *)(lVar5 + 0x100) = uVar2;
    }
  }
  param_1[4] = lVar5;
  local_28 = param_4;
  FUN_024ad12c(param_1 + 5,lVar5,param_4,&local_28);
  param_1[6] = *param_3;
  lVar5 = param_3[1];
  param_1[7] = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  return;
}


