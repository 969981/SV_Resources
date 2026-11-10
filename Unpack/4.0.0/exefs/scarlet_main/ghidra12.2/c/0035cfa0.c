/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035cfa0; name: FUN_0035cfa0
 */


void FUN_0035cfa0(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_40 [32];
  
  plVar1 = (long *)((long)param_1 + 0x28);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
  FUN_00355020(*(undefined8 *)((long)param_1 + 8),*(undefined8 *)((long)param_1 + 0x198),
               *(undefined8 *)((long)param_1 + 0x1a0),"tcp_unref_orphan");
  FUN_00368470((long)param_1 + 0x40);
  FUN_00359930(*(undefined8 *)((long)param_1 + 0x210));
  free(*(void **)((long)param_1 + 0x208));
  lVar5 = (long)param_1 + 0x280;
  FUN_0038db40(lVar5);
  FUN_003673f0(auStack_40,"endpoint destroyed");
  uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x27a,
                       auStack_40,0,0);
  if (4 < uVar4) {
    FUN_00350fd0();
  }
  FUN_0038db60(lVar5);
  *(undefined8 *)((long)param_1 + 0x2a0) = 0;
  FUN_0038db20(lVar5);
  FUN_0035e970((long)param_1 + 0x2b8);
  free(param_1);
  return;
}


