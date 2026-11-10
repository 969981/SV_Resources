/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040d6a0; name: FUN_0040d6a0
 */


undefined8 FUN_0040d6a0(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    FUN_004806c0(0x10,0x124,0x42,"external/openssl/crypto/ec/ec_lib.c",0x200);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0040d6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}


