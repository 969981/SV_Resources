/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322bc68; name: FUN_0322bc68
 */


void FUN_0322bc68(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  *param_1 = (long)&PTR_LAB_046aaee0;
  if (param_1[3] != 0) {
    uVar8 = param_1[5];
    uVar7 = 0;
    do {
      lVar5 = uVar8 - uVar7;
      if (uVar8 < uVar7 || lVar5 == 0) {
        param_1[5] = 0;
        break;
      }
      lVar5 = (**(code **)(*(long *)param_1[3] + 0x28))((long *)param_1[3],param_1[4] + uVar7,lVar5)
      ;
      uVar7 = lVar5 + uVar7;
    } while (lVar5 != 0);
    plVar6 = (long *)param_1[3];
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
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
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  puVar4 = PTR_DAT_047d1a08;
  if ((char)param_1[7] != '\0') {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[4],0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0322bd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar4 + 8))(0,param_1,0);
  return;
}


