/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00278cd4; name: FUN_00278cd4
 */


void FUN_00278cd4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_LAB_0448ca90;
                    /* try { // try from 00278cf0 to 00278cf3 has its CatchHandler @ 00278d6c */
  FUN_00343d90(param_1[7]);
  FUN_00279268(param_1 + 0xd,param_1[0xe]);
  FUN_002792e8(param_1 + 9,param_1[10]);
  puVar5 = (undefined8 *)param_1[8];
  if (puVar5 != (undefined8 *)0x0) {
    plVar1 = puVar5 + 1;
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
      (**(code **)*puVar5)(puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
      FUN_0032d30c(param_1);
      return;
    }
  }
  FUN_0032d30c(param_1);
  return;
}


