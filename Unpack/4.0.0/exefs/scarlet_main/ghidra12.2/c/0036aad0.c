/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036aad0; name: FUN_0036aad0
 */


void FUN_0036aad0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *__src;
  char cVar3;
  bool bVar4;
  long lVar5;
  size_t __n;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 uStack_68;
  
  uVar10 = FUN_0036a9b0(param_2[1]);
  FUN_003670f0(param_1);
  puVar7 = PTR___tls_init_047cc328;
  puVar6 = PTR_DAT_047cc320;
  local_98 = 0xffffffff;
  local_a0 = 1;
  uStack_b8 = 0;
  local_c0 = 0;
  local_94 = 0;
  local_c8 = PTR_DAT_047cc320 + 0x10;
  lVar2 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar2 = param_1[2];
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar8 = PTR_DAT_047cc330;
  lVar5 = tpidr_el0;
  local_88 = *(undefined8 *)(lVar5 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar7 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar5 + 0x48) = &local_c8;
  uVar14 = 0;
  while (*(int *)(*param_2 + 8) == 0) {
    uVar11 = *(uint *)(param_2 + 2);
    if (*(ulong *)(param_2[1] + 0x28) <= (ulong)uVar11) break;
    puVar1 = (undefined8 *)(*(long *)(param_2[1] + 0x20) + (ulong)uVar11 * 0x20);
    if (((undefined8 *)*puVar1 != (undefined8 *)0x0) &&
       (plVar13 = *(long **)*puVar1, plVar13 != (long *)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar11 = *(uint *)(param_2 + 2);
    }
    uStack_78 = puVar1[1];
    puVar15 = (undefined8 *)*puVar1;
    uStack_68 = puVar1[3];
    local_70 = (void *)puVar1[2];
    *(uint *)(param_2 + 2) = uVar11 + 1;
    __src = (void *)((long)&uStack_78 + 1);
    __n = uStack_78 & 0xff;
    if (puVar15 != (undefined8 *)0x0) {
      __src = local_70;
      __n = uStack_78;
    }
    local_80 = puVar15;
    memcpy((void *)(lVar2 + uVar14),__src,__n);
    if ((puVar15 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar15, plVar13 != (long *)0x0)) {
      do {
        lVar12 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
                    /* try { // try from 0036ac6c to 0036ac6f has its CatchHandler @ 0036ad00 */
        (*(code *)puVar15[3])(puVar15[4]);
      }
    }
    uVar14 = __n + uVar14;
    if (uVar10 < uVar14) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0036acf4 to 0036acf7 has its CatchHandler @ 0036acf8 */
      abort();
    }
  }
  local_c8 = puVar6 + 0x10;
  local_a0 = local_a0 | 1;
                    /* try { // try from 0036ac88 to 0036ac9b has its CatchHandler @ 0036acfc */
  FUN_003533a0(&local_c8);
  uVar9 = local_88;
  if (puVar7 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar5 + 0x48) = uVar9;
  if ((((byte)local_a0 >> 2 & 1) == 0) && ((*puVar8 & 1) != 0)) {
                    /* try { // try from 0036acec to 0036acef has its CatchHandler @ 0036acfc */
    FUN_0038ea60();
  }
  return;
}


