/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e21c8c; name: FUN_01e21c8c
 */


undefined1  [16] FUN_01e21c8c(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    return ZEXT816(0);
  }
  pauVar1 = (undefined1 (*) [16])(*(long *)(param_1 + 0xb8) + 0xc0);
  auVar2._0_8_ = *(undefined8 *)*pauVar1;
  auVar3 = NEON_ext(*pauVar1,*pauVar1,8,1);
  auVar2._8_4_ = auVar3._0_4_;
  auVar2._12_4_ = 0;
  return auVar2;
}


