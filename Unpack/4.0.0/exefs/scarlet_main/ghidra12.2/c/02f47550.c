/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f47550; name: FUN_02f47550
 */


undefined4 FUN_02f47550(undefined4 *param_1,uint param_2,ushort param_3,void *param_4,ulong param_5)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  void *__s1;
  
  uVar7 = param_1[5];
  plVar1 = (long *)(param_1 + 2);
  if ((int)uVar7 < 1) {
LAB_02f476a8:
    lVar5 = FUN_02f0aeec(param_5 & 0xffffffff,*param_1,0);
    uVar7 = param_1[5];
    if ((int)uVar7 < param_1[4] * 2) {
      FUN_02f0ad40(plVar1,PTR_PTR_047d1a50,uVar7 * 2 + 2);
      uVar7 = param_1[5];
    }
    lVar6 = *plVar1;
    uVar3 = ((uint)param_3 * -0x61c8864f & 0xff00ff00) >> 8 |
            ((uint)param_3 * -0x61c8864f & 0xff00ff) << 8;
    uVar10 = (ulong)(uVar7 & (uVar3 >> 0x10 | uVar3 << 0x10));
    uVar2 = *(ushort *)(lVar6 + uVar10 * 0x10);
    while (iVar4 = (int)uVar10, uVar2 != 0xffff) {
      if (uVar2 == param_3) goto LAB_02f47734;
      uVar10 = (ulong)(iVar4 + 1U & uVar7);
      uVar2 = *(ushort *)(lVar6 + uVar10 * 0x10);
    }
  }
  else {
    lVar9 = *plVar1;
    uVar3 = ((uint)param_3 * -0x61c8864f & 0xff00ff00) >> 8 |
            ((uint)param_3 * -0x61c8864f & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar10 = (ulong)(uVar7 & uVar3);
    uVar2 = *(ushort *)(lVar9 + uVar10 * 0x10);
    if (uVar2 == 0xffff) goto LAB_02f476a8;
    if (uVar2 != param_3) {
      do {
        uVar10 = (ulong)((int)uVar10 + 1U & uVar7);
        uVar2 = *(ushort *)(lVar9 + uVar10 * 0x10);
        if (uVar2 == 0xffff) goto LAB_02f476a8;
      } while (uVar2 != param_3);
    }
    lVar9 = *(long *)(lVar9 + uVar10 * 0x10 + 8);
    if (lVar9 == 0) goto LAB_02f476a8;
    if (param_2 < *(uint *)(lVar9 + 0x18)) goto LAB_02f4775c;
    lVar5 = FUN_02f0aeec(param_5 & 0xffffffff,*param_1,lVar9);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar9,0);
    uVar7 = param_1[5];
    if ((int)uVar7 < param_1[4] * 2) {
      FUN_02f0ad40(plVar1,PTR_PTR_047d1a50,uVar7 * 2 + 2);
      uVar7 = param_1[5];
    }
    uVar10 = (ulong)(uVar7 & uVar3);
    lVar6 = *plVar1;
    uVar2 = *(ushort *)(lVar6 + uVar10 * 0x10);
    while (iVar4 = (int)uVar10, uVar2 != 0xffff) {
      if (uVar2 == param_3) goto LAB_02f47734;
      uVar10 = (ulong)(iVar4 + 1U & uVar7);
      uVar2 = *(ushort *)(lVar6 + uVar10 * 0x10);
    }
  }
  iVar8 = 1;
  lVar9 = lVar5;
  goto LAB_02f47738;
LAB_02f47734:
  iVar8 = 0;
  lVar9 = lVar5;
LAB_02f47738:
  param_1[4] = param_1[4] + iVar8;
  *(ushort *)(lVar6 + (long)iVar4 * 0x10) = param_3;
  *(long *)(*plVar1 + (long)iVar4 * 0x10 + 8) = lVar9;
LAB_02f4775c:
  __s1 = (void *)(*(long *)(lVar9 + 0x20) + param_2 * param_5);
  lVar9 = *(long *)(lVar9 + 8);
  uVar7 = *(uint *)(lVar9 + (long)((int)param_2 >> 5) * 4);
  uVar3 = 1 << (ulong)(param_2 & 0x1f);
  if (((uVar7 & uVar3) == 0) || (iVar4 = memcmp(__s1,param_4,(long)(int)param_5), iVar4 != 0)) {
    *(uint *)(lVar9 + ((long)((ulong)param_2 << 0x20) >> 0x25) * 4) = uVar7 | uVar3;
    memcpy(__s1,param_4,(long)(int)param_5);
    return 1;
  }
  return 0;
}


