/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001323b0; name: FUN_001323b0
 */


void FUN_001323b0(long *param_1,long param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 == (long *)0x0) {
    param_3[4] = -1;
    param_3[5] = -1;
    *param_3 = 0;
    param_3[2] = 0;
    return;
  }
  uVar11 = (uint)*(byte *)((long)param_1 + 0x42);
  while (uVar3 = uVar11 - 1, 0 < (int)uVar11) {
    lVar13 = param_1[7];
    iVar2 = uVar11 + (int)lVar13 + -1;
    uVar11 = uVar3;
    if (*(long *)(**(long **)(param_1[2] + 0x58) + (long)iVar2 * 0x18 + 0x10) == param_2) {
      cVar1 = *(char *)(**(long **)(param_1[2] + 0x58) + (long)iVar2 * 0x18 + 9);
      param_3[4] = -1;
      param_3[5] = -1;
      if (cVar1 == '\x03') {
        *param_3 = 0xb;
        param_3[2] = (int)lVar13 + uVar3;
        return;
      }
      *param_3 = 9;
      *(short *)((long)param_3 + 10) = (short)uVar3;
      *(undefined1 *)(param_3 + 2) =
           *(undefined1 *)
            (**(long **)(param_1[2] + 0x58) + (long)(int)((int)param_1[7] + uVar3) * 0x18 + 10);
      if (param_4 != 0) {
        return;
      }
      plVar8 = param_1 + 3;
      do {
        plVar8 = (long *)*plVar8;
      } while ((uVar3 & 0xffff) < (uint)*(byte *)(plVar8 + 2));
      *(undefined1 *)((long)plVar8 + 0x11) = 1;
      *(undefined1 *)((long)param_1 + 0x46) = 1;
      return;
    }
  }
  if ((ulong)*(byte *)((long)param_1 + 0x43) != 0) {
    uVar6 = 0;
    plVar8 = *(long **)(*param_1 + 0x50);
    do {
      if (*plVar8 == param_2) {
        if (-1 < (int)uVar6) goto LAB_00132628;
        break;
      }
      uVar6 = uVar6 + 1;
      plVar8 = plVar8 + 2;
    } while (*(byte *)((long)param_1 + 0x43) != uVar6);
  }
  FUN_001323b0(param_1[1],param_2,param_3,0);
  if (*param_3 - 9U < 2) {
    if (*(char *)((long)param_1 + 0x43) == -1) {
      FUN_0012efb0(param_1,0xff,"upvalues");
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x132664);
      (*pcVar4)();
    }
    lVar12 = *param_1;
    iVar2 = *(int *)(lVar12 + 0x10);
    lVar13 = (long)iVar2;
    lVar5 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar12 + 0x50),
                         *(char *)((long)param_1 + 0x43),lVar12 + 0x10,0x10,0xff,"upvalues");
    *(long *)(lVar12 + 0x50) = lVar5;
    if (iVar2 < *(int *)(lVar12 + 0x10)) {
      lVar7 = lVar13 << 4;
      do {
        *(undefined8 *)(lVar5 + lVar7) = 0;
        lVar5 = *(long *)(lVar12 + 0x50);
        lVar13 = lVar13 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar13 < *(int *)(lVar12 + 0x10));
    }
    plVar8 = (long *)(lVar5 + (ulong)*(byte *)((long)param_1 + 0x43) * 0x10);
    *(byte *)((long)param_1 + 0x43) = *(byte *)((long)param_1 + 0x43) + 1;
    plVar9 = (long *)param_1[1];
    if (*param_3 == 9) {
      *(undefined1 *)(plVar8 + 1) = 1;
      *(char *)((long)plVar8 + 9) = (char)param_3[2];
      puVar10 = (undefined1 *)
                (**(long **)(plVar9[2] + 0x58) +
                 (long)(int)((int)plVar9[7] + (uint)*(ushort *)((long)param_3 + 10)) * 0x18 + 9);
    }
    else {
      *(undefined1 *)(plVar8 + 1) = 0;
      *(char *)((long)plVar8 + 9) = (char)param_3[2];
      puVar10 = (undefined1 *)(*(long *)(*plVar9 + 0x50) + (long)param_3[2] * 0x10 + 10);
    }
    *(undefined1 *)((long)plVar8 + 10) = *puVar10;
    *plVar8 = param_2;
    if (((*(byte *)(*param_1 + 9) >> 5 & 1) != 0) && ((*(byte *)(param_2 + 9) & 0x18) != 0)) {
      FUN_00129d70(*(undefined8 *)(param_1[2] + 0x38),*param_1,param_2);
    }
    uVar6 = (ulong)(*(byte *)((long)param_1 + 0x43) - 1);
LAB_00132628:
    param_3[4] = -1;
    param_3[5] = -1;
    *param_3 = 10;
    param_3[2] = (int)uVar6;
  }
  return;
}


