/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2c60; name: FUN_003a2c60
 */


undefined8 * FUN_003a2c60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00452c30(0x18,"external/openssl/ssl/pqueue.c",0x14);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004806c0(0x14,0x270,0x41,"external/openssl/ssl/pqueue.c",0x17);
    return (undefined8 *)0x0;
  }
  *puVar1 = *param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return puVar1;
}


