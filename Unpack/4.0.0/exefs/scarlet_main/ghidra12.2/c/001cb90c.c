/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cb90c; name: FUN_001cb90c
 */


int FUN_001cb90c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 0:
    goto switchD_001cb948_caseD_0;
  case 1:
    iVar1 = FUN_001cbad8(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x78));
    break;
  case 2:
    iVar1 = FUN_001cbbc4(param_1,*(undefined8 *)(param_2 + 0x20));
    if (iVar1 != 0x1a) break;
    goto switchD_001cb948_caseD_0;
  case 3:
    iVar1 = FUN_001cbd44(param_1,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x28),
                         *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                         *(undefined8 *)(param_2 + 0x40));
    break;
  case 4:
    lVar2 = FUN_001cbdd8(*param_1);
    if (lVar2 == 0) {
      iVar1 = 0x1b;
    }
    else {
      iVar1 = FUN_001cc24c(param_1,lVar2,1);
      if (iVar1 == 0) {
        for (lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0x10); lVar4 != 0;
            lVar4 = *(long *)(lVar4 + 0x10)) {
          lVar3 = FUN_001cbe5c(lVar2);
          if (lVar3 == 0) {
            iVar1 = 0x1b;
            goto joined_r0x001cbad0;
          }
          iVar1 = FUN_001cb90c(lVar3,lVar4);
          if (iVar1 != 0) break;
        }
      }
    }
    break;
  default:
    iVar1 = 0x2b;
    goto joined_r0x001cbad0;
  }
  if (iVar1 == 0) {
switchD_001cb948_caseD_0:
    if (*(long *)(param_2 + 0x58) == 0) {
      iVar1 = 0;
    }
    else {
      lVar2 = FUN_001e04a0();
      if (lVar2 == 0) {
        iVar1 = 0x1b;
      }
      else {
        iVar1 = FUN_001cbedc(param_1,lVar2,1);
        if (iVar1 != 0) {
          FUN_001e04f0(lVar2);
        }
      }
    }
  }
joined_r0x001cbad0:
  if (param_1 == (undefined8 *)0x0) {
    iVar1 = 0x17;
  }
  else {
    param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
    if ((((iVar1 != 0) ||
         (iVar1 = FUN_001cbf54(param_1,*(undefined8 *)(param_2 + 0x60)), iVar1 != 0)) ||
        (iVar1 = FUN_001cbfac(param_1,*(undefined8 *)(param_2 + 0x70)), iVar1 != 0)) ||
       (iVar1 = FUN_001cc004(param_1,*(undefined8 *)(param_2 + 0x68)), iVar1 != 0)) {
      FUN_001cb790(param_1);
    }
  }
  return iVar1;
}


