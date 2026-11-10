/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037af30; name: FUN_0037af30
 */


void FUN_0037af30(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_18 [8];
  
  uVar2 = thunk_FUN_00354870();
  if ((uVar2 & 1) == 0) {
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar1 = tpidr_el0;
    if ((*(byte *)(*(long *)(lVar1 + 0x48) + 0x28) >> 1 & 1) != 0) {
      FUN_003540d4(param_1 + 8,0,0,0);
      return;
    }
  }
  FUN_0035351c(auStack_18,param_1 + 8,0);
  return;
}


