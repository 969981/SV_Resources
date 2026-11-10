/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036b880; name: FUN_0036b880
 */


void FUN_0036b880(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  do {
    lVar10 = *param_1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    puVar5 = PTR___tls_init_047cc338;
  } while (cVar3 != '\0');
  if (lVar10 + -1 == 0) {
    plVar12 = (long *)param_1[0x14];
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    if (PTR___tls_init_047cc338 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    puVar7 = PTR_DAT_047cc330;
    lVar10 = tpidr_el0;
    if (*(long *)(lVar10 + 0x50) == 0) {
      if ((*PTR_DAT_047cc330 & 1) != 0) {
        FUN_0038e994();
      }
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
      }
      *(undefined8 **)(lVar10 + 0x50) = &local_58;
    }
    puVar6 = PTR___tls_init_047cc328;
    puVar5 = PTR_DAT_047cc320;
    local_6c = 0;
    local_78 = 1;
    local_70 = 0xffffffff;
    local_a0 = PTR_DAT_047cc320 + 0x10;
    uStack_90 = 0;
    local_98 = 0;
    local_68 = 0;
    uStack_80 = 0;
    local_88 = 0;
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 0036b96c to 0036b96f has its CatchHandler @ 0036bbc8 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    local_60 = *(undefined8 *)(lVar10 + 0x48);
    if ((*puVar7 & 1) != 0) {
                    /* try { // try from 0036bb94 to 0036bb97 has its CatchHandler @ 0036bbc8 */
      FUN_0038e994();
    }
    if (puVar6 != (undefined *)0x0) {
                    /* try { // try from 0036b994 to 0036b997 has its CatchHandler @ 0036bbc8 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined ***)(lVar10 + 0x48) = &local_a0;
    if (plVar12 != (long *)0x0) {
      lVar11 = *(long *)(*plVar12 + 0x98);
                    /* try { // try from 0036b9c0 to 0036ba03 has its CatchHandler @ 0036bbd0 */
      FUN_0038db40(lVar11);
      if (*(long **)(lVar11 + 0x20) == param_1) {
        plVar1 = (long *)0x0;
        if ((long *)plVar12[1] != param_1) {
          plVar1 = (long *)plVar12[1];
        }
        *(long **)(lVar11 + 0x20) = plVar1;
      }
      lVar2 = plVar12[2];
      *(long *)(*(long *)(lVar2 + 0xa0) + 8) = plVar12[1];
      *(long *)(*(long *)(plVar12[1] + 0xa0) + 0x10) = lVar2;
      FUN_0038db60(lVar11);
      plVar12 = (long *)(*plVar12 + 0x910);
      do {
        lVar11 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
                    /* try { // try from 0036bba4 to 0036bba7 has its CatchHandler @ 0036bbd0 */
        FUN_0037af30();
      }
    }
    if (*(char *)((long)param_1 + 0xa9) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0036bbc0 to 0036bbc3 has its CatchHandler @ 0036bbc4 */
      abort();
    }
    *(undefined1 *)((long)param_1 + 0xa9) = 1;
    if ((param_1[0x17] == 0) || (param_1[0x18] != 0)) {
                    /* try { // try from 0036ba4c to 0036ba5b has its CatchHandler @ 0036bbd8 */
      FUN_00350548(param_1 + 2,0);
      if (puVar6 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
                    /* try { // try from 0036ba70 to 0036ba73 has its CatchHandler @ 0036bbd8 */
      FUN_003533a0(*(undefined8 *)(lVar10 + 0x48));
    }
    else {
      plVar12 = param_1 + 0x117;
      do {
        if (*plVar12 != 0) {
          ClearExclusiveLocal();
          goto LAB_0036ba74;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar12 = param_1 + 0x122;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
                    /* try { // try from 0036bb14 to 0036bb87 has its CatchHandler @ 0036bbd8 */
      FUN_003505cc(param_1 + 2,4);
      puVar9 = (undefined8 *)FUN_0038c780(0x48);
      *puVar9 = param_1;
      puVar9[6] = &LAB_0036d000;
      puVar9[7] = puVar9;
      puVar9[8] = 0;
      lVar11 = FUN_0037b8b0(puVar9 + 5);
      *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) | 0x40;
      *(undefined8 *)(*(long *)(lVar11 + 8) + 0x88) = 4;
      *(long **)(lVar11 + 0x18) = param_1;
      puVar9[2] = &LAB_0036d060;
      puVar9[3] = lVar11;
      puVar9[4] = 0;
      FUN_003504a8(param_1 + 2,puVar9 + 1,0,"executing batch");
    }
LAB_0036ba74:
    param_1 = param_1 + 0x122;
    do {
      lVar11 = *param_1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 + -1 == 0) {
                    /* try { // try from 0036bb9c to 0036bb9f has its CatchHandler @ 0036bbd8 */
      FUN_0037af30();
    }
    local_a0 = puVar5 + 0x10;
    local_78 = local_78 | 1;
                    /* try { // try from 0036baa0 to 0036bab3 has its CatchHandler @ 0036bbd4 */
    FUN_003533a0(&local_a0);
    uVar8 = local_60;
    if (puVar6 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar10 + 0x48) = uVar8;
    if ((((byte)local_78 >> 2 & 1) == 0) && ((*puVar7 & 1) != 0)) {
                    /* try { // try from 0036bbac to 0036bbaf has its CatchHandler @ 0036bbd4 */
      FUN_0038ea60();
    }
    FUN_002708dc(&local_58);
  }
  return;
}


