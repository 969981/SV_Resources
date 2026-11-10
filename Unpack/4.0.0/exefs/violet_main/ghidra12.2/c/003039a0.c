/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003039a0; name: FUN_003039a0
 */


undefined8 FUN_003039a0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  uVar2 = 2;
  if ((((param_1 != (long *)0x0) && (lVar1 = tpidr_el0, *(long *)(lVar1 + 0x48) != 0)) &&
      (uVar2 = 2, param_3 != 0)) && ((param_2 != 0 && (*param_1 != 0)))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00303a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = 6;
  }
  return uVar2;
}


