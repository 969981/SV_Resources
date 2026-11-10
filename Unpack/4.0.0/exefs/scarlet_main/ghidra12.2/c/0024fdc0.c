/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024fdc0; name: FUN_0024fdc0
 */


void FUN_0024fdc0(undefined8 *param_1,byte *param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  long lStack_70;
  ulong local_68;
  ulong local_58;
  
  if (param_4 == 0) {
    local_68 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar8 = FUN_01cf7e20();
    local_78 = param_2 + 1;
    param_1[3] = uVar8;
    uVar11 = *(ulong *)(param_2 + 8);
    pbVar19 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar19 = param_2 + 1;
      uVar11 = (ulong)(*param_2 >> 1);
    }
    uVar12 = *(ulong *)(param_3 + 8);
    pbVar13 = *(byte **)(param_3 + 0x10);
    uVar18 = 0;
    if ((*param_3 & 1) == 0) {
      pbVar13 = param_3 + 1;
      uVar12 = (ulong)(*param_3 >> 1);
    }
    do {
      uVar16 = uVar18;
      if (uVar12 != 0) {
        pbVar9 = pbVar19 + uVar18;
        pbVar15 = pbVar19 + uVar11;
        lVar17 = (long)pbVar15 - (long)pbVar9;
        if (lVar17 < (long)uVar12) break;
        bVar3 = *pbVar13;
        while( true ) {
          if (0xfffffffffffffffe < lVar17 - uVar12) goto LAB_0024f690;
          pbVar9 = memchr(pbVar9,(uint)bVar3,(lVar17 - uVar12) + 1);
          if (pbVar9 == (byte *)0x0) goto LAB_0024f690;
          iVar7 = memcmp(pbVar9,pbVar13,uVar12);
          if (iVar7 == 0) break;
          pbVar9 = pbVar9 + 1;
          lVar17 = (long)pbVar15 - (long)pbVar9;
          if (lVar17 < (long)uVar12) goto LAB_0024f690;
        }
        if (pbVar9 == pbVar15) break;
        uVar16 = (long)pbVar9 - (long)pbVar19;
      }
      if (uVar16 == 0xffffffffffffffff) break;
      lStack_70 = uVar16 - uVar18;
                    /* try { // try from 0024f638 to 0024f64b has its CatchHandler @ 0024f6c4 */
      FUN_0024f6d8(param_1,param_2,&local_68,&lStack_70);
      bVar6 = (*param_3 & 1) != 0;
      uVar12 = (ulong)(*param_3 >> 1);
      if (bVar6) {
        uVar12 = *(ulong *)(param_3 + 8);
      }
      uVar18 = uVar12 + uVar16;
      pbVar13 = param_3 + 1;
      if (bVar6) {
        pbVar13 = *(byte **)(param_3 + 0x10);
      }
      uVar11 = (ulong)(*param_2 >> 1);
      pbVar19 = local_78;
      if ((*param_2 & 1) != 0) {
        uVar11 = *(ulong *)(param_2 + 8);
        pbVar19 = *(byte **)(param_2 + 0x10);
      }
      local_68 = uVar18;
    } while (uVar18 <= uVar11);
LAB_0024f690:
                    /* try { // try from 0024f690 to 0024f69f has its CatchHandler @ 0024f6c0 */
    FUN_0024fa0c(param_1,param_2,&local_68);
    return;
  }
  uVar11 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar11 = *(ulong *)(param_2 + 8);
  }
  local_80 = 0;
  local_78 = (byte *)0x0;
  lStack_70 = 0;
  local_58 = uVar11;
  local_68 = FUN_01cf7e20();
  if (param_4 == 1) {
    uVar8 = 0;
  }
  else {
    lVar17 = 1;
    do {
      bVar6 = (*param_2 & 1) != 0;
      uVar18 = (ulong)(*param_2 >> 1);
      if (bVar6) {
        uVar18 = *(ulong *)(param_2 + 8);
      }
      bVar3 = *param_3;
      uVar12 = *(ulong *)(param_3 + 8);
      pbVar19 = param_2 + 1;
      if (bVar6) {
        pbVar19 = *(byte **)(param_2 + 0x10);
      }
      uVar16 = (ulong)(bVar3 >> 1);
      pbVar13 = param_3 + 1;
      if ((bVar3 & 1) != 0) {
        uVar16 = uVar12;
        pbVar13 = *(byte **)(param_3 + 0x10);
      }
      uVar1 = uVar18;
      if (uVar11 - 1 <= uVar18) {
        uVar1 = uVar11 - 1;
      }
      uVar2 = uVar16 + uVar1;
      if (uVar18 - uVar1 <= uVar16) {
        uVar2 = uVar18;
      }
      pbVar9 = pbVar19 + uVar2;
      if ((uVar16 != 0) && ((long)uVar16 <= (long)uVar2)) {
        pbVar15 = pbVar9;
        while (pbVar14 = pbVar15, pbVar19 + (uVar16 - 1) != pbVar14) {
          pbVar15 = pbVar14 + -1;
          if (*pbVar15 == pbVar13[uVar16 - 1]) {
            lVar10 = 0;
            do {
              if (1 - uVar16 == lVar10) {
                pbVar13 = pbVar15 + (1 - uVar16);
                goto LAB_0024ff2c;
              }
              lVar4 = lVar10 + (uVar16 - 2);
              lVar5 = lVar10 + -2;
              lVar10 = lVar10 + -1;
            } while (pbVar14[lVar5] == pbVar13[lVar4]);
          }
        }
      }
      pbVar13 = pbVar9;
LAB_0024ff2c:
      if (uVar16 != 0 && pbVar13 == pbVar9) break;
      uVar18 = (long)pbVar13 - (long)pbVar19;
      if (uVar18 == 0xffffffffffffffff) break;
      if ((bVar3 & 1) == 0) {
        uVar12 = (ulong)(bVar3 >> 1);
      }
      local_88 = uVar18 + uVar12;
      local_90 = (uVar11 - uVar18) - uVar12;
                    /* try { // try from 0024ff7c to 0024ff8f has its CatchHandler @ 0024fffc */
      FUN_00250010(&local_80,local_80,param_2,&local_88,&local_90);
      local_58 = uVar18;
      if (uVar18 == 0) break;
      lVar17 = lVar17 + 1;
      uVar11 = uVar18;
    } while (lVar17 != param_4);
    uVar8 = local_80;
  }
  local_88 = (ulong)local_88._4_4_ << 0x20;
                    /* try { // try from 0024ffb0 to 0024ffc3 has its CatchHandler @ 0024fff8 */
  FUN_002505fc(&local_80,uVar8,param_2,&local_88,&local_58);
  param_1[3] = local_68;
  *param_1 = local_80;
  param_1[2] = lStack_70;
  param_1[1] = local_78;
  return;
}


