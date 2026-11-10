/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00411770; name: FUN_00411770
 */


undefined8 FUN_00411770(void)

{
  undefined8 uVar1;
  long *in_x5;
  
  if (*(code **)(*in_x5 + 0x50) == (code *)0x0) {
    FUN_004806c0(0x10,0xfe,0x98,"external/openssl/crypto/ec/ecdsa_sign.c",0x29);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00411790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*in_x5 + 0x50))();
  return uVar1;
}


