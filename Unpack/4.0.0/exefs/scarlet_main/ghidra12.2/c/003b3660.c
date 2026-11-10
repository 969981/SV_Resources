/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b3660; name: FUN_003b3660
 */


undefined8 FUN_003b3660(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(long *)**(undefined8 **)(param_1 + 0x140) != 0) {
      if (((long *)**(undefined8 **)(param_1 + 0x140))[1] == 0) {
        FUN_004806c0(0x14,0xa8,0xbe,"external/openssl/ssl/ssl_lib.c",0x682);
        return 0;
      }
      uVar1 = FUN_00483ca0();
      return uVar1;
    }
  }
  FUN_004806c0(0x14,0xa8,0xb1,"external/openssl/ssl/ssl_lib.c",0x67e);
  return 0;
}


