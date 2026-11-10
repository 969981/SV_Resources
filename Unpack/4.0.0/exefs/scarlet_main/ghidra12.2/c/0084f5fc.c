/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084f5fc; name: FUN_0084f5fc
 */


void FUN_0084f5fc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047d1b98 + 0x10);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  param_1[5] = 0;
  puVar1 = PTR_DAT_047d1a08;
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    FUN_0085eb5c(lVar2);
    (**(code **)(puVar1 + 8))(0,lVar2,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0084f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,param_1,0);
  return;
}


