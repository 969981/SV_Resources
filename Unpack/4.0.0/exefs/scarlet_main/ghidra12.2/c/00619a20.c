/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00619a20; name: FUN_00619a20
 */


void FUN_00619a20(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_047ce9b0 + 0x10);
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
  puVar4 = PTR_DAT_047ceea0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[4] = (long)param_1;
  param_1[5] = (long)"/nn.npln.matchmaking.v1.GameSessionService/CreateGameSessionCreationTicket";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[7] = lVar5;
  param_1[8] = (long)"/nn.npln.matchmaking.v1.GameSessionService/TrackGameSessionCreationTicket";
  *(undefined4 *)(param_1 + 9) = 2;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = lVar5;
  param_1[0xb] = (long)"/nn.npln.matchmaking.v1.GameSessionService/CancelGameSessionCreationTicket";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = lVar5;
  param_1[0xe] = (long)"/nn.npln.matchmaking.v1.GameSessionService/GetGameSession";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = lVar5;
  param_1[0x11] = (long)"/nn.npln.matchmaking.v1.GameSessionService/BatchGetGameSessions";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = lVar5;
  param_1[0x14] = (long)"/nn.npln.matchmaking.v1.GameSessionService/QueryGameSessions";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = lVar5;
  param_1[0x17] = (long)"/nn.npln.matchmaking.v1.GameSessionService/JoinGameSession";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = lVar5;
  param_1[0x1a] = (long)"/nn.npln.matchmaking.v1.GameSessionService/SyncGameSession";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = lVar5;
  param_1[0x1d] = (long)"/nn.npln.matchmaking.v1.GameSessionService/ListUserSessions";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = lVar5;
  param_1[0x20] = (long)"/nn.npln.matchmaking.v1.GameSessionService/GetUserSession";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = lVar5;
  param_1[0x23] = (long)"/nn.npln.matchmaking.v1.GameSessionService/IssueMatchmakingIdToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x25] = lVar5;
  param_1[0x26] = (long)"/nn.npln.matchmaking.v1.GameSessionService/IssueUserDelegationToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = lVar5;
  param_1[0x29] = (long)"/nn.npln.matchmaking.v1.GameSessionService/CreateGameSessionShortAlias";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = lVar5;
  param_1[0x2c] = (long)"/nn.npln.matchmaking.v1.GameSessionService/GetGameSessionShortAlias";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = lVar5;
  param_1[0x2f] = (long)"/nn.npln.matchmaking.v1.GameSessionService/AllocateIceServerSet";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x31] = lVar5;
  param_1[0x32] = (long)"/nn.npln.matchmaking.v1.GameSessionService/ListLatencyMeasurementServers";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x34] = lVar5;
  return;
}


