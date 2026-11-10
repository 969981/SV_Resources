/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03440670; name: FUN_03440670
 */


short FUN_03440670(long param_1,long param_2)

{
  short sVar1;
  long *plVar2;
  long lVar3;
  
  sVar1 = *(short *)(param_2 + 0x24) + -1;
  *(short *)(param_2 + 0x24) = sVar1;
  if (sVar1 == 0) {
    if (*(int *)(param_2 + 0x20) == -1) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(param_2 + 0x1c);
      FUN_03440fe0(param_1 + 0x38,*(int *)(param_2 + 8) - *(int *)(param_1 + 0x338),
                   *(undefined4 *)(param_2 + 0x1c));
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7,param_2);
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = 0;
      plVar2 = (long *)(param_1 + 0x18);
      if (*plVar2 != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
      }
      *plVar2 = param_2;
      *(long *)(param_1 + 0x10) = param_2;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    lVar3 = *(long *)(param_1 + 0x360);
    if ((*(char *)(lVar3 + 0x218) != '\0') &&
       (*(undefined1 *)(lVar3 + 0x218) = 0, *(int *)(lVar3 + 0x214) != 0)) {
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar3 + 0x208));
    }
  }
  return sVar1;
}


