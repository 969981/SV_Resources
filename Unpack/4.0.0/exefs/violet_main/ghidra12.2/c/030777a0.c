/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030777a0; name: FUN_030777a0
 */


void FUN_030777a0(long param_1,int *param_2,long param_3,int *param_4)

{
  char *pcVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
    return;
  }
  piVar12 = (int *)(*(long *)(param_1 + 0x28) + (long)*param_4 * 4);
  do {
    iVar7 = *piVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar4) {
      *piVar12 = -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != -1) {
    lVar6 = 0;
    do {
      pcVar1 = (char *)(*(long *)(param_1 + 0x38) + (long)iVar7 + lVar6);
      lVar6 = lVar6 + 1;
    } while (*pcVar1 != -1);
    *param_2 = *param_2 + (int)lVar6;
  }
  lVar6 = *(long *)(param_3 + 0x20);
  iVar7 = *param_4;
  iVar5 = iVar7 - *(int *)(lVar6 + 0x20);
  if (iVar7 < *(int *)(lVar6 + 0x20)) {
    lVar8 = *(long *)(lVar6 + 0x18);
    iVar5 = iVar7;
    if (*(int *)(lVar6 + 0x98) != 0) {
      iVar5 = *(int *)(*(long *)(lVar6 + 0x90) + (long)iVar7 * 4);
    }
    if (iVar5 == -1) {
      iVar5 = iVar7;
      goto LAB_03077858;
    }
    plVar9 = (long *)(lVar6 + 0xb0);
  }
  else {
    plVar9 = (long *)(lVar6 + 0xd0);
  }
  lVar8 = *plVar9;
LAB_03077858:
  piVar12 = (int *)(lVar8 + (long)iVar5 * 0x10);
  sVar2 = (short)piVar12[2];
  iVar5 = (int)sVar2;
  if (sVar2 != 0) {
    lVar6 = (long)*piVar12;
    lVar10 = lVar6 << 1;
    lVar8 = lVar6 * 0x14;
    do {
      *(undefined2 *)(*(long *)(param_1 + 0x50) + lVar10) = 0xff00;
      lVar11 = *(long *)(param_3 + 0x20);
      if (lVar6 < *(int *)(lVar11 + 0x30)) {
        if (*(int *)(lVar11 + 0x78) == 0) {
          iVar7 = (int)lVar6;
        }
        else {
          iVar7 = *(int *)(*(long *)(lVar11 + 0x70) + lVar6 * 4);
        }
        if (iVar7 == -1) {
          piVar12 = (int *)(*(long *)(lVar11 + 0x28) + lVar6 * 0x14);
        }
        else {
          piVar12 = (int *)(*(long *)(lVar11 + 0xc0) + (long)iVar7 * 0x14);
        }
      }
      else {
        piVar12 = (int *)(*(long *)(lVar11 + 0xe0) + (long)*(int *)(lVar11 + 0x30) * -0x14 + lVar8);
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x14;
      iVar5 = iVar5 + -1;
      lVar10 = lVar10 + 2;
      *(undefined1 *)(*(long *)(param_1 + 0x60) + (long)*piVar12) = 0xff;
    } while (iVar5 != 0);
    iVar7 = *param_4;
  }
  iVar5 = param_2[1];
  if (iVar7 <= param_2[1]) {
    iVar5 = iVar7;
  }
  param_2[1] = iVar5;
  return;
}


