/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf4dd8; name: FUN_00bf4dd8
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00bf4dd8(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  uint local_70;
  
  lVar22 = *param_2;
  uVar1 = *(uint *)(param_1 + 1);
  uVar21 = (ulong)uVar1;
  if (uVar1 == 0) {
    local_70 = 0;
    puVar7 = (uint *)0x0;
  }
  else {
    if ((int)uVar1 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar13 = (undefined8 *)param_1[2];
    local_70 = uVar1;
    if ((int)uVar1 < 5) {
      local_70 = 4;
    }
    if (lVar22 == 0) {
      puVar7 = operator_new__((ulong)local_70 * 8 + 8);
      lVar19 = 0;
    }
    else {
      puVar7 = (uint *)FUN_00c0e238(lVar22,0);
      lVar19 = lVar22;
    }
    *puVar7 = 0;
    puVar15 = puVar7;
    do {
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 2;
      uVar16 = *puVar13;
      uVar8 = FUN_00bf5240(lVar19);
      FUN_00c11ee0(uVar16,uVar8);
      uVar21 = uVar21 - 1;
      *(undefined8 *)puVar15 = uVar8;
    } while (uVar21 != 0);
    if ((int)*puVar7 < (int)uVar1) {
      *puVar7 = uVar1;
    }
    uVar21 = (ulong)*(uint *)(param_1 + 1);
    if (0 < (int)*(uint *)(param_1 + 1)) {
      puVar13 = (undefined8 *)param_1[2];
      do {
        puVar13 = puVar13 + 1;
        pbVar12 = (byte *)*puVar13;
        if ((*pbVar12 & 1) == 0) {
          pbVar12[0] = 0;
          pbVar12[1] = 0;
        }
        else {
          **(undefined1 **)(pbVar12 + 0x10) = 0;
          pbVar12[8] = 0;
          pbVar12[9] = 0;
          pbVar12[10] = 0;
          pbVar12[0xb] = 0;
          pbVar12[0xc] = 0;
          pbVar12[0xd] = 0;
          pbVar12[0xe] = 0;
          pbVar12[0xf] = 0;
        }
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0) {
    puVar13 = (undefined8 *)param_2[2];
    puVar9 = (undefined8 *)FUN_00c11f04(param_1,uVar2);
    iVar6 = *(int *)param_1[2];
    iVar3 = *(int *)(param_1 + 1);
    uVar4 = iVar6 - iVar3;
    if ((0 < (int)uVar2) && (0 < (int)uVar4)) {
      uVar21 = (ulong)uVar2;
      if ((ulong)uVar4 - 1 <= (ulong)uVar2 - 1) {
        uVar21 = (ulong)uVar4;
      }
      lVar19 = -uVar21;
      puVar17 = puVar9;
      puVar20 = puVar13;
      do {
        puVar20 = puVar20 + 1;
        FUN_00c11ee0(*puVar20,*puVar17);
        bVar5 = lVar19 != -1;
        lVar19 = lVar19 + 1;
        puVar17 = puVar17 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar2) {
      iVar6 = (iVar3 + uVar2) - iVar6;
      uVar8 = *param_1;
      puVar13 = puVar13 + (int)uVar4;
      puVar9 = puVar9 + (int)uVar4;
      do {
        puVar13 = puVar13 + 1;
        uVar18 = *puVar13;
        uVar16 = FUN_00bf5240(uVar8);
        FUN_00c11ee0(uVar18,uVar16);
        iVar6 = iVar6 + -1;
        *puVar9 = uVar16;
        puVar9 = puVar9 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 1) + uVar2;
    *(int *)(param_1 + 1) = iVar6;
    if (*(int *)param_1[2] < iVar6) {
      *(int *)param_1[2] = iVar6;
    }
    uVar21 = (ulong)*(uint *)(param_2 + 1);
    if (0 < (int)*(uint *)(param_2 + 1)) {
      puVar13 = (undefined8 *)param_2[2];
      do {
        puVar13 = puVar13 + 1;
        pbVar12 = (byte *)*puVar13;
        if ((*pbVar12 & 1) == 0) {
          pbVar12[0] = 0;
          pbVar12[1] = 0;
        }
        else {
          **(undefined1 **)(pbVar12 + 0x10) = 0;
          pbVar12[8] = 0;
          pbVar12[9] = 0;
          pbVar12[10] = 0;
          pbVar12[0xb] = 0;
          pbVar12[0xc] = 0;
          pbVar12[0xd] = 0;
          pbVar12[0xe] = 0;
          pbVar12[0xf] = 0;
        }
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  puVar15 = (uint *)param_2[2];
  param_2[2] = (long)puVar7;
  *(uint *)(param_2 + 1) = uVar1;
  *(uint *)((long)param_2 + 0xc) = local_70;
  if ((lVar22 != 0) || (puVar15 == (uint *)0x0)) {
    return;
  }
  uVar21 = (ulong)*puVar15;
  if (0 < (int)*puVar15) {
    lVar22 = tpidr_el0;
    puVar7 = puVar15;
    do {
      puVar7 = puVar7 + 2;
      pbVar12 = *(byte **)puVar7;
      if (pbVar12 != (byte *)0x0) {
        if (((*pbVar12 & 1) != 0) && (lVar19 = *(long *)(pbVar12 + 0x10), lVar19 != 0)) {
          plVar14 = *(long **)(lVar22 + 0x30);
          if (plVar14 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar14 = DAT_04859430;
            *(long **)(lVar22 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,lVar19,0,8);
          }
          else {
            FUN_00c48fe8(plVar14,lVar19,0,8);
          }
        }
        plVar14 = *(long **)(lVar22 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar22 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar10 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,pbVar12,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,pbVar12,0,8);
        }
      }
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  operator_delete__(puVar15);
  return;
}


