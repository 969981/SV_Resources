/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0065c2b0; name: FUN_0065c2b0
 */


void FUN_0065c2b0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x88);
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_047ce988 + 0x10);
    plVar5[1] = *param_2;
    lVar6 = param_2[1];
    plVar5[2] = lVar6;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar4 = PTR_DAT_047cf208;
    *(undefined4 *)(plVar5 + 6) = 0;
    plVar5[3] = (long)(puVar4 + 0x10);
    plVar5[4] = (long)plVar5;
    plVar5[5] = (long)"/nn.npln.matchmaking.v1.Matchmaker/CreateMatchmakingTicket";
    lVar6 = (**(code **)(*(long *)*param_2 + 0x28))();
    plVar5[7] = lVar6;
    plVar5[8] = (long)"/nn.npln.matchmaking.v1.Matchmaker/TrackMatchmakingTicket";
    *(undefined4 *)(plVar5 + 9) = 2;
    lVar6 = (**(code **)(*(long *)*param_2 + 0x28))();
    *(undefined4 *)(plVar5 + 0xc) = 0;
    plVar5[10] = lVar6;
    plVar5[0xb] = (long)"/nn.npln.matchmaking.v1.Matchmaker/CancelMatchmakingTicket";
    lVar6 = (**(code **)(*(long *)*param_2 + 0x28))();
    *(undefined4 *)(plVar5 + 0xf) = 0;
    plVar5[0xd] = lVar6;
    plVar5[0xe] = (long)"/nn.npln.matchmaking.v1.Matchmaker/CreateAcceptance";
    lVar6 = (**(code **)(*(long *)*param_2 + 0x28))();
    plVar5[0x10] = lVar6;
  }
  *param_1 = plVar5;
  return;
}


