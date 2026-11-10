/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f08a8; name: FUN_031f08a8
 */


undefined8
FUN_031f08a8(long param_1,undefined8 *param_2,ulong *param_3,int param_4,int param_5,
            undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  ulong *puVar8;
  uint uVar9;
  void *pvVar10;
  ulong uVar11;
  code *pcVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  
  iVar5 = *(int *)(param_2 + 1);
  iVar3 = iVar5;
  if (-1 < param_4) {
    iVar3 = param_4;
  }
  iVar6 = *(int *)(param_6 + 2);
  iVar4 = iVar5;
  if (-1 < param_5) {
    iVar4 = param_5;
  }
  if (iVar6 != 0 || iVar4 != 0) {
    iVar2 = (iVar6 - iVar4) + iVar5;
    puVar8 = param_3;
    while( true ) {
      uVar9 = (uint)*puVar8;
      if ((uVar9 >> 0x14 & 1) != 0) break;
      if (((*puVar8 & 1) != 0) || (puVar8 = (ulong *)puVar8[1], puVar8 == (ulong *)0x0))
      goto LAB_031f0944;
    }
    if (puVar8 != (ulong *)0x0) {
      uVar15 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
      uVar15 = (ulong)(ushort)puVar8[(ulong)(byte)(POPCOUNT((char)uVar15) +
                                                   POPCOUNT((char)(uVar15 >> 8)) +
                                                  POPCOUNT((char)(uVar15 >> 0x10))) + 2];
      goto LAB_031f0948;
    }
LAB_031f0944:
    uVar15 = 0;
LAB_031f0948:
    if (iVar6 < 1) {
      pcVar12 = (code *)0x0;
    }
    else {
      puVar8 = param_3;
      while (uVar11 = *puVar8, ((uint)uVar11 >> 7 & 1) == 0) {
        if ((uVar11 & 1) != 0) {
          return 0x80040200;
        }
        puVar8 = (ulong *)puVar8[1];
        if (puVar8 == (ulong *)0x0) {
          return 0x80040200;
        }
      }
      if (puVar8 == (ulong *)0x0) {
        return 0x80040200;
      }
      pcVar12 = (code *)puVar8[(ulong)(byte)POPCOUNT((byte)uVar11 & 0x7f) + 2];
      if (pcVar12 == (code *)0x0) {
        return 0x80040200;
      }
    }
    uVar9 = *(uint *)((long)param_2 + 0xc);
    iVar14 = (int)uVar15;
    if (((ulong)uVar9 & 0x7fffffff) < (ulong)(long)iVar2) {
      plVar13 = *(long **)(param_1 + 0x10);
      pvVar10 = (void *)*param_2;
      pvVar7 = (void *)(**(code **)(*plVar13 + 0x18))(plVar13,uVar15 * (long)iVar2);
      memcpy(pvVar7,pvVar10,(long)(iVar14 * iVar5));
      if (-1 < (int)uVar9) {
        (**(code **)(*plVar13 + 0x20))(plVar13,pvVar10,uVar9 * uVar15);
      }
      *param_2 = pvVar7;
      *(int *)((long)param_2 + 0xc) = iVar2;
    }
    else {
      pvVar7 = (void *)*param_2;
    }
    *(int *)(param_2 + 1) = iVar2;
    lVar1 = (long)pvVar7 + (long)(iVar14 * iVar3);
    pvVar10 = (void *)((long)pvVar7 + (long)(iVar14 * (iVar4 + iVar3)));
    pvVar7 = (void *)((long)pvVar7 + (long)(iVar14 * (iVar6 + iVar3)));
    if (0 < iVar4) {
      puVar8 = param_3;
      while (uVar15 = *puVar8, ((uint)uVar15 >> 8 & 1) == 0) {
        if (((uVar15 & 1) != 0) || (puVar8 = (ulong *)puVar8[1], puVar8 == (ulong *)0x0))
        goto LAB_031f0abc;
      }
      if ((puVar8 != (ulong *)0x0) &&
         ((code *)puVar8[(ulong)(byte)POPCOUNT((char)uVar15) + 2] != (code *)0x0)) {
        (*(code *)puVar8[(ulong)(byte)POPCOUNT((char)uVar15) + 2])(lVar1,param_3,iVar4);
      }
    }
LAB_031f0abc:
    if (pvVar10 < pvVar7) {
      FUN_031d0240(pvVar7,pvVar10);
    }
    else if (pvVar7 < pvVar10) {
      memmove(pvVar7,pvVar10,(long)(iVar14 * (iVar5 - (iVar4 + iVar3))));
    }
    if (0 < iVar6) {
      (*pcVar12)(lVar1,*param_6,param_3,iVar6);
    }
  }
  return 0;
}


