/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00343f80; name: FUN_00343f80
 */


ulong FUN_00343f80(int *param_1,ulong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 1)) {
    uVar3 = param_1[4];
    uVar1 = (uint)param_2;
    if ((int)uVar3 <= param_3) {
      uVar1 = uVar3;
    }
    uVar2 = (uint)param_2;
    if ((int)(param_2 >> 0x20) <= (int)uVar3) {
      uVar2 = uVar1;
    }
    param_2 = (ulong)uVar2;
  }
  return param_2 & 0xffffffff;
}


