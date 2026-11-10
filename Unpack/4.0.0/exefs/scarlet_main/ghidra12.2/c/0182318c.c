/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0182318c; name: FUN_0182318c
 */


void FUN_0182318c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined8 local_80 [3];
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar14 = *(long **)(param_1 + 0x128);
  local_48 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_40,param_1 + 0x30,&local_60);
    plVar14 = local_48;
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_40 != (undefined8 *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar13 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01823260;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01823260:
          bVar12 = false;
        }
        if (bVar12) {
          lVar11 = local_40[2];
          if (lVar11 == 0) goto LAB_01823314;
          lVar8 = FUN_015bf0b4(lVar11 + 0xe0,local_80);
          if (lVar8 != 0) {
            uVar6 = FUN_012595d8(param_1,0x100000001);
            if (((uVar6 & 0xff) != 0) && (0xff < uVar6)) {
              FUN_00d8fb98(local_80,PTR_DAT_047d9c40);
              uVar15 = FUN_0222ab84(lVar8,local_80);
              puVar10 = (undefined8 *)FUN_01235878(param_1 + 0x158,&DAT_03d634d8);
              puVar5 = PTR_LAB_047dcdf0;
              *(undefined4 *)(puVar10 + 2) = uVar15;
              *puVar10 = puVar5;
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
            }
            uVar9 = FUN_021237ec(param_1,1);
            if ((uVar9 & 0xff) != 0) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              FUN_00d54750(uVar9 >> 0x20,lVar8,PTR_DAT_047d3e30);
            }
          }
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
          break;
        }
        sVar13 = sVar3;
      } while (sVar3 != 0);
      if (local_40 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_01823314:
    puVar10 = local_40;
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar13 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_80[0] = *puVar10;
        FUN_00c44438(lVar11 + 0x8040,local_80);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


