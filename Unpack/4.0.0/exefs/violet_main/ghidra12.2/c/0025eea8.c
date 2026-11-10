/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025eea8; name: FUN_0025eea8
 */


undefined8 * FUN_0025eea8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 8);
  puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x60,0x10);
  *puVar3 = &PTR_FUN_0448baa8;
  puVar3[1] = plVar6;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  puVar3[3] = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  puVar3[5] = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3[10] = 0;
  if ((undefined8 *)(param_1 + 0x10) != puVar3 + 2) {
    plVar6 = *(long **)(param_1 + 0x50);
    if (plVar6 == (long *)0x0) {
      puVar3[10] = 0;
      return puVar3;
    }
    if (plVar6 == (long *)(param_1 + 0x30)) {
      puVar3[10] = puVar3 + 6;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
      return puVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0x38))();
    puVar3[10] = uVar4;
  }
  return puVar3;
}


