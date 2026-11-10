/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322b478; name: FUN_0322b478
 */


void FUN_0322b478(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_LAB_046aae28;
  plVar5 = (long *)param_1[3];
  if (plVar5[1] != 0) {
    plVar1 = plVar5 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  puVar4 = PTR_DAT_047d1a08;
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[5],0);
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0322b508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar4 + 8))(0,param_1,0);
  return;
}


