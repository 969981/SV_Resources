/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cabd80; name: FUN_01cabd80
 */


void FUN_01cabd80(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  uVar1 = FUN_018b8fd8();
  if ((uVar1 & 1) != 0) {
switchD_01cabdd8_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    uVar2 = FUN_01cac4e4(*(long *)(param_2 + 8) + 0x28);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  case 1:
    uVar2 = FUN_01cac4e4(*(long *)(param_2 + 8) + 0x28);
    FUN_019a2fd0(&local_28,uVar2);
    uVar2 = local_28;
    *param_1 = 1;
    local_28 = 0;
    *(undefined8 *)(param_1 + 8) = uVar2;
    FUN_019a29b4(&local_28);
    return;
  case 2:
    FUN_01cac534(auStack_38,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_01cac578(param_1 + 8,auStack_38);
    puVar3 = auStack_38;
    break;
  case 3:
    FUN_01cac534(auStack_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_01cac578(param_1 + 8,auStack_48);
    puVar3 = auStack_48;
    break;
  default:
    goto switchD_01cabdd8_default;
  }
  FUN_01cac004(puVar3);
  return;
}


