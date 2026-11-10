/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113b7d0; name: FUN_0113b7d0
 */


void FUN_0113b7d0(long param_1)

{
  short sVar1;
  short sVar2;
  undefined *local_40;
  short local_38;
  undefined2 local_36;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  sVar2 = FUN_0113b8a0(*(undefined8 *)(param_1 + 0x70));
  if ((sVar1 == 0x1ed) && (sVar2 == 0x79)) {
    FUN_00e974e0(*(undefined8 *)(param_1 + 0x70));
    FUN_021f8278();
    return;
  }
  if ((sVar1 == 0x305) && (sVar2 == 0xe1)) {
    FUN_00e974e0(*(undefined8 *)(param_1 + 0x70));
    FUN_021f77f4();
    return;
  }
  local_36 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  local_40 = PTR_DAT_047d8ee0 + 0x10;
  local_38 = sVar1;
  FUN_01112d44(&local_40);
  return;
}


