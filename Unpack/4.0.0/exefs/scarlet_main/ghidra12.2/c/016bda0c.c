/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bda0c; name: FUN_016bda0c
 */


bool FUN_016bda0c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = FUN_016be460();
  if (lVar1 == 0) {
    FUN_016bdbf0(param_1,param_2);
  }
  return lVar1 == 0;
}


