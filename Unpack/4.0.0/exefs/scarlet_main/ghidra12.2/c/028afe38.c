/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028afe38; name: FUN_028afe38
 */


void FUN_028afe38(long param_1)

{
  long lVar1;
  
  FUN_0299ced8(*(undefined8 *)(param_1 + 0x200),0xffffffffffffffff);
  FUN_0299cee8(param_1);
  FUN_0299d260(param_1);
  lVar1 = *(long *)(param_1 + 0x220);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  if (lVar1 != 0) {
    FUN_0299c1b4(param_1 + 0x228);
  }
  lVar1 = *(long *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (lVar1 != 0) {
    FUN_0299c578(param_1 + 0x248);
  }
  lVar1 = *(long *)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (lVar1 != 0) {
    FUN_0299c93c(param_1 + 0x268);
  }
  FUN_0299d564(*(undefined8 *)(param_1 + 0x200));
  FUN_0299d574(*(undefined8 *)(param_1 + 0x200));
  lVar1 = *(long *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (lVar1 != 0) {
    FUN_0299bdf8(param_1 + 0x208);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


