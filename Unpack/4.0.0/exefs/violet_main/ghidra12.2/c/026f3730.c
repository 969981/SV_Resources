/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f3730; name: FUN_026f3730
 */


int FUN_026f3730(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    param_2 = 0;
  }
  else if (*(int *)(param_1 + 0x11c) != param_2) {
    iVar4 = FUN_0011f640();
    if (1 < *(int *)(param_1 + 0x640) + 1U) {
      *(int *)(param_1 + 0x668) = (iVar4 - *(int *)(param_1 + 0x640)) + *(int *)(param_1 + 0x668);
      *(undefined4 *)(param_1 + 0x640) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x680) = 0;
    *(int *)(param_1 + 0x11c) = param_2;
    if ((*(int *)(param_1 + 300) != 0) &&
       (((iVar5 = *(int *)(*(long *)(param_1 + 0x1b8) + 0x5c), 0 < iVar5 && (iVar5 != 2)) ||
        (FUN_001209d0(param_1 + 0x520), *(int *)(param_1 + 300) != 0)))) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x1b8) + lVar6;
        (**(code **)(lVar1 + 0x198))(lVar1,param_2);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x1c0;
      } while (uVar7 < *(uint *)(param_1 + 300));
    }
    iVar5 = FUN_0011f640();
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 300);
      bVar3 = iVar4 != 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x69c) = 0;
        *(undefined4 *)(param_1 + 0x644) = 0;
      }
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x644) == 0) {
          bVar3 = false;
          *(undefined4 *)(param_1 + 0x69c) = 0;
        }
        else {
          bVar3 = false;
          *(int *)(param_1 + 0x69c) = iVar5 - *(int *)(param_1 + 0x644);
        }
      }
      else {
        bVar3 = false;
      }
    }
    if (((iVar2 != 0) &&
        (((iVar4 = *(int *)(*(long *)(param_1 + 0x1b8) + 0x5c), 0 < iVar4 && (iVar4 != 2)) ||
         (FUN_00120750(param_1 + 0x520), *(int *)(param_1 + 300) != 0)))) &&
       (*(int *)(*(long *)(param_1 + 0x1b8) + 0x5c) == 1)) {
      FUN_001025d0(param_1);
    }
    if (bVar3) {
      *(int *)(param_1 + 0x644) = iVar5 - *(int *)(param_1 + 0x69c);
    }
    if (DAT_047ec42c != 0) {
      FUN_00120bc0(&DAT_047ec430,1);
    }
    param_2 = *(int *)(param_1 + 0x11c);
  }
  return param_2;
}


