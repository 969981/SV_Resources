/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02155570; name: FUN_02155570
 */


undefined8 FUN_02155570(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  
  if ((param_3 & 1) != 0) {
    if (param_2 != 0) {
      uVar1 = FUN_02154ccc(param_1);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x84) = 1;
      *(undefined1 *)(param_1 + 0x81) = 0;
      return 1;
    }
    FUN_02154b8c(param_1);
  }
  return 1;
}


