/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f6490; name: FUN_003f6490
 */


undefined8 FUN_003f6490(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = FUN_004513d0(&LAB_003f64d0,&LAB_003f6500);
      *(long *)(param_1 + 0x10) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


