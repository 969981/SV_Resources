/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322bb94; name: FUN_0322bb94
 */


void FUN_0322bb94(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  *param_1 = (long)&PTR_LAB_046aaee0;
  if (param_1[3] != 0) {
    uVar7 = param_1[5];
    uVar6 = 0;
    do {
      lVar4 = uVar7 - uVar6;
      if (uVar7 < uVar6 || lVar4 == 0) {
        param_1[5] = 0;
        break;
      }
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x28))((long *)param_1[3],param_1[4] + uVar6,lVar4)
      ;
      uVar6 = lVar4 + uVar6;
    } while (lVar4 != 0);
    plVar5 = (long *)param_1[3];
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar1 = plVar5 + 2;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  if ((char)param_1[7] != '\0') {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[4],0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


