/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfce54; name: FUN_01cfce54
 */


void FUN_01cfce54(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_48 = param_5;
  uStack_44 = param_4;
  uVar3 = FUN_01cf7688(param_6);
  FUN_01d030f4(auStack_40,param_3,uVar1,uVar2,&uStack_44,&local_48,uVar3);
  FUN_01d025c0(param_1,auStack_40);
  FUN_01d02618(auStack_40);
  return;
}


