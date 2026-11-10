/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f8f38; name: FUN_021f8f38
 */


undefined8 FUN_021f8f38(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x25) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0x26) {
      return 0;
    }
    uVar1 = 1;
  }
  uVar1 = FUN_021f8b88(*(undefined8 *)(param_1 + 0x70),uVar1);
  return uVar1;
}


