/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f5cd98; name: FUN_02f5cd98
 */


void FUN_02f5cd98(long *param_1,ulong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  
  piVar8 = (int *)(*(long *)(*param_1 + 0x38) + (param_2 & 0xffffff) * 0xc0 + 0x80);
  iVar1 = *(int *)(param_1[0x71] + (long)*piVar8 * 0x20 + 0x10);
  if (iVar1 != -1) {
    lVar9 = *(long *)(param_1[0x73] + (long)iVar1 * 8);
    *(byte *)(lVar9 + 0x24) = *(byte *)(lVar9 + 0x24) | param_3 == 0;
    if (*(char *)(lVar9 + 0x25) == '\0') {
      iVar3 = (int)param_1[0x67];
      lVar4 = (long)iVar3;
      if ((int)(*(uint *)((long)param_1 + 0x33c) & 0x7fffffff) <= iVar3) {
        FUN_0133bb88(param_1 + 0x66,PTR_PTR_047d1a50,lVar4 + 1);
        iVar3 = (int)param_1[0x67];
      }
      *(int *)(param_1[0x66] + (long)iVar3 * 4) = iVar1;
      *(int *)(param_1 + 0x67) = (int)(lVar4 + 1);
      *(undefined1 *)(lVar9 + 0x25) = 1;
    }
  }
  piVar8 = (int *)(param_1[0x71] + (long)*piVar8 * 0x20 + 0x10);
  iVar1 = *piVar8;
  if (iVar1 != -1) {
    iVar3 = 0;
    uVar7 = param_2 & 0xffffffff;
    do {
      uVar7 = (ulong)((uint)uVar7 & 0xffffff);
      if ((iVar3 != 0) && ((*(byte *)(*(long *)(*param_1 + 0x38) + uVar7 * 0xc0 + 0x88) & 1) != 0))
      goto LAB_02f5ceb4;
      uVar2 = *(uint *)(*(long *)(*param_1 + 0x38) + uVar7 * 0xc0 + 0x84);
      uVar7 = (ulong)uVar2;
      iVar3 = iVar3 + -1;
    } while (uVar2 != (uint)param_2);
    *piVar8 = -1;
LAB_02f5ceb4:
    plVar5 = *(long **)(param_1[0x73] + (long)iVar1 * 8);
    uVar2 = *(uint *)(plVar5 + 1);
    uVar7 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      lVar6 = *plVar5;
      lVar4 = 0;
      lVar9 = 0;
      do {
        if (*(uint *)(lVar6 + lVar9 * 4) == (uint)param_2) {
          if ((int)lVar9 == -1) {
            return;
          }
          *(int *)(plVar5 + 1) = (int)((long)(int)uVar2 + -1);
          if ((int)uVar7 != 1) {
            *(undefined4 *)(lVar6 + (lVar4 >> 0x1e)) =
                 *(undefined4 *)(lVar6 + ((long)(int)uVar2 + -1) * 4);
          }
          if (param_3 == 0) {
            *(undefined1 *)((long)plVar5 + 0x24) = 1;
          }
          if ((int)plVar5[1] != 0) {
            return;
          }
          *(undefined1 *)((long)plVar5 + 0x24) = 1;
          if (*(char *)((long)plVar5 + 0x25) != '\0') {
            return;
          }
          *(undefined1 *)((long)plVar5 + 0x25) = 1;
          iVar3 = (int)param_1[0x67];
          lVar9 = (long)iVar3;
          if ((int)(*(uint *)((long)param_1 + 0x33c) & 0x7fffffff) <= iVar3) {
            FUN_0133bb88(param_1 + 0x66,PTR_PTR_047d1a50,lVar9 + 1);
            iVar3 = (int)param_1[0x67];
          }
          *(int *)(param_1[0x66] + (long)iVar3 * 4) = iVar1;
          *(int *)(param_1 + 0x67) = (int)(lVar9 + 1);
          return;
        }
        lVar9 = lVar9 + 1;
        lVar4 = lVar4 + 0x100000000;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}


