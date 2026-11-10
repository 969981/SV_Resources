/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020cc69c; name: FUN_020cc69c
 */


void FUN_020cc69c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  param_1[2] = *(undefined8 *)(param_2 + 0x70);
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


