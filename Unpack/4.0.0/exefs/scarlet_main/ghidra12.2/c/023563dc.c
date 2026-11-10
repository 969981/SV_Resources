/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023563dc; name: FUN_023563dc
 */


void FUN_023563dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  short sVar7;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [104];
  long local_38;
  
  lVar5 = *param_1;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar7 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02356444;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02356444:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          local_38 = *(long *)(lVar5 + 0x10) + -0x28;
          local_c0 = 0;
          local_b8 = (code *)0x0;
          local_b0 = 0;
          local_a8 = 0;
          if ((code *)param_4[3] != (code *)0x0) {
            (*(code *)param_4[3])(param_4 + 4,auStack_a0);
            local_b0 = param_4[2];
            local_a8 = param_4[3];
            local_c0 = *param_4;
            local_b8 = (code *)param_4[1];
            pcVar6 = (code *)param_4[1];
            if (pcVar6 != (code *)0x0) {
              param_4[2] = 0;
              param_4[3] = 0;
              *param_4 = 0;
              param_4[1] = 0;
              (*pcVar6)(param_4 + 4);
            }
          }
          FUN_02356500(&local_38,param_2,param_3,&local_c0);
          pcVar6 = local_b8;
          if (local_b8 != (code *)0x0) {
            local_b0 = 0;
            local_a8 = 0;
            local_c0 = 0;
            local_b8 = (code *)0x0;
            (*pcVar6)(auStack_a0);
          }
          goto LAB_023564e4;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  local_38 = 0;
LAB_023564e4:
  FUN_02353c24(&local_38);
  return;
}


