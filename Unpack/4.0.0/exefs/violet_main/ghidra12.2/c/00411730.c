/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00411730; name: FUN_00411730
 */


undefined8 FUN_00411730(void)

{
  undefined8 uVar1;
  long *in_x4;
  
  if (*(code **)(*in_x4 + 0x60) == (code *)0x0) {
    FUN_004806c0(0x10,0xfb,0x98,"external/openssl/crypto/ec/ecdsa_sign.c",0x19);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00411744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*in_x4 + 0x60))();
  return uVar1;
}


