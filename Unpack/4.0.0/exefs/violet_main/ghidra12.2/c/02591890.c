/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02591890; name: FUN_02591890
 */


undefined8 FUN_02591890(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == '\0') {
    uVar1 = FUN_02592d00(param_1,0);
    return uVar1;
  }
  FUN_00c46da0((double)*(float *)(param_2 + 0x10),param_1);
  FUN_00c46da0((double)*(float *)(param_2 + 0x14),param_1);
  FUN_00c46da0((double)*(float *)(param_2 + 0x18),param_1);
  FUN_00c46da0((double)*(float *)(param_2 + 0x1c),param_1);
  return 4;
}


