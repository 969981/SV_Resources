/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006eb510; name: FUN_006eb510
 */


void FUN_006eb510(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x48);
  lVar1 = param_2 + 0x51;
  if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x60);
  }
                    /* try { // try from 006eb53c to 006eb57f has its CatchHandler @ 006eb58c */
  FUN_006eb590(param_1,lVar1);
  lVar1 = param_2 + 0x71;
  if ((*(byte *)(param_2 + 0x70) & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x80);
  }
  FUN_006eb6b0(param_1,lVar1);
  uVar2 = (ulong)(*(byte *)(param_2 + 0x90) >> 1);
  lVar1 = param_2 + 0x91;
  if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x98);
    lVar1 = *(long *)(param_2 + 0xa0);
  }
  FUN_006eb7d0(param_1,lVar1,uVar2);
  return;
}


