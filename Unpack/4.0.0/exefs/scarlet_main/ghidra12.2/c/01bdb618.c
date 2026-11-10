/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bdb618; name: FUN_01bdb618
 */


uint FUN_01bdb618(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*param_1 != 0) {
    (*(code *)**(undefined8 **)(*param_1 + 8))();
    uVar2 = FUN_01bdb1a4();
    if ((uVar2 & 1) != 0) {
      uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
      return ~uVar1 & 1;
    }
  }
  return 0;
}


