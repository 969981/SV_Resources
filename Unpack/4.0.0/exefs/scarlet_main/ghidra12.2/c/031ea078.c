/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ea078; name: FUN_031ea078
 */


uint FUN_031ea078(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  long *plVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  size_t sVar7;
  ulong *puVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  short *psVar12;
  ulong uVar13;
  undefined8 *local_68;
  undefined1 auStack_44 [4];
  
  *param_3 = 0;
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  local_68 = param_2;
  lVar6 = FUN_031ea558(param_1,&local_68);
  if ((lVar6 != 0) &&
     (uVar4 = *(uint *)(*param_1 + (long)*(int *)(lVar6 + 4) * 0x10 + 8), uVar4 != 0)) {
    return uVar4;
  }
  uVar4 = (uint)*param_2;
  if ((uVar4 >> 0x17 & 1) == 0) {
LAB_031ea1ec:
    if (param_2[1] != 0) {
      uVar4 = FUN_031ea078(param_1,param_2[1],auStack_44);
      goto LAB_031ea20c;
    }
  }
  else {
    uVar13 = CONCAT44(uVar4,uVar4) & 0x7fffff007fffff;
    psVar12 = (short *)param_2[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))
                                            + POPCOUNT((char)(uVar13 >> 0x10))) + 2];
    if (psVar12 == (short *)0x0) goto LAB_031ea1ec;
    sVar3 = psVar12[2];
    if (*psVar12 < sVar3) {
      uVar4 = 0;
      lVar6 = (long)(int)*psVar12;
      do {
        puVar8 = (ulong *)(psVar12 + lVar6 * 4);
        do {
          puVar8 = (ulong *)puVar8[1];
          if (puVar8 == (ulong *)0x0) break;
          uVar5 = (uint)*puVar8;
          if ((uVar5 >> 0x10 & 1) != 0) {
            uVar5 = uVar5 & 0xffff;
            pbVar10 = (byte *)puVar8[(ulong)(byte)(POPCOUNT((char)uVar5) +
                                                  POPCOUNT((char)(uVar5 >> 8))) + 2];
            goto LAB_031ea160;
          }
        } while ((*puVar8 & 1) == 0);
        pbVar10 = (byte *)0x0;
LAB_031ea160:
        sVar7 = strlen((char *)pbVar10);
        uVar4 = ~uVar4;
        if (sVar7 << 0x20 != 0) {
          lVar9 = (long)(sVar7 << 0x20) >> 0x20;
          pbVar11 = pbVar10;
          if ((sVar7 & 1) != 0) {
            pbVar11 = pbVar10 + 1;
            uVar4 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar4 & 0xff ^ (uint)*pbVar10) * 4) ^
                    uVar4 >> 8;
            lVar9 = lVar9 + -1;
          }
          if ((int)sVar7 != 1) {
            do {
              uVar4 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar4 & 0xff ^ (uint)*pbVar11) * 4) ^
                      uVar4 >> 8;
              pbVar10 = pbVar11 + 1;
              pbVar11 = pbVar11 + 2;
              uVar4 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar4 & 0xff ^ (uint)*pbVar10) * 4) ^
                      uVar4 >> 8;
              lVar9 = lVar9 + -2;
            } while (lVar9 != 0);
          }
        }
        lVar6 = lVar6 + 1;
        uVar4 = ~uVar4;
      } while (lVar6 != (int)sVar3);
      goto LAB_031ea20c;
    }
  }
  uVar4 = 0;
LAB_031ea20c:
  uVar5 = FUN_031ea5e8(param_1,&local_68);
  if (*(uint *)(param_1 + 1) == uVar5) {
    iVar2 = uVar5 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar5) {
      FUN_031ea704(param_1,(long)iVar2);
      uVar5 = *(uint *)(param_1 + 1);
    }
    plVar1 = (long *)(*param_1 + (long)(int)uVar5 * 0x10);
    *plVar1 = (long)param_2;
    *(uint *)(plVar1 + 1) = uVar4;
    *(int *)(param_1 + 1) = iVar2;
  }
  else {
    *(uint *)(*param_1 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8) = uVar4;
  }
  *param_3 = 1;
  return uVar4;
}


