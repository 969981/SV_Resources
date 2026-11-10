/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e68f0; name: FUN_003e68f0
 */


undefined4 FUN_003e68f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 auStack_83c [4];
  long local_838 [2];
  undefined1 *local_828;
  undefined1 auStack_820 [2048];
  undefined4 local_18 [2];
  
  local_828 = auStack_820;
  local_838[0] = 0;
  local_838[1] = 0x800;
  uStack_858 = param_3[1];
  local_860 = *param_3;
  uStack_848 = param_3[3];
  uStack_850 = param_3[2];
  iVar1 = FUN_003e69b0(&local_828,local_838,local_838 + 1,local_18,auStack_83c,param_2,&local_860);
  if (iVar1 == 0) {
    FUN_00452f80(local_838[0],"external/openssl/crypto/bio/b_print.c",0x37d);
    uVar2 = 0xffffffff;
  }
  else if (local_838[0] == 0) {
    uVar2 = FUN_003e8f00(param_1,auStack_820,local_18[0]);
  }
  else {
    uVar2 = FUN_003e8f00(param_1,local_838[0],local_18[0]);
    FUN_00452f80(local_838[0],"external/openssl/crypto/bio/b_print.c",0x382);
  }
  return uVar2;
}


