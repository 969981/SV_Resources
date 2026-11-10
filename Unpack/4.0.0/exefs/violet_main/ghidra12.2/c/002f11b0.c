/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f11b0; name: FUN_002f11b0
 */


void FUN_002f11b0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  long local_38;
  
  local_38 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = "invalid";
  param_1[1] = 0;
  if (*param_2 == 5) {
    __s1 = (char *)FUN_002f9d00(param_2,&DAT_03c8f563,&local_38);
    if (local_38 != 0) {
      FUN_00352b40("Parsing refresh token",local_38,
                   "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                   ,0x4a);
    }
    if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,"authorized_user"), iVar1 == 0)) {
      *param_1 = "authorized_user";
      uVar2 = FUN_002f9fe0(param_2,"client_secret",param_1 + 2);
      if (((uVar2 & 1) != 0) &&
         ((uVar2 = FUN_002f9fe0(param_2,"client_id",param_1 + 1), (uVar2 & 1) != 0 &&
          (uVar2 = FUN_002f9fe0(param_2,"refresh_token",param_1 + 3), (uVar2 & 1) != 0)))) {
        return;
      }
    }
  }
  *param_1 = "invalid";
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
    param_1[3] = 0;
  }
  return;
}


