/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025885c; name: FUN_0025885c
 */


void FUN_0025885c(undefined8 *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  *param_1 = 0;
  if (param_3 != 0) {
    param_3 = param_3 * 0x28;
    do {
      pbVar1 = (byte *)FUN_0025ad20(param_2);
      pbVar3 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        pbVar3 = pbVar1 + 1;
      }
      uVar2 = FUN_0025ad24(param_2);
      FUN_002588cc(param_1,pbVar3,uVar2);
      param_2 = param_2 + 0x28;
      param_3 = param_3 + -0x28;
    } while (param_3 != 0);
  }
  return;
}


