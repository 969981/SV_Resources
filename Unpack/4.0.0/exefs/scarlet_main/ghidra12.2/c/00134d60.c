/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00134d60; name: FUN_00134d60
 */


int FUN_00134d60(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  
  if (*param_2 == 8) {
LAB_00134e30:
    iVar8 = param_2[2];
    iVar3 = FUN_0012ea70(param_1);
    if (iVar3 <= iVar8) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
  }
  else {
    if (*param_2 == 0x11) {
      lVar10 = *param_1;
      uVar1 = *(uint *)(*(long *)(lVar10 + 0x40) + (long)param_2[2] * 4);
      if ((uVar1 & 0x7f) == 0x33) {
        lVar5 = (long)(int)param_1[4] + -1;
        iVar8 = (int)*(char *)(*(long *)(lVar10 + 0x58) + lVar5);
        if (iVar8 == -0x80) {
          *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
          cVar7 = -0x7f;
        }
        else {
          *(int *)(param_1 + 5) = (int)param_1[5] - iVar8;
          cVar7 = *(char *)((long)param_1 + 0x45) + -1;
        }
        *(char *)((long)param_1 + 0x45) = cVar7;
        *(int *)(param_1 + 4) = (int)lVar5;
        uVar9 = 0x8042;
        if (param_3 != 0) {
          uVar9 = 0x42;
        }
        lVar4 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar10 + 0x40),lVar5
                             ,lVar10 + 0x18,4,0x7fffffff,"opcodes");
        *(long *)(lVar10 + 0x40) = lVar4;
        lVar5 = param_1[4];
        *(int *)(param_1 + 4) = (int)lVar5 + 1;
        *(uint *)(lVar4 + (long)(int)lVar5 * 4) = uVar9 | uVar1 >> 9 & 0x7f80;
        FUN_00133660(param_1,lVar10,*(undefined4 *)(param_1[2] + 8));
        lVar5 = *param_1;
        lVar10 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar5 + 0x40),
                              (int)param_1[4],lVar5 + 0x18,4,0x7fffffff,"opcodes");
        *(long *)(lVar5 + 0x40) = lVar10;
        iVar8 = (int)param_1[4];
        *(int *)(param_1 + 4) = iVar8 + 1;
        goto LAB_00134ef8;
      }
    }
    bVar2 = *(byte *)((long)param_1 + 0x44);
    bVar6 = bVar2 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar2) {
      if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1[2],"function or expression needs too many registers");
      }
      *(byte *)(*param_1 + 0xc) = bVar6;
      bVar6 = *(char *)((long)param_1 + 0x44) + 1;
    }
    *(byte *)((long)param_1 + 0x44) = bVar6;
    FUN_001380a0(param_1,param_2,bVar6 - 1);
    if (*param_2 == 8) goto LAB_00134e30;
  }
  lVar4 = *param_1;
  iVar8 = param_2[2];
  plVar11 = param_1 + 4;
  lVar5 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar4 + 0x40),
                       (int)*plVar11,lVar4 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar4 + 0x40) = lVar5;
  lVar10 = *plVar11;
  *(int *)plVar11 = (int)lVar10 + 1;
  *(uint *)(lVar5 + (long)(int)lVar10 * 4) = param_3 << 0xf | iVar8 << 0x10 | 0x7fc3;
  FUN_00133660(param_1,lVar4,*(undefined4 *)(param_1[2] + 8));
  lVar5 = *param_1;
  lVar10 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar5 + 0x40),
                        (int)*plVar11,lVar5 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar5 + 0x40) = lVar10;
  iVar8 = (int)*plVar11;
  *(int *)plVar11 = iVar8 + 1;
LAB_00134ef8:
  *(undefined4 *)(lVar10 + (long)iVar8 * 4) = 0x7fffff38;
  FUN_00133660(param_1,lVar5,*(undefined4 *)(param_1[2] + 8));
  return (int)param_1[4] + -1;
}


