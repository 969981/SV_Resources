/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


