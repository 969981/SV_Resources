/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cd110; name: FUN_003cd110
 */


undefined8 FUN_003cd110(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  code *pcVar7;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (param_3 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      FUN_003f3160(*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    iVar4 = FUN_003b32e0(param_1);
    if (iVar4 == 0) {
      FUN_003c3950(param_1,0x50,0x255,0x44,"external/openssl/ssl/statem/statem_lib.c",0x447);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) {
    iVar4 = **(int **)(param_1 + 8);
    if ((((0x303 < iVar4) && (iVar4 != 0x10000)) && (*(int *)(param_1 + 0x38) == 0)) &&
       (*(int *)(param_1 + 0x898) == 4)) {
      *(undefined4 *)(param_1 + 0x898) = 1;
    }
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x740) = 0;
    FUN_003acda0(param_1);
    piVar5 = *(int **)(param_1 + 8);
    if (*(int *)(param_1 + 0x38) == 0) {
      if ((*(uint *)(*(long *)(piVar5 + 0x30) + 0x60) >> 3 & 1) == 0) {
        if ((*piVar5 < 0x304) || (*piVar5 == 0x10000)) goto LAB_003cd278;
        if ((*(byte *)(*(long *)(param_1 + 0x878) + 0x48) & 1) != 0) {
          FUN_003b9ac0(*(long *)(param_1 + 0x878),*(undefined8 *)(param_1 + 0x5d0));
        }
      }
      else {
LAB_003cd278:
        FUN_003b4f90(param_1,1);
      }
      if (*(int *)(param_1 + 200) != 0) {
        piVar5 = (int *)(*(long *)(param_1 + 0x878) + 0x94);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined **)(param_1 + 0x30) = PTR_LAB_047cd1a8;
      piVar5 = (int *)(*(long *)(param_1 + 0x878) + 0x78);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if ((*(uint *)(*(long *)(piVar5 + 0x30) + 0x60) >> 3 & 1) == 0) {
        if ((*piVar5 < 0x304) || (*piVar5 == 0x10000)) goto LAB_003cd1e0;
      }
      else {
LAB_003cd1e0:
        FUN_003b4f90(param_1,2);
      }
      piVar5 = (int *)(*(long *)(param_1 + 0x660) + 0x84);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined **)(param_1 + 0x30) = PTR_LAB_047cd1a0;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xb0);
      *(undefined2 *)(lVar6 + 0x110) = 0;
      *(undefined4 *)(lVar6 + 0x10c) = 0;
      FUN_003a0f30(param_1);
    }
  }
  pcVar7 = *(code **)(param_1 + 0x630);
  if (pcVar7 == (code *)0x0) {
    pcVar7 = *(code **)(*(long *)(param_1 + 0x660) + 0x110);
    FUN_003c39e0(param_1,0);
    if (pcVar7 == (code *)0x0) goto LAB_003cd368;
  }
  else {
    FUN_003c39e0(param_1,0);
  }
  if (((((iVar1 != 0) ||
        ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0)) ||
       (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) ||
      ((iVar1 == 0x10000 || (*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0)))) ||
     (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)) {
    (*pcVar7)(param_1,0x20,1);
  }
LAB_003cd368:
  if (param_4 == 0) {
    FUN_003c39e0(param_1,1);
    return 2;
  }
  return 1;
}


