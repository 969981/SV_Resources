/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03077488; name: FUN_03077488
 */


void FUN_03077488(long param_1,long param_2,int *param_3)

{
  char *pcVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
    return;
  }
  lVar8 = (long)*param_3;
  iVar5 = *(int *)(*(long *)(param_1 + 0x28) + lVar8 * 4);
  if (iVar5 != -1) {
    lVar8 = 0;
    do {
      pcVar1 = (char *)(*(long *)(param_1 + 0x38) + (long)iVar5 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*pcVar1 != -1);
    piVar12 = (int *)(param_1 + 0x48);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = (int)lVar8 + *piVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = (long)*param_3;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar8 * 4) = 0xffffffff;
  lVar8 = *(long *)(param_2 + 0x20);
  iVar5 = *param_3;
  if (iVar5 < *(int *)(lVar8 + 0x20)) {
    lVar9 = *(long *)(lVar8 + 0x18);
    iVar7 = iVar5;
    if (*(int *)(lVar8 + 0x98) != 0) {
      iVar7 = *(int *)(*(long *)(lVar8 + 0x90) + (long)iVar5 * 4);
    }
    if (iVar7 == -1) goto LAB_03077544;
    plVar6 = (long *)(lVar8 + 0xb0);
    iVar5 = iVar7;
  }
  else {
    plVar6 = (long *)(lVar8 + 0xd0);
    iVar5 = iVar5 - *(int *)(lVar8 + 0x20);
  }
  lVar9 = *plVar6;
LAB_03077544:
  piVar12 = (int *)(lVar9 + (long)iVar5 * 0x10);
  sVar2 = (short)piVar12[2];
  iVar5 = (int)sVar2;
  if (sVar2 != 0) {
    lVar8 = (long)*piVar12;
    lVar10 = lVar8 << 1;
    lVar9 = lVar8 * 0x14;
    do {
      *(undefined2 *)(*(long *)(param_1 + 0x50) + lVar10) = 0xff00;
      lVar11 = *(long *)(param_2 + 0x20);
      if (lVar8 < *(int *)(lVar11 + 0x30)) {
        if (*(int *)(lVar11 + 0x78) == 0) {
          iVar7 = (int)lVar8;
        }
        else {
          iVar7 = *(int *)(*(long *)(lVar11 + 0x70) + lVar8 * 4);
        }
        if (iVar7 == -1) {
          piVar12 = (int *)(*(long *)(lVar11 + 0x28) + lVar8 * 0x14);
        }
        else {
          piVar12 = (int *)(*(long *)(lVar11 + 0xc0) + (long)iVar7 * 0x14);
        }
      }
      else {
        piVar12 = (int *)(*(long *)(lVar11 + 0xe0) + (long)*(int *)(lVar11 + 0x30) * -0x14 + lVar9);
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x14;
      iVar5 = iVar5 + -1;
      lVar10 = lVar10 + 2;
      *(undefined1 *)(*(long *)(param_1 + 0x60) + (long)*piVar12) = 0xff;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x70);
  if (*param_3 <= *(int *)(param_1 + 0x70)) {
    iVar5 = *param_3;
  }
  *(int *)(param_1 + 0x70) = iVar5;
  return;
}


