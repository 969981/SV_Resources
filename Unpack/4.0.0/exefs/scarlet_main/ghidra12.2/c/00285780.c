/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00285780; name: FUN_00285780
 */


void FUN_00285780(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar5 = PTR___tls_init_047cc328;
  puVar4 = PTR_DAT_047cc320;
  local_44 = 0;
  local_50 = 1;
  local_48 = 0xffffffff;
  local_78 = PTR_DAT_047cc320 + 0x10;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_40 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_047cc330;
  lVar3 = tpidr_el0;
  local_38 = *(undefined8 *)(lVar3 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar3 + 0x48) = &local_78;
  puVar7 = DAT_047ef060;
  if ((DAT_047ef060 != (undefined8 *)0x0) && (plVar9 = (long *)*DAT_047ef060, plVar9 != (long *)0x0)
     ) {
    do {
      lVar10 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
                    /* try { // try from 00285848 to 0028590b has its CatchHandler @ 00285980 */
      (*(code *)puVar7[3])(puVar7[4]);
    }
  }
  puVar7 = DAT_047ef080;
  if ((DAT_047ef080 != (undefined8 *)0x0) && (plVar9 = (long *)*DAT_047ef080, plVar9 != (long *)0x0)
     ) {
    do {
      lVar10 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)puVar7[3])(puVar7[4]);
    }
  }
  puVar7 = DAT_047ef0a0;
  if ((DAT_047ef0a0 != (undefined8 *)0x0) && (plVar9 = (long *)*DAT_047ef0a0, plVar9 != (long *)0x0)
     ) {
    do {
      lVar10 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)puVar7[3])(puVar7[4]);
    }
  }
  puVar7 = DAT_047ef0c0;
  if ((DAT_047ef0c0 != (undefined8 *)0x0) && (plVar9 = (long *)*DAT_047ef0c0, plVar9 != (long *)0x0)
     ) {
    do {
      lVar10 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)puVar7[3])(puVar7[4]);
    }
  }
  puVar7 = DAT_047ef0e0;
  if ((DAT_047ef0e0 != (undefined8 *)0x0) && (plVar9 = (long *)*DAT_047ef0e0, plVar9 != (long *)0x0)
     ) {
    do {
      lVar10 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)puVar7[3])(puVar7[4]);
    }
  }
  local_78 = puVar4 + 0x10;
  local_50 = local_50 | 1;
                    /* try { // try from 00285920 to 00285933 has its CatchHandler @ 002859e4 */
  FUN_003533a0(&local_78);
  uVar8 = local_38;
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar3 + 0x48) = uVar8;
  if ((((byte)local_50 >> 2 & 1) == 0) && ((*puVar6 & 1) != 0)) {
                    /* try { // try from 00285978 to 0028597b has its CatchHandler @ 002859e4 */
    FUN_0038ea60();
  }
  return;
}


