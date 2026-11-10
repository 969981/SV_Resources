/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b122e0; name: FUN_00b122e0
 */


ulong FUN_00b122e0(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  void *__src;
  void *pvVar12;
  long lVar13;
  int iVar14;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [272];
  
  lVar11 = (long)param_2 - (long)param_1 >> 3;
  if ((ulong)(lVar11 * 0xf83e0f83e0f83e1) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00b12344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*(code *)(&UNK_00b12348 +
                      (ulong)*(ushort *)(&DAT_03d5b798 + lVar11 * 0x1f07c1f07c1f07c2) * 4))(1);
    return uVar9;
  }
  pvVar12 = (void *)((long)param_1 + 0x210);
  pvVar10 = (void *)((long)param_1 + 0x108);
  iVar14 = *(int *)((long)param_1 + 0x7c);
  iVar3 = *(int *)((long)param_1 + 0x208);
  iVar4 = *(int *)((long)param_1 + 0x100);
  iVar5 = *(int *)((long)param_1 + 0x28c);
  iVar6 = *(int *)((long)param_1 + 0x310);
  bVar1 = *(int *)((long)param_1 + 0x184) < iVar14;
  if (iVar3 != iVar4) {
    bVar1 = iVar3 < iVar4;
  }
  bVar2 = iVar5 < *(int *)((long)param_1 + 0x184);
  if (iVar6 != iVar3) {
    bVar2 = iVar6 < iVar3;
  }
  if (bVar1) {
    memcpy(auStack_170,param_1,0x108);
    if (!bVar2) {
      memcpy(param_1,pvVar10,0x105);
      memcpy(pvVar10,auStack_170,0x105);
      bVar1 = iVar5 < *(int *)((long)param_1 + 0x184);
      if (iVar6 != *(int *)((long)param_1 + 0x208)) {
        bVar1 = iVar6 < *(int *)((long)param_1 + 0x208);
      }
      if (!bVar1) goto LAB_00b1270c;
      memcpy(auStack_170,pvVar10,0x108);
      memcpy(pvVar10,pvVar12,0x105);
      pvVar10 = pvVar12;
    }
    else {
      memcpy(param_1,pvVar12,0x105);
      pvVar10 = pvVar12;
    }
  }
  else {
    if (!bVar2) goto LAB_00b1270c;
    memcpy(auStack_170,pvVar10,0x108);
    memcpy(pvVar10,pvVar12,0x105);
    memcpy(pvVar12,auStack_170,0x105);
    bVar1 = *(int *)((long)param_1 + 0x184) < iVar14;
    if (*(int *)((long)param_1 + 0x208) != iVar4) {
      bVar1 = *(int *)((long)param_1 + 0x208) < iVar4;
    }
    if (!bVar1) goto LAB_00b1270c;
    memcpy(auStack_170,param_1,0x108);
    memcpy(param_1,pvVar10,0x105);
  }
  memcpy(pvVar10,auStack_170,0x105);
LAB_00b1270c:
  if ((void *)((long)param_1 + 0x318) != param_2) {
    lVar11 = 0;
    iVar14 = 0;
    pvVar10 = (void *)((long)param_1 + 0x318);
    do {
      __src = pvVar10;
      iVar3 = *(int *)((long)__src + 0x7c);
      iVar4 = *(int *)((long)__src + 0x100);
      bVar1 = iVar3 < *(int *)((long)pvVar12 + 0x7c);
      if (iVar4 != *(int *)((long)pvVar12 + 0x100)) {
        bVar1 = iVar4 < *(int *)((long)pvVar12 + 0x100);
      }
      if (bVar1) {
        memcpy(auStack_1f0,__src,0x7c);
        memcpy(auStack_170,(void *)((long)__src + 0x80),0x80);
        uVar7 = *(undefined4 *)((long)__src + 0x104);
        lVar8 = lVar11;
        do {
          lVar13 = lVar8;
          memcpy((void *)((long)param_1 + lVar13 + 0x318),(void *)((long)param_1 + lVar13 + 0x210),
                 0x105);
          if (lVar13 == -0x210) {
            pvVar12 = param_1;
            goto LAB_00b127d0;
          }
          iVar5 = *(int *)((long)param_1 + lVar13 + 0x208);
          bVar1 = iVar3 < *(int *)((long)param_1 + lVar13 + 0x184);
          if (iVar4 != iVar5) {
            bVar1 = iVar4 < iVar5;
          }
          lVar8 = lVar13 + -0x108;
        } while (bVar1);
        pvVar12 = (void *)((long)param_1 + lVar13 + 0x210);
LAB_00b127d0:
        memcpy(pvVar12,auStack_1f0,0x7c);
        *(int *)((long)pvVar12 + 0x7c) = iVar3;
        memcpy((void *)((long)pvVar12 + 0x80),auStack_170,0x80);
        iVar14 = iVar14 + 1;
        *(int *)((long)pvVar12 + 0x100) = iVar4;
        *(char *)((long)pvVar12 + 0x104) = (char)uVar7;
        if (iVar14 == 8) {
          return (ulong)((void *)((long)__src + 0x108) == param_2);
        }
      }
      lVar11 = lVar11 + 0x108;
      pvVar10 = (void *)((long)__src + 0x108);
      pvVar12 = __src;
    } while ((void *)((long)__src + 0x108) != param_2);
  }
  return 1;
}


