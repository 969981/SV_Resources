/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ed6a0; name: FUN_007ed6a0
 */


void FUN_007ed6a0(long *param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar2 = 1;
  if ((bVar1 & 1) != 0) {
    uVar2 = 2;
  }
  if ((bVar1 & 2) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((bVar1 & 4) != 0) {
    uVar2 = uVar2 + 4;
  }
  if ((bVar1 & 8) != 0) {
    uVar2 = uVar2 + 8;
  }
  memcpy(param_2,(void *)(*param_1 + (ulong)uVar2),(ulong)*(ushort *)((long)param_1 + 0x2a));
  return;
}


