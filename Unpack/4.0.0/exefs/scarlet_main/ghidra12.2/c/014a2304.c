/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a2304; name: FUN_014a2304
 */


void FUN_014a2304(long param_1,uint param_2)

{
  undefined1 uVar1;
  
  *(uint *)(param_1 + 0x440) = param_2;
  if (param_2 < 2) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    param_2 = 1;
    uVar1 = 1;
  }
  *(uint *)(*(long *)(param_1 + 0x4a8) + 0x14) = param_2;
  *(uint *)(*(long *)(param_1 + 0x4a8) + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x450) = uVar1;
  return;
}


