/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034af318; name: FUN_034af318
 */


void FUN_034af318(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  if (param_2 == 0) {
    plVar5 = param_1 + 0xe;
    if (*plVar5 == 0) {
      return;
    }
    pbVar6 = *(byte **)(*plVar5 + 0x18);
    if (pbVar6 == (byte *)0x0) {
      return;
    }
    bVar3 = *pbVar6;
    uVar2 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar2 = 1;
    }
    uVar9 = (ulong)uVar2;
    pbVar7 = pbVar6 + ((ulong)(bVar3 + 4) & 0x1fc) + 8;
    while (pbVar6 = pbVar6 + 1, *pbVar6 != 0xb) {
      pbVar7 = pbVar7 + 0x10;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return;
      }
    }
    if ((*(float *)(pbVar7 + -8) == 1.0) && (*(long *)pbVar7 == 0)) {
      return;
    }
    plVar10 = *(long **)PTR_DAT_047e6cc0;
    lVar8 = param_1[3];
    uVar2 = *(uint *)((long)param_1 + 0xda) >> 0x11;
    for (plVar4 = (long *)*plVar10; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (((int)lVar8 == *(int *)(plVar4 + 1)) &&
         ((uVar2 & 1) == (uint)*(byte *)((long)plVar4 + 0xc))) goto LAB_034af3f0;
    }
    plVar4 = plVar10 + 2;
    param_1 = (long *)*plVar4;
    if (param_1 == (long *)0x0) {
      param_1 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
      if (param_1 == (long *)0x0) goto LAB_034af3f0;
      *param_1 = *plVar4;
      *plVar4 = (long)param_1;
    }
    if ((undefined8 *)plVar10[1] == (undefined8 *)0x0) {
      *plVar10 = (long)param_1;
    }
    else {
      *(undefined8 *)plVar10[1] = param_1;
      param_1 = (long *)*plVar4;
    }
    plVar10[1] = (long)param_1;
    plVar10[2] = *param_1;
    *param_1 = 0;
    *(int *)((long)plVar10 + 0x24) = *(int *)((long)plVar10 + 0x24) + 1;
    *(ulong *)(plVar10[1] + 8) = CONCAT44(uVar2,(int)lVar8) & 0x1ffffffff;
  }
  else {
    plVar5 = (long *)param_1[0xf];
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar4 = (long *)*plVar5;
    uVar2 = *(uint *)(plVar5 + 1);
    if ((uVar2 == 0) || (*plVar4 == param_2)) {
      plVar5 = plVar4;
    }
    else {
      lVar8 = (ulong)uVar2 * 0x10;
      plVar10 = plVar4;
      do {
        lVar8 = lVar8 + -0x10;
        if (lVar8 == 0) {
          return;
        }
        plVar5 = plVar10 + 2;
        plVar1 = plVar10 + 2;
        plVar10 = plVar5;
      } while (*plVar1 != param_2);
    }
    if (plVar5 == plVar4 + (ulong)uVar2 * 2) {
      return;
    }
    plVar5 = plVar5 + 1;
  }
LAB_034af3f0:
  if (*plVar5 == 0) {
    return;
  }
  FUN_034ac6bc(0x3f800000,param_1,*plVar5,param_3,param_4);
  return;
}


