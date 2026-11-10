/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d56dc8; name: FUN_01d56dc8
 */


void FUN_01d56dc8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  short sVar8;
  undefined8 uVar9;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [96];
  long local_28;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d56e48;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d56e48:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_28 = *(long *)(lVar6 + 0x10) + -0x28;
          uVar2 = *param_5;
          uVar9 = *param_6;
          local_b0 = 0;
          local_a8 = 0;
          local_c0 = 0;
          local_b8 = (code *)0x0;
          if ((code *)param_7[3] != (code *)0x0) {
            (*(code *)param_7[3])(param_7 + 4,auStack_a0);
            local_b0 = param_7[2];
            local_a8 = param_7[3];
            local_c0 = *param_7;
            local_b8 = (code *)param_7[1];
            pcVar7 = (code *)param_7[1];
            if (pcVar7 != (code *)0x0) {
              param_7[2] = 0;
              param_7[3] = 0;
              *param_7 = 0;
              param_7[1] = 0;
              (*pcVar7)(param_7 + 4);
            }
          }
          FUN_01d56f18(param_1,uVar9,&local_28,param_3,param_4,uVar2,&local_c0);
          pcVar7 = local_b8;
          if (local_b8 != (code *)0x0) {
            local_b0 = 0;
            local_a8 = 0;
            local_c0 = 0;
            local_b8 = (code *)0x0;
            (*pcVar7)(auStack_a0);
          }
          FUN_01d56fe0(&local_28);
          return;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_28 = 0;
  FUN_01d56fe0(&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


