/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ef5fd4; name: FUN_02ef5fd4
 */


undefined8 FUN_02ef5fd4(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = *param_1;
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  lVar7 = param_1[1];
  iVar10 = *(int *)((long)param_1 + 0xc);
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,(ulong)param_3 << 4);
  if (puVar8 == (undefined8 *)0x0) {
    uVar9 = 0x80040200;
  }
  else {
    uVar13 = (ulong)param_3 - 1;
    lVar11 = 0;
    uVar2 = iVar10 + 1;
    *param_1 = (long)puVar8;
    lVar14 = -(uVar13 & 0xfffffffffffffffe);
    *puVar8 = 0xffffffffffffffff;
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
    *(uint *)((long)param_1 + 0xc) = param_3 - 1;
    if (-1 < iVar10) {
      uVar13 = 0;
      do {
        plVar4 = (long *)(lVar15 + uVar13 * 0x10);
        lVar11 = *plVar4;
        if (lVar11 != -1) {
          uVar12 = *(uint *)((long)param_1 + 0xc);
          if ((int)uVar12 < (int)param_1[1] * 2) {
            FUN_02ef5fd4(param_1,param_2,uVar12 * 2 + 2);
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
              goto LAB_02ef612c;
            }
            uVar5 = uVar5 + 1;
          }
          iVar10 = 1;
LAB_02ef612c:
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
      (**(code **)(*param_2 + 0x20))
                (param_2,lVar15,-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4);
    }
    uVar9 = 0;
  }
  return uVar9;
}


