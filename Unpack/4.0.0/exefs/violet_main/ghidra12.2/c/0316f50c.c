/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0316f50c; name: FUN_0316f50c
 */


void FUN_0316f50c(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  
  puVar7 = PTR_PTR_047d1a50;
  lVar6 = param_1[1];
  iVar9 = *(int *)((long)param_1 + 0xc);
  lVar14 = *param_1;
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  puVar8 = (undefined4 *)
           (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                     (PTR_PTR_047d1a50 + 0x20,(ulong)param_2 << 3);
  if (puVar8 != (undefined4 *)0x0) {
    uVar11 = (ulong)param_2 - 1;
    lVar10 = 0;
    uVar1 = iVar9 + 1;
    *param_1 = (long)puVar8;
    lVar13 = -(uVar11 & 0xfffffffffffffffe);
    *puVar8 = 0xffffffff;
    do {
      *(undefined4 *)(*param_1 + lVar10 + 8) = 0xffffffff;
      lVar2 = *param_1 + lVar10;
      lVar10 = lVar10 + 0x10;
      lVar13 = lVar13 + 2;
      *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
    } while (lVar13 != 0);
    if ((uVar11 & 1) != 0) {
      *(undefined4 *)(*param_1 + lVar10 + 8) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = param_2 - 1;
    if (-1 < iVar9) {
      uVar11 = 0;
      do {
        piVar3 = (int *)(lVar14 + uVar11 * 8);
        iVar9 = *piVar3;
        if (iVar9 != -1) {
          uVar12 = *(uint *)((long)param_1 + 0xc);
          if ((int)uVar12 < (int)param_1[1] * 2) {
            FUN_0316f50c(param_1,uVar12 * 2 + 2);
            uVar12 = *(uint *)((long)param_1 + 0xc);
            iVar9 = *piVar3;
          }
          uVar5 = (iVar9 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar9 * -0x61c8864f & 0xff00ffU) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          while( true ) {
            uVar5 = uVar5 & uVar12;
            iVar4 = *(int *)(*param_1 + (ulong)uVar5 * 8);
            if (iVar4 == -1) break;
            if (iVar4 == iVar9) {
              iVar9 = 0;
              goto LAB_0316f644;
            }
            uVar5 = uVar5 + 1;
          }
          iVar9 = 1;
LAB_0316f644:
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar9;
          *(undefined8 *)(*param_1 + (long)(int)uVar5 * 8) = *(undefined8 *)piVar3;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar1);
    }
    if (-1 < (int)lVar6) {
      (**(code **)(*(long *)(puVar7 + 0x20) + 0x20))
                (puVar7 + 0x20,lVar14,
                 -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      return;
    }
  }
  return;
}


