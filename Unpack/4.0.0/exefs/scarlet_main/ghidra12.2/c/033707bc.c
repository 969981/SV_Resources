/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033707bc; name: FUN_033707bc
 */


void FUN_033707bc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_047ae1c8;
  puVar1 = PTR_DAT_047d1a08;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    FUN_0337068c(lVar2);
    (**(code **)(puVar1 + 8))(0,lVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x03370824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,param_1,0);
  return;
}


