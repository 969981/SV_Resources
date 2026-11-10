/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb00d0; name: FUN_01eb00d0
 */


void FUN_01eb00d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xb0) = 5;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0xac0) = *param_3;
  *(undefined4 *)(param_1 + 0xac8) = uVar1;
  if (*(char *)(param_1 + 0xacc) == '\0') {
    *(undefined1 *)(param_1 + 0xacc) = 1;
  }
  FUN_01eafca0(param_1);
  FUN_01eb0128(param_1 + 0x178,1);
  return;
}


