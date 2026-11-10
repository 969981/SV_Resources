/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e4f84; name: FUN_017e4f84
 */


void FUN_017e4f84(long param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  if (*(int *)(param_1 + 0x2b0) != 0) {
    uVar1 = FUN_017e4fe4();
    FUN_0123bac0(uVar1,param_1 + 0x78);
    uVar1 = FUN_017e4fe4(param_1);
    FUN_0123bab8(&local_38,uVar1,*(undefined4 *)(param_1 + 0x2b0));
    *(undefined1 *)(param_1 + 0x2c8) = local_28;
    *(undefined8 *)(param_1 + 0x2c0) = uStack_30;
    *(undefined8 *)(param_1 + 0x2b8) = local_38;
  }
  return;
}


