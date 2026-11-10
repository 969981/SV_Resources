/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00533030; name: FUN_00533030
 */


void FUN_00533030(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0053305c to 00533063 has its CatchHandler @ 00533070 */
  FUN_00532da0(pbVar2,uVar1,param_1);
  return;
}


