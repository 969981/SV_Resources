/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02786228; name: FUN_02786228
 */


void FUN_02786228(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_8;
  
  DAT_0485dcc0 = DAT_0485dcc0 + 1;
  uVar2 = (ulong)DAT_0485dcc0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_045df730;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = 1;
  uVar1 = FUN_027862b8(param_2);
  FUN_027863d8(&local_28,uVar1);
  local_8 = param_1[3];
  param_1[3] = 0;
  FUN_02786464(&local_8);
  uVar1 = local_28;
  local_28 = 0;
  param_1[3] = uVar1;
  FUN_02786464(&local_28);
  return;
}


