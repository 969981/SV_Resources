/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088562c; name: FUN_0088562c
 */


ulong FUN_0088562c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_008f0470(&local_50);
  local_50 = CONCAT44(8,(undefined4)local_50);
  lVar1 = FUN_008f06e0(param_1,&local_50);
  local_50 = 0;
  uStack_48 = 0;
  FUN_008f0470(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar2 = FUN_008f06e0(param_1,&local_50);
  local_50 = 0;
  uStack_48 = 0;
  FUN_008f0470(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar3 = FUN_008f06e0(param_1,&local_50);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_00fab560(&local_50);
  lVar4 = FUN_00fab550(param_1,&local_50);
  return (((lVar1 + 0x6fU & -lVar1) + lVar2 + 0xb & -lVar2) + lVar3 + 3 & -lVar3) + lVar4 + 3 &
         -lVar4;
}


