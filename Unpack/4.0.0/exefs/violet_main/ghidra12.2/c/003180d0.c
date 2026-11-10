/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003180d0; name: FUN_003180d0
 */


void FUN_003180d0(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined1 auStack_40 [32];
  
  FUN_003673f0(auStack_40,"received initial metadata size exceeds limit");
  uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                       ,0x1d2,auStack_40,0,0);
  uVar5 = FUN_00351770(uVar5,3,8);
  FUN_00308f80(param_1,param_2,uVar5);
  if (*(undefined **)(param_1 + 0x1158) == PTR_LAB_047ccb60) {
    *(undefined **)(param_1 + 0x1158) = PTR_LAB_047ccb60;
    *(undefined1 **)(param_1 + 0xef8) = &LAB_003182d0;
    *(long *)(param_1 + 0x1148) = param_1 + 0xef8;
    *(undefined8 *)(param_1 + 0xf00) = 0;
    *(bool *)(param_1 + 0xfc5) = *(int *)(param_1 + 0x1138) != 0;
    uVar6 = 0;
    if (*(int *)(param_1 + 0x1138) != 0) {
      uVar6 = *(undefined1 *)(param_1 + 0x1136);
    }
    *(undefined1 *)(param_1 + 0xfc6) = uVar6;
  }
  else {
    *(undefined1 **)(param_1 + 0x1158) = &LAB_00318320;
  }
  uVar2 = (uint)param_3 & 3;
  *(undefined1 *)(param_2 + 0x1b3) = 1;
  if (1 < uVar2) {
    param_3 = param_3 & 0xfffffffffffffffc;
    plVar1 = (long *)(param_3 + 0x40);
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      FUN_00376de0(uVar2,param_3,*(undefined4 *)(param_3 + 0x48));
      return;
    }
  }
  return;
}


