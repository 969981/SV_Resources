/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188b9d4; name: FUN_0188b9d4
 */


undefined8 FUN_0188b9d4(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  int local_24;
  
  if (*param_2 == 2) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x218) + 0x448))
                      (*(long **)(param_1 + 0x218),&local_24);
    if ((uVar3 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x218) + 0x238))();
      if (local_24 == 0) {
        FUN_0147accc(param_1,1,param_1 + 0x348,param_1 + 0x360);
        (**(code **)(**(long **)(param_1 + 0x218) + 0x1d0))
                  (*(long **)(param_1 + 0x218),param_1 + 0x348,0,1,param_1 + 0x360);
        iVar2 = 3;
      }
      else {
        iVar2 = 4;
      }
      *param_2 = iVar2;
    }
    goto LAB_0188ba14;
  }
  uVar4 = 0;
  switch(*param_2) {
  case 0:
    piVar5 = *(int **)(param_1 + 0xf8);
    if (*piVar5 == 0) {
      iVar2 = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x31c) = 0x1f8;
      iVar2 = 1;
      *(undefined4 *)(param_1 + 0x340) = 0;
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(undefined8 *)(param_1 + 0x330) = 0;
      *(undefined8 *)(param_1 + 0x328) = 0;
      *(undefined2 *)(param_1 + 800) = 0x1100;
      *(undefined4 *)(param_1 + 0x324) = 1;
      iVar1 = *piVar5;
      *(undefined1 *)(param_1 + 0x321) = 0x21;
      *(int *)(param_1 + 0x328) = iVar1;
      FUN_0188bc30(param_1 + 0x31c,0);
      (**(code **)(**(long **)(param_1 + 0x218) + 0x1f8))
                (*(long **)(param_1 + 0x218),*piVar5,param_1 + 0x31c,0,0,1,0);
    }
    *param_2 = iVar2;
    return 0;
  case 1:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x218) + 0x230))();
    if ((uVar3 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x218) + 0x440))(*(long **)(param_1 + 0x218),1,2);
      *param_2 = 2;
      return 0;
    }
    break;
  default:
    goto switchD_0188ba54_caseD_2;
  case 3:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x218) + 0x1d8))();
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_0188bc38(param_1 + 0x360);
      if (((uVar3 & 1) == 0) && (iVar2 = FUN_0188bc48(param_1 + 0x360), (iVar2 - 1U & 0xff) < 5)) {
        FUN_015d8d70(param_1 + 0x220,0,iVar2);
        iVar2 = 5;
      }
      else {
        iVar2 = 4;
      }
      *param_2 = iVar2;
      return 0;
    }
    break;
  case 4:
    *(undefined8 *)(param_1 + 0x220) = 0;
    *param_2 = 5;
  case 5:
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x220);
    uVar4 = 1;
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x228);
    FUN_0132746c(param_1,param_1 + 0x138,200);
    goto switchD_0188ba54_caseD_2;
  }
LAB_0188ba14:
  uVar4 = 0;
switchD_0188ba54_caseD_2:
  return uVar4;
}


