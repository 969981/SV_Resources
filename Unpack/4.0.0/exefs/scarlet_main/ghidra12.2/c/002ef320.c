/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ef320; name: FUN_002ef320
 */


void FUN_002ef320(undefined8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  long local_38;
  
  local_38 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = "invalid";
  param_1[2] = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    pcVar3 = (char *)FUN_002f9d00(param_2,&DAT_03c8f563,&local_38);
    if (local_38 != 0) {
      FUN_00352b40("JSON key parsing",local_38,
                   "external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                   ,0x55);
    }
    if ((pcVar3 != (char *)0x0) && (iVar1 = strcmp(pcVar3,"service_account"), iVar1 == 0)) {
      *param_1 = "service_account";
      uVar4 = FUN_002f9fe0(param_2,"private_key_id",param_1 + 1);
      if (((uVar4 & 1) != 0) &&
         ((uVar4 = FUN_002f9fe0(param_2,"client_id",param_1 + 2), (uVar4 & 1) != 0 &&
          (uVar4 = FUN_002f9fe0(param_2,"client_email",param_1 + 3), (uVar4 & 1) != 0)))) {
        pcVar3 = (char *)FUN_002f9d00(param_2,"private_key",&local_38);
        if (local_38 != 0) {
          FUN_00352b40("JSON key parsing",local_38,
                       "external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                       ,0x65);
        }
        if (pcVar3 != (char *)0x0) {
          FUN_003eaa20();
          lVar5 = FUN_003e8a30();
          uVar2 = FUN_003e9110(lVar5,pcVar3);
          if ((-1 < (int)uVar2) && (sVar6 = strlen(pcVar3), sVar6 == uVar2)) {
            lVar7 = FUN_0045d350(lVar5,0,0,&DAT_03c886bc);
            if (lVar7 != 0) {
              uVar2 = 1;
            }
            param_1[4] = lVar7;
          }
          if (lVar5 != 0) {
            FUN_003e8b90(lVar5);
          }
          if (uVar2 != 0) {
            return;
          }
        }
      }
    }
  }
  *param_1 = "invalid";
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_0046a210();
    param_1[4] = 0;
  }
  return;
}


