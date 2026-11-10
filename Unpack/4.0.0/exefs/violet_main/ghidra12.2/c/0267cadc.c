/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0267cadc; name: FUN_0267cadc
 */


void FUN_0267cadc(undefined1 *param_1,undefined1 *param_2)

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
switchD_0267cb34_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    lVar4 = *(long *)(param_2 + 8);
    uVar2 = FUN_0100d208(lVar4 + 0x28);
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar4;
    return;
  case 1:
    lVar4 = *(long *)(param_2 + 8);
    uVar2 = FUN_0100d208(lVar4 + 0x28);
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    FUN_0267d818(&local_28,lVar4);
    uVar1 = local_28;
    *param_1 = 1;
    local_28 = 0;
    *(undefined8 *)(param_1 + 8) = uVar1;
    FUN_0267aed8(&local_28);
    return;
  case 2:
    FUN_0267d8d4(auStack_38,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_0267d91c(param_1 + 8,auStack_38);
    puVar3 = auStack_38;
    break;
  case 3:
    FUN_0267d8d4(auStack_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_0267d91c(param_1 + 8,auStack_48);
    puVar3 = auStack_48;
    break;
  default:
    goto switchD_0267cb34_default;
  }
  FUN_0267af50(puVar3);
  return;
}


