/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e2538; name: FUN_030e2538
 */


void FUN_030e2538(long param_1,int *param_2,int *param_3,long *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_68 [2];
  
  piVar2 = (int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10);
  sVar7 = (short)piVar2[2];
  sVar5 = *(short *)((long)piVar2 + 10);
  if ((int)sVar5 + (int)sVar7 < 1) {
    return;
  }
  iVar10 = (int)sVar7;
  uVar15 = 0;
  do {
    if ((int)uVar15 < (int)sVar7) {
      iVar13 = *piVar2;
    }
    else {
      iVar13 = piVar2[1] - (int)sVar7;
    }
    iVar13 = iVar13 + uVar15;
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    iVar8 = *(int *)(lVar12 + (long)iVar13 * 0x14 + 8);
    if ((iVar8 != -1) && (iVar13 != *param_3)) {
      iVar13 = *(int *)(lVar12 + (long)iVar13 * 0x14 + 0xc);
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x18);
      piVar1 = (int *)(lVar12 + (long)iVar13 * 0x10);
      uVar14 = (uint)(short)piVar1[2];
      uVar3 = iVar8 - *piVar1;
      if (uVar14 <= (uint)(iVar8 - *piVar1)) {
        uVar3 = uVar14 + (iVar8 - piVar1[1]);
      }
      iVar8 = *param_2;
      if (iVar13 == iVar8) {
        if ((uVar3 & 0xffff) <= (uVar15 & 0xffff)) goto LAB_030e2778;
        iVar8 = (int)param_4[1];
        lVar12 = (long)iVar8 + 1;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar8) {
          FUN_030e84cc(param_4,lVar12);
          iVar8 = (int)param_4[1];
        }
        piVar1 = (int *)(*param_4 + (long)iVar8 * 0x10);
        *piVar1 = iVar13;
        piVar1[1] = iVar13;
        *(short *)(piVar1 + 2) = (short)uVar15;
        *(short *)((long)piVar1 + 10) = (short)uVar3;
        *(undefined1 *)(piVar1 + 3) = 0;
      }
      else {
        uVar14 = uVar15;
        if (iVar13 <= iVar8) {
          uVar14 = uVar3;
          uVar3 = uVar15;
        }
        iVar4 = iVar8;
        iVar6 = iVar13;
        if (iVar13 <= iVar8) {
          iVar4 = iVar13;
          iVar6 = iVar8;
        }
        local_68[0] = iVar13;
        if ((int)*(short *)(lVar12 + (long)iVar13 * 0x10 + 10) + (int)(short)piVar1[2] < 0x17) {
          lVar12 = FUN_030e7a5c(param_1 + 0x10);
          if (lVar12 != 0) {
            bVar11 = (byte)((uint)*(undefined4 *)(lVar12 + 4) >> 0x18);
            iVar13 = (int)*(undefined8 *)(param_1 + 0x20);
            goto LAB_030e2704;
          }
LAB_030e2710:
          bVar9 = 0;
          bVar11 = 0xff;
        }
        else {
          lVar12 = FUN_030e7e50(param_1 + 0x30,local_68);
          if (lVar12 == 0) goto LAB_030e2710;
          bVar11 = (byte)((uint)*(undefined4 *)(lVar12 + 4) >> 0x18);
          iVar13 = (int)*(undefined8 *)(param_1 + 0x40);
LAB_030e2704:
          bVar9 = (byte)((uint)(((int)lVar12 - iVar13) * 0x20000000) >> 0x18);
        }
        iVar13 = (int)param_4[1];
        lVar12 = (long)iVar13 + 1;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar13) {
          FUN_030e84cc(param_4,lVar12);
          iVar13 = (int)param_4[1];
        }
        piVar1 = (int *)(*param_4 + (long)iVar13 * 0x10);
        *piVar1 = iVar4;
        piVar1[1] = iVar6;
        *(short *)(piVar1 + 2) = (short)uVar14;
        *(short *)((long)piVar1 + 10) = (short)uVar3;
        *(byte *)(piVar1 + 3) = (byte)~(bVar11 | bVar9) >> 7;
      }
      *(int *)(param_4 + 1) = (int)lVar12;
    }
LAB_030e2778:
    if ((iVar10 + sVar5) - 1U == uVar15) {
      return;
    }
    sVar7 = (short)piVar2[2];
    uVar15 = uVar15 + 1;
  } while( true );
}


