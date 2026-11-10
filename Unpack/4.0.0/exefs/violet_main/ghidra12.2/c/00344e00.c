/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344e00; name: FUN_00344e00
 */


void FUN_00344e00(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (param_2 != 0) {
    FUN_0038db00();
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar1 = tpidr_el0;
    uVar2 = FUN_0035347c(*(undefined8 *)(lVar1 + 0x48));
    auVar3 = FUN_00353180(uVar2,1);
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar3;
  }
  return;
}


