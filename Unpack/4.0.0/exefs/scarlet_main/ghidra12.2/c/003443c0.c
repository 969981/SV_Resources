/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003443c0; name: FUN_003443c0
 */


ulong FUN_003443c0(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  *(ulong *)(param_9 + 0x50) = param_5;
  lVar11 = ((ulong)((int)param_5 * 0x18 + 0xf) & 0xfffffff0) + 0x60;
  FUN_0037b030(param_9,param_1,param_2,param_3);
  uVar4 = (ulong)(uint)((int)param_5 << 4);
  uVar5 = param_9 + uVar4 + 0x60;
  if (param_5 == 0) {
    lVar12 = uVar5 - param_9;
    if (uVar5 < param_9 || lVar12 == 0) goto LAB_00344618;
    uVar10 = 0;
    lVar3 = 0x60;
    lVar11 = 0x60;
  }
  else {
    lVar12 = 0;
    uVar10 = 0;
    uVar13 = 0;
    plVar9 = param_4;
    do {
      local_80 = param_9;
      local_68 = (uint)(uVar13 == 0);
      uStack_64 = (uint)(param_5 - 1 == uVar13);
      lVar3 = *plVar9;
      plVar1 = (long *)(param_9 + lVar12 + 0x60);
      *plVar1 = lVar3;
      *(ulong *)(param_9 + lVar12 + 0x68) = uVar5;
      uStack_78 = param_6;
      local_70 = param_7;
      uVar2 = (**(code **)(lVar3 + 0x38))(plVar1,&local_80);
      if (uVar2 != 0) {
        if (uVar10 == 0) {
          uVar10 = uVar2;
        }
        else if (4 < uVar2) {
          FUN_00350fd0();
        }
      }
      uVar13 = uVar13 + 1;
      uVar5 = uVar5 + ((ulong)(*(int *)(*plVar9 + 0x30) + 0xf) & 0xfffffff0);
      lVar11 = ((ulong)(*(int *)(*plVar9 + 0x10) + 0xf) & 0xfffffff0) + lVar11;
      lVar12 = lVar12 + 0x10;
      plVar9 = plVar9 + 1;
    } while (param_5 != uVar13);
    lVar12 = uVar5 - param_9;
    if (uVar5 < param_9 || lVar12 == 0) goto LAB_00344618;
    lVar3 = uVar4 + 0x60;
    if (param_5 != 0) {
      if (param_5 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = param_5 & 0xfffffffffffffffc;
        lVar8 = 0;
        lVar7 = 0;
        lVar6 = 0;
        plVar9 = param_4 + 2;
        uVar5 = uVar4;
        do {
          uVar5 = uVar5 - 4;
          lVar6 = ((ulong)(*(int *)(plVar9[1] + 0x30) + 0xf) & 0xfffffff0) + lVar6;
          lVar3 = ((ulong)(*(int *)(plVar9[-2] + 0x30) + 0xf) & 0xfffffff0) + lVar3;
          lVar8 = ((ulong)(*(int *)(plVar9[-1] + 0x30) + 0xf) & 0xfffffff0) + lVar8;
          lVar7 = ((ulong)(*(int *)(*plVar9 + 0x30) + 0xf) & 0xfffffff0) + lVar7;
          plVar9 = plVar9 + 4;
        } while (uVar5 != 0);
        lVar3 = lVar6 + lVar7 + lVar8 + lVar3;
        if (uVar4 == param_5) goto LAB_003445e8;
      }
      uVar5 = ~uVar4;
      if ((param_5 & 1) != 0) {
        plVar9 = param_4 + uVar4;
        uVar4 = uVar4 | 1;
        lVar3 = ((ulong)(*(int *)(*plVar9 + 0x30) + 0xf) & 0xfffffff0) + lVar3;
      }
      if (uVar5 + param_5 != 0) {
        lVar6 = param_5 - uVar4;
        param_4 = param_4 + uVar4 + 1;
        do {
          lVar6 = lVar6 + -2;
          lVar3 = ((ulong)(*(int *)(*param_4 + 0x30) + 0xf) & 0xfffffff0) +
                  ((ulong)(*(int *)(param_4[-1] + 0x30) + 0xf) & 0xfffffff0) + lVar3;
          param_4 = param_4 + 2;
        } while (lVar6 != 0);
      }
    }
  }
LAB_003445e8:
  if (lVar12 == lVar3) {
    *(long *)(param_9 + 0x58) = lVar11;
    return uVar10;
  }
LAB_00344618:
                    /* WARNING: Subroutine does not return */
  abort();
}


