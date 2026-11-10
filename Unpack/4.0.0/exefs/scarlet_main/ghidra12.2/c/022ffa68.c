/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ffa68; name: FUN_022ffa68
 */


void FUN_022ffa68(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = &LAB_02b83920;
  if (DAT_048464e8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_023025d8(&local_50,param_2,puVar1,0);
  *param_1 = 1;
  local_38 = local_50;
  uStack_30 = uStack_48;
  local_28 = local_40;
  FUN_02302648(param_1 + 8,&local_38);
  return;
}


