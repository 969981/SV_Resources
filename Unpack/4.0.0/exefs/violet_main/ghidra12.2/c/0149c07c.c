/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0149c07c; name: FUN_0149c07c
 */


void FUN_0149c07c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0149c31c(param_1 + 0x1b8,*param_2);
  uVar2 = 0x1b;
  if (*(int *)(param_1 + 0x284) != 1) {
    uVar2 = 2;
  }
  uVar1 = 0x1c;
  if (*(int *)(param_1 + 0x284) != 3) {
    uVar1 = uVar2;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = uVar1;
  FUN_014425f4(*(undefined8 *)(param_1 + 0x1b8));
  return;
}


