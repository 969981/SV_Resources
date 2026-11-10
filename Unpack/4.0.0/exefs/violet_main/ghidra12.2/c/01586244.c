/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01586244; name: FUN_01586244
 */


undefined8 FUN_01586244(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *local_20;
  undefined2 local_18;
  undefined2 local_16;
  
  switch(param_2) {
  case 0:
    local_18 = *(undefined2 *)(param_1 + 0x710);
    local_16 = *(undefined2 *)(param_1 + 0x718);
    local_20 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_01586390(&local_20);
    break;
  case 1:
    local_18 = *(undefined2 *)(param_1 + 0x710);
    local_16 = *(undefined2 *)(param_1 + 0x718);
    local_20 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_01586544(&local_20);
    break;
  case 2:
    local_18 = *(undefined2 *)(param_1 + 0x710);
    local_16 = *(undefined2 *)(param_1 + 0x718);
    local_20 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_015866fc(&local_20);
    break;
  case 3:
    local_18 = *(undefined2 *)(param_1 + 0x710);
    local_16 = *(undefined2 *)(param_1 + 0x718);
    local_20 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_01586a6c(&local_20);
    break;
  case 4:
    local_18 = *(undefined2 *)(param_1 + 0x710);
    local_16 = *(undefined2 *)(param_1 + 0x718);
    local_20 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_01586c24(&local_20);
    break;
  case 5:
    local_18 = *(undefined2 *)(param_1 + 0x710);
    local_16 = *(undefined2 *)(param_1 + 0x718);
    local_20 = PTR_DAT_047d8ee0 + 0x10;
    uVar1 = FUN_015868b4(&local_20);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


