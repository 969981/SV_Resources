/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e1af4; name: FUN_030e1af4
 */


void FUN_030e1af4(long param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  short *psVar11;
  byte bVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  long lVar17;
  uint uVar18;
  byte *pbVar19;
  ushort uVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar26;
  long local_c0;
  int local_90 [2];
  char local_88;
  char local_87;
  long local_80;
  undefined8 local_78;
  int local_70 [2];
  int local_68 [2];
  
  lVar24 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x38) +
                    (long)*(int *)(param_1 + 0x20) * 0x100);
  plVar26 = (long *)(lVar24 + 0x20);
  if (*(char *)(lVar24 + 0x30) == '\x01') {
    local_c0 = *plVar26;
  }
  else {
    local_c0 = FUN_0307d71c(plVar26);
  }
  local_80 = 0;
  local_78 = -0x8000000000000000;
  local_90[0] = *param_2;
  FUN_030e6a70(param_1 + 0x28,local_90,*param_3,*param_3 + (long)(int)param_3[1] * 2,&local_88);
  iVar13 = *param_2;
  lVar21 = (long)iVar13;
  if (local_87 == '\0') {
    if (*(char *)(lVar24 + 0x30) == '\x01') {
      lVar15 = *plVar26;
      lVar14 = lVar15;
    }
    else {
      lVar14 = FUN_0307d71c(plVar26);
      lVar15 = *(long *)(lVar24 + 0x20);
    }
    uVar8 = *(uint *)(*(long *)(lVar15 + 0x168) + lVar21 * 4);
    if (-1 < (int)uVar8) {
      lVar21 = *(long *)(lVar15 + 0x18) + lVar21 * 0x10;
      iVar23 = *(int *)(lVar15 + 0x20);
      uVar18 = *(uint *)(lVar15 + 0x170);
      lVar17 = (long)(int)uVar18;
      iVar5 = *(int *)(lVar15 + 0x30);
      if ((int)uVar18 <= (int)(uVar8 + 1)) {
        uVar18 = uVar8 + 1;
      }
      uVar2 = *(short *)(lVar21 + 10) + *(short *)(lVar21 + 8);
      uVar22 = (ulong)uVar8;
      do {
        uVar1 = uVar22 + 1;
        if (lVar17 <= (long)uVar1) goto LAB_030e1d84;
        lVar21 = uVar22 * 4;
        uVar22 = uVar1;
      } while (*(int *)(*(long *)(lVar15 + 0x168) + 4 + lVar21) == iVar13);
      uVar18 = (uint)uVar1;
LAB_030e1d84:
      if (uVar8 != uVar18) {
        lVar21 = (long)(int)(uVar8 - iVar23);
        do {
          lVar15 = *(long *)(lVar14 + 0xd0);
          if (*(int *)(lVar24 + 0x40) != 0) {
            lVar17 = (long)*(int *)(lVar24 + 0x40) * 0x18;
            plVar26 = *(long **)(lVar24 + 0x38);
            do {
              lVar10 = *plVar26;
              if (lVar10 != 0) {
                if ((char)plVar26[2] != '\x01') {
                  lVar10 = FUN_03065a74(plVar26);
                }
                local_68[0] = iVar23 + (int)lVar21;
                FUN_03077488(lVar10,lVar24,local_68);
              }
              plVar26 = plVar26 + 3;
              lVar17 = lVar17 + -0x18;
            } while (lVar17 != 0);
          }
          lVar15 = lVar15 + lVar21 * 0x10;
          psVar11 = (short *)(lVar15 + 10);
          sVar16 = *psVar11;
          if (0 < sVar16) {
            iVar13 = 0;
            do {
              iVar6 = *(int *)(lVar15 + 4);
              iVar3 = iVar13 + iVar6;
              iVar7 = *(int *)(*(long *)(lVar24 + 0x20) + 0x30);
              lVar17 = (long)(iVar3 - *(int *)(lVar14 + 0x30));
              if (iVar3 < iVar7) {
                uVar20 = 0xffff;
              }
              else {
                uVar20 = *(ushort *)
                          (*(long *)(*(long *)(lVar24 + 0x20) + 0x110) + (long)(iVar3 - iVar7) * 2);
              }
              pbVar19 = (byte *)(*(long *)(lVar14 + 0xe0) + lVar17 * 0x14 + 0x10);
              bVar12 = *pbVar19;
              if (((uVar2 <= uVar20) && ((bVar12 >> 3 & 1) == 0)) &&
                 (uVar8 = (int)(short)uVar20 - (uint)uVar2,
                 (*(uint *)(param_3[2] + (long)((int)uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1)
                 != 0)) {
                *(undefined8 *)(*(long *)(lVar14 + 0xe0) + lVar17 * 0x14 + 8) = 0xffffffffffffffff;
                *pbVar19 = bVar12 & 0xbf | 8;
                *(int *)(lVar14 + 0x164) = *(int *)(lVar14 + 0x164) + 1;
                *(undefined2 *)(*(long *)(lVar14 + 0x110) + (long)((iVar13 - iVar5) + iVar6) * 2) =
                     0xffff;
                sVar16 = *psVar11;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < sVar16);
          }
          lVar21 = lVar21 + 1;
        } while (uVar18 - iVar23 != (int)lVar21);
      }
    }
  }
  else {
    lVar14 = *(long *)(lVar24 + 0x20);
    uVar8 = *(uint *)(*(long *)(lVar14 + 0x168) + lVar21 * 4);
    if (-1 < (int)uVar8) {
      uVar18 = *(uint *)(lVar14 + 0x170);
      lVar21 = (long)(int)uVar18;
      if ((int)uVar18 <= (int)(uVar8 + 1)) {
        uVar18 = uVar8 + 1;
      }
      uVar22 = (ulong)uVar8;
      do {
        uVar1 = uVar22 + 1;
        if (lVar21 <= (long)uVar1) goto LAB_030e1bec;
        lVar15 = uVar22 * 4;
        uVar22 = uVar1;
      } while (*(int *)(*(long *)(lVar14 + 0x168) + 4 + lVar15) == iVar13);
      uVar18 = (uint)uVar1;
LAB_030e1bec:
      if (uVar8 != uVar18) {
        uVar9 = uVar8 - *(int *)(lVar14 + 0x20);
        uVar22 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar9 << 4;
        iVar23 = uVar18 - uVar8;
        do {
          uVar25 = *(undefined8 *)(param_1 + 0x18);
          if (*(char *)(lVar24 + 0x30) == '\x01') {
            lVar14 = *plVar26;
            lVar21 = lVar14;
          }
          else {
            lVar21 = FUN_0307d71c(plVar26);
            lVar14 = *(long *)(lVar24 + 0x20);
          }
          piVar4 = (int *)(*(long *)(lVar21 + 0xd0) + uVar22);
          iVar5 = *(int *)(lVar14 + 0x30);
          local_68[0] = *piVar4 - iVar5;
          FUN_030e9bd0(uVar25,lVar21,local_68,(long)(short)piVar4[2]);
          if (*(short *)((long)piVar4 + 10) != 0) {
            local_70[0] = piVar4[1] - iVar5;
            FUN_030e9bd0(uVar25,lVar21,local_70);
          }
          uVar22 = uVar22 + 0x10;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
    }
    local_68[0] = iVar13;
    FUN_0308f878(lVar24,local_68);
    if ((int)local_78 != 0) {
      lVar14 = (long)(int)local_78 << 4;
      lVar21 = local_80;
      do {
        if (*(char *)(lVar21 + 0xc) == '\0') {
          FUN_030dea74(lVar24,lVar21);
        }
        else {
          if (*(char *)(lVar21 + 0xc) != '\x01') {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          FUN_030dec10(param_1,lVar24,lVar21);
        }
        lVar21 = lVar21 + 0x10;
        lVar14 = lVar14 + -0x10;
      } while (lVar14 != 0);
    }
  }
  if (local_88 != '\0') {
    if (*(int *)(*(long *)(lVar24 + 0x20) + 0x108) == 0) {
      bVar12 = 0;
    }
    else {
      bVar12 = *(byte *)(*(long *)(*(long *)(lVar24 + 0x20) + 0x100) + (long)*param_2) & 0xf7;
    }
    *(byte *)(*(long *)(local_c0 + 0x100) + (long)*param_2) = bVar12;
  }
  FUN_030d9db8(param_1 + 0xb8);
  lVar24 = local_78;
  uVar22 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar24) && (local_80 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_80,uVar22 << 4);
  }
  return;
}


