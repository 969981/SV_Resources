/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0230a4a8; name: FUN_0230a4a8
 */


undefined4 FUN_0230a4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_029cad10(param_1 + 0x1f8,param_3);
  uVar1 = 0;
  if ((uVar2 & 0xff00000000) != 0) {
    uVar1 = (undefined4)uVar2;
  }
  return uVar1;
}


