/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307c17c; name: FUN_0307c17c
 */


void FUN_0307c17c(long param_1,undefined4 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  int local_98 [2];
  int *local_90;
  undefined8 local_88;
  int local_80 [4];
  uint local_70 [2];
  int local_68 [2];
  
  uVar19 = param_3 >> 0x16 & 0x3ff;
  iVar17 = (int)uVar19;
  lVar14 = *(long *)(*(long *)(param_1 + 0x38) + uVar19 * 0x100);
  uVar3 = (uint)param_3 & 0x3fffff;
  local_68[0] = iVar17;
  if (lVar14 == 0) {
    lVar14 = 0;
  }
  else if (*(char *)(lVar14 + 0x30) == '\x01') {
    lVar14 = *(long *)(lVar14 + 0x20);
  }
  else {
    lVar14 = FUN_0307d71c();
  }
  local_70[0] = uVar3;
  FUN_0309441c(lVar14,param_2,local_70,param_4);
  if (*(char *)(param_4 + 0x28) == '\0') {
    return;
  }
  uVar13 = uVar3 - *(int *)(lVar14 + 0x20);
  if ((int)uVar3 < *(int *)(lVar14 + 0x20)) {
    if (*(int *)(lVar14 + 0x98) == 0) {
      uVar13 = uVar3;
    }
    else {
      uVar13 = *(uint *)(*(long *)(lVar14 + 0x90) + (ulong)uVar3 * 4);
      if (uVar13 == 0xffffffff) {
        lVar14 = *(long *)(lVar14 + 0x18) + (ulong)uVar3 * 0x10;
        goto LAB_0307c25c;
      }
    }
    lVar14 = *(long *)(lVar14 + 0xb0);
  }
  else {
    lVar14 = *(long *)(lVar14 + 0xd0);
  }
  lVar14 = lVar14 + (long)(int)uVar13 * 0x10;
LAB_0307c25c:
  uVar5 = *(ushort *)(lVar14 + 8);
  local_90 = local_80;
  uVar6 = *(ushort *)(lVar14 + 10);
  local_88 = -0x7ffffffc00000000;
  lVar14 = *(long *)(param_1 + 0x38) + uVar19 * 0x100;
  plVar24 = (long *)(lVar14 + 0xb0);
  piVar23 = (int *)*plVar24;
  if (*(int *)(lVar14 + 0xb8) != 0) {
    piVar2 = piVar23 + (long)*(int *)(lVar14 + 0xb8) * 2;
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    do {
      iVar18 = *piVar23;
      iVar7 = piVar23[1];
      lVar20 = *(long *)(param_1 + 0x48);
      plVar27 = (long *)(lVar20 + (long)iVar7 * 0x18);
      lVar22 = *plVar27;
      uVar13 = *(uint *)(lVar22 + 0x30);
      if (0 < (int)uVar13) {
        bVar11 = *(int *)(lVar22 + 0x18) != iVar17;
        lVar28 = 0;
        lVar25 = (ulong)uVar13 * 0xc;
        do {
          lVar26 = *(long *)(lVar22 + 0x28);
          if (*(uint *)(lVar26 + (ulong)bVar11 * 4 + -0xc + lVar25) == uVar3) {
            if (*(char *)(lVar20 + (long)iVar7 * 0x18 + 0x10) == '\x01') {
              lVar12 = *plVar27;
            }
            else {
              lVar12 = FUN_03080464(plVar27);
            }
            uVar10 = (int)*(short *)(lVar26 + ((ulong)bVar11 << 1 | 0xfffffffffffffffc) + lVar25) -
                     ((uint)uVar6 + (uint)uVar5 & 0xffff);
            if ((*(uint *)(*(long *)(param_4 + 0x10) + (long)((int)uVar10 >> 5) * 4) >>
                 (ulong)(uVar10 & 0x1f) & 1) != 0) {
              iVar4 = *(int *)(lVar12 + 0x30);
              iVar9 = iVar4 + -1;
              *(int *)(lVar12 + 0x30) = iVar9;
              if (uVar13 + (int)lVar28 != iVar4) {
                puVar15 = (undefined4 *)(*(long *)(lVar12 + 0x28) + (long)iVar9 * 0xc);
                lVar26 = *(long *)(lVar12 + 0x28) + lVar25;
                *(undefined4 *)(lVar26 + -0xc) = *puVar15;
                *(undefined4 *)(lVar26 + -8) = puVar15[1];
                *(undefined4 *)(lVar26 + -4) = puVar15[2];
              }
            }
          }
          lVar28 = lVar28 + -1;
          lVar25 = lVar25 + -0xc;
        } while (1 < (long)((ulong)uVar13 + lVar28 + 1));
        uVar13 = *(uint *)(lVar22 + 0x30);
      }
      if ((uVar13 == 0) && (*(long *)(lVar22 + 0x20) == 0)) {
        lVar20 = (long)(int)local_88;
        if ((int)(local_88._4_4_ & 0x7fffffff) <= (int)local_88) {
          FUN_03080948(&local_90,puVar1,lVar20 + 1);
        }
        local_90[(int)local_88] = iVar18;
        local_88 = CONCAT44(local_88._4_4_,(int)(lVar20 + 1));
      }
      piVar23 = piVar23 + 2;
    } while (piVar23 != piVar2);
    if ((int)local_88 != 0) {
      piVar2 = local_90 + (int)local_88;
      piVar23 = local_90;
      do {
        local_98[0] = *piVar23;
        lVar22 = (long)local_98[0];
        lVar20 = FUN_03080134(plVar24,local_98);
        if (lVar20 == 0) {
          uVar19 = 0xffffffff00000000;
          uVar21 = 0xffffffff;
        }
        else {
          uVar21 = (ulong)*(uint *)(lVar20 + 4);
          uVar19 = (lVar20 - *(long *)(lVar14 + 0xc0)) * 0x20000000;
        }
        iVar17 = *(int *)(*plVar24 + ((long)((uVar21 | uVar19) << 0x20) >> 0x1d) + 4);
        iVar18 = (int)(uVar21 | uVar19);
        if ((*(uint *)(lVar14 + 200) < (uint)(uVar19 >> 0x20)) ||
           (lVar20 = *(long *)(lVar14 + 0xc0) + ((long)uVar19 >> 0x20) * 8,
           *(int *)(lVar20 + 4) != iVar18)) {
          lVar20 = FUN_03080134(plVar24,*plVar24 + (long)iVar18 * 8);
        }
        FUN_030801a4(plVar24,lVar20);
        lVar20 = *(long *)(param_1 + 0x38) + lVar22 * 0x100 + 0xb0;
        lVar22 = FUN_03080134(lVar20,local_68);
        if (lVar22 != 0) {
          FUN_030801a4(lVar20,lVar22);
        }
        plVar16 = (long *)(*(long *)(param_1 + 0x48) + (long)iVar17 * 0x18);
        *(undefined1 *)(plVar16 + 2) = 1;
        plVar27 = (long *)*plVar16;
        *plVar16 = 0;
        if ((plVar27 != (long *)0x0) && (plVar27[1] != 0)) {
          plVar16 = plVar27 + 2;
          do {
            lVar20 = *plVar16;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar11) {
              *plVar16 = lVar20 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar20 + -1 == 0) {
            (**(code **)(*plVar27 + 0x18))();
          }
        }
        piVar23 = piVar23 + 1;
      } while (piVar23 != piVar2);
    }
  }
  lVar14 = local_88;
  uVar19 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_90 != (int *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_90,uVar19 << 2);
  }
  return;
}


