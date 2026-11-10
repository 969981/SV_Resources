/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278580c; name: FUN_0278580c
 */


undefined8 FUN_0278580c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  uVar1 = FUN_0278549c(param_1,auStack_18,&local_50,param_4,0);
  FUN_0278570c(&local_50);
  FUN_02782500(auStack_18);
  return uVar1;
}


