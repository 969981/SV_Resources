/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00464c70; name: FUN_00464c70
 */


undefined8 * FUN_00464c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00452ce0(0x40,"external/openssl/crypto/rand/rand_lib.c",0x1e3);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004806c0(0x24,0x7c,0x41,"external/openssl/crypto/rand/rand_lib.c",0x1e6);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 2) = 1;
  puVar1[3] = param_2;
  puVar1[4] = param_2;
  puVar1[5] = param_2;
  puVar1[6] = param_3;
  return puVar1;
}


