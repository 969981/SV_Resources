/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a3824; name: FUN_010a3824
 */


void FUN_010a3824(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_010a4064(param_2);
  FUN_010a39b4(param_1,param_2);
  if (*(char *)(param_1 + 0x2d) != '\0') {
    FUN_010b1194(param_1,param_2);
    return;
  }
  FUN_010a52b0(param_1,param_2);
  FUN_010a4cf0(param_1,param_2);
  uVar1 = FUN_010a38c8(*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1d));
  if ((uVar1 & 1) != 0) {
    FUN_010b0a60(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_010b0ee8(param_1,param_2);
    return;
  }
  return;
}


