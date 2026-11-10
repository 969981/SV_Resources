/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00820b90; name: FUN_00820b90
 */


undefined8 FUN_00820b90(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = (int)DAT_03cb5530;
  uVar1 = (ulong)DAT_03cb5530 >> 0x20;
  *param_1 = 0;
  *(int *)(param_1 + 2) = param_2;
  *(int *)((long)param_1 + 0x14) = param_2 + 0x61c8864f;
  param_1[1] = CONCAT44(param_2 + (int)uVar1,param_2 + iVar2);
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return 0;
}


