/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f8810; name: FUN_031f8810
 */


int FUN_031f8810(ulong *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  
  for (; (param_1 != (ulong *)0x0 && ((*param_1 & 1) == 0)); param_1 = (ulong *)param_1[1]) {
  }
  puVar7 = param_1;
  while( true ) {
    uVar10 = (uint)*puVar7;
    if ((uVar10 >> 0xf & 1) != 0) break;
    if (((*puVar7 & 9) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0))
    goto LAB_031f8898;
  }
  uVar11 = CONCAT44(uVar10,uVar10) & 0x7fff00007fff;
  if (((undefined8 *)
       puVar7[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8))) + 2] !=
       (undefined8 *)0x0) &&
     (puVar7 = *(ulong **)
                puVar7[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8))) + 2],
     puVar7 != (ulong *)0x0)) goto LAB_031f889c;
LAB_031f8898:
  puVar7 = param_1;
LAB_031f889c:
  uVar10 = *(uint *)((long)param_4 + 0xc);
  if (0 < (int)uVar10) {
    uVar2 = (int)puVar7 * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (int)((ulong)puVar7 >> 0x20) * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar11 = (ulong)((uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar10);
    lVar9 = *param_4;
    puVar12 = *(ulong **)(lVar9 + uVar11 * 0x10);
    if (puVar12 != (ulong *)0xffffffffffffffff) {
      if (puVar12 != puVar7) {
        do {
          uVar11 = (ulong)((int)uVar11 + 1U & uVar10);
          puVar12 = *(ulong **)(lVar9 + uVar11 * 0x10);
          if (puVar12 == (ulong *)0xffffffffffffffff) goto LAB_031f8924;
        } while (puVar12 != puVar7);
      }
      puVar7 = *(ulong **)(lVar9 + uVar11 * 0x10 + 8);
    }
  }
LAB_031f8924:
  uVar10 = *(uint *)((long)param_3 + 0xc);
  iVar14 = (int)((ulong)puVar7 >> 0x20);
  if (0 < (int)uVar10) {
    uVar2 = (int)puVar7 * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = iVar14 * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar11 = (ulong)((uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar10);
    lVar9 = *param_3;
    puVar12 = *(ulong **)(lVar9 + uVar11 * 0x10);
    if (puVar12 != (ulong *)0xffffffffffffffff) {
      if (puVar12 != puVar7) {
        do {
          uVar11 = (ulong)((int)uVar11 + 1U & uVar10);
          puVar12 = *(ulong **)(lVar9 + uVar11 * 0x10);
          if (puVar12 == (ulong *)0xffffffffffffffff) goto LAB_031f89a8;
        } while (puVar12 != puVar7);
      }
      iVar13 = *(int *)(lVar9 + uVar11 * 0x10 + 8);
      if (-1 < iVar13) {
        return iVar13;
      }
    }
  }
LAB_031f89a8:
  pbVar5 = (byte *)puVar7[1];
  if (pbVar5 == (byte *)0x0) {
    iVar13 = (int)param_2[1];
    iVar4 = -1;
    uVar15 = 0xffffffff;
    iVar6 = iVar13;
  }
  else {
    do {
      if ((*pbVar5 & 1) != 0) break;
      pbVar5 = *(byte **)(pbVar5 + 8);
    } while (pbVar5 != (byte *)0x0);
    iVar4 = FUN_031f8810(pbVar5,param_2,param_3);
    iVar13 = (int)param_2[1];
    if (iVar4 == -1) {
      uVar15 = 0xffffffff;
      iVar6 = iVar13;
    }
    else {
      lVar9 = *param_2 + (long)iVar4 * 0x18;
      uVar15 = *(undefined4 *)(lVar9 + 0xc);
      *(int *)(lVar9 + 0xc) = iVar13;
      iVar6 = (int)param_2[1];
    }
  }
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar6) {
    FUN_031f8c00(param_2,(long)iVar1);
    iVar6 = (int)param_2[1];
  }
  puVar8 = (undefined8 *)(*param_2 + (long)iVar6 * 0x18);
  *puVar8 = puVar7;
  *(int *)(puVar8 + 1) = iVar4;
  *(undefined4 *)((long)puVar8 + 0xc) = 0xffffffff;
  *(undefined4 *)(puVar8 + 2) = uVar15;
  *(int *)(param_2 + 1) = iVar1;
  uVar10 = *(uint *)((long)param_3 + 0xc);
  if ((int)uVar10 < (int)param_3[1] * 2) {
    FUN_02ef5fd4(param_3,PTR_PTR_047d1a50 + 0x20,uVar10 * 2 + 2);
    uVar10 = *(uint *)((long)param_3 + 0xc);
  }
  uVar2 = (int)puVar7 * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = iVar14 * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
  do {
    uVar2 = uVar10 & uVar2;
    puVar12 = *(ulong **)(*param_3 + (ulong)uVar2 * 0x10);
    if (puVar12 == (ulong *)0xffffffffffffffff) {
      iVar14 = 1;
LAB_031f8ae0:
      *(int *)(param_3 + 1) = (int)param_3[1] + iVar14;
      *(ulong **)(*param_3 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4)) =
           puVar7;
      *(long *)(*param_3 + (long)(int)uVar2 * 0x10 + 8) = (long)iVar13;
      return iVar13;
    }
    if (puVar12 == puVar7) {
      iVar14 = 0;
      goto LAB_031f8ae0;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}


