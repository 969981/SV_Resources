/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011ccd80; name: FUN_011ccd80
 */


bool FUN_011ccd80(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x138);
  if (uVar1 != 1) {
    if (uVar1 != 0) goto LAB_011ccda8;
    *(undefined4 *)(param_1 + 0x138) = 1;
  }
  FUN_011ccdd0(param_1);
  uVar1 = *(uint *)(param_1 + 0x138);
LAB_011ccda8:
  return (uVar1 & 0xfffffffe) == 2;
}


