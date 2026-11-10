/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168d138; name: FUN_0168d138
 */


void FUN_0168d138(long param_1)

{
  undefined1 uVar1;
  
  memset((void *)(param_1 + 0x40),0,0x68);
  uVar1 = FUN_0168d1b0();
  *(undefined1 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_0168d1c0();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x47) = uVar1;
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  return;
}


