/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b6af0; name: FUN_003b6af0
 */


void FUN_003b6af0(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    return;
  }
  lVar1 = *(long *)(param_2 + 0x550);
  *(long *)(param_1 + 0x28) = param_2 + 0x694;
  *(long *)(param_1 + 0x88) = param_2 + 0x69c;
  *(long *)(param_1 + 0x90) = param_2 + 0x6a0;
  *(long *)(param_1 + 0x78) = lVar1 + 0x1c;
  *(long *)(param_1 + 0x80) = param_2 + 0x620;
  return;
}


