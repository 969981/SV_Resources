/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f4be0; name: FUN_003f4be0
 */


undefined8 FUN_003f4be0(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (long *)0x0) {
    FUN_004806c0(0xe,0x71,0x69,"external/openssl/crypto/conf/conf_lib.c",0xd2);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x003f4bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


