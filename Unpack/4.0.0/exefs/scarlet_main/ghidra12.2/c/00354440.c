/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00354440; name: FUN_00354440
 */


void FUN_00354440(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar5 = FUN_0038e500(1);
  auVar6 = FUN_0038ded0(10,3);
  auVar6 = FUN_0038dee0(auVar5._0_8_,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_);
  auVar5 = FUN_0038e500(1);
  FUN_00361a40();
  FUN_00354840();
  FUN_003540e8();
  FUN_0038db40(&DAT_047ef658);
  puVar2 = PTR___tls_init_047cc328;
  lVar1 = tpidr_el0;
  if (DAT_047ef648 != &DAT_047ef640) {
    do {
      auVar7 = FUN_0038e500(1);
      auVar7 = FUN_0038dfd0(auVar7._0_8_,auVar7._8_8_,auVar5._0_8_,auVar5._8_8_);
      auVar8 = FUN_0038ded0(1,3);
      iVar3 = FUN_0038dcf0(auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_);
      if (-1 < iVar3) {
        auVar5 = FUN_0038e500(1);
      }
      if (puVar2 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar4 = *(long *)(lVar1 + 0x48);
      *(undefined8 *)(lVar4 + 0x38) = 0x7fffffffffffffff;
      *(undefined1 *)(lVar4 + 0x34) = 1;
      iVar3 = FUN_00360590(0);
      if (iVar3 == 2) {
        FUN_0038db60(&DAT_047ef658);
        if (puVar2 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        FUN_003533a0(*(undefined8 *)(lVar1 + 0x48));
        FUN_00354840();
        FUN_0038db40(&DAT_047ef658);
      }
      else {
        if (DAT_047ef648 == &DAT_047ef640) break;
        if (DAT_047ef630 != '\0') {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        auVar7 = FUN_0038e500(0);
        auVar8 = FUN_0038de20(100,3);
        auVar7 = FUN_0038dee0(auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_);
        iVar3 = FUN_0038dbe0(&DAT_047ef634,&DAT_047ef658,auVar7._0_8_,auVar7._8_8_);
        if (iVar3 != 0) {
          auVar7 = FUN_0038e500(1);
          iVar3 = FUN_0038dcf0(auVar7._0_8_,auVar7._8_8_,auVar6._0_8_,auVar6._8_8_);
          if (0 < iVar3) break;
        }
      }
    } while (DAT_047ef648 != &DAT_047ef640);
  }
  FUN_0038db60(&DAT_047ef658);
  FUN_003605d0();
  if (puVar2 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  FUN_003533a0(*(undefined8 *)(lVar1 + 0x48));
  FUN_0038db40(&DAT_047ef658);
  FUN_0038db60(&DAT_047ef658);
  FUN_00354850();
  FUN_0038db20(&DAT_047ef658);
  FUN_0038dbc0(&DAT_047ef634);
  return;
}


