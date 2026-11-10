/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022736b0; name: FUN_022736b0
 */


void FUN_022736b0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long local_38;
  
  *(undefined8 *)(param_1 + 0x128) = *param_2;
  *(undefined8 *)(param_1 + 0x130) = param_2[1];
  *(undefined8 *)(param_1 + 0x138) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x140);
  *(long **)(param_1 + 0x140) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x148) = *param_3;
  *(undefined8 *)(param_1 + 0x150) = param_3[1];
  *(undefined8 *)(param_1 + 0x158) = param_3[2];
  plVar2 = (long *)param_3[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x160);
  *(long **)(param_1 + 0x160) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_38 = param_1;
  FUN_02274e54(*(undefined8 *)(param_1 + 0x120),&local_38,param_2,param_3);
  return;
}


