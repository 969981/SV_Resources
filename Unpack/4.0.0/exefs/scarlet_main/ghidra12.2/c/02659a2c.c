/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02659a2c; name: FUN_02659a2c
 */


void FUN_02659a2c(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  uVar1 = FUN_02650c90();
  if ((uVar1 & 1) != 0) {
switchD_02659a84_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    uVar2 = FUN_0265a2e8(*(long *)(param_2 + 8) + 0x28);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  case 1:
    uVar2 = FUN_0265a2e8(*(long *)(param_2 + 8) + 0x28);
    FUN_0265a338(&local_28,uVar2);
    uVar2 = local_28;
    *param_1 = 1;
    local_28 = 0;
    *(undefined8 *)(param_1 + 8) = uVar2;
    FUN_0265a018(&local_28);
    return;
  case 2:
    FUN_0265a3f4(auStack_38,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_0265a438(param_1 + 8,auStack_38);
    puVar3 = auStack_38;
    break;
  case 3:
    FUN_0265a3f4(auStack_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_0265a438(param_1 + 8,auStack_48);
    puVar3 = auStack_48;
    break;
  default:
    goto switchD_02659a84_default;
  }
  FUN_0265a090(puVar3);
  return;
}


