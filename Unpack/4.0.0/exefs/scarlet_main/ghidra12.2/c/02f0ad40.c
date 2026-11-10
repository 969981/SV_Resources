/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0ad40; name: FUN_02f0ad40
 */


undefined8 FUN_02f0ad40(long *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  
  lVar16 = *param_1;
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  lVar7 = param_1[1];
  iVar10 = *(int *)((long)param_1 + 0xc);
  puVar8 = (undefined2 *)(**(code **)(*param_2 + 0x18))(param_2,(ulong)param_3 << 4);
  if (puVar8 == (undefined2 *)0x0) {
    uVar9 = 0x80040200;
  }
  else {
    uVar12 = (ulong)param_3 - 1;
    lVar11 = 0;
    uVar2 = iVar10 + 1;
    *param_1 = (long)puVar8;
    lVar14 = -(uVar12 & 0xfffffffffffffffe);
    *puVar8 = 0xffff;
    do {
      *(undefined2 *)(*param_1 + lVar11 + 0x10) = 0xffff;
      lVar3 = *param_1 + lVar11;
      lVar11 = lVar11 + 0x20;
      lVar14 = lVar14 + 2;
      *(undefined2 *)(lVar3 + 0x20) = 0xffff;
    } while (lVar14 != 0);
    if ((uVar12 & 1) != 0) {
      *(undefined2 *)(*param_1 + lVar11 + 0x10) = 0xffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = param_3 - 1;
    if (-1 < iVar10) {
      uVar12 = 0;
      do {
        puVar4 = (ushort *)(lVar16 + uVar12 * 0x10);
        uVar5 = *puVar4;
        if (uVar5 != 0xffff) {
          uVar13 = *(uint *)((long)param_1 + 0xc);
          if ((int)uVar13 < (int)param_1[1] * 2) {
            FUN_02f0ad40(param_1,param_2,uVar13 * 2 + 2);
            uVar13 = *(uint *)((long)param_1 + 0xc);
            uVar5 = *puVar4;
          }
          uVar6 = (uint)uVar5 * -0x61c8864f;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
          while( true ) {
            uVar6 = uVar6 & uVar13;
            uVar15 = (uint)*(ushort *)(*param_1 + (ulong)uVar6 * 0x10);
            if (uVar15 == 0xffff) break;
            if (uVar5 == uVar15) {
              iVar10 = 0;
              goto LAB_02f0ae80;
            }
            uVar6 = uVar6 + 1;
          }
          iVar10 = 1;
LAB_02f0ae80:
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar10;
          puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
          uVar9 = *(undefined8 *)(puVar4 + 4);
          *puVar1 = *(undefined8 *)puVar4;
          puVar1[1] = uVar9;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar2);
    }
    if (-1 < (int)lVar7) {
      (**(code **)(*param_2 + 0x20))
                (param_2,lVar16,-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4);
    }
    uVar9 = 0;
  }
  return uVar9;
}


