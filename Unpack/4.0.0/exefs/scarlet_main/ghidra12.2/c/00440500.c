/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00440500; name: FUN_00440500
 */


undefined8 FUN_00440500(long *param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_3);
  if (sVar1 >> 0x1f == 0) {
                    /* WARNING: Could not recover jumptable at 0x00440554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,sVar1,param_3);
    return uVar2;
  }
  return 0xffffffff;
}


