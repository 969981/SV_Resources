/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae5630; name: FUN_02ae5630
 */


undefined8 FUN_02ae5630(ulong *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = (ushort)*param_2;
  bVar1 = *(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4);
  if (uVar6 != (ushort)*param_1) {
    bVar1 = (short)uVar6 < (short)(ushort)*param_1;
  }
  bVar2 = *(int *)((long)param_3 + 4) < *(int *)((long)param_2 + 4);
  if (uVar6 != (ushort)*param_3) {
    bVar2 = (short)(ushort)*param_3 < (short)uVar6;
  }
  if (bVar1) {
    uVar8 = *param_1;
    uVar4 = param_1[1];
    uVar10 = param_1[2];
    uVar3 = param_1[3];
    uVar5 = param_1[4];
    param_1[4] = 0;
    if (bVar2) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = 0;
      uVar11 = param_3[4];
      param_3[4] = 0;
      param_1[4] = uVar11;
      plVar7 = (long *)param_3[4];
      *param_3 = uVar8;
      param_3[1] = uVar4;
      param_3[2] = uVar10;
      param_3[3] = uVar3;
      param_3[4] = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      param_3[4] = uVar5;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1[4] = 0;
      uVar11 = param_2[4];
      param_2[4] = 0;
      param_1[4] = uVar11;
      plVar7 = (long *)param_2[4];
      *param_2 = uVar8;
      param_2[1] = uVar4;
      param_2[2] = uVar10;
      param_2[3] = uVar3;
      param_2[4] = 0;
      if (plVar7 == (long *)0x0) {
        iVar9 = (int)(uVar8 >> 0x20);
      }
      else {
        (**(code **)(*plVar7 + 0x20))();
        uVar8 = (ulong)(ushort)*param_2;
        iVar9 = *(int *)((long)param_2 + 4);
      }
      param_2[4] = uVar5;
      bVar1 = *(int *)((long)param_3 + 4) < iVar9;
      if ((uint)(ushort)*param_3 != ((uint)uVar8 & 0xffff)) {
        bVar1 = (short)(ushort)*param_3 < (short)uVar8;
      }
      if (bVar1) {
        param_2[4] = 0;
        uVar8 = *param_2;
        uVar4 = param_2[1];
        *param_2 = *param_3;
        uVar3 = param_2[2];
        uVar10 = param_2[3];
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
        param_2[3] = param_3[3];
        param_2[4] = 0;
        uVar11 = param_3[4];
        param_3[4] = 0;
        param_2[4] = uVar11;
        plVar7 = (long *)param_3[4];
        *param_3 = uVar8;
        param_3[1] = uVar4;
        param_3[2] = uVar3;
        param_3[3] = uVar10;
        param_3[4] = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        param_3[4] = uVar5;
        return 2;
      }
    }
  }
  else {
    if (!bVar2) {
      return 0;
    }
    uVar11 = param_2[4];
    param_2[4] = 0;
    uVar8 = *param_2;
    uVar4 = param_2[1];
    *param_2 = *param_3;
    uVar3 = param_2[2];
    uVar5 = param_2[3];
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = 0;
    uVar10 = param_3[4];
    param_3[4] = 0;
    param_2[4] = uVar10;
    plVar7 = (long *)param_3[4];
    *param_3 = uVar8;
    param_3[1] = uVar4;
    param_3[2] = uVar3;
    param_3[3] = uVar5;
    param_3[4] = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    param_3[4] = uVar11;
    bVar1 = *(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4);
    if ((ushort)*param_2 != (ushort)*param_1) {
      bVar1 = (short)(ushort)*param_2 < (short)(ushort)*param_1;
    }
    if (bVar1) {
      uVar11 = param_1[4];
      param_1[4] = 0;
      uVar8 = *param_1;
      uVar4 = param_1[1];
      *param_1 = *param_2;
      uVar3 = param_1[2];
      uVar5 = param_1[3];
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1[4] = 0;
      uVar10 = param_2[4];
      param_2[4] = 0;
      param_1[4] = uVar10;
      plVar7 = (long *)param_2[4];
      *param_2 = uVar8;
      param_2[1] = uVar4;
      param_2[2] = uVar3;
      param_2[3] = uVar5;
      param_2[4] = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      param_2[4] = uVar11;
      return 2;
    }
  }
  return 1;
}


