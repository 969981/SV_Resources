/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01679420; name: FUN_01679420
 */


void FUN_01679420(long param_1,undefined8 param_2,long param_3,long param_4)

{
  short sVar1;
  
  sVar1 = *(short *)(param_4 + 2);
  if (sVar1 == -1) {
    sVar1 = FUN_01679490(*(undefined8 *)(param_1 + 8));
  }
  *(short *)(param_3 + 10) = sVar1;
  FUN_01679498(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined1 *)(param_3 + 9) = 1;
  return;
}


