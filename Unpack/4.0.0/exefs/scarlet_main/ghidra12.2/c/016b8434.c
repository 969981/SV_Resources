/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b8434; name: FUN_016b8434
 */


void FUN_016b8434(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_18;
  undefined2 local_14 [2];
  
  puVar1 = PTR_FUN_047d4bc0;
  if (DAT_04809c20 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_14[0] = param_2;
  puVar2 = (undefined8 *)FUN_016b84b8(param_3);
  uStack_40 = puVar2[1];
  local_38 = puVar2[2];
  local_48 = *puVar2;
  local_18 = param_4;
  FUN_016b854c(param_1,puVar1,0,local_14,&local_48,&local_18);
  return;
}


