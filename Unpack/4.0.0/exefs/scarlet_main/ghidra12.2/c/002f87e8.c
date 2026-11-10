/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f87e8; name: FUN_002f87e8
 */


void FUN_002f87e8(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  puVar1 = param_2 + 4;
                    /* try { // try from 002f8810 to 002f8817 has its CatchHandler @ 002f88b4 */
  FUN_0038db40(puVar1);
                    /* try { // try from 002f8818 to 002f883f has its CatchHandler @ 002f88bc */
  lVar5 = FUN_002f8910(param_2,param_1,param_3,param_4,param_5);
  if (lVar5 == 0) {
    param_2 = (undefined8 *)0x0;
  }
  else {
    FUN_002f86f8(param_2);
  }
                    /* try { // try from 002f8848 to 002f884f has its CatchHandler @ 002f88b0 */
  FUN_0038db60(puVar1);
  if (param_2 != (undefined8 *)0x0) {
    plVar2 = param_2 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*param_2)(param_2);
      FUN_0049e790(PTR_LAB_047cba48,param_2);
      return;
    }
  }
  return;
}


