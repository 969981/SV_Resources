/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014a2304; name: FUN_014a2304
 */


void FUN_014a2304(long param_1,uint param_2)

{
  undefined1 uVar1;
  
  *(uint *)(param_1 + 0x440) = param_2;
  if (param_2 < 2) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    param_2 = 1;
    uVar1 = 1;
  }
  *(uint *)(*(long *)(param_1 + 0x4a8) + 0x14) = param_2;
  *(uint *)(*(long *)(param_1 + 0x4a8) + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x450) = uVar1;
  return;
}


