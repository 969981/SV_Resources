/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ccbe0; name: FUN_001ccbe0
 */


undefined8 FUN_001ccbe0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 local_f0 [128];
  
  lVar1 = FUN_001ce584(param_2,local_f0 + 0x80);
  if (lVar1 != 0) {
    lVar2 = FUN_001e03d4(*param_1,lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      return 0;
    }
    FUN_001ec308(lVar1);
  }
  return 0x1b;
}


