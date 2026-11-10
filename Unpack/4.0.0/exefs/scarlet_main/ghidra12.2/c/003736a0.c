/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003736a0; name: FUN_003736a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003736a0(long param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_20 = DAT_03cd77e0;
  uStack_28 = _UNK_03cd77d8;
  local_30 = _DAT_03cd77d0;
  (*(code *)PTR_FUN_04496940)(&PTR_s_Default_Factory_04496928,&local_30);
  return;
}


