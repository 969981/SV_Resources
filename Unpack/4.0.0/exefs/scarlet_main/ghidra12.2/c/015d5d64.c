/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d5d64; name: FUN_015d5d64
 */


void FUN_015d5d64(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined8 *)(param_1 + 1000) = *param_2;
  *(undefined8 *)(param_1 + 0x3f0) = param_2[1];
  *(undefined8 *)(param_1 + 0x3f8) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x400);
  *(long **)(param_1 + 0x400) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if (*(long *)(param_1 + 0x3d8) == 0) {
    return;
  }
  FUN_01516688(*(long *)(param_1 + 0x3d8),param_2);
  return;
}


