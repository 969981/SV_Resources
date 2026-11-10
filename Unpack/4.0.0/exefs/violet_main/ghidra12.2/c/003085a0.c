/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003085a0; name: FUN_003085a0
 */


void FUN_003085a0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  undefined1 auStack_18 [8];
  
  if (*(long *)(param_1 + 0xe40) != param_2) {
    __ptr = (void *)FUN_00350f50(*(undefined8 *)(param_1 + 0x10));
    free(__ptr);
    return;
  }
  FUN_0035357c(auStack_18,param_1 + 0xe30);
  if (*(long *)(param_1 + 0xe20) != 0) {
    if (*(int *)(param_1 + 0x38) == 1) {
      *(undefined4 *)(param_1 + 0x38) = 2;
      return;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      plVar1 = (long *)(param_1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined1 **)(param_1 + 0xd0) = &LAB_003080d0;
      *(long *)(param_1 + 0xd8) = param_1;
      thunk_FUN_00350da0(*(undefined8 *)(param_1 + 0x28),param_1 + 200,0);
    }
  }
  return;
}


