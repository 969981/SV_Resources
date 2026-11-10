/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040bf80; name: FUN_0040bf80
 */


undefined8 FUN_0040bf80(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if (((param_1 == 0) || (*(long **)(param_1 + 0x18) == (long *)0x0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    uVar1 = 0x43;
    uVar2 = 0x103;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x18) + 0x160);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040bfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar1 = 0x42;
    uVar2 = 0x108;
  }
  FUN_004806c0(0x10,0xb1,uVar1,"external/openssl/crypto/ec/ec_key.c",uVar2);
  return 0;
}


