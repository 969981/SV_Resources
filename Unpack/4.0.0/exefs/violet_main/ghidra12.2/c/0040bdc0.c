/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040bdc0; name: FUN_0040bdc0
 */


undefined8 FUN_0040bdc0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_1 == (long *)0x0) || (param_1[3] == 0)) {
    uVar1 = 0x43;
    uVar2 = 0xb9;
  }
  else {
    if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040bde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x40))();
      return uVar1;
    }
    uVar1 = 0x98;
    uVar2 = 0xbe;
  }
  FUN_004806c0(0x10,0xb3,uVar1,"external/openssl/crypto/ec/ec_key.c",uVar2);
  return 0;
}


