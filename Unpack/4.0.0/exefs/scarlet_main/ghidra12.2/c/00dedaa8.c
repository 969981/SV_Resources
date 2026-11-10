/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dedaa8; name: FUN_00dedaa8
 */


undefined1 FUN_00dedaa8(long param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *local_40;
  undefined2 local_38;
  undefined2 local_36;
  
  uVar2 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  local_36 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  local_38 = uVar2;
  switch(param_2) {
  case 0:
    local_40 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_00dedbf4(&local_40);
    break;
  case 1:
    local_40 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_00dedda8(&local_40);
    break;
  case 2:
    local_40 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_00dedf60(&local_40);
    break;
  case 3:
    local_40 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_00dee2d0(&local_40);
    break;
  case 4:
    local_40 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_00dee488(&local_40);
    break;
  case 5:
    local_40 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_00dee118(&local_40);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


