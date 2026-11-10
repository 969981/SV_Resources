/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b97424; name: FUN_02b97424
 */


void FUN_02b97424(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong local_10;
  ulong uStack_8;
  
  puVar2 = &local_10;
  local_10 = *(ulong *)(param_1 + 0x428);
  *(ulong *)(param_1 + 0x430) = param_2;
  uStack_8 = param_2;
  if ((param_2 & 0xff) != 0) {
    puVar1 = &local_10;
    if ((uint)(param_2 >> 0x20) <= (uint)(local_10 >> 0x20)) {
      puVar1 = &uStack_8;
    }
    puVar2 = &uStack_8;
    if ((local_10 & 0xff) != 0) {
      puVar2 = puVar1;
    }
  }
  *(ulong *)(param_1 + 0x420) = *puVar2;
  return;
}


