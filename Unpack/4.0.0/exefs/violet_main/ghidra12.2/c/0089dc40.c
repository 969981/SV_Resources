/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089dc40; name: FUN_0089dc40
 */


void FUN_0089dc40(long param_1)

{
  ushort uVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar1 = FUN_02169b64();
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffff0;
  *(float *)(param_1 + 0x20) = (float)uVar1;
  return;
}


