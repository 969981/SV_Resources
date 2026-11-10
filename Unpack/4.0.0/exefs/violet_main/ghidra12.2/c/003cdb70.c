/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cdb70; name: FUN_003cdb70
 */


bool FUN_003cdb70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar3 = *(int *)**(undefined8 **)(param_1 + 0x198);
  if (*param_1 == iVar3) {
    return true;
  }
  piVar5 = (int *)FUN_003a0d40();
  if (iVar3 == *piVar5) {
    piVar5 = &DAT_044a1498;
    iVar3 = DAT_044a1498;
  }
  else {
    iVar3 = *(int *)**(undefined8 **)(param_1 + 0x198);
    piVar5 = (int *)FUN_003a0dd0();
    if (iVar3 != *piVar5) {
      return false;
    }
    piVar5 = &DAT_044a1528;
    iVar3 = DAT_044a1528;
  }
  do {
    if (iVar3 == 0) {
      return false;
    }
    if (*(code **)(piVar5 + 4) == (code *)0x0) goto LAB_003cdc14;
    piVar6 = (int *)(**(code **)(piVar5 + 4))();
    iVar3 = *piVar6;
    iVar4 = param_1[0x1a7];
    if ((iVar4 == 0) || (iVar3 == iVar4)) {
LAB_003cdc74:
      iVar4 = FUN_003af490(param_1,9,0,iVar3,0);
      if (iVar4 != 0) {
        iVar4 = param_1[0x1a8];
        if ((iVar4 == 0) || (iVar3 == iVar4)) {
LAB_003cdc04:
          if (((*(ulong *)(piVar6 + 2) & (ulong)(uint)param_1[0x1a5]) == 0) &&
             (((*(byte *)(piVar6 + 1) >> 1 & 1) == 0 ||
              ((*(byte *)(*(long *)(param_1 + 0x154) + 0x1e) & 3) == 0)))) {
            return *param_1 == *piVar5;
          }
        }
        else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          if (iVar3 < iVar4) goto LAB_003cdc04;
        }
        else {
          iVar2 = 0xff00;
          if (iVar3 != 0x100) {
            iVar2 = iVar3;
          }
          iVar3 = 0xff00;
          if (iVar4 != 0x100) {
            iVar3 = iVar4;
          }
          if (iVar3 < iVar2) goto LAB_003cdc04;
        }
      }
    }
    else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      if (iVar4 <= iVar3) goto LAB_003cdc74;
    }
    else {
      iVar2 = 0xff00;
      if (iVar3 != 0x100) {
        iVar2 = iVar3;
      }
      iVar1 = 0xff00;
      if (iVar4 != 0x100) {
        iVar1 = iVar4;
      }
      if (iVar2 <= iVar1) goto LAB_003cdc74;
    }
LAB_003cdc14:
    iVar3 = piVar5[6];
    piVar5 = piVar5 + 6;
  } while( true );
}


