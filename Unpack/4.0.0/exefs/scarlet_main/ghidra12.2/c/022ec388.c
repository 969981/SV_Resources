/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ec388; name: FUN_022ec388
 */


undefined4 FUN_022ec388(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  short sVar8;
  long local_8;
  
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
        if (cVar4 != '\0') goto LAB_022ec3e0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_022ec3e0:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_8 = *(long *)(lVar7 + 0x10) + -0x28;
          plVar2 = (long *)(local_8 + ((long)param_3 >> 1));
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *plVar2);
          }
          uVar6 = (*param_2)(plVar2,*param_4);
          FUN_022eb7d4(&local_8);
          return uVar6;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_022eb7d4(&local_8);
  return 0;
}


