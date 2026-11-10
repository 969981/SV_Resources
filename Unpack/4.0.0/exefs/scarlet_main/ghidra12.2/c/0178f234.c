/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178f234; name: FUN_0178f234
 */


void FUN_0178f234(long *param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  byte *pbVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 local_68;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_0178fe6c(param_1,param_2);
    return;
  }
  uVar14 = param_1[4];
  lVar17 = param_1[1] - *param_1 >> 4;
  uVar10 = lVar17 + 1;
  if (0x7ffffffffffffffe < uVar14) {
    uVar14 = 0x7fffffffffffffff;
  }
  if (uVar14 < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = param_1[2] - *param_1;
  uVar12 = lVar11 >> 3;
  if (uVar10 <= uVar12) {
    uVar10 = uVar12;
  }
  if (uVar14 >> 1 <= (ulong)(lVar11 >> 4)) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 << 4,8);
    if (lVar11 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar19 = param_1[3];
  puVar18 = (undefined8 *)(lVar11 + lVar17 * 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar17 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar17 == 0) {
    *puVar18 = 0;
    puVar18[1] = 0;
    FUN_0178f674(puVar18,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_0178f63c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar19;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    *puVar18 = 0;
    puVar18[1] = 0;
    FUN_0178f674(puVar18,param_2);
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  }
  puVar20 = (undefined8 *)*param_1;
  puVar21 = (undefined8 *)param_1[1];
  puVar6 = puVar18;
  if (puVar21 == puVar20) {
    puVar13 = puVar18;
    puVar21 = puVar20;
  }
  else {
    do {
      puVar13 = puVar6 + -2;
      lVar17 = param_1[3];
      puVar21 = puVar21 + -2;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar19 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar19 == 0) {
        *puVar13 = 0;
        puVar6[-1] = 0;
        FUN_0178f674(puVar13,puVar21);
      }
      else {
        if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_0178f63c;
        *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar17;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
        *puVar13 = 0;
        puVar6[-1] = 0;
        FUN_0178f674(puVar13,puVar21);
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
      }
      puVar6 = puVar13;
    } while (puVar20 != puVar21);
    puVar20 = (undefined8 *)param_1[1];
    puVar21 = (undefined8 *)*param_1;
  }
  lVar17 = param_1[2];
  *param_1 = (long)puVar13;
  param_1[1] = (long)(puVar18 + 2);
  param_1[2] = lVar11 + uVar10 * 0x10;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  if (puVar20 != puVar21) {
    pbVar15 = PTR_DAT_047d3908;
    do {
      puVar20 = puVar20 + -2;
      puVar18 = (undefined8 *)*puVar20;
      if (puVar18 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar18 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar18 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*pbVar15 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)
               ) {
              FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_68 = *puVar18;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
            pbVar15 = PTR_DAT_047d3908;
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
    } while (puVar20 != puVar21);
  }
  if (puVar21 != (undefined8 *)0x0) {
    plVar16 = (long *)param_1[3];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar21,lVar17 - (long)puVar21,8);
    }
    else {
      FUN_00c48fe8(plVar16,puVar21,lVar17 - (long)puVar21,8);
    }
  }
  return;
}


