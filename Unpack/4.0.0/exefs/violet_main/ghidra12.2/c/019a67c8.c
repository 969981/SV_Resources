/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a67c8; name: FUN_019a67c8
 */


void FUN_019a67c8(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  uVar1 = FUN_018b8fd8();
  if ((uVar1 & 1) != 0) {
switchD_019a6808_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    uVar2 = FUN_01cb1a4c(*(long *)(param_2 + 8) + 0x28);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  case 1:
    uVar2 = FUN_01cb1a4c(*(long *)(param_2 + 8) + 0x28);
    FUN_019d9e30(&local_28,uVar2);
    uVar2 = local_28;
    *param_1 = 1;
    local_28 = 0;
    *(undefined8 *)(param_1 + 8) = uVar2;
    FUN_0190cfb0(&local_28);
    return;
  case 2:
    FUN_01cb1aa8(auStack_38,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_01cb1aec(param_1 + 8,auStack_38);
    puVar3 = auStack_38;
    break;
  case 3:
    FUN_01cb1aa8(auStack_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_01cb1aec(param_1 + 8,auStack_48);
    puVar3 = auStack_48;
    break;
  default:
    goto switchD_019a6808_default;
  }
  FUN_01cb15b4(puVar3);
  return;
}


