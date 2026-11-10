/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01155170; name: FUN_01155170
 */


void FUN_01155170(long param_1)

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
  FUN_01146124(&local_40);
  return;
}


