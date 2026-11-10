/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c9184; name: FUN_027c9184
 */


undefined1  [16] FUN_027c9184(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((*(char *)(param_1 + 0x100) == '\0') ||
     ((ulong)((*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) * -0xf0f0f0f0f0f0f0f)
      <= (param_2 & 0xffff))) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  }
  auVar2._8_8_ = *(long *)(param_1 + 0x108) + (param_2 & 0xffff) * 0x88;
  auVar2._0_8_ = 1;
  return auVar2;
}


