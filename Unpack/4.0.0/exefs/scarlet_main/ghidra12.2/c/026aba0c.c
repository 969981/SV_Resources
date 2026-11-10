/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026aba0c; name: FUN_026aba0c
 */


void FUN_026aba0c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  uVar2 = FUN_02673450();
  if ((uVar2 & 1) != 0) {
switchD_026aba64_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    lVar4 = *(long *)(param_2 + 8);
    uVar2 = FUN_026ac268(lVar4 + 0x28);
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar4;
    return;
  case 1:
    lVar4 = *(long *)(param_2 + 8);
    uVar2 = FUN_026ac268(lVar4 + 0x28);
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    FUN_026ac340(&local_28,lVar4);
    uVar1 = local_28;
    *param_1 = 1;
    local_28 = 0;
    *(undefined8 *)(param_1 + 8) = uVar1;
    FUN_0269f2b8(&local_28);
    return;
  case 2:
    FUN_026ac3fc(auStack_38,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_026ac444(param_1 + 8,auStack_38);
    puVar3 = auStack_38;
    break;
  case 3:
    FUN_026ac3fc(auStack_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_026ac444(param_1 + 8,auStack_48);
    puVar3 = auStack_48;
    break;
  default:
    goto switchD_026aba64_default;
  }
  FUN_0269f330(puVar3);
  return;
}


