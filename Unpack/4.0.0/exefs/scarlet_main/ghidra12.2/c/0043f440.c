/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043f440; name: FUN_0043f440
 */


undefined8 FUN_0043f440(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004806c0(6,0x8e,0x96,"external/openssl/crypto/evp/pmeth_fn.c",0x5c);
    return 0xfffffffe;
  }
  if ((int)param_1[4] == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x0043f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_004806c0(6,0x8e,0x97,"external/openssl/crypto/evp/pmeth_fn.c",0x60);
  return 0xffffffff;
}


