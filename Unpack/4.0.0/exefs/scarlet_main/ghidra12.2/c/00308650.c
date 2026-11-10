/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00308650; name: FUN_00308650
 */


void FUN_00308650(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auStack_60 [32];
  undefined8 *local_40 [4];
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0xef0);
  *(int *)(param_1 + 0xef0) = iVar1 + 1;
  if (*(int *)(param_1 + 0xe4c) <= iVar1 && *(int *)(param_1 + 0xe4c) != 0) {
    FUN_003673f0(auStack_60,"too_many_pings");
    uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x6fc,auStack_60,0,0);
    uVar6 = FUN_00351770(uVar5,7,0xb);
    *(undefined4 *)(param_1 + 0xd88) = 1;
    FUN_00375900(uVar6,0x7fffffffffffffff,0,local_40,&local_14,0);
    uVar2 = *(undefined4 *)(param_1 + 0xe08);
    if ((local_40[0] != (undefined8 *)0x0) && (plVar7 = (long *)*local_40[0], plVar7 != (long *)0x0)
       ) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0030ff20(uVar2,local_14,local_40,param_1 + 0xc50);
    if (*(int *)(param_1 + 0x38) == 1) {
      *(undefined4 *)(param_1 + 0x38) = 2;
    }
    else if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      plVar7 = (long *)(param_1 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined1 **)(param_1 + 0xd0) = &LAB_003080d0;
      *(long *)(param_1 + 0xd8) = param_1;
      thunk_FUN_00350da0(*(undefined8 *)(param_1 + 0x28),param_1 + 200,0);
    }
    if (4 < uVar6) {
      FUN_00350fd0(uVar6);
    }
    FUN_003673f0(local_40,"Too many pings");
    uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x701,local_40,0,0);
    uVar5 = FUN_00351770(uVar5,3,0xe);
    FUN_003087d0(param_1,uVar5);
  }
  return;
}


