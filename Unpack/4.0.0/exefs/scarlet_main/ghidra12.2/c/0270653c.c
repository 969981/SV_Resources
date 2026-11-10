/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270653c; name: FUN_0270653c
 */


void FUN_0270653c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_18;
  
  local_40[0] = 0;
  local_38 = 0;
  local_18 = &DAT_04859d88;
  auVar2 = FUN_02706640(&local_18,param_2 + 0x20,local_40);
  puVar1 = auVar2._0_8_;
  if ((auVar2._8_8_ & 0xff) != 0) {
    FUN_027066ac(&local_18,param_2,local_40);
    puVar1 = local_18;
  }
  *param_1 = puVar1;
  *(char *)(param_1 + 1) = auVar2[8];
  return;
}


