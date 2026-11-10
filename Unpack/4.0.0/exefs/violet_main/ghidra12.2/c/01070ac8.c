/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01070ac8; name: FUN_01070ac8
 */


void FUN_01070ac8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x5c);
  uVar2 = *(undefined8 *)(param_1 + 100);
  uVar3 = *(undefined8 *)(param_1 + 0x74);
  param_2[2] = *(undefined8 *)(param_1 + 0x6c);
  param_2[3] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x7c);
  return;
}


