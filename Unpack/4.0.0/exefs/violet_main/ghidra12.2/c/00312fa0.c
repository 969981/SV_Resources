/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00312fa0; name: FUN_00312fa0
 */


void FUN_00312fa0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  FUN_00316090(param_1 + 0xd8);
  if (4 < *(ulong *)(param_1 + 0x10)) {
    FUN_00350fd0();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x48);
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
  puVar3 = *(undefined8 **)(param_1 + 0x80);
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
  free(*(void **)(param_1 + 0x68));
  free(*(void **)(param_1 + 0xa0));
  return;
}


