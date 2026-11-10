/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c5814; name: FUN_002c5814
 */


void FUN_002c5814(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_047cc808 + 0x10);
  param_1[1] = 1;
  param_1[2] = *param_2;
  *param_2 = 0;
  puVar1 = PTR_LAB_047cc870;
  param_1[3] = param_3;
  puVar2 = PTR_LAB_047cc878;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[0xe] = 0;
  param_1[0xc] = (long)puVar1;
  param_1[0xd] = (long)param_1;
  param_1[0x10] = (long)puVar2;
  param_1[0x11] = (long)param_1;
  puVar1 = PTR___tls_init_047cc328;
  param_1[0x12] = 0;
  if (puVar1 != (undefined *)0x0) {
                    /* try { // try from 002c5878 to 002c587b has its CatchHandler @ 002c58c0 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar3 = tpidr_el0;
                    /* try { // try from 002c5894 to 002c58ab has its CatchHandler @ 002c58c0 */
  lVar3 = FUN_0035347c(*(undefined8 *)(lVar3 + 0x48));
  FUN_00360550(param_1 + 5,param_1[3] + lVar3,param_1 + 0xb);
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  return;
}


