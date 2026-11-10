/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025708b0; name: FUN_025708b0
 */


void FUN_025708b0(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  undefined8 local_30;
  
  puVar1 = &LAB_02b9fbb4;
  if (DAT_04851ee8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_50 = FUN_02571c20(param_5,puVar1,0);
  *param_1 = 1;
  uStack_40 = param_3;
  local_30 = param_4;
  FUN_01287370(param_1 + 8,local_50);
  return;
}


