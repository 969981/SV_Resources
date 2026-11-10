/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


