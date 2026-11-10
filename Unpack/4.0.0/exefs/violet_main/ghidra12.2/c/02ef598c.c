/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef598c; name: FUN_02ef598c
 */


void FUN_02ef598c(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  puVar8 = PTR_PTR_047d1a50;
  lVar7 = param_1[1];
  iVar10 = *(int *)((long)param_1 + 0xc);
  lVar15 = *param_1;
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  puVar9 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)param_2 << 4);
  if (puVar9 != (undefined8 *)0x0) {
    uVar13 = (ulong)param_2 - 1;
    lVar11 = 0;
    uVar2 = iVar10 + 1;
    *param_1 = (long)puVar9;
    lVar14 = -(uVar13 & 0xfffffffffffffffe);
    *puVar9 = 0xffffffffffffffff;
    do {
      *(undefined8 *)(*param_1 + lVar11 + 0x10) = 0xffffffffffffffff;
      lVar3 = *param_1 + lVar11;
      lVar11 = lVar11 + 0x20;
      lVar14 = lVar14 + 2;
      *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
    } while (lVar14 != 0);
    if ((uVar13 & 1) != 0) {
      *(undefined8 *)(*param_1 + lVar11 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = param_2 - 1;
    if (-1 < iVar10) {
      uVar13 = 0;
      do {
        plVar4 = (long *)(lVar15 + uVar13 * 0x10);
        lVar11 = *plVar4;
        if (lVar11 != -1) {
          uVar12 = *(uint *)((long)param_1 + 0xc);
          if ((int)uVar12 < (int)param_1[1] * 2) {
            FUN_02ef598c(param_1,uVar12 * 2 + 2);
            uVar12 = *(uint *)((long)param_1 + 0xc);
            lVar11 = *plVar4;
          }
          uVar5 = (int)lVar11 * -0x61c8864f;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (int)((ulong)lVar11 >> 0x20) * -0x61c8864f;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = uVar6 + (uVar6 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5;
          while( true ) {
            uVar5 = uVar5 & uVar12;
            lVar14 = *(long *)(*param_1 + (ulong)uVar5 * 0x10);
            if (lVar14 == -1) break;
            if (lVar14 == lVar11) {
              iVar10 = 0;
              goto LAB_02ef5ae4;
            }
            uVar5 = uVar5 + 1;
          }
          iVar10 = 1;
LAB_02ef5ae4:
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar10;
          plVar1 = (long *)(*param_1 + (long)(int)uVar5 * 0x10);
          lVar11 = plVar4[1];
          *plVar1 = *plVar4;
          plVar1[1] = lVar11;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar2);
    }
    if (-1 < (int)lVar7) {
      (**(code **)(*(long *)puVar8 + 0x20))
                (puVar8,lVar15,-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4);
      return;
    }
  }
  return;
}


