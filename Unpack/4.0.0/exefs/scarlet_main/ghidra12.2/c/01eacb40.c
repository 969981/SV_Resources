/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eacb40; name: FUN_01eacb40
 */


void FUN_01eacb40(long *param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 local_68;
  
  lVar10 = FUN_01eacf2c(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar12 = *param_1;
  lVar14 = param_1[1];
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar10 << 4,8);
    if (lVar11 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar19 = param_1[3];
  puVar18 = (undefined8 *)(lVar11 + (lVar14 - lVar12 >> 4) * 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar12 == 0) {
    *puVar18 = 0;
    puVar18[1] = 0;
    FUN_00ca1a48(puVar18,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_01eacf14:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar19;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *puVar18 = 0;
    puVar18[1] = 0;
    FUN_00ca1a48(puVar18,param_2);
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar20 = (undefined8 *)*param_1;
  puVar21 = (undefined8 *)param_1[1];
  puVar6 = puVar18;
  if (puVar21 == puVar20) {
    puVar15 = puVar18;
    puVar21 = puVar20;
  }
  else {
    do {
      puVar15 = puVar6 + -2;
      lVar12 = param_1[3];
      puVar21 = puVar21 + -2;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar14 == 0) {
        *puVar15 = 0;
        puVar6[-1] = 0;
        FUN_00ca1ea4(puVar15,puVar21);
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_01eacf14;
        *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar12;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        *puVar15 = 0;
        puVar6[-1] = 0;
        FUN_00ca1ea4(puVar15,puVar21);
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      puVar6 = puVar15;
    } while (puVar20 != puVar21);
    puVar21 = (undefined8 *)*param_1;
    puVar20 = (undefined8 *)param_1[1];
  }
  lVar12 = param_1[2];
  *param_1 = (long)puVar15;
  param_1[1] = (long)(puVar18 + 2);
  param_1[2] = lVar11 + lVar10 * 0x10;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  if (puVar20 != puVar21) {
    pbVar16 = PTR_DAT_047d3908;
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
            if (((*pbVar16 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)
               ) {
              FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar7;
            *(long *)puVar8 = lVar14;
            local_68 = *puVar18;
            FUN_00c44438(lVar14 + 0x8040,&local_68);
            pbVar16 = PTR_DAT_047d3908;
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    } while (puVar20 != puVar21);
  }
  if (puVar21 != (undefined8 *)0x0) {
    plVar17 = (long *)param_1[3];
    uVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,puVar21,lVar12 - (long)puVar21,8);
    }
    else {
      FUN_00c48fe8(plVar17,puVar21,lVar12 - (long)puVar21,8);
    }
  }
  return;
}


