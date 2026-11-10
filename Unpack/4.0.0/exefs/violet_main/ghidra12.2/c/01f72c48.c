/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f72c48; name: FUN_01f72c48
 */


void FUN_01f72c48(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
  }
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
  }
  FUN_01f72c6c(param_1,param_2,pbVar1,pbVar2);
  return;
}


