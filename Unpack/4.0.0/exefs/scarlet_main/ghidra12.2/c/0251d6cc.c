/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0251d6cc; name: FUN_0251d6cc
 */


void FUN_0251d6cc(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_30;
  
  puVar1 = PTR_FUN_047df320;
  if (DAT_0484f298 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_60 = FUN_0251e5f8(param_6,puVar1,0);
  *param_1 = 1;
  uStack_50 = param_3;
  local_40 = param_4;
  uStack_30 = param_5;
  FUN_00d319d0(param_1 + 8,local_60);
  return;
}


