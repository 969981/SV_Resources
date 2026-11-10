/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a4250c; name: FUN_01a4250c
 */


undefined8 FUN_01a4250c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  short sVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *plStack_30;
  long local_28;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a42564;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a42564:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_28 = *(long *)(lVar7 + 0x10) + -0x28;
          local_48 = *param_4;
          uStack_40 = param_4[1];
          local_38 = param_4[2];
          plVar2 = (long *)param_4[3];
          param_4[3] = 0;
          plStack_30 = plVar2;
          uVar6 = FUN_02356e58(&local_28,param_2,param_3,&local_48);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))(plVar2);
          }
          FUN_02353c24(&local_28);
          return uVar6;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_28 = 0;
  FUN_02353c24(&local_28);
  return 0;
}


