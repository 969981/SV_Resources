/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00307fc0; name: FUN_00307fc0
 */


undefined8 FUN_00307fc0(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x278) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (uVar4 = FUN_00359b10(*(long *)(param_1 + 0x20),0x3c00), (uVar4 & 1) != 0)) {
    local_18 = 0;
    if (*(long *)(param_1 + 0x270) != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 **)(param_1 + 0x270) = &local_18;
    (**(code **)(param_1 + 0x278))(*(undefined8 *)(param_1 + 0x280),param_1,param_2);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  else {
    FUN_003101c0(param_1,param_2,7,0);
    if (*(int *)(param_1 + 0x38) == 1) {
      *(undefined4 *)(param_1 + 0x38) = 2;
      return 0;
    }
    local_18 = 0;
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
      return 0;
    }
  }
  return local_18;
}


