/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040d720; name: FUN_0040d720
 */


undefined8 FUN_0040d720(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x38) == (code *)0x0) {
    FUN_004806c0(0x10,0xad,0x42,"external/openssl/crypto/ec/ec_lib.c",0x22f);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0040d734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x38))();
  return uVar1;
}


