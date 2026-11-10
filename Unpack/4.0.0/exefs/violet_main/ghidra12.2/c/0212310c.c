/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212310c; name: FUN_0212310c
 */


uint FUN_0212310c(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 local_18;
  
  local_18 = 0x8c27e605ec469f9;
  uVar1 = FUN_01a8906c(param_1,&local_18);
  switch(uVar1) {
  case 0:
    pcVar3 = "UI_DECIDE";
    break;
  default:
    pcVar3 = "UI_CANCEL";
    break;
  case 3:
    uVar4 = FUN_00f33290("UI_DECIDE");
    if (((uVar4 & 1) != 0) || (uVar4 = FUN_00f33290("UI_CANCEL"), (uVar4 & 1) != 0)) {
      uVar2 = 1;
      goto LAB_02123170;
    }
  case 2:
    pcVar3 = "UI_PLUS";
  }
  uVar2 = FUN_00f33290(pcVar3);
LAB_02123170:
  return uVar2 & 1;
}


