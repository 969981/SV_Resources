/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1f594; name: FUN_01e1f594
 */


undefined1  [16] FUN_01e1f594(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar4;
  undefined1 auVar3 [16];
  
  uVar4 = *(ulong *)(param_1 + 0x1a8);
  uVar2 = *(ulong *)(param_1 + 0x1a0);
  uVar1 = FUN_01e1f608(uVar2 >> 0x20,*(undefined4 *)(param_1 + 0x290),
                       *(undefined4 *)(param_1 + 0x294),param_1 + 0x30,0,
                       *(undefined1 *)(param_1 + 0x14f));
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = (int)uVar2;
  auVar3._8_8_ = uVar4 & 0xffffffff;
  return auVar3;
}


