/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e37ee8; name: FUN_02e37ee8
 */


undefined8 FUN_02e37ee8(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    if (2 < uVar1) {
      return 1;
    }
    uVar2 = (**(code **)(&DAT_045ff4c0 + (long)(int)uVar1 * 0x10))
                      (param_1 + (*(long *)(&DAT_045ff4c8 + (long)(int)uVar1 * 0x10) >> 1),
                       (undefined4 *)(param_1 + 100));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *param_2 = *param_2 + 1;
  return 0;
}


