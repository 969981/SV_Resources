/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309441c; name: FUN_0309441c
 */


void FUN_0309441c(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  
  plVar1 = (long *)(param_1 + 0x188);
  lVar5 = FUN_03095288(plVar1,param_3);
  if (lVar5 == 0) {
    lVar5 = -0x100000000;
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(uint *)(lVar5 + 4);
    lVar5 = (lVar5 - *(long *)(param_1 + 0x198)) * 0x20000000;
  }
  lVar9 = *plVar1;
  uVar12 = uVar12 | (uint)lVar5;
  piVar14 = (int *)(lVar9 + (long)(int)uVar12 * 0x38 + 0x10);
  FUN_02eb1718(param_4 + 2,0,*piVar14,0);
  iVar6 = *piVar14;
  if (iVar6 < 1) {
    *(undefined1 *)(param_4 + 5) = 0;
  }
  else {
    lVar9 = lVar9 + (long)(int)uVar12 * 0x38;
    uVar13 = 0;
    bVar11 = 0;
    bVar4 = false;
    lVar10 = 0x10;
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    do {
      lVar7 = *(long *)(lVar9 + 8);
      bVar3 = *(byte *)(lVar7 + lVar10);
      if ((bVar3 >> 3 & 1) == 0) {
        if (*(int *)(*(long *)(lVar9 + 0x28) + uVar13 * 4) == param_2) {
          *(undefined1 *)(lVar7 + lVar10) = 8;
          bVar11 = bVar11 | bVar3 & 0x40;
          iVar6 = (int)param_4[1];
          lVar7 = (long)iVar6;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar6) {
            FUN_02eaee40(param_4,puVar2,lVar7 + 1);
            iVar6 = (int)param_4[1];
          }
          *(short *)(*param_4 + (long)iVar6 * 2) = (short)uVar13;
          *(int *)(param_4 + 1) = (int)(lVar7 + 1);
          uVar8 = uVar13 >> 5 & 0x7ffffff;
          *(uint *)(param_4[2] + uVar8 * 4) =
               *(uint *)(param_4[2] + uVar8 * 4) | 1 << (ulong)((uint)uVar13 & 0x1f);
          iVar6 = *piVar14;
        }
        else {
          bVar4 = true;
        }
      }
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 0x14;
    } while ((long)uVar13 < (long)iVar6);
    *(bool *)(param_4 + 5) = bVar11 != 0;
    if (bVar4) {
      return;
    }
  }
  if ((uint)((ulong)lVar5 >> 0x20) <= *(uint *)(param_1 + 0x1a0)) {
    lVar5 = *(long *)(param_1 + 0x198) + (lVar5 >> 0x20) * 8;
    if (*(uint *)(lVar5 + 4) == uVar12) goto LAB_03094618;
  }
  lVar5 = FUN_03095288(plVar1,*plVar1 + (long)(int)uVar12 * 0x38);
LAB_03094618:
  FUN_03095c20(plVar1,lVar5);
  return;
}


