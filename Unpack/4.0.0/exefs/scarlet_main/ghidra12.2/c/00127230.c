/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00127230; name: FUN_00127230
 */


void FUN_00127230(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if ((*(uint *)(param_1 + 0xc0) & 1) != 0) {
    lVar1 = *(long *)(*(long *)*param_2 + 0x18);
    param_2[4] = param_2[4] + 4;
    FUN_00127080(param_1,*(ushort *)((long)param_2 + 0x3e) >> 3 & 4,0xffffffff,1,
                 *(undefined1 *)(lVar1 + 10));
    param_2[4] = param_2[4] + -4;
  }
  return;
}


