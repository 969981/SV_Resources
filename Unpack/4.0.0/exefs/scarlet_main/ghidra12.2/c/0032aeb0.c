/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032aeb0; name: FUN_0032aeb0
 */


void FUN_0032aeb0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_04495688 == 0) || (uVar2 = thunk_FUN_00354f70(), (uVar2 & 1) != 0)) {
    return;
  }
  FUN_0038db40(&DAT_047ef488);
  if (DAT_047ef480 == 0) {
    DAT_047ef480 = FUN_0038c7b0(0x98);
    FUN_003581b0();
    uVar3 = FUN_0038c7b0();
    lVar4 = DAT_047ef480;
    lVar1 = DAT_047ef480 + 0x70;
    *(undefined8 *)(DAT_047ef480 + 0x78) = uVar3;
    *(undefined1 *)(lVar4 + 0x80) = 0;
    FUN_00358110(uVar3,lVar1);
    FUN_0038da50(DAT_047ef480 + 0x88,0);
    FUN_0038da50(DAT_047ef480 + 0x90,2);
    lVar1 = DAT_047ef480;
    *(undefined1 **)(DAT_047ef480 + 0x38) = &LAB_0032b0b0;
    *(long *)(lVar1 + 0x40) = lVar1;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar4 = tpidr_el0;
    lVar4 = FUN_0035347c(*(undefined8 *)(lVar4 + 0x48));
    FUN_00360550(lVar1,lVar4 + DAT_04495688,DAT_047ef480 + 0x30);
  }
  FUN_0038da60(DAT_047ef480 + 0x88);
  uVar3 = *(undefined8 *)(DAT_047ef480 + 0x78);
  FUN_0038db60(&DAT_047ef488);
  FUN_00358220(param_1,uVar3);
  return;
}


