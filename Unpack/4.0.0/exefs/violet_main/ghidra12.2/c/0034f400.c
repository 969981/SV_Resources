/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034f400; name: FUN_0034f400
 */


void FUN_0034f400(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_18 [8];
  
  FUN_003580b0(param_1[0x214],*(undefined8 *)param_1[0x213]);
  FUN_0035351c(auStack_18,param_1[0x212],param_2);
  FUN_0034f880(param_1 + 4);
  if (param_1[0x20a] != 0) {
    FUN_003582d0();
  }
  if (param_1[0x20c] != 0) {
    FUN_00350f40();
  }
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
      (*(code *)puVar3[3])(puVar3[4]);
    }
  }
  free((void *)param_1[0x20d]);
  free((void *)param_1[0x20e]);
  FUN_00354750(param_1 + 0x215);
  FUN_00368470(param_1 + 0x218);
  FUN_00368470(param_1 + 0x23d);
  if (4 < (ulong)param_1[0x26e]) {
    FUN_00350fd0();
  }
  FUN_00359090(param_1[0x26f]);
  free(param_1);
  return;
}


