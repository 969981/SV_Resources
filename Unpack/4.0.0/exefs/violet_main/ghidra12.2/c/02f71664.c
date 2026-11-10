/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f71664; name: FUN_02f71664
 */


void FUN_02f71664(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = PTR_DAT_047e48e8;
  *param_1 = (long)&PTR_LAB_04610150;
  param_1[0x19] = (long)(puVar4 + 0x10);
  plVar7 = param_1 + 0x3dc;
  do {
    plVar7 = plVar7 + -1;
    plVar5 = (long *)*plVar7;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
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
  } while (plVar7 != param_1 + 0x1b);
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x02f71710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


