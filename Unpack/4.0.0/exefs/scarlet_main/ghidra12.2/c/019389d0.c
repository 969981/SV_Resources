/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019389d0; name: FUN_019389d0
 */


undefined8 FUN_019389d0(long param_1)

{
  undefined1 auVar1 [12];
  
  if (*(long *)(param_1 + 0x210) != 0) {
    auVar1 = FUN_01938a30(param_1 + 0x198);
    if (((auVar1._8_4_ == 0) && ((auVar1._0_8_ >> 0x20 & 0xff) != 0)) &&
       ((*(long *)(param_1 + 0x1a0) == 0 ||
        ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x1e8) & 1) == 0)))) {
      return 0;
    }
  }
  return 1;
}


