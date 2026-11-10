/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021e9a4; name: FUN_0021e9a4
 */


void FUN_0021e9a4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_047cbab8 + 0x10);
  param_1[1] = *param_2;
  lVar5 = param_2[1];
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = PTR_DAT_047cbe68;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[4] = (long)param_1;
  param_1[5] = (long)"/nn.npln.auth.v1.Auth/CreateUser";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = lVar5;
  param_1[8] = (long)"/nn.npln.auth.v1.Auth/IssueToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = lVar5;
  param_1[0xb] = (long)"/nn.npln.auth.v1.Auth/RefreshToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = lVar5;
  param_1[0xe] = (long)"/nn.npln.auth.v1.Auth/IssuePrearrangedUserToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = lVar5;
  param_1[0x11] = (long)"/nn.npln.auth.v1.Auth/IssueAnonymousUserToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = lVar5;
  param_1[0x14] = (long)"/nn.npln.auth.v1.Auth/RefreshAnonymousUserToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = lVar5;
  param_1[0x17] = (long)"/nn.npln.auth.v1.Auth/ListUsers";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = lVar5;
  param_1[0x1a] = (long)"/nn.npln.auth.v1.Auth/DeleteUser";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x1c] = lVar5;
  return;
}


