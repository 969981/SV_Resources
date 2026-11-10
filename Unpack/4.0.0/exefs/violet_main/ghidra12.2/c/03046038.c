/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03046038; name: FUN_03046038
 */


void FUN_03046038(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  
  puVar3 = PTR_PTR_047d1a50;
  lVar14 = *param_1;
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  lVar2 = param_1[1];
  iVar5 = *(int *)((long)param_1 + 0xc);
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)param_2 * 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    uVar9 = (ulong)param_2 - 1;
    lVar6 = 0;
    uVar1 = iVar5 + 1;
    *param_1 = (long)puVar4;
    lVar10 = -(uVar9 & 0xfffffffffffffffe);
    *puVar4 = 0xffffffffffffffff;
    puVar4[1] = 0xffffffffffffffff;
    do {
      lVar12 = *param_1;
      lVar10 = lVar10 + 2;
      *(undefined8 *)(lVar12 + lVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar12 + lVar6 + 0x20) = 0xffffffffffffffff;
      lVar12 = *param_1 + lVar6;
      lVar6 = lVar6 + 0x30;
      *(undefined8 *)(lVar12 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(lVar12 + 0x38) = 0xffffffffffffffff;
    } while (lVar10 != 0);
    if ((uVar9 & 1) != 0) {
      lVar10 = *param_1;
      *(undefined8 *)(lVar10 + lVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar10 + lVar6 + 0x20) = 0xffffffffffffffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = param_2 - 1;
    if (-1 < iVar5) {
      uVar9 = 0;
      do {
        plVar15 = (long *)(lVar14 + uVar9 * 0x18);
        lVar10 = plVar15[1];
        if (*plVar15 != -1 && lVar10 != -1) {
          uVar8 = *(uint *)((long)param_1 + 0xc);
          if ((int)uVar8 < (int)param_1[1] * 2) {
            FUN_03046038(param_1,uVar8 * 2 + 2);
            uVar8 = *(uint *)((long)param_1 + 0xc);
            lVar10 = plVar15[1];
          }
          lVar11 = *param_1;
          uVar7 = (int)lVar10 * -0x61c8864f & uVar8;
          plVar13 = (long *)(lVar11 + (ulong)uVar7 * 0x18);
          lVar6 = *plVar13;
          lVar12 = plVar13[1];
          if (lVar6 != -1 && lVar12 != -1) {
            do {
              if ((lVar12 == lVar10) && (lVar6 == *plVar15)) {
                iVar5 = 0;
                goto LAB_030461a8;
              }
              uVar7 = uVar7 + 1 & uVar8;
              plVar13 = (long *)(lVar11 + (ulong)uVar7 * 0x18);
              lVar6 = *plVar13;
              lVar12 = plVar13[1];
            } while (lVar6 != -1 && lVar12 != -1);
          }
          iVar5 = 1;
LAB_030461a8:
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar5;
          plVar13 = (long *)(lVar11 + (long)(int)uVar7 * 0x18);
          lVar10 = *plVar15;
          lVar6 = plVar15[2];
          plVar13[1] = plVar15[1];
          plVar13[2] = lVar6;
          *plVar13 = lVar10;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
    }
    if (-1 < (int)lVar2) {
      (**(code **)(*(long *)puVar3 + 0x20))(puVar3,lVar14,(long)(int)uVar1 * 0x18);
      return;
    }
  }
  return;
}


