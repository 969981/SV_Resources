/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003702e0; name: FUN_003702e0
 */


void FUN_003702e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_40 [32];
  
  lVar4 = FUN_0037b7c0(0);
  FUN_003673f0(auStack_40,"Channel Destroyed");
  uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x215,
                       auStack_40,0,0);
  plVar1 = (long *)(param_1 + 0x78);
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  plVar6 = (long *)FUN_00344390(plVar1,0);
  (**(code **)(*plVar6 + 8))(plVar6,lVar4);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_0037af30(plVar1);
    return;
  }
  return;
}


