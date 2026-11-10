/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033fca4; name: FUN_0033fca4
 */


void FUN_0033fca4(long param_1,ulong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_60 [32];
  undefined1 auStack_38 [8];
  
  puVar5 = *(undefined8 **)(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x680) = 0;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0033fcd4 to 0033fcd7 has its CatchHandler @ 00340090 */
    (**(code **)*puVar5)();
  }
  if (param_2 != 0) {
    if (4 < param_2) {
      FUN_00350fd0(param_2);
    }
    pcVar1 = (char *)(param_1 + 0x910);
    do {
      if (*pcVar1 != '\0') {
        ClearExclusiveLocal();
        goto LAB_0033fd90;
      }
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0033a374(auStack_60,*(undefined8 *)(param_1 + 200),auStack_38,"cancel");
    puVar5 = (undefined8 *)FUN_0038c780(0x30);
    *puVar5 = PTR_LAB_047ccd28;
    puVar5[1] = param_1;
    puVar5[3] = PTR_FUN_047cc978;
    puVar5[4] = puVar5;
    puVar5[5] = 0;
    FUN_003504a8(param_1 + 0x28,puVar5 + 2,0,"health_cancel");
LAB_0033fd90:
    FUN_00368470(param_1 + 0x6a8);
    FUN_0033a3b0(*(undefined8 *)(param_1 + 200),auStack_60,"recv_message_ready");
    return;
  }
  if (*(long *)(param_1 + 0x6c8) == 0) {
    FUN_003673f0(auStack_60,"health check response was empty");
    lVar13 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                          ,200,auStack_60,0,0);
LAB_0033ff58:
    uVar14 = 3;
    if (lVar13 == 0) goto LAB_0033ff68;
  }
  else {
    if (*(long *)(param_1 + 0x6b8) == 1) {
      plVar9 = *(long **)(param_1 + 0x6b0);
      if (*plVar9 == 0) {
        lVar12 = 0;
        lVar13 = (long)plVar9 + 9;
      }
      else {
        lVar12 = 0;
        lVar13 = plVar9[2];
      }
    }
    else {
                    /* try { // try from 0033fde4 to 0033fde7 has its CatchHandler @ 0034002c */
      lVar12 = FUN_0038c780();
      if (*(long *)(param_1 + 0x6b8) != 0) {
        lVar10 = *(long *)(param_1 + 0x6b0);
        lVar13 = 0;
        uVar8 = 0;
        lVar6 = 0;
        do {
          if (*(long *)(lVar10 + lVar13) == 0) {
            memcpy((void *)(lVar12 + lVar6),(void *)(lVar10 + lVar13 + 9),
                   (ulong)*(byte *)(lVar10 + lVar13 + 8));
            lVar10 = *(long *)(param_1 + 0x6b0);
            if (*(long *)(lVar10 + lVar13) != 0) goto LAB_0033fe6c;
LAB_0033fe08:
            uVar11 = (ulong)*(byte *)(lVar10 + lVar13 + 8);
          }
          else {
            memcpy((void *)(lVar12 + lVar6),*(void **)(lVar10 + lVar13 + 0x10),
                   *(size_t *)(lVar10 + lVar13 + 8));
            lVar10 = *(long *)(param_1 + 0x6b0);
            if (*(long *)(lVar10 + lVar13) == 0) goto LAB_0033fe08;
LAB_0033fe6c:
            uVar11 = *(ulong *)(lVar10 + lVar13 + 8);
          }
          lVar6 = uVar11 + lVar6;
          uVar8 = uVar8 + 1;
          lVar13 = lVar13 + 0x20;
        } while (uVar8 < *(ulong *)(param_1 + 0x6b8));
      }
      lVar13 = lVar12;
    }
                    /* try { // try from 0033fe88 to 0033fe9b has its CatchHandler @ 00340048 */
    lVar6 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
    uVar14 = *(undefined8 *)(param_1 + 0x6c8);
                    /* try { // try from 0033fea4 to 0033fed7 has its CatchHandler @ 00340058 */
    piVar7 = (int *)FUN_0038ad50(PTR_DAT_047ccd48,lVar6);
    if ((piVar7 == (int *)0x0) ||
       (uVar8 = FUN_00385610(lVar13,uVar14,piVar7,PTR_DAT_047ccd48,lVar6), (uVar8 & 1) == 0)) {
                    /* try { // try from 0033fef4 to 0033ff1f has its CatchHandler @ 00340050 */
      FUN_003673f0(auStack_60,"cannot parse health check response");
      lVar13 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                            ,0xe4,auStack_60,0,0);
      bVar4 = false;
    }
    else {
      bVar4 = *piVar7 == 1;
      lVar13 = 0;
    }
    if (lVar6 != 0) {
                    /* try { // try from 0033ff2c to 0033ff33 has its CatchHandler @ 00340030 */
      FUN_0038bd40(lVar6);
    }
    if (lVar12 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lVar12);
    }
    if (!bVar4) goto LAB_0033ff58;
    uVar14 = 2;
  }
  FUN_00352270(lVar13);
LAB_0033ff68:
  lVar12 = *(long *)(param_1 + 8);
  lVar13 = lVar12 + 0x30;
  FUN_0038db40(lVar13);
  plVar9 = *(long **)(lVar12 + 0x50);
  if (plVar9 != (long *)0x0) {
                    /* try { // try from 0033ff88 to 0033ff8f has its CatchHandler @ 00340034 */
    (**(code **)(*plVar9 + 0x18))(plVar9,uVar14);
  }
                    /* try { // try from 0033ff90 to 0033ff97 has its CatchHandler @ 00340054 */
  FUN_0038db60(lVar13);
  *(undefined1 *)(param_1 + 2000) = 1;
  FUN_00368470(param_1 + 0x6a8);
  *(long *)(param_1 + 0x698) = param_1;
  *(long *)(param_1 + 0x1b0) = param_1 + 0xd0;
  puVar3 = PTR_LAB_047ccd08;
  *(long *)(param_1 + 0x130) = param_1 + 0x680;
  *(long *)(param_1 + 0x138) = param_1 + 0x688;
  *(undefined **)(param_1 + 0x690) = puVar3;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) | 0x10;
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 200);
  puVar3 = PTR_LAB_047ccd10;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined **)(param_1 + 0x1d0) = puVar3;
  *(long *)(param_1 + 0x1d8) = param_1 + 0x1a8;
  FUN_003504a8(param_1 + 0x28,param_1 + 0x1c8,0,"start_subchannel_batch");
  return;
}


