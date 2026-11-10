/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


