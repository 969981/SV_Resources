/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b04a10; name: FUN_02b04a10
 */


void FUN_02b04a10(long param_1,ushort param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  
  lVar3 = param_1 + (ulong)param_2 * 0x18;
  uVar1 = 1 << (ulong)(param_3 & 0x1f);
  if ((param_2 & 0xfffe) == 0x298 || param_2 == 0x2e8) {
    uVar1 = 1;
  }
  puVar2 = (uint *)(param_1 + 0x4934);
  *(uint *)(lVar3 + 0x44) = *(uint *)(lVar3 + 0x44) | uVar1;
  if (param_2 != 0x30a) {
    if (param_2 == 0x36b) {
      puVar2 = (uint *)(param_1 + 0x524c);
    }
    else {
      if (param_2 != 0x3a6) {
        return;
      }
      puVar2 = (uint *)(param_1 + 0x57d4);
    }
  }
  *puVar2 = *puVar2 | 3;
  return;
}


