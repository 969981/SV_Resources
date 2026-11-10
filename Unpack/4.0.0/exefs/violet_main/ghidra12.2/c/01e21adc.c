/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e21adc; name: FUN_01e21adc
 */


void FUN_01e21adc(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x138) = *param_2;
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  if (*(long *)(param_1 + 0x130) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x130) + 0xa4) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(*(long *)(param_1 + 0x130) + 0xa8) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(*(long *)(param_1 + 0x130) + 0xa0) = *(undefined4 *)(param_1 + 0x140);
  }
  return;
}


