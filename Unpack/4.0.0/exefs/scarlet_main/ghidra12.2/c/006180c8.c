/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006180c8; name: FUN_006180c8
 */


undefined8 FUN_006180c8(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_005e0e04(&local_40,param_1[2],&uStack_18,0);
  if (local_40 == 0) {
    return 0;
  }
  local_48 = local_30;
  local_58 = local_40;
  uStack_50 = uStack_38;
  pbVar1 = *(byte **)(local_40 + 8);
  FUN_00617234(&local_58);
  FUN_00617074(param_1[2],&local_40);
  if ((pbVar1 != (byte *)0x0) && (*param_1 == 0)) {
    FUN_004eb088(pbVar1 + 0x18);
    if ((*pbVar1 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar1 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar1);
  }
  return 1;
}


