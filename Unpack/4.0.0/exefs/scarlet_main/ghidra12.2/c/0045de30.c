/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045de30; name: FUN_0045de30
 */


int FUN_0045de30(undefined8 param_1,char *param_2,char *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  undefined8 uVar9;
  int local_64;
  
  lVar5 = FUN_004393d0();
  if (lVar5 == 0) {
    lVar8 = 0;
LAB_0045df5c:
    uVar9 = 0x41;
  }
  else {
    FUN_00439400(lVar5);
    sVar6 = strlen(param_2);
    iVar2 = FUN_003e8f00(param_1,"-----BEGIN ",0xb);
    if (iVar2 == 0xb) {
      iVar2 = FUN_003e8f00(param_1,param_2,sVar6 & 0xffffffff);
      if ((iVar2 != (int)sVar6) || (iVar2 = FUN_003e8f00(param_1,"-----\n",6), iVar2 != 6))
      goto LAB_0045df4c;
      sVar7 = strlen(param_3);
      if ((0 < (int)sVar7) &&
         ((iVar2 = FUN_003e8f00(param_1,param_3,sVar7 & 0xffffffff), iVar2 != (int)sVar7 ||
          (iVar2 = FUN_003e8f00(param_1,&DAT_03c67c74,1), iVar2 != 1)))) goto LAB_0045df4c;
      lVar8 = FUN_00452c30(0x2000,"external/openssl/crypto/pem/pem_lib.c",0x276);
      if (lVar8 == 0) goto LAB_0045df5c;
      if ((long)param_5 < 1) {
        iVar2 = 0;
      }
      else {
        iVar4 = 0;
        iVar2 = 0;
        do {
          uVar1 = param_5;
          if (0x13ff < (long)param_5) {
            uVar1 = 0x1400;
          }
          iVar3 = FUN_00439420(lVar5,lVar8,&local_64,param_4 + iVar4,uVar1 & 0xffffffff);
          if (iVar3 == 0) goto LAB_0045df50;
          if (local_64 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_003e8f00(param_1,lVar8);
            if (iVar3 != local_64) goto LAB_0045df50;
          }
          param_5 = param_5 - uVar1;
          iVar2 = iVar3 + iVar2;
          iVar4 = iVar4 + (int)uVar1;
        } while (0 < (long)param_5);
      }
      FUN_004397a0(lVar5,lVar8,&local_64);
      if ((((local_64 < 1) || (iVar4 = FUN_003e8f00(param_1,lVar8), iVar4 == local_64)) &&
          (iVar4 = FUN_003e8f00(param_1,"-----END ",9), iVar4 == 9)) &&
         (((iVar4 = FUN_003e8f00(param_1,param_2,sVar6 & 0xffffffff), iVar4 == (int)sVar6 &&
           (iVar4 = FUN_003e8f00(param_1,"-----\n",6), iVar4 == 6)) &&
          (local_64 = local_64 + iVar2, local_64 != 0)))) goto LAB_0045df7c;
    }
    else {
LAB_0045df4c:
      lVar8 = 0;
    }
LAB_0045df50:
    uVar9 = 7;
  }
  FUN_004806c0(9,0x72,uVar9,"external/openssl/crypto/pem/pem_lib.c",0x292);
  local_64 = 0;
LAB_0045df7c:
  FUN_004393f0(lVar5);
  FUN_00453260(lVar8,0x2000,"external/openssl/crypto/pem/pem_lib.c",0x294);
  return local_64;
}


