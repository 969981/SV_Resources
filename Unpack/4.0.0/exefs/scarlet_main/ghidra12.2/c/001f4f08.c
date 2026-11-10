/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4f08; name: FUN_001f4f08
 */


undefined8 FUN_001f4f08(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN_001f4614();
  uVar1 = FUN_001ed9b4(*(undefined8 *)(lVar2 + 0x20),param_2 + 0x10,8);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  return 0;
}


