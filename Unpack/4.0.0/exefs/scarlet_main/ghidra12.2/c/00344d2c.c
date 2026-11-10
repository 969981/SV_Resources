/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00344d2c; name: FUN_00344d2c
 */


void FUN_00344d2c(undefined4 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = param_2;
  uVar3 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[2];
  *(undefined8 *)(param_1 + 8) = param_3[3];
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 2) = uVar1;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar2 = tpidr_el0;
  uVar1 = FUN_0035347c(*(undefined8 *)(lVar2 + 0x48));
  auVar5 = FUN_00353180(uVar1,1);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])(param_1 + 10) = auVar5;
  uStack_38 = param_3[1];
  local_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
                    /* try { // try from 00344d94 to 00344d9b has its CatchHandler @ 00344db4 */
  lVar2 = FUN_003673a0(&local_40);
  *(long *)(param_1 + 0x12) = lVar2 + 0x50;
  return;
}


