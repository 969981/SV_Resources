/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02296408; name: FUN_02296408
 */


undefined1  [16] FUN_02296408(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x130) == 0) {
    return ZEXT816(0);
  }
  pauVar1 = (undefined1 (*) [16])(*(long *)(param_1 + 0x130) + 0x40);
  auVar2._0_8_ = *(undefined8 *)*pauVar1;
  auVar3 = NEON_ext(*pauVar1,*pauVar1,8,1);
  auVar2._8_4_ = auVar3._0_4_;
  auVar2._12_4_ = 0;
  return auVar2;
}


