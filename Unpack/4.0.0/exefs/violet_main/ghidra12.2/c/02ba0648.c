/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ba0648; name: FUN_02ba0648
 */


undefined1  [16] FUN_02ba0648(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)*(undefined8 *)(param_1 + 0x90) +
                 (float)*(undefined8 *)(param_1 + 0x80) +
                 (float)*(undefined8 *)(param_1 + 0x60) + (float)*(undefined8 *)(param_1 + 0x50);
  auVar1._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  auVar1._8_4_ = (float)*(undefined8 *)(param_1 + 0x98) +
                 (float)*(undefined8 *)(param_1 + 0x88) +
                 (float)*(undefined8 *)(param_1 + 0x68) + (float)*(undefined8 *)(param_1 + 0x58);
  auVar1._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  return auVar1;
}


