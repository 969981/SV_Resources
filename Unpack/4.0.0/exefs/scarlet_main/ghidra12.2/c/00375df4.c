/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00375df4; name: FUN_00375df4
 */


void FUN_00375df4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if ((puVar3 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
                    /* try { // try from 00375e28 to 00375e57 has its CatchHandler @ 00375e7c */
      (*(code *)puVar3[3])(puVar3[4]);
    }
  }
  puVar3 = (undefined8 *)param_1[4];
  if ((puVar3 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)puVar3[3])(puVar3[4]);
    }
  }
  if (param_1[0xf] != 0) {
                    /* try { // try from 00375e64 to 00375e67 has its CatchHandler @ 00375e80 */
    (*(code *)param_1[0xe])();
  }
                    /* try { // try from 00375e6c to 00375e6f has its CatchHandler @ 00375e94 */
  FUN_0038db20(param_1 + 10);
  return;
}


