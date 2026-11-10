/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019356cc; name: FUN_019356cc
 */


void FUN_019356cc(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  puVar1 = &LAB_008faeb8;
  if (DAT_04804398 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_1c = param_4;
  uStack_18 = param_3;
  local_14 = param_2;
  FUN_01935718(param_1,puVar1,0,&local_14,&uStack_18,&local_1c);
  return;
}


