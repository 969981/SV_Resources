/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02692740; name: FUN_02692740
 */


void FUN_02692740(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined8 local_8;
  
  puVar2 = auStack_40;
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) == 0) goto switchD_02692774_default;
    break;
  case 2:
  case 3:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_02692774_default;
    break;
  default:
    goto switchD_02692774_default;
  }
  switch(*param_2) {
  case 0:
    uVar1 = FUN_026962bc(*(long *)(param_2 + 8) + 0x28);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = uVar1;
    return;
  case 1:
    uVar1 = FUN_026962bc(*(long *)(param_2 + 8) + 0x28);
    FUN_0269630c(&local_8,uVar1);
    uVar1 = local_8;
    *param_1 = 1;
    local_8 = 0;
    *(undefined8 *)(param_1 + 8) = uVar1;
    FUN_02692cc8(&local_8);
    return;
  case 2:
    FUN_026963c8(auStack_30,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_0269640c(param_1 + 8,auStack_30);
    puVar2 = auStack_30;
    break;
  case 3:
    FUN_026963c8(auStack_40,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_0269640c(param_1 + 8,auStack_40);
    break;
  default:
switchD_02692774_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  FUN_02692d40(puVar2);
  return;
}


