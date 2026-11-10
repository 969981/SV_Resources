/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a7650; name: FUN_024a7650
 */


void FUN_024a7650(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined1 auStack_18 [8];
  
  uVar1 = FUN_024a77a8(param_1,param_2,auStack_38);
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_024a6664(param_1,auStack_18);
  }
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  return;
}


