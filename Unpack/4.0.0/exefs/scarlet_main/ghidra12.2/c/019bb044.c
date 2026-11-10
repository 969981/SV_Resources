/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bb044; name: FUN_019bb044
 */


void FUN_019bb044(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  
  *param_1 = 0;
  puVar3 = (undefined8 *)(param_1 + 8);
  *puVar3 = 0;
  uVar1 = *param_2;
  *param_1 = uVar1;
  switch(uVar1) {
  case 0:
    uVar2 = *(undefined8 *)(param_2 + 8);
    break;
  case 1:
    local_28 = 0;
    *puVar3 = 0;
    FUN_019bae24(&local_28);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
    goto LAB_019bb0d4;
  case 3:
LAB_019bb0d4:
    FUN_01cb0100(param_1 + 8,param_2 + 8);
    return;
  default:
    goto switchD_019bb088_default;
  }
  *puVar3 = uVar2;
switchD_019bb088_default:
  return;
}


