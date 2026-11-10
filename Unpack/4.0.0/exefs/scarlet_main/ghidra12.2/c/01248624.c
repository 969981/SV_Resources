/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01248624; name: FUN_01248624
 */


void FUN_01248624(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = FUN_011e2da8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar2);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x96,uVar1,uVar2);
  return;
}


