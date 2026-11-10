/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002854c0; name: FUN_002854c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002854c0(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar5 = PTR___tls_init_047cc328;
  puVar4 = PTR_DAT_047cc320;
  local_88 = PTR_DAT_047cc320 + 0x10;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_60 = 1;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_047cc330;
  lVar3 = tpidr_el0;
  local_48 = *(undefined8 *)(lVar3 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar3 + 0x48) = &local_88;
  DAT_047ef068 = 0;
  DAT_047ef070 = 0;
  DAT_047ef060 = PTR_DAT_047cc5d0;
                    /* try { // try from 00285580 to 0028558f has its CatchHandler @ 00285718 */
  FUN_003673f0(&local_a8,":path");
  uStack_e8 = uStack_a0;
  local_f0 = local_a8;
  uStack_d8 = uStack_90;
  uStack_e0 = uStack_98;
                    /* try { // try from 00285598 to 002855a3 has its CatchHandler @ 00285710 */
  FUN_003695d0(&local_c8,&local_f0);
  uRam00000000047ef088 = uStack_c0;
  DAT_047ef080 = local_c8;
  uRam00000000047ef098 = uStack_b0;
  _DAT_047ef090 = local_b8;
  if ((local_a8 != (undefined8 *)0x0) && (plVar8 = (long *)*local_a8, plVar8 != (long *)0x0)) {
    do {
      lVar9 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
                    /* try { // try from 002855e0 to 002855e3 has its CatchHandler @ 00285718 */
      (*(code *)local_a8[3])(local_a8[4]);
    }
  }
                    /* try { // try from 002855e4 to 002855f3 has its CatchHandler @ 0028570c */
  FUN_003673f0(&local_c8,&DAT_03bdfb3b);
  uRam00000000047ef0a8 = uStack_c0;
  DAT_047ef0a0 = local_c8;
  uRam00000000047ef0b8 = uStack_b0;
  _DAT_047ef0b0 = local_b8;
                    /* try { // try from 00285608 to 00285617 has its CatchHandler @ 00285714 */
  FUN_003673f0(&local_c8,":authority");
  uStack_128 = uStack_c0;
  local_130 = local_c8;
  uStack_118 = uStack_b0;
  uStack_120 = local_b8;
                    /* try { // try from 00285624 to 0028562f has its CatchHandler @ 00285708 */
  FUN_003695d0(&local_110,&local_130);
  uRam00000000047ef0c8 = uStack_108;
  DAT_047ef0c0 = local_110;
  uRam00000000047ef0d8 = uStack_f8;
  _DAT_047ef0d0 = uStack_100;
  if ((local_c8 != (undefined8 *)0x0) && (plVar8 = (long *)*local_c8, plVar8 != (long *)0x0)) {
    do {
      lVar9 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
                    /* try { // try from 00285668 to 0028566b has its CatchHandler @ 00285714 */
      (*(code *)local_c8[3])(local_c8[4]);
    }
  }
                    /* try { // try from 0028566c to 0028567b has its CatchHandler @ 00285704 */
  FUN_003673f0(&local_110,"inproc-fail");
  local_88 = puVar4 + 0x10;
  uRam00000000047ef0e8 = uStack_108;
  DAT_047ef0e0 = local_110;
  uRam00000000047ef0f8 = uStack_f8;
  _DAT_047ef0f0 = uStack_100;
  local_60 = local_60 | 1;
                    /* try { // try from 002856a0 to 002856b3 has its CatchHandler @ 00285778 */
  FUN_003533a0(&local_88);
  uVar7 = local_48;
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar3 + 0x48) = uVar7;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar6 & 1) != 0)) {
                    /* try { // try from 002856fc to 002856ff has its CatchHandler @ 00285778 */
    FUN_0038ea60();
  }
  return;
}


