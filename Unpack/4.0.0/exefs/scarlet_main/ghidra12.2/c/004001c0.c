/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004001c0; name: FUN_004001c0
 */


undefined8 FUN_004001c0(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0 && *(long *)(param_1 + 8) == 0) ||
     (param_4 == 0 && *(long *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_003eb520();
    *(long *)(param_1 + 8) = param_2;
  }
  if (param_3 != 0) {
    FUN_003eb520(*(undefined8 *)(param_1 + 0x40));
    *(long *)(param_1 + 0x40) = param_3;
  }
  if (param_4 != 0) {
    FUN_003eb520(*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0x10) = param_4;
  }
  if (param_3 != 0) {
    uVar1 = FUN_003eb2b0(param_3);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return 1;
}


