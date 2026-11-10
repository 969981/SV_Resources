/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071e3bc; name: FUN_0071e3bc
 */


void FUN_0071e3bc(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long local_50;
  long lStack_48;
  long local_40;
  
  lStack_48 = param_3[1];
  local_50 = *param_3;
  pbVar1 = *(byte **)(*param_3 + 8);
  local_40 = param_3[2];
  FUN_0071e638(param_3);
  FUN_0071e478(param_2[2],&local_50);
  if (pbVar1 != (byte *)0x0 && *param_2 == 0) {
    if ((pbVar1[0x18] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar1 + 0x28));
    }
    if ((*pbVar1 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar1 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar1);
  }
  lVar3 = param_3[1];
  lVar2 = *param_3;
  param_1[2] = param_3[2];
  param_1[1] = lVar3;
  *param_1 = lVar2;
  return;
}


