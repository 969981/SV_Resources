/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00323f84; name: FUN_00323f84
 */


long FUN_00323f84(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *local_18;
  
  do {
    uVar6 = *param_1;
    uVar1 = uVar6 + 0x140;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[1] < uVar1) {
    lVar5 = FUN_0038e7c0(param_1,0x140);
  }
  else {
    lVar5 = (long)param_1 + uVar6 + 0x20;
  }
  local_18 = (undefined8 *)*param_2;
  *param_2 = 0;
                    /* try { // try from 00323fd0 to 00323fdb has its CatchHandler @ 00324008 */
  FUN_00374be8(lVar5,&local_18);
  puVar4 = local_18;
  local_18 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00323ff0 to 00323ff3 has its CatchHandler @ 00324004 */
    (**(code **)*puVar4)();
  }
  return lVar5;
}


