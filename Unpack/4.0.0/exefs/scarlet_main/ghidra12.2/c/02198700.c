/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02198700; name: FUN_02198700
 */


void FUN_02198700(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  long *local_8;
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02198788;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02198788:
        bVar4 = false;
      }
      if (bVar4) {
        local_8 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_8 = (long *)(*(long *)(lVar6 + 0x10) + -8);
        }
        goto LAB_02198720;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  local_8 = (long *)0x0;
LAB_02198720:
  plVar5 = local_8;
  FUN_021987c0(&local_8,param_1[2],param_2);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02198750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


