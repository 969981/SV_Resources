/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00334b20; name: FUN_00334b20
 */


void FUN_00334b20(long param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_190 [168];
  undefined8 local_e8 [19];
  undefined8 *local_50;
  undefined8 local_48;
  long *local_38;
  
  local_48 = 0;
  local_e8[0] = 0;
  local_50 = (undefined8 *)0x0;
                    /* try { // try from 00334b48 to 00334b53 has its CatchHandler @ 00334c44 */
  FUN_002814ac(local_e8,param_3);
  puVar3 = local_50;
  uVar6 = *param_2;
  if (local_50 != (undefined8 *)0x0) {
    plVar5 = local_50 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*local_50)(local_50);
      FUN_0049e790(PTR_LAB_047cba48,puVar3);
    }
  }
  *param_2 = 0;
  local_48 = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(param_3 + 0xa8) = 0;
  plVar5 = *(long **)(param_1 + 0x68);
  local_50 = (undefined8 *)uVar6;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00334b90 to 00334b9b has its CatchHandler @ 00334c30 */
    FUN_00334c58(&local_38,param_1);
    plVar5 = local_38;
    local_38 = (long *)0x0;
    puVar3 = *(undefined8 **)(param_1 + 0x68);
    *(long **)(param_1 + 0x68) = plVar5;
    if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 00334bb8 to 00334bbb has its CatchHandler @ 00334c2c */
      (**(code **)*puVar3)();
      plVar5 = *(long **)(param_1 + 0x68);
    }
  }
  FUN_0032d470(auStack_190,local_e8);
                    /* try { // try from 00334bd4 to 00334bdf has its CatchHandler @ 00334c34 */
  (**(code **)(*plVar5 + 0x20))(plVar5,auStack_190);
  FUN_00275228(auStack_190);
  FUN_00275228(local_e8);
  return;
}


