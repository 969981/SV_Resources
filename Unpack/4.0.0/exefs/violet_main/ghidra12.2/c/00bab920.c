/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bab920; name: FUN_00bab920
 */


void FUN_00bab920(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + 8);
  if ((*pbVar2 & 1) == 0) {
    if (*pbVar2 >> 1 == 0) goto LAB_00bab960;
  }
  else if (*(long *)(param_1 + 0x10) == 0) goto LAB_00bab960;
  std::string::append((char *)pbVar2);
LAB_00bab960:
  pbVar1 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar1 = param_4 + 1;
  }
  std::string::append((char *)pbVar2,(ulong)pbVar1);
  return;
}


