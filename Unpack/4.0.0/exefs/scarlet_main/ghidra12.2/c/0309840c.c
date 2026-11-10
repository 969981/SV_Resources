/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309840c; name: FUN_0309840c
 */


ulong FUN_0309840c(long param_1,int *param_2,long param_3,long *param_4,int *param_5,long *param_6,
                  undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_d0 [2];
  int local_c8 [2];
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  long *local_78;
  
  lVar9 = *(long *)(param_1 + 0x20);
  iVar7 = *param_2;
  if ((*(int *)(lVar9 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar9 + 0x100) + (long)iVar7) & 1) == 0)) {
    if (param_6 != (long *)0x0) {
      local_c8[0] = iVar7;
      uVar10 = (**(code **)(*param_6 + 0x28))(param_6,param_1,local_c8,param_7,param_8);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      iVar7 = *param_2;
    }
    *param_5 = iVar7;
    lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
    piVar3 = (int *)(*(long *)(lVar16 + 0x18) + (long)*param_2 * 0x10);
    lVar9 = *(long *)(lVar16 + 0x28);
    lVar12 = *(long *)(lVar16 + 0x38);
    plVar19 = (long *)(lVar12 + (long)*(int *)(lVar9 + (long)*piVar3 * 0x14) * 0x10);
    lStack_88 = plVar19[1];
    local_90 = *plVar19;
    uVar1 = *piVar3 + 1;
    if ((int)uVar1 < *piVar3 + (int)(short)piVar3[2] + -1) {
      fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
      lVar14 = (long)(int)uVar1;
      lVar18 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) +
               (long)(int)uVar1) * 4;
      fVar21 = ABS(fVar22 + -0.5);
      fVar22 = ABS(fVar22 + -0.5);
      bVar5 = false;
      while( true ) {
        lVar14 = lVar14 + 1;
        puVar6 = (undefined8 *)(lVar12 + (long)*(int *)(lVar9 + lVar18) * 0x10);
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        puVar6 = (undefined8 *)(lVar12 + (long)((int *)(lVar9 + lVar18))[1] * 0x10);
        uStack_a8 = puVar6[1];
        local_b0 = *puVar6;
        local_78 = (long *)CONCAT44(fVar22 + 0.5,fVar21 + 0.5);
        iVar7 = FUN_0086eb50(param_3,&local_90,&local_a0,&local_b0,0,&local_78,auStack_c0);
        plVar19 = param_6;
        if (iVar7 != 0) {
          fVar20 = ABS(SUB84(local_78,0) + -0.5);
          bVar4 = fVar20 < fVar21;
          plVar19 = local_78;
          if (!bVar4) {
            plVar19 = param_6;
          }
          fVar21 = (float)((uint)fVar21 ^ ((uint)fVar21 ^ (uint)fVar20) & -(uint)bVar4);
          fVar22 = (float)((uint)fVar22 ^
                          ((uint)fVar22 ^ (uint)ABS((float)((ulong)local_78 >> 0x20) + -0.5)) &
                          -(uint)bVar4);
          bVar5 = (bool)(bVar4 | bVar5);
        }
        if ((int)(short)piVar3[2] + *piVar3 + -1 <= lVar14) break;
        lVar9 = *(long *)(lVar16 + 0x28);
        lVar18 = lVar18 + 0x14;
        lVar12 = *(long *)(lVar16 + 0x38);
        param_6 = plVar19;
      }
      if (bVar5) {
        *param_4 = (long)plVar19;
        return 1;
      }
    }
    uVar10 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(lVar9 + 0x168) + (long)iVar7 * 4);
    uVar10 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      uVar10 = 0;
      iVar7 = -1;
      lVar12 = 0x3f8000003f800000;
    }
    else {
      uVar13 = *(uint *)(lVar9 + 0x170);
      lVar12 = (long)(int)uVar13;
      if ((int)uVar13 <= (int)(uVar1 + 1)) {
        uVar13 = uVar1 + 1;
      }
      uVar11 = uVar10;
      do {
        uVar2 = uVar11 + 1;
        if (lVar12 <= (long)uVar2) goto LAB_03098618;
        lVar16 = uVar11 * 4;
        uVar11 = uVar2;
      } while (*(int *)(*(long *)(lVar9 + 0x168) + 4 + lVar16) == iVar7);
      uVar13 = (uint)uVar2;
LAB_03098618:
      uVar15 = 0;
      if ((int)uVar1 < (int)uVar13) {
        if (param_6 == (long *)0x0) {
          fVar22 = 0.5;
          iVar7 = -1;
          lVar16 = 0x3f8000003f800000;
          while( true ) {
            uVar11 = FUN_03098170(lVar9,uVar10,param_3,&local_90);
            iVar8 = (int)uVar10;
            lVar12 = lVar16;
            if ((uVar11 & 1) != 0) {
              fVar21 = ABS((float)local_90 + -0.5);
              bVar5 = fVar22 <= fVar21;
              lVar12 = local_90;
              if (bVar5) {
                lVar12 = lVar16;
              }
              fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar21) & -(uint)!bVar5);
              if (bVar5) {
              }
              else {
                uVar15 = 1;
                iVar7 = iVar8;
              }
            }
            if (uVar13 - 1 == iVar8) break;
            lVar9 = *(long *)(param_1 + 0x20);
            uVar10 = (ulong)(iVar8 + 1);
            lVar16 = lVar12;
          }
        }
        else {
          fVar22 = 0.5;
          iVar7 = -1;
          lVar9 = 0x3f8000003f800000;
          do {
            iVar17 = (int)uVar10;
            local_d0[0] = iVar17;
            iVar8 = (**(code **)(*param_6 + 0x28))(param_6,param_1,local_d0,param_7,param_8);
            lVar12 = lVar9;
            if ((iVar8 != 0) &&
               (uVar10 = FUN_03098170(*(undefined8 *)(param_1 + 0x20),uVar10,param_3,&local_90),
               (uVar10 & 1) != 0)) {
              fVar21 = ABS((float)local_90 + -0.5);
              bVar5 = fVar22 <= fVar21;
              lVar12 = local_90;
              if (bVar5) {
                lVar12 = lVar9;
              }
              fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar21) & -(uint)!bVar5);
              if (bVar5) {
              }
              else {
                uVar15 = 1;
                iVar7 = iVar17;
              }
            }
            uVar10 = (ulong)(iVar17 + 1U);
            lVar9 = lVar12;
          } while (uVar13 != iVar17 + 1U);
        }
      }
      else {
        iVar7 = -1;
        lVar12 = 0x3f8000003f800000;
      }
      uVar10 = (ulong)uVar15;
    }
    *param_4 = lVar12;
    *param_5 = iVar7;
  }
  return uVar10;
}


