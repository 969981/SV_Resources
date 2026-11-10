/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02561800; name: FUN_02561800
 */


undefined8 FUN_02561800(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 2) {
    if (param_2 == 0) {
      param_2 = *(uint *)(param_1 + 0x270);
    }
    if ((param_2 == 3) ||
       ((uVar1 = 0, param_2 < 8 && ((1 << (ulong)(param_2 & 0x1f) & 0xc2U) != 0)))) {
      uVar1 = 1;
      *(uint *)(param_1 + 0x270) = param_2;
      *(undefined1 *)(param_1 + 0x3d0) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


