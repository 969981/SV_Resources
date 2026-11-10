/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011afc5c; name: FUN_011afc5c
 */


void FUN_011afc5c(long param_1,long param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_011afcac(*(undefined8 *)(param_1 + 0x18),199);
  *(undefined2 *)(param_2 + 6) = uVar1;
  uVar1 = FUN_011afcac(*(undefined8 *)(param_1 + 0x18),0x9b);
  *(undefined2 *)(param_2 + 8) = uVar1;
  uVar1 = FUN_011afcac(*(undefined8 *)(param_1 + 0x18),200);
  *(undefined2 *)(param_2 + 10) = uVar1;
  return;
}


