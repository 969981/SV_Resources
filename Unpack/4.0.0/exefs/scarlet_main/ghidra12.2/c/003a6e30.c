/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a6e30; name: FUN_003a6e30
 */


undefined8 FUN_003a6e30(long param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x5d0) + 0x23c);
    if ((uVar4 == 0) &&
       ((*(long *)(param_1 + 0x5d8) == 0 ||
        (uVar4 = *(uint *)(*(long *)(param_1 + 0x5d8) + 0x23c), uVar4 == 0)))) {
      FUN_003c3950(param_1,0x50,0x214,0x44,"external/openssl/ssl/record/ssl3_record.c",0x76);
      return 0;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x192c);
    if ((*(int *)(param_1 + 0x7d8) == 2) &&
       (uVar2 = *(uint *)(*(long *)(param_1 + 0x5d0) + 0x23c), uVar2 <= uVar4)) {
      uVar4 = uVar2;
    }
    if (uVar4 == 0) {
      uVar3 = 10;
      if (param_4 != 0) {
        uVar3 = 0x50;
      }
      FUN_003c3950(param_1,uVar3,0x214,0xa4,"external/openssl/ssl/record/ssl3_record.c",0x86);
      return 0;
    }
  }
  uVar1 = (ulong)*(uint *)(param_1 + 0x1930) + param_2;
  if (uVar1 <= uVar4 + param_3) {
    *(int *)(param_1 + 0x1930) = (int)uVar1;
    return 1;
  }
  uVar3 = 10;
  if (param_4 != 0) {
    uVar3 = 0x50;
  }
  FUN_003c3950(param_1,uVar3,0x214,0xa4,"external/openssl/ssl/record/ssl3_record.c",0x8f);
  return 0;
}


