/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e77e0; name: FUN_030e77e0
 */


void FUN_030e77e0(long param_1,int *param_2,int *param_3,long *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int local_68 [2];
  
  piVar2 = (int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10);
  sVar8 = (short)piVar2[2];
  sVar5 = *(short *)((long)piVar2 + 10);
  if ((int)sVar5 + (int)sVar8 < 1) {
    return;
  }
  iVar11 = (int)sVar8;
  uVar16 = 0;
  do {
    if ((int)uVar16 < (int)sVar8) {
      iVar14 = *piVar2;
    }
    else {
      iVar14 = piVar2[1] - (int)sVar8;
    }
    iVar14 = iVar14 + uVar16;
    lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    iVar9 = *(int *)(lVar13 + (long)iVar14 * 0x14 + 8);
    if ((iVar9 != -1) && (iVar14 != *param_3)) {
      iVar14 = *(int *)(lVar13 + (long)iVar14 * 0x14 + 0xc);
      lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x18);
      piVar1 = (int *)(lVar13 + (long)iVar14 * 0x10);
      uVar15 = (uint)(short)piVar1[2];
      uVar3 = iVar9 - *piVar1;
      if (uVar15 <= (uint)(iVar9 - *piVar1)) {
        uVar3 = uVar15 + (iVar9 - piVar1[1]);
      }
      iVar9 = *param_2;
      if (iVar14 == iVar9) {
        if ((uVar3 & 0xffff) <= (uVar16 & 0xffff)) goto LAB_030e7a28;
        iVar9 = (int)param_4[1];
        lVar13 = (long)iVar9 + 1;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar9) {
          FUN_030e84cc(param_4,lVar13);
          iVar9 = (int)param_4[1];
        }
        piVar1 = (int *)(*param_4 + (long)iVar9 * 0x10);
        *piVar1 = iVar14;
        piVar1[1] = iVar14;
        *(short *)(piVar1 + 2) = (short)uVar16;
        *(short *)((long)piVar1 + 10) = (short)uVar3;
        *(undefined1 *)(piVar1 + 3) = 2;
      }
      else {
        uVar15 = uVar16;
        if (iVar14 <= iVar9) {
          uVar15 = uVar3;
          uVar3 = uVar16;
        }
        iVar4 = iVar9;
        iVar6 = iVar14;
        if (iVar14 <= iVar9) {
          iVar4 = iVar14;
          iVar6 = iVar9;
        }
        local_68[0] = iVar14;
        if ((int)*(short *)(lVar13 + (long)iVar14 * 0x10 + 10) + (int)(short)piVar1[2] < 0x17) {
          lVar13 = FUN_030e7a5c(param_1 + 0x10);
          if (lVar13 != 0) {
            uVar12 = *(uint *)(lVar13 + 4);
            iVar14 = (int)*(undefined8 *)(param_1 + 0x20);
            goto LAB_030e79b0;
          }
LAB_030e79bc:
          uVar10 = 0;
          uVar12 = 0xffffffff;
        }
        else {
          lVar13 = FUN_030e7e50(param_1 + 0x30,local_68);
          if (lVar13 == 0) goto LAB_030e79bc;
          uVar12 = *(uint *)(lVar13 + 4);
          iVar14 = (int)*(undefined8 *)(param_1 + 0x40);
LAB_030e79b0:
          uVar10 = ((int)lVar13 - iVar14) * 0x20000000;
        }
        uVar7 = 1;
        if (-1 < (int)(uVar12 | uVar10)) {
          uVar7 = 2;
        }
        iVar14 = (int)param_4[1];
        lVar13 = (long)iVar14 + 1;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar14) {
          FUN_030e84cc(param_4,lVar13);
          iVar14 = (int)param_4[1];
        }
        piVar1 = (int *)(*param_4 + (long)iVar14 * 0x10);
        *piVar1 = iVar4;
        piVar1[1] = iVar6;
        *(short *)(piVar1 + 2) = (short)uVar15;
        *(short *)((long)piVar1 + 10) = (short)uVar3;
        *(undefined1 *)(piVar1 + 3) = uVar7;
      }
      *(int *)(param_4 + 1) = (int)lVar13;
    }
LAB_030e7a28:
    if ((iVar11 + sVar5) - 1U == uVar16) {
      return;
    }
    sVar8 = (short)piVar2[2];
    uVar16 = uVar16 + 1;
  } while( true );
}


