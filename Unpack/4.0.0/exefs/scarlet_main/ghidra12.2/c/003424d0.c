/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003424d0; name: FUN_003424d0
 */


long FUN_003424d0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar3 = PTR___tls_init_047cc328;
  puVar2 = PTR_DAT_047cc320;
  local_60 = 1;
  local_54 = 0;
  local_58 = 0xffffffff;
  local_88 = PTR_DAT_047cc320 + 0x10;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_50 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_047cc330;
  lVar1 = tpidr_el0;
  local_48 = *(undefined8 *)(lVar1 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x48) = &local_88;
                    /* try { // try from 0034257c to 003425a3 has its CatchHandler @ 00342648 */
  lVar6 = FUN_0036ee70(param_1,0,2,0,0);
  puVar7 = (undefined8 *)FUN_00344390(lVar6 + 0x78,0);
  if ((undefined *)*puVar7 != PTR_PTR_047cc3b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00342640 to 00342643 has its CatchHandler @ 00342648 */
    abort();
  }
  puVar8 = (undefined4 *)puVar7[1];
  *puVar8 = param_2;
  *(undefined8 *)(puVar8 + 2) = param_3;
  local_88 = puVar2 + 0x10;
  local_60 = local_60 | 1;
                    /* try { // try from 003425d8 to 003425eb has its CatchHandler @ 00342644 */
  FUN_003533a0(&local_88);
  uVar5 = local_48;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 00342638 to 0034263b has its CatchHandler @ 00342644 */
    FUN_0038ea60();
  }
  return lVar6;
}


