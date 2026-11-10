/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036aa60; name: FUN_0036aa60
 */


undefined8 FUN_0036aa60(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if ((ulong)*(uint *)(param_1 + 2) < *(ulong *)(param_1[1] + 0x28)) {
      puVar1 = (undefined8 *)(*(long *)(param_1[1] + 0x20) + (ulong)*(uint *)(param_1 + 2) * 0x20);
      if (((undefined8 *)*puVar1 != (undefined8 *)0x0) &&
         (plVar4 = *(long **)*puVar1, plVar4 != (long *)0x0)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar5 = *puVar1;
      uVar7 = puVar1[3];
      uVar6 = puVar1[2];
      param_2[1] = puVar1[1];
      *param_2 = uVar5;
      param_2[3] = uVar7;
      param_2[2] = uVar6;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      return 1;
    }
  }
  return 0;
}


