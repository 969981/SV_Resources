/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040d0a0; name: FUN_0040d0a0
 */


long FUN_0040d0a0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = FUN_0040c900(*param_1);
    if ((lVar2 == 0) || (iVar1 = FUN_0040cc50(lVar2,param_1), iVar1 != 0)) {
      return lVar2;
    }
    FUN_0040ca30(lVar2);
  }
  return 0;
}


