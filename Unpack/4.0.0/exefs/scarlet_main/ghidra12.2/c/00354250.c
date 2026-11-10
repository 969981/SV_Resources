/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00354250; name: FUN_00354250
 */


void FUN_00354250(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte bVar6;
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
  
  puVar3 = PTR___tls_init_047cc328;
  puVar2 = PTR_DAT_047cc320;
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
  puVar4 = PTR_DAT_047cc330;
  lVar1 = tpidr_el0;
  local_38 = *(undefined8 *)(lVar1 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x48) = &local_78;
                    /* try { // try from 003542ec to 0035433b has its CatchHandler @ 003543c0 */
  FUN_00354810();
  FUN_0038db00(&DAT_047ef658);
  FUN_0038db80(&DAT_047ef634);
  FUN_00354004();
  DAT_047ef648 = &DAT_047ef640;
  DAT_047ef650 = &DAT_047ef640;
  DAT_047ef640 = &DAT_03c61a0b;
  FUN_00354830();
  FUN_003605b0();
  FUN_003547f0();
  bVar6 = FUN_0038ea94(&PTR_s_grpc_abort_on_leaks_04496220);
  DAT_047ef630 = bVar6 & 1;
  local_78 = puVar2 + 0x10;
  local_50 = local_50 | 1;
                    /* try { // try from 0035435c to 0035436f has its CatchHandler @ 003543bc */
  FUN_003533a0(&local_78);
  uVar5 = local_38;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_50 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003543b4 to 003543b7 has its CatchHandler @ 003543bc */
    FUN_0038ea60();
  }
  return;
}


