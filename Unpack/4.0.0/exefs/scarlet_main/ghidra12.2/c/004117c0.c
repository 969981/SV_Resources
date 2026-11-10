/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004117c0; name: FUN_004117c0
 */


undefined8 FUN_004117c0(void)

{
  undefined8 uVar1;
  long *in_x3;
  
  if (*(code **)(*in_x3 + 0x70) == (code *)0x0) {
    FUN_004806c0(0x10,0xfc,0x98,"external/openssl/crypto/ec/ecdsa_vrf.c",0x19);
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x004117d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*in_x3 + 0x70))();
  return uVar1;
}


