/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cebb0; name: FUN_003cebb0
 */


undefined8 FUN_003cebb0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x8b8) == 0) {
    uVar2 = 0x9a0;
  }
  else {
    iVar1 = FUN_0042bfb0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8));
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x9a7;
  }
  FUN_003c3950(param_1,0x50,0x269,0x44,"external/openssl/ssl/statem/statem_lib.c",uVar2);
  return 0;
}


