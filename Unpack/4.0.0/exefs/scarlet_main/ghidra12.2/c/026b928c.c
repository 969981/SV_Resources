/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b928c; name: FUN_026b928c
 */


void FUN_026b928c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  uVar2 = FUN_0267d7c4();
  if ((uVar2 & 1) != 0) {
switchD_026b92e4_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    lVar4 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar4 + 0x28))();
    uVar2 = FUN_026b9f6c();
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar4;
    return;
  case 1:
    lVar4 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar4 + 0x28))();
    uVar2 = FUN_026b9f6c();
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    FUN_026ba038(&local_28,lVar4);
    uVar1 = local_28;
    *param_1 = 1;
    local_28 = 0;
    *(undefined8 *)(param_1 + 8) = uVar1;
    FUN_026b96d4(&local_28);
    return;
  case 2:
    FUN_026ba0f4(auStack_38,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_026ba144(param_1 + 8,auStack_38);
    puVar3 = auStack_38;
    break;
  case 3:
    FUN_026ba0f4(auStack_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_026ba144(param_1 + 8,auStack_48);
    puVar3 = auStack_48;
    break;
  default:
    goto switchD_026b92e4_default;
  }
  FUN_026b974c(puVar3);
  return;
}


