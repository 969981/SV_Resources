/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0029ce88; name: FUN_0029ce88
 */


void FUN_0029ce88(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_18;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    local_18 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (local_18 != (undefined8 *)0x0) {
      uVar5 = 0;
      if (*(long *)(param_1 + 0x60) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x60) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = *(undefined8 *)(param_1 + 0x60);
      }
      uVar6 = 0;
      if (*(long *)(param_1 + 0x48) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x48) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar6 = *(undefined8 *)(param_1 + 0x48);
      }
      local_18[2] = uVar6;
      *local_18 = &PTR_FUN_0448df70;
      local_18[1] = uVar5;
    }
                    /* try { // try from 0029cf14 to 0029cf1f has its CatchHandler @ 0029cf58 */
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
              (*(long **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x58),&local_18);
    puVar4 = local_18;
    local_18 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
    }
  }
  return;
}


