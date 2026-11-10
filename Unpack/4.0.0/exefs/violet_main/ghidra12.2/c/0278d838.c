/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278d838; name: FUN_0278d838
 */


void FUN_0278d838(byte *param_1,long param_2)

{
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  byte local_24 [4];
  
  if (param_2 != 0) {
    local_24[0] = *param_1 & 7;
    FUN_0278d8c4(param_2,local_24);
    local_28[0] = *param_1 >> 3 & 1;
    FUN_0278d924(param_2,local_28);
    local_2c[0] = *param_1 >> 4;
    FUN_0278d974(param_2,local_2c);
    local_30[0] = param_1[1] & 0xf;
    FUN_0278d9dc(param_2,local_30);
  }
  return;
}


