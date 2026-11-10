/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036fac0; name: FUN_0036fac0
 */


long * FUN_0036fac0(long param_1,ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar5 = PTR___tls_init_047cc338;
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (PTR___tls_init_047cc338 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  puVar7 = PTR_DAT_047cc330;
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x50) == 0) {
    if ((*PTR_DAT_047cc330 & 1) != 0) {
      FUN_0038e994();
    }
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar4 + 0x50) = &local_68;
  }
  puVar6 = PTR___tls_init_047cc328;
  puVar5 = PTR_DAT_047cc320;
  local_7c = 0;
  local_88 = 1;
  local_80 = 0xffffffff;
  local_b0 = PTR_DAT_047cc320 + 0x10;
  uStack_a0 = 0;
  local_a8 = 0;
  local_78 = 0;
  uStack_90 = 0;
  local_98 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 0036fb8c to 0036fb8f has its CatchHandler @ 0036ff70 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_70 = *(undefined8 *)(lVar4 + 0x48);
  if ((*puVar7 & 1) != 0) {
                    /* try { // try from 0036fdd4 to 0036fdd7 has its CatchHandler @ 0036ff70 */
    FUN_0038e994();
  }
  if (puVar6 != (undefined *)0x0) {
                    /* try { // try from 0036fbb4 to 0036fbb7 has its CatchHandler @ 0036ff70 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar4 + 0x48) = &local_b0;
                    /* try { // try from 0036fbd4 to 0036fbdb has its CatchHandler @ 0036ff14 */
  FUN_0038db40(param_1 + 0x28);
  plVar14 = (long *)(param_1 + 0x50);
  plVar11 = (long *)*plVar14;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar14;
    do {
      if (((ulong)plVar11[4] < param_3) ||
         ((plVar9 = plVar11, (ulong)plVar11[4] <= param_3 && ((ulong)plVar11[5] < param_2)))) {
        plVar11 = plVar11 + 1;
        plVar9 = plVar13;
      }
      plVar11 = (long *)*plVar11;
      plVar13 = plVar9;
    } while (plVar11 != (long *)0x0);
    if (((plVar9 != plVar14) && ((ulong)plVar9[4] <= param_3)) &&
       (((ulong)plVar9[4] < param_3 || ((ulong)plVar9[5] <= param_2)))) goto LAB_0036fd54;
  }
                    /* try { // try from 0036fc60 to 0036fc6f has its CatchHandler @ 0036fefc */
  FUN_0036f9e0(&local_e0,param_2,param_3);
  uStack_b8 = uStack_d8;
  local_c0 = local_e0;
  local_e0 = 0;
  uStack_d8 = 0;
                    /* try { // try from 0036fc84 to 0036fc8f has its CatchHandler @ 0036fe1c */
  local_d0 = param_3;
  uStack_c8 = param_2;
  plVar9 = (long *)FUN_00370870(param_1 + 0x48,&local_d0,&local_d0);
  uVar1 = (uint)local_c0 & 3;
  if (1 < uVar1) {
    uVar10 = local_c0 & 0xfffffffffffffffc;
    plVar11 = (long *)(uVar10 + 0x40);
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
                    /* try { // try from 0036fde4 to 0036fdef has its CatchHandler @ 0036fe18 */
      FUN_00376de0(uVar1,uVar10,*(undefined4 *)(uVar10 + 0x48));
    }
  }
  uVar1 = (uint)uStack_b8 & 3;
  if (1 < uVar1) {
    uVar10 = uStack_b8 & 0xfffffffffffffffc;
    plVar11 = (long *)(uVar10 + 0x40);
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      FUN_00376de0(uVar1,uVar10,*(undefined4 *)(uVar10 + 0x48));
    }
  }
  uVar1 = (uint)local_e0 & 3;
  if (1 < uVar1) {
    uVar10 = local_e0 & 0xfffffffffffffffc;
    plVar11 = (long *)(uVar10 + 0x40);
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
                    /* try { // try from 0036fdf4 to 0036fdff has its CatchHandler @ 0036fe14 */
      FUN_00376de0(uVar1,uVar10,*(undefined4 *)(uVar10 + 0x48));
    }
  }
  uVar1 = (uint)uStack_d8 & 3;
  if (1 < uVar1) {
    uVar10 = uStack_d8 & 0xfffffffffffffffc;
    plVar11 = (long *)(uVar10 + 0x40);
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      FUN_00376de0(uVar1,uVar10,*(undefined4 *)(uVar10 + 0x48));
    }
  }
LAB_0036fd54:
                    /* try { // try from 0036fd54 to 0036fd5b has its CatchHandler @ 0036ff10 */
  FUN_0038db60(param_1 + 0x28);
  local_b0 = puVar5 + 0x10;
  local_88 = local_88 | 1;
                    /* try { // try from 0036fd70 to 0036fd83 has its CatchHandler @ 0036ff84 */
  FUN_003533a0(&local_b0);
  uVar8 = local_70;
  if (puVar6 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar4 + 0x48) = uVar8;
  if ((((byte)local_88 >> 2 & 1) == 0) && ((*puVar7 & 1) != 0)) {
                    /* try { // try from 0036fddc to 0036fddf has its CatchHandler @ 0036ff84 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_68);
  return plVar9 + 6;
}


