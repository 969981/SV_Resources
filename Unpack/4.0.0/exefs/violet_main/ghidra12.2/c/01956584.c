/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01956584; name: FUN_01956584
 */


void FUN_01956584(byte *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  byte *pbVar2;
  
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  pbVar2 = param_1 + 0x10;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  bVar1 = FUN_019565cc(param_2,pbVar2,param_3,param_4,param_5);
  *param_1 = bVar1 & 1;
  return;
}


