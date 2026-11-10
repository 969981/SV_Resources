/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040c480; name: FUN_0040c480
 */


undefined8 FUN_0040c480(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if ((*(long **)(param_1 + 0x18) != (long *)0x0) &&
     (lVar2 = **(long **)(param_1 + 0x18), lVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x148);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040c4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_004806c0(0x10,0xff,0x42,"external/openssl/crypto/ec/ec_key.c",0x286);
  }
  return 0;
}


