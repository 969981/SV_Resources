/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02782cdc; name: FUN_02782cdc
 */


undefined8 FUN_02782cdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 auStack_18 [8];
  
  FUN_02785618(auStack_18);
  local_50 = 0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,param_3);
  local_40 = *(undefined8 *)(param_3 + 0x10);
  local_38 = *(undefined1 *)(param_3 + 0x18);
  uVar1 = FUN_0278549c(param_1,auStack_18,&local_50,param_4,1);
  FUN_0278570c(&local_50);
  FUN_02782500(auStack_18);
  return uVar1;
}


