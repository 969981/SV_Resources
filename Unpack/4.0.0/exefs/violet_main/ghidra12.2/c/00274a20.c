/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00274a20; name: FUN_00274a20
 */


void FUN_00274a20(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
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
  local_60 = 0;
  local_54 = 0;
  local_50 = 0;
  local_58 = 0xffffffff;
  local_88 = PTR_DAT_047cc320 + 0x10;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar1 = tpidr_el0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_047cc330;
  local_48 = *(undefined8 *)(lVar1 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x48) = &local_88;
                    /* try { // try from 00274abc to 00274acf has its CatchHandler @ 00274bc8 */
  FUN_00371200();
  thunk_FUN_00354860();
  FUN_00361bc0(0);
  FUN_003540e8();
  if (-1 < (int)DAT_047ee794) {
    lVar6 = (ulong)DAT_047ee794 + 1;
    puVar7 = (undefined8 *)(&DAT_047ee7d8 + (ulong)DAT_047ee794 * 0x10);
    do {
      if ((code *)*puVar7 != (code *)0x0) {
                    /* try { // try from 00274b0c to 00274b0f has its CatchHandler @ 00274bc4 */
        (*(code *)*puVar7)();
      }
      lVar6 = lVar6 + -1;
      puVar7 = puVar7 + -2;
    } while (0 < lVar6);
  }
                    /* try { // try from 00274b14 to 00274b37 has its CatchHandler @ 00274bc8 */
  FUN_00354440();
  FUN_0038f8c0();
  FUN_0038c6e0();
  FUN_003760a0();
  FUN_0034bff4();
  FUN_00369f20();
  FUN_0034ad14();
  FUN_0034df80();
  FUN_0038e8f8();
  local_88 = puVar2 + 0x10;
  local_60 = local_60 | 1;
                    /* try { // try from 00274b4c to 00274b5f has its CatchHandler @ 00274bc0 */
  FUN_003533a0(&local_88);
  uVar5 = local_48;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 00274bb8 to 00274bbb has its CatchHandler @ 00274bc0 */
    FUN_0038ea60();
  }
  DAT_047ee790 = 0;
  FUN_0038dcb0(&DAT_047ee7a0);
  FUN_00377ed0();
  return;
}


