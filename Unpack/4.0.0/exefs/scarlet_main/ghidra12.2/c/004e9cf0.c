/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e9cf0; name: FUN_004e9cf0
 */


undefined8
FUN_004e9cf0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < *(int *)(param_3 + 0x38)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_004e9cf0(param_1,param_2,
                           *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar2 * 8 + 8),param_4,
                           param_5);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_3 + 0x38));
  }
  if (0 < *(int *)(param_3 + 0x80)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_004e9dbc(param_1,param_2,
                           *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar2 * 8 + 8),param_4,
                           param_5);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_3 + 0x80));
  }
  return 1;
}


