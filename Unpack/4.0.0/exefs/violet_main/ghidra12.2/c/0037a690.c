/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037a690; name: FUN_0037a690
 */


undefined4 FUN_0037a690(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xd;
  switch(param_1) {
  case 7:
    uVar2 = 0xe;
    break;
  case 8:
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar1 = tpidr_el0;
    lVar1 = FUN_0035347c(*(undefined8 *)(lVar1 + 0x48));
    uVar2 = 4;
    if (lVar1 <= param_2) {
      uVar2 = 1;
    }
    return uVar2;
  case 0xb:
    return 8;
  case 0xc:
    return 7;
  }
  return uVar2;
}


