/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298b24c; name: FUN_0298b24c
 */


undefined1
FUN_0298b24c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = *param_2;
  local_14 = 1;
  local_30 = param_3;
  uStack_28 = param_4;
  local_20 = param_5;
  FUN_01461214();
  uVar1 = FUN_014808b4();
  FUN_014808bc(uVar1,local_38,&local_30);
  return local_38[0];
}


