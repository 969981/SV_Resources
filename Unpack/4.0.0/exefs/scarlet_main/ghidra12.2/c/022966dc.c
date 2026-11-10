/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022966dc; name: FUN_022966dc
 */


undefined1  [16] FUN_022966dc(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x130) == 0) {
    return ZEXT816(0);
  }
  pauVar1 = (undefined1 (*) [16])(*(long *)(param_1 + 0x130) + 0x50);
  auVar2._0_8_ = *(undefined8 *)*pauVar1;
  auVar3 = NEON_ext(*pauVar1,*pauVar1,8,1);
  auVar2._8_4_ = auVar3._0_4_;
  auVar2._12_4_ = 0;
  return auVar2;
}


