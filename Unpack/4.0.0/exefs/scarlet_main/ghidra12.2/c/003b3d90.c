/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b3d90; name: FUN_003b3d90
 */


int FUN_003b3d90(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_8 [2];
  
  if (param_3 < 0) {
    FUN_004806c0(0x14,0xd0,0x10f,"external/openssl/ssl/ssl_lib.c",0x807);
    return -1;
  }
  iVar1 = FUN_003b3c10(param_1,param_2,param_3,local_8);
  if (iVar1 < 1) {
    local_8[0] = iVar1;
  }
  return local_8[0];
}


