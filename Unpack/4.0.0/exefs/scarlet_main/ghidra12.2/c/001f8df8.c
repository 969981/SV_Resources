/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f8df8; name: FUN_001f8df8
 */


undefined8 FUN_001f8df8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0x100;
  lVar1 = FUN_001f45d4(param_2,0x100,8);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xfffffc7b;
  }
  else {
    uVar2 = 0;
    param_1[2] = 0;
  }
  return uVar2;
}


