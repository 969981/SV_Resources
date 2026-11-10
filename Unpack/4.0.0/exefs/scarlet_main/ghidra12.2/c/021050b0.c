/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021050b0; name: FUN_021050b0
 */


undefined8 FUN_021050b0(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  local_8 = 0x64664e7ef3de48ea;
  uVar1 = FUN_00f724ec(param_1,&local_8);
  uVar2 = 0;
  if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0x170) = 0x9c000000ff;
  }
  return uVar2;
}


