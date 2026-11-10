/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347e3c4; name: FUN_0347e3c4
 */


void FUN_0347e3c4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = (long)&PTR_FUN_047c2648;
  FUN_034de290();
  while (puVar1 = PTR_DAT_047e70a0, plVar2 = (long *)param_1[3], plVar2 != (long *)0x0) {
    if (plVar2[3] == 0) {
      param_1[3] = 0;
    }
    else {
      param_1[3] = plVar2[3];
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


