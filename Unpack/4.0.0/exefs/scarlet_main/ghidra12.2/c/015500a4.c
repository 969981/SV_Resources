/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015500a4; name: FUN_015500a4
 */


void FUN_015500a4(long param_1,int param_2)

{
  long *plVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_2 == 1) {
    FUN_0110c504(&local_40);
    *(undefined8 *)(param_1 + 0x2a8) = local_40;
    *(undefined8 *)(param_1 + 0x2b0) = local_38;
    plVar1 = *(long **)(param_1 + 0x2c0);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = local_30;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x2c0) = local_28;
    FUN_0110c614(&local_40);
  }
  else if (param_2 == 0) {
    FUN_0174e0f0(&local_40);
    *(undefined8 *)(param_1 + 0x2a8) = local_40;
    *(undefined8 *)(param_1 + 0x2b0) = local_38;
    plVar1 = *(long **)(param_1 + 0x2c0);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = local_30;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x2c0) = local_28;
    FUN_0174e200(&local_40);
  }
  else {
    if (param_2 != 2) {
      return;
    }
    FUN_01550ebc(&local_40);
    *(undefined8 *)(param_1 + 0x2a8) = local_40;
    *(undefined8 *)(param_1 + 0x2b0) = local_38;
    plVar1 = *(long **)(param_1 + 0x2c0);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = local_30;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x2c0) = local_28;
    FUN_01550fcc(&local_40);
  }
  *(undefined8 *)(param_1 + 0x2c8) = local_40;
  *(undefined8 *)(param_1 + 0x2d0) = local_38;
  plVar1 = *(long **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = local_30;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x2e0) = local_28;
  return;
}


