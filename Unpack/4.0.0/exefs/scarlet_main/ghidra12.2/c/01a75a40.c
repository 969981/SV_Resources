/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a75a40; name: FUN_01a75a40
 */


void FUN_01a75a40(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  long lVar13;
  bool bVar14;
  short sVar15;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  char local_68 [8];
  undefined1 auStack_60 [24];
  long *local_48;
  undefined8 local_38;
  
  local_88 = (undefined8 *)0xf765f0db7ace47cd;
  pcStack_80 = "RTPCName";
  local_78 = 8;
  local_70 = (long *)0x0;
  FUN_01315eac(local_68,param_1,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68[0] == '\0') {
    return;
  }
  local_88 = (undefined8 *)0x5ab8f6148d2489ef;
  pcStack_80 = "RTPCValue";
  local_78 = 9;
  local_70 = (long *)0x0;
  uVar8 = FUN_01180d38(param_1,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if ((uVar8 & 0xff) != 0) {
    local_88 = (undefined8 *)0x757527f9d900520e;
    pcStack_80 = "Global";
    local_78 = 6;
    local_70 = (long *)0x0;
    uVar6 = FUN_0141f968(param_1,&local_88);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    local_88 = (undefined8 *)&DAT_b99e894bc041a275;
    pcStack_80 = "InterpolationMSec";
    local_78 = 0x11;
    local_70 = (long *)0x0;
    uVar9 = FUN_01470908(param_1,&local_88);
    uVar12 = 0;
    if ((uVar9 & 0xff) != 0) {
      uVar12 = (undefined4)(uVar9 >> 0x20);
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if ((uVar6 & 0xff) == 0 || uVar6 < 0x100) {
      local_a8 = *(undefined8 *)(param_1 + 0x110);
      uStack_a0 = *(undefined8 *)(param_1 + 0x118);
      local_98 = *(undefined8 *)(param_1 + 0x120);
      local_90 = *(long **)(param_1 + 0x128);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x18))();
      }
      if (*(code **)(param_1 + 0x10) == (code *)0x0) {
        local_88 = (undefined8 *)0x0;
        pcStack_80 = (char *)0x0;
      }
      else {
        (**(code **)(param_1 + 0x10))(&local_88,param_1 + 0x30,&local_a8);
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_88 != (undefined8 *)0x0) {
        if (*(short *)((long)local_88 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_88 + 0x1a);
          sVar15 = *(short *)((long)local_88 + 0x1a);
          do {
            sVar3 = *psVar1;
            if (sVar3 == sVar15) {
              cVar4 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar14) {
                *psVar1 = sVar15 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_01a75d18;
              bVar14 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01a75d18:
              bVar14 = false;
            }
            if (bVar14) {
              lVar13 = local_88[2];
              if (lVar13 == 0) goto LAB_01a75d84;
              plVar11 = (long *)FUN_01026aa0(lVar13 + 0xe0,&local_38);
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x138))(uVar8 >> 0x20,plVar11,auStack_60,uVar12);
              }
              (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))((long *)(lVar13 + -0x28));
              break;
            }
            sVar15 = sVar3;
          } while (sVar3 != 0);
          if (local_88 == (undefined8 *)0x0) goto LAB_01a75bcc;
        }
LAB_01a75d84:
        puVar5 = local_88;
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar15 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar15 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = *puVar5;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    else {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      uVar10 = *(undefined8 *)PTR_DAT_047d8288;
      *(undefined8 *)PTR_DAT_047d8290 = uVar10;
      FUN_01605300(uVar8 >> 0x20,uVar10,auStack_60,0xffffffffffffffff,uVar12);
    }
  }
LAB_01a75bcc:
  if ((local_68[0] != '\0') && (local_48 != (long *)0x0)) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


