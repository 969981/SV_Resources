/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00316130; name: FUN_00316130
 */


undefined8 FUN_00316130(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((uint)param_1[1] <= param_2 - 0x3eU) {
    return 0;
  }
  uVar2 = param_1[6];
  uVar1 = (param_1[1] - param_2) + *param_1 + 0x3d;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  return *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
}


