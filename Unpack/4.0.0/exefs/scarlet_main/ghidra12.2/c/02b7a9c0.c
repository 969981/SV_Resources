/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b7a9c0; name: FUN_02b7a9c0
 */


undefined8 FUN_02b7a9c0(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (((((*(long *)(param_1 + 0x50) == 0) ||
        ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1e8) & 1) == 0)) ||
       (*(long *)(param_1 + 0x90) == 0)) ||
      (((*(byte *)(*(long *)(param_1 + 0x90) + 0x1e8) & 1) == 0 || (*(long *)(param_1 + 0xd0) == 0))
      )) || ((*(byte *)(*(long *)(param_1 + 0xd0) + 0x1e8) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x118) == 0) && (*(long **)(param_1 + 0x50) != (long *)0x0)) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x50) + 0x70))();
      *(undefined8 *)(param_1 + 0x118) = uVar1;
      uVar2 = 0;
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x1d8);
      }
      *(undefined4 *)(param_1 + 0x120) = uVar2;
    }
    if ((*(long *)(param_1 + 0x108) == 0) && (*(long **)(param_1 + 0x90) != (long *)0x0)) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x70))();
      *(undefined8 *)(param_1 + 0x108) = uVar1;
      uVar2 = 0;
      if (*(long *)(param_1 + 0x90) != 0) {
        uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x1d8);
      }
      *(undefined4 *)(param_1 + 0x110) = uVar2;
    }
    if ((*(long *)(param_1 + 0x128) == 0) && (*(long **)(param_1 + 0xd0) != (long *)0x0)) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x70))();
      *(undefined8 *)(param_1 + 0x128) = uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


