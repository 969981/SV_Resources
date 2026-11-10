/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043f8a0; name: FUN_0043f8a0
 */


undefined8 FUN_0043f8a0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) || (*(long *)(lVar2 + 0xb8) == 0)
     ) {
    FUN_004806c0(6,0x9a,0x96,"external/openssl/crypto/evp/pmeth_fn.c",0xd1);
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 4) = 0x400;
  if (*(code **)(lVar2 + 0xb0) == (code *)0x0) {
    return 1;
  }
  uVar1 = (**(code **)(lVar2 + 0xb0))(param_1);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 4) = 0;
    return uVar1;
  }
  return uVar1;
}


