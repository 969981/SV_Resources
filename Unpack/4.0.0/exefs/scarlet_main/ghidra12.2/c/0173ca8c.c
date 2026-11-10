/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173ca8c; name: FUN_0173ca8c
 */


undefined8 FUN_0173ca8c(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  
  switch(*param_2) {
  case 0:
    if (*(char *)(param_1 + 0x12e) == '\0') {
      *(undefined1 *)(param_1 + 0x12e) = 1;
      (**(code **)(**(long **)(param_1 + 0x218) + 0xb0))();
    }
    FUN_0173cc9c(param_1);
    FUN_0173cd64(param_1);
    *param_2 = *param_2 + 1;
  case 1:
    *(code **)(param_1 + 0x308) = FUN_018f44d8;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
    goto LAB_0173cb18;
  case 2:
    uVar4 = *(ulong *)(param_1 + 0x310) & 1;
    pcVar3 = *(code **)(param_1 + 0x308);
    if (uVar4 != 0 || pcVar3 != (code *)0x0) {
      plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x310) >> 1));
      if (uVar4 != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar1);
      }
      uVar4 = (*pcVar3)(plVar1,param_1 + 0x318);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    iVar2 = 3;
    break;
  case 3:
    pcVar3 = *(code **)(**(long **)(param_1 + 0x218) + 0x90);
    goto LAB_0173cb10;
  case 4:
    pcVar3 = *(code **)(**(long **)(param_1 + 0x218) + 0x98);
LAB_0173cb10:
    uVar4 = (*pcVar3)();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    goto LAB_0173cb18;
  case 5:
    iVar2 = 8;
    break;
  case 6:
    iVar2 = 7;
    break;
  case 7:
    iVar2 = 5;
    break;
  case 8:
    *(code **)(param_1 + 0x308) = FUN_0147ab58;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
    FUN_0173cc1c(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),0,0);
    FUN_0173ce48(param_1);
LAB_0173cb18:
    iVar2 = *param_2 + 1;
    break;
  case 9:
    uVar4 = *(ulong *)(param_1 + 0x310) & 1;
    pcVar3 = *(code **)(param_1 + 0x308);
    if (uVar4 != 0 || pcVar3 != (code *)0x0) {
      plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x310) >> 1));
      if (uVar4 != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar1);
      }
      uVar4 = (*pcVar3)(plVar1,param_1 + 0x318);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    return 1;
  default:
    goto LAB_0173caf8;
  }
  *param_2 = iVar2;
LAB_0173caf8:
  return 0;
}


