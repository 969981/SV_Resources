/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00724a6c; name: FUN_00724a6c
 */


void FUN_00724a6c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_047cfdf0 + 0x10);
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
  puVar4 = PTR_DAT_047d0380;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[4] = (long)param_1;
  param_1[5] = (long)"/nn.npln.timber.v1.CompetitionService/GetCompetition";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = lVar5;
  param_1[8] = (long)"/nn.npln.timber.v1.CompetitionService/CreateCompetition";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = lVar5;
  param_1[0xb] = (long)"/nn.npln.timber.v1.CompetitionService/UpdateCompetition";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = lVar5;
  param_1[0xe] = (long)"/nn.npln.timber.v1.CompetitionService/DeleteCompetition";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = lVar5;
  param_1[0x11] = (long)"/nn.npln.timber.v1.CompetitionService/SearchCompetitions";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = lVar5;
  param_1[0x14] = (long)"/nn.npln.timber.v1.CompetitionService/HostCompetition";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = lVar5;
  param_1[0x17] = (long)"/nn.npln.timber.v1.CompetitionService/FinalizeCompetition";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = lVar5;
  param_1[0x1a] = (long)"/nn.npln.timber.v1.CompetitionService/GetCompetitionAlias";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = lVar5;
  param_1[0x1d] = (long)"/nn.npln.timber.v1.CompetitionService/GetCompetitionInvitation";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = lVar5;
  param_1[0x20] = (long)"/nn.npln.timber.v1.CompetitionService/CreateCompetitionInvitation";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = lVar5;
  param_1[0x23] = (long)"/nn.npln.timber.v1.CompetitionService/ListCompetitionInvitations";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x25] = lVar5;
  param_1[0x26] = (long)"/nn.npln.timber.v1.CompetitionService/DeleteCompetitionInvitation";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = lVar5;
  param_1[0x29] = (long)"/nn.npln.timber.v1.CompetitionService/BatchCreateCompetitionInvitations";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = lVar5;
  param_1[0x2c] = (long)"/nn.npln.timber.v1.CompetitionService/GetCompetitionParticipant";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = lVar5;
  param_1[0x2f] = (long)"/nn.npln.timber.v1.CompetitionService/CreateCompetitionParticipant";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x31] = lVar5;
  param_1[0x32] = (long)"/nn.npln.timber.v1.CompetitionService/ActivateCompetitionParticipant";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x34] = lVar5;
  param_1[0x35] = (long)"/nn.npln.timber.v1.CompetitionService/DeactivateCompetitionParticipant";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x37] = lVar5;
  param_1[0x38] = (long)"/nn.npln.timber.v1.CompetitionService/CancelCompetitionParticipant";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = lVar5;
  param_1[0x3b] = (long)"/nn.npln.timber.v1.CompetitionService/GetCompetitionNotification";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = lVar5;
  param_1[0x3e] = (long)"/nn.npln.timber.v1.CompetitionService/UpdateCompetitionNotification";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x40] = lVar5;
  param_1[0x41] = (long)"/nn.npln.timber.v1.CompetitionService/ReceiveCompetitionNotification";
  *(undefined4 *)(param_1 + 0x42) = 2;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x43] = lVar5;
  param_1[0x44] = (long)"/nn.npln.timber.v1.CompetitionService/InvalidateCompetitionNotification";
  *(undefined4 *)(param_1 + 0x45) = 0;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x46] = lVar5;
  param_1[0x47] = (long)"/nn.npln.timber.v1.CompetitionService/GetCompetitionUser";
  *(undefined4 *)(param_1 + 0x48) = 0;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x49] = lVar5;
  param_1[0x4a] = (long)"/nn.npln.timber.v1.CompetitionService/CreateCompetitionUser";
  *(undefined4 *)(param_1 + 0x4b) = 0;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x4c] = lVar5;
  param_1[0x4d] = (long)"/nn.npln.timber.v1.CompetitionService/UpdateCompetitionUser";
  *(undefined4 *)(param_1 + 0x4e) = 0;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x4f] = lVar5;
  param_1[0x50] = (long)"/nn.npln.timber.v1.CompetitionService/GetCompetitionUserBattleRecord";
  *(undefined4 *)(param_1 + 0x51) = 0;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x52] = lVar5;
  param_1[0x53] = (long)"/nn.npln.timber.v1.CompetitionService/CreateCompetitionUserBattleRecord";
  *(undefined4 *)(param_1 + 0x54) = 0;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x55] = lVar5;
  param_1[0x56] = (long)"/nn.npln.timber.v1.CompetitionService/UpdateCompetitionUserBattleRecord";
  *(undefined4 *)(param_1 + 0x57) = 0;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x58] = lVar5;
  param_1[0x59] = (long)"/nn.npln.timber.v1.CompetitionService/FinishCompetitionUserBattleRecord";
  *(undefined4 *)(param_1 + 0x5a) = 0;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x5b] = lVar5;
  return;
}


