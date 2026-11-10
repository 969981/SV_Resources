/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005866e0; name: FUN_005866e0
 */


void FUN_005866e0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_047cdeb0 + 0x10);
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
  puVar4 = PTR_DAT_047ce3b8;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[4] = (long)param_1;
  param_1[5] = (long)"/nn.npln.gamesync.v1.Gamesync/IssueToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = lVar5;
  param_1[8] = (long)"/nn.npln.gamesync.v1.Gamesync/RefreshToken";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = lVar5;
  param_1[0xb] = (long)"/nn.npln.gamesync.v1.Gamesync/GetDocument";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = lVar5;
  param_1[0xe] = (long)"/nn.npln.gamesync.v1.Gamesync/ReadDocuments";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = lVar5;
  param_1[0x11] = (long)"/nn.npln.gamesync.v1.Gamesync/ListDocuments";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = lVar5;
  param_1[0x14] = (long)"/nn.npln.gamesync.v1.Gamesync/QueryCollectionIds";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = lVar5;
  param_1[0x17] = (long)"/nn.npln.gamesync.v1.Gamesync/WriteDocuments";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = lVar5;
  param_1[0x1a] = (long)"/nn.npln.gamesync.v1.Gamesync/BeginTransaction";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = lVar5;
  param_1[0x1d] = (long)"/nn.npln.gamesync.v1.Gamesync/CommitTransaction";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = lVar5;
  param_1[0x20] = (long)"/nn.npln.gamesync.v1.Gamesync/RollbackTransaction";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x22] = lVar5;
  param_1[0x23] = (long)"/nn.npln.gamesync.v1.Gamesync/KeepUserSession";
  *(undefined4 *)(param_1 + 0x24) = 3;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x25] = lVar5;
  return;
}


