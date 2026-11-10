/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e0538; name: FUN_001e0538
 */


undefined8 FUN_001e0538(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((-1 < *(long *)(param_1 + 4000)) && (*(long *)(param_1 + 0x7e8) != 0)) {
    if (*(long *)(param_1 + 4000) < *(long *)(param_1 + 0x7e0)) {
      if (*(long *)(param_1 + 0x1108) == 0) {
        *(undefined8 *)(param_1 + 0x1108) = param_2;
        *(undefined8 *)(param_1 + 0x1110) = param_3;
      }
      else {
        iVar1 = FUN_001e0e28(param_2,param_3,*(long *)(param_1 + 0x1108),
                             *(undefined8 *)(param_1 + 0x1110));
        if (*(long *)(param_1 + 0x7e8) * 1000 <= (long)iVar1) {
          FUN_001db9c8(param_1,
                       "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds"
                       ,*(undefined8 *)(param_1 + 0x7e0));
          return 0x1c;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1108) = 0;
    }
  }
  if (*(long *)(param_1 + 0x7e0) != 0) {
    FUN_001cea34(param_1,1000,7);
  }
  return 0;
}


