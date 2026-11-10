/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f61f4; name: FUN_002f61f4
 */


void FUN_002f61f4(long *param_1)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  char *local_38;
  char *local_28;
  
  FUN_00367020();
  uVar4 = FUN_002f6cd0();
  FUN_002f6cc0(&local_28);
                    /* try { // try from 002f6228 to 002f6253 has its CatchHandler @ 002f6380 */
  if ((*local_28 != '\0') && (lVar5 = FUN_00357e00(local_28,1,param_1), lVar5 != 0)) {
    FUN_00352b40("load_file",lVar5,
                 "external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                 ,0x21e);
  }
  lVar5 = *param_1;
  uVar7 = param_1[1];
  uVar8 = uVar7 & 0xff;
  uVar1 = uVar8;
  if (lVar5 != 0) {
    uVar1 = uVar7;
  }
  iVar3 = 2;
  if ((DAT_047ef268 != (code *)0x0) && (uVar1 == 0)) {
    local_38 = (char *)0x0;
                    /* try { // try from 002f627c to 002f6283 has its CatchHandler @ 002f637c */
    iVar3 = (*DAT_047ef268)(&local_38);
    pcVar2 = local_38;
    if (iVar3 == 0) {
      if (local_38 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002f6368 to 002f636b has its CatchHandler @ 002f637c */
        abort();
      }
      sVar6 = strlen(local_38);
                    /* try { // try from 002f62a0 to 002f62ab has its CatchHandler @ 002f636c */
      FUN_003676d0(&local_58,pcVar2,sVar6 + 1);
      param_1[1] = lStack_50;
      *param_1 = local_58;
      param_1[3] = lStack_40;
      param_1[2] = local_48;
    }
                    /* try { // try from 002f62bc to 002f62bf has its CatchHandler @ 002f637c */
    free(local_38);
    lVar5 = *param_1;
    uVar7 = param_1[1];
    uVar8 = uVar7 & 0xff;
  }
  if (lVar5 != 0) {
    uVar8 = uVar7;
  }
  if ((uVar4 & 1) == 0 && uVar8 == 0) {
                    /* try { // try from 002f62e0 to 002f62e7 has its CatchHandler @ 002f6370 */
    FUN_002f6a90(&local_58);
    param_1[1] = lStack_50;
    *param_1 = local_58;
    param_1[3] = lStack_40;
    param_1[2] = local_48;
    lVar5 = *param_1;
    uVar7 = param_1[1];
  }
  uVar4 = uVar7 & 0xff;
  if (lVar5 != 0) {
    uVar4 = uVar7;
  }
                    /* try { // try from 002f6310 to 002f6343 has its CatchHandler @ 002f6378 */
  if (((iVar3 != 1) && (uVar4 == 0)) &&
     (lVar5 = FUN_00357e00("/usr/share/grpc/roots.pem",1,param_1), lVar5 != 0)) {
    FUN_00352b40("load_file",lVar5,
                 "external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                 ,0x235);
  }
  pcVar2 = local_28;
  local_28 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
                    /* try { // try from 002f6350 to 002f6353 has its CatchHandler @ 002f6374 */
    free(pcVar2);
  }
  return;
}


