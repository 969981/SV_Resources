/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024eb0ac; name: FUN_024eb0ac
 */


void FUN_024eb0ac(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_FUN_047df190;
  if (DAT_0484f1a0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_70[0] = param_2;
  FUN_024ec55c(&local_60,param_3,puVar1,0,local_70);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_024e4ccc(param_1 + 8,&local_40);
  return;
}


