/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298d688; name: FUN_0298d688
 */


undefined1 FUN_0298d688(long param_1)

{
  undefined8 uVar1;
  undefined1 unaff_w29;
  undefined1 auStack_a0 [128];
  
  FUN_010af048(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_0298d6e0(*(undefined8 *)(param_1 + 0x18));
  FUN_02987740(uVar1,auStack_a0 + 0x80,auStack_a0 + 0x88);
  return unaff_w29;
}


