/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03440538; name: FUN_03440538
 */


void FUN_03440538(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar3 = *(long **)(param_1 + 0x28);
      do {
        *(undefined4 *)(*plVar3 + 0x20) = 0xffffffff;
        lVar2 = *plVar3;
        if (*(short *)(lVar2 + 0x24) == 0) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(lVar2 + 0x1c);
          FUN_03440fe0(param_1 + 0x38,*(int *)(lVar2 + 8) - *(int *)(param_1 + 0x338),
                       *(undefined4 *)(lVar2 + 0x1c));
          if (lVar2 != 0) {
            (**(code **)(puVar1 + 0x30))(7,lVar2);
          }
          lVar2 = *(long *)(param_1 + 0x360);
          if ((*(char *)(lVar2 + 0x218) != '\0') &&
             (*(undefined1 *)(lVar2 + 0x218) = 0, *(int *)(lVar2 + 0x214) != 0)) {
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar2 + 0x208));
          }
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(puVar1 + 0x30))(7);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((*(long *)(param_1 + 0x338) != 0) && (*(int *)(param_1 + 0x354) != -1)) {
    (**(code **)(puVar1 + 0x30))();
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}


