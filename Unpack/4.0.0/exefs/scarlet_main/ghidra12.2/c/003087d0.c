/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003087d0; name: FUN_003087d0
 */


void FUN_003087d0(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong local_48;
  long lStack_40;
  undefined1 auStack_28 [8];
  
  uVar3 = param_2;
  if (4 < param_2) {
    uVar3 = FUN_00350fb0(param_2);
  }
  if (((*(char *)(param_1 + 0xc48) == '\0') && (uVar4 = FUN_00375b90(uVar3), (uVar4 & 1) == 0)) &&
     (uVar4 = FUN_00351f40(uVar3,7,auStack_28), (uVar4 & 1) == 0)) {
    uVar3 = FUN_00351770(uVar3,3,0xe);
  }
  local_48 = uVar3;
  lStack_40 = param_1;
  FUN_00319a10(param_1 + 0xa0,&LAB_0030be60,&local_48);
  if (uVar3 < 5) {
    if (4 < param_2) goto LAB_003088c0;
LAB_00308864:
    FUN_00306860(param_1);
    lVar7 = *(long *)(param_1 + 0x40);
  }
  else {
    FUN_00350fd0(uVar3);
    if (param_2 < 5) goto LAB_00308864;
LAB_003088c0:
    uVar5 = FUN_00350fb0(param_2,param_2);
    FUN_00306860(param_1,uVar5);
    lVar7 = *(long *)(param_1 + 0x40);
  }
  if (lVar7 != 0) {
    lVar7 = *(long *)(param_1 + 0x30);
    goto joined_r0x00308a44;
  }
  uVar3 = FUN_00375b90(param_2);
  if ((uVar3 & 1) == 0) {
    param_2 = FUN_00351770(param_2,3,0xe);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar7 = *(long *)(param_1 + 0x11c8);
    if (lVar7 == 0) {
      FUN_003673f0(&local_48,"Delayed close due to in-progress write");
      lVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x22d,&local_48,0,0);
      *(long *)(param_1 + 0x11c8) = lVar7;
    }
    uVar5 = FUN_00352130(lVar7,param_2);
    *(undefined8 *)(param_1 + 0x11c8) = uVar5;
    return;
  }
  if (param_2 == 0) goto LAB_00308a4c;
  uVar3 = param_2;
  if (4 < param_2) {
    uVar3 = FUN_00350fb0(param_2);
  }
  *(ulong *)(param_1 + 0x40) = uVar3;
  FUN_003752d8(param_1 + 0x288,4,"close_transport");
  if (*(char *)(param_1 + 0xea0) != '\0') {
    FUN_00360570(param_1 + 0xe70);
  }
  if (*(char *)(param_1 + 0x1228) != '\0') {
    FUN_00360570(param_1 + 0x1230);
  }
  if (*(int *)(param_1 + 0x1354) == 1) {
    FUN_00360570(param_1 + 0x12e0);
    lVar7 = 0x1310;
LAB_003089d8:
    FUN_00360570(param_1 + lVar7);
  }
  else if (*(int *)(param_1 + 0x1354) == 0) {
    lVar7 = 0x12e0;
    goto LAB_003089d8;
  }
  while (uVar3 = FUN_00319250(param_1,&local_48), (uVar3 & 1) != 0) {
    plVar6 = *(long **)(local_48 + 0x10);
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      FUN_0037af30();
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
LAB_00308a4c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = param_2;
  if (4 < param_2) {
    uVar3 = FUN_00350fb0(param_2,param_2);
  }
  FUN_00350f30(uVar5,uVar3);
  lVar7 = *(long *)(param_1 + 0x30);
joined_r0x00308a44:
  if (lVar7 != 0) {
    FUN_0035351c(&local_48,lVar7,4);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (4 < param_2) {
    FUN_00350fd0(param_2);
  }
  return;
}


