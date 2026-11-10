/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02998edc; name: FUN_02998edc
 */


void FUN_02998edc(long param_1,uint *param_2)

{
  short sVar1;
  undefined1 auStack_60 [64];
  
  if (*param_2 != (uint)*(byte *)(*(long *)(param_1 + 0x40) + 0xe2)) {
    do {
      sVar1 = FUN_00f515ec(*(undefined8 *)(param_1 + 0x50),auStack_60,0x10,0);
      if (sVar1 == 0xce) {
        return;
      }
    } while (sVar1 != 0xd4);
  }
  return;
}


