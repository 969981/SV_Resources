/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037e900; name: FUN_0037e900
 */


undefined4 FUN_0037e900(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  
  puVar15 = PTR_DAT_047ccfb0;
  puVar14 = PTR_DAT_047ccfa8;
LAB_0037e93c:
  do {
    if (*(uint *)((long)param_1 + 0xb4) < 0x106) {
      FUN_0037c490(param_1);
      uVar16 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar16 < 0x106)) {
        return 0;
      }
      if (uVar16 == 0) {
        uVar16 = *(uint *)((long)param_1 + 0xac);
        uVar21 = (ulong)uVar16;
        if (1 < uVar16) {
          uVar16 = 2;
        }
        *(uint *)((long)param_1 + 0x172c) = uVar16;
        if (param_2 == 4) {
          uVar20 = param_1[0x13];
          if ((long)uVar20 < 0) {
            lVar23 = 0;
          }
          else {
            lVar23 = param_1[0xc] + (uVar20 & 0xffffffff);
          }
          FUN_00383a70(param_1,lVar23,uVar21 - uVar20,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          lVar18 = *param_1;
          lVar23 = *(long *)(lVar18 + 0x38);
          FUN_00383870(lVar23);
          uVar16 = *(uint *)(lVar18 + 0x20);
          if (*(uint *)(lVar23 + 0x28) <= *(uint *)(lVar18 + 0x20)) {
            uVar16 = *(uint *)(lVar23 + 0x28);
          }
          if (uVar16 != 0) {
            uVar21 = (ulong)uVar16;
            memcpy(*(void **)(lVar18 + 0x18),*(void **)(lVar23 + 0x20),uVar21);
            *(ulong *)(lVar18 + 0x18) = *(long *)(lVar18 + 0x18) + uVar21;
            *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar21;
            *(ulong *)(lVar18 + 0x28) = *(long *)(lVar18 + 0x28) + uVar21;
            *(uint *)(lVar18 + 0x20) = *(int *)(lVar18 + 0x20) - uVar16;
            lVar18 = *(long *)(lVar23 + 0x28) - uVar21;
            *(long *)(lVar23 + 0x28) = lVar18;
            if (lVar18 == 0) {
              *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
            }
          }
          uVar17 = 2;
          if (*(int *)(*param_1 + 0x20) != 0) {
            uVar17 = 3;
          }
          return uVar17;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar20 = param_1[0x13];
          if ((long)uVar20 < 0) {
            lVar23 = 0;
          }
          else {
            lVar23 = param_1[0xc] + (uVar20 & 0xffffffff);
          }
          FUN_00383a70(param_1,lVar23,uVar21 - uVar20,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          lVar18 = *param_1;
          lVar23 = *(long *)(lVar18 + 0x38);
          FUN_00383870(lVar23);
          uVar16 = *(uint *)(lVar18 + 0x20);
          if (*(uint *)(lVar23 + 0x28) <= *(uint *)(lVar18 + 0x20)) {
            uVar16 = *(uint *)(lVar23 + 0x28);
          }
          if (uVar16 != 0) {
            uVar21 = (ulong)uVar16;
            memcpy(*(void **)(lVar18 + 0x18),*(void **)(lVar23 + 0x20),uVar21);
            *(ulong *)(lVar18 + 0x18) = *(long *)(lVar18 + 0x18) + uVar21;
            *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar21;
            *(ulong *)(lVar18 + 0x28) = *(long *)(lVar18 + 0x28) + uVar21;
            *(uint *)(lVar18 + 0x20) = *(int *)(lVar18 + 0x20) - uVar16;
            lVar18 = *(long *)(lVar23 + 0x28) - uVar21;
            *(long *)(lVar23 + 0x28) = lVar18;
            if (lVar18 == 0) {
              *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar16) goto LAB_0037e96c;
LAB_0037e9c8:
      uVar16 = *(uint *)(param_1 + 0x14);
      if (uVar16 < 3) goto LAB_0037eb08;
LAB_0037e9d4:
      iVar12 = *(int *)((long)param_1 + 0xac) - (int)param_1[0x16];
      uVar22 = *(uint *)((long)param_1 + 0x170c);
      *(short *)(param_1[0x2e2] + (ulong)uVar22 * 2) = (short)iVar12;
      *(uint *)((long)param_1 + 0x170c) = uVar22 + 1;
      *(char *)(param_1[0x2e0] + (ulong)uVar22) = (char)(uVar16 - 3);
      uVar22 = iVar12 - 1;
      if (0xff < (uVar22 & 0xffff)) {
        uVar22 = (uVar22 >> 7 & 0x1ff) + 0x100;
      }
      uVar21 = (ulong)(byte)puVar14[(ulong)(uVar16 - 3) & 0xff] << 2 | 0x400;
      bVar9 = puVar15[(ulong)uVar22 & 0xffff];
      *(short *)((long)param_1 + uVar21 + 0xd8) = *(short *)((long)param_1 + uVar21 + 0xd8) + 1;
      *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0x9c8) =
           *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0x9c8) + 1;
      lVar23 = param_1[0x2e1];
      iVar12 = *(int *)((long)param_1 + 0x170c);
      uVar16 = *(uint *)(param_1 + 0x14);
      uVar22 = *(int *)((long)param_1 + 0xb4) - uVar16;
      *(uint *)((long)param_1 + 0xb4) = uVar22;
      if ((uVar22 < 3) || (*(uint *)(param_1 + 0x18) < uVar16)) {
        uVar22 = *(int *)((long)param_1 + 0xac) + uVar16;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(uint *)((long)param_1 + 0xac) = uVar22;
        uVar16 = (uint)*(byte *)(param_1[0xc] + (ulong)uVar22);
        *(uint *)(param_1 + 0x10) = uVar16;
        *(uint *)(param_1 + 0x10) =
             (uVar16 << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
             (uint)*(byte *)(param_1[0xc] + (ulong)(uVar22 + 1))) & *(uint *)((long)param_1 + 0x8c);
      }
      else {
        lVar19 = param_1[0xc];
        uVar11 = uVar16 - 1;
        *(uint *)(param_1 + 0x14) = uVar11;
        uVar5 = *(uint *)((long)param_1 + 0x8c);
        uVar6 = *(uint *)(param_1 + 0x12);
        uVar8 = *(uint *)(param_1 + 0xb);
        lVar18 = param_1[0xe];
        lVar7 = param_1[0xf];
        uVar22 = *(uint *)((long)param_1 + 0xac);
        uVar21 = (ulong)*(uint *)(param_1 + 0x10);
        uVar1 = uVar22;
        if ((uVar11 & 1) != 0) {
          uVar1 = uVar22 + 1;
          *(uint *)((long)param_1 + 0xac) = uVar1;
          uVar11 = (*(uint *)(param_1 + 0x10) << (ulong)(uVar6 & 0x1f) ^
                   (uint)*(byte *)(lVar19 + (ulong)(uVar22 + 3))) & uVar5;
          uVar21 = (ulong)uVar11;
          *(uint *)(param_1 + 0x10) = uVar11;
          *(undefined2 *)(lVar18 + (ulong)(uVar8 & uVar1) * 2) = *(undefined2 *)(lVar7 + uVar21 * 2)
          ;
          *(short *)(lVar7 + uVar21 * 2) = (short)uVar1;
          uVar11 = uVar16 - 2;
          *(uint *)(param_1 + 0x14) = uVar11;
        }
        if (uVar16 != 2) {
          uVar16 = 0;
          uVar22 = uVar11;
          do {
            iVar4 = uVar1 + uVar16;
            uVar16 = uVar16 + 2;
            uVar2 = iVar4 + 1;
            *(uint *)((long)param_1 + 0xac) = uVar2;
            uVar13 = ((int)uVar21 << (ulong)(uVar6 & 0x1f) ^
                     (uint)*(byte *)(lVar19 + (ulong)(iVar4 + 3))) & uVar5;
            *(uint *)(param_1 + 0x10) = uVar13;
            *(undefined2 *)(lVar18 + (ulong)(uVar8 & uVar2) * 2) =
                 *(undefined2 *)(lVar7 + (ulong)uVar13 * 2);
            uVar3 = iVar4 + 2;
            *(short *)(lVar7 + (ulong)uVar13 * 2) = (short)uVar2;
            *(uint *)(param_1 + 0x14) = uVar22 - 1;
            *(uint *)((long)param_1 + 0xac) = uVar3;
            uVar2 = (uVar13 << (ulong)(uVar6 & 0x1f) ^ (uint)*(byte *)(lVar19 + (ulong)(iVar4 + 4)))
                    & uVar5;
            uVar21 = (ulong)uVar2;
            *(uint *)(param_1 + 0x10) = uVar2;
            *(undefined2 *)(lVar18 + (ulong)(uVar8 & uVar3) * 2) =
                 *(undefined2 *)(lVar7 + uVar21 * 2);
            *(short *)(lVar7 + uVar21 * 2) = (short)uVar3;
            *(uint *)(param_1 + 0x14) = uVar22 - 2;
            uVar22 = uVar22 - 2;
          } while (uVar16 != uVar11);
          uVar22 = (uVar1 + uVar16) - 1;
        }
        uVar22 = uVar22 + 2;
        *(uint *)((long)param_1 + 0xac) = uVar22;
      }
      if (iVar12 != (int)lVar23 + -1) goto LAB_0037e93c;
    }
    else {
LAB_0037e96c:
      uVar16 = *(uint *)((long)param_1 + 0xac);
      lVar23 = param_1[0xf];
      uVar22 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + (ulong)(uVar16 + 2))) &
               *(uint *)((long)param_1 + 0x8c);
      *(uint *)(param_1 + 0x10) = uVar22;
      lVar18 = (ulong)uVar22 * 2;
      uVar10 = *(ushort *)(lVar23 + lVar18);
      *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar16) * 2) = uVar10;
      *(short *)(lVar23 + lVar18) = (short)uVar16;
      if ((uVar10 == 0) || ((int)param_1[10] - 0x106U < uVar16 - uVar10)) goto LAB_0037e9c8;
      uVar16 = FUN_0037f5d0(param_1);
      *(uint *)(param_1 + 0x14) = uVar16;
      if (2 < uVar16) goto LAB_0037e9d4;
LAB_0037eb08:
      bVar9 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
      uVar16 = *(uint *)((long)param_1 + 0x170c);
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar16 * 2) = 0;
      *(uint *)((long)param_1 + 0x170c) = uVar16 + 1;
      *(byte *)(param_1[0x2e0] + (ulong)uVar16) = bVar9;
      *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4) + 1;
      uVar22 = *(int *)((long)param_1 + 0xac) + 1;
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
      *(uint *)((long)param_1 + 0xac) = uVar22;
      if (*(int *)((long)param_1 + 0x170c) != (int)param_1[0x2e1] + -1) goto LAB_0037e93c;
    }
    uVar21 = param_1[0x13];
    if ((long)uVar21 < 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = param_1[0xc] + (uVar21 & 0xffffffff);
    }
    FUN_00383a70(param_1,lVar23,uVar22 - uVar21,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    lVar18 = *param_1;
    lVar23 = *(long *)(lVar18 + 0x38);
    FUN_00383870(lVar23);
    uVar16 = *(uint *)(lVar18 + 0x20);
    if (*(uint *)(lVar23 + 0x28) <= *(uint *)(lVar18 + 0x20)) {
      uVar16 = *(uint *)(lVar23 + 0x28);
    }
    if (uVar16 != 0) {
      uVar21 = (ulong)uVar16;
      memcpy(*(void **)(lVar18 + 0x18),*(void **)(lVar23 + 0x20),uVar21);
      *(ulong *)(lVar18 + 0x18) = *(long *)(lVar18 + 0x18) + uVar21;
      *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar21;
      *(ulong *)(lVar18 + 0x28) = *(long *)(lVar18 + 0x28) + uVar21;
      *(uint *)(lVar18 + 0x20) = *(int *)(lVar18 + 0x20) - uVar16;
      lVar18 = *(long *)(lVar23 + 0x28) - uVar21;
      *(long *)(lVar23 + 0x28) = lVar18;
      if (lVar18 == 0) {
        *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
      }
    }
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}


