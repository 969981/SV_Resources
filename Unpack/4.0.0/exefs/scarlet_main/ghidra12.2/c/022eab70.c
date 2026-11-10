/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022eab70; name: FUN_022eab70
 */


uint FUN_022eab70(undefined8 param_1,undefined4 param_2,byte param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte local_18 [4];
  undefined4 local_14;
  
  puVar1 = &LAB_022ecf50;
  if (DAT_04846450 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_18[0] = param_3 & 1;
  local_14 = param_2;
  uVar2 = FUN_022ed0a0(param_1,puVar1,0,&local_14,local_18);
  return uVar2 & 1;
}


