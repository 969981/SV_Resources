/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020c83b0; name: FUN_020c83b0
 */


void FUN_020c83b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  param_1[1] = *(undefined8 *)(param_2 + 0x58);
  param_1[2] = uVar2;
  *param_1 = uVar1;
  return;
}


