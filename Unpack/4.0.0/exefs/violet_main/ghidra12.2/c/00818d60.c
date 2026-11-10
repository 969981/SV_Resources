/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00818d60; name: FUN_00818d60
 */


undefined8 FUN_00818d60(byte *param_1,long param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined4 local_18 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  pbVar2 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
  }
  uVar1 = FUN_00818dd0(2,pbVar2,local_18);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 8) = 2;
    *(undefined4 *)(param_2 + 0xc) = local_18[0];
  }
  return uVar1;
}


