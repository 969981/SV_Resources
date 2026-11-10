/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003401a8; name: FUN_003401a8
 */


long FUN_003401a8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *local_28;
  
  lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x938);
  if (lVar5 != 0) {
    local_28 = (long *)*param_1;
    *param_1 = 0;
                    /* try { // try from 003401e4 to 003401ef has its CatchHandler @ 00340248 */
    FUN_0033f430(lVar5,&local_28,*param_2);
    plVar4 = local_28;
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 1;
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
        (**(code **)(*local_28 + 8))(local_28);
        FUN_0049e790(PTR_LAB_047cba48,plVar4);
      }
    }
  }
  return lVar5;
}


