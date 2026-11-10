/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0222b748; name: FUN_0222b748
 */


void FUN_0222b748(long param_1)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long *plVar14;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  
  local_68 = *(undefined8 *)(param_1 + 0x110);
  uStack_60 = *(undefined8 *)(param_1 + 0x118);
  local_58 = *(undefined8 *)(param_1 + 0x120);
  plVar14 = *(long **)(param_1 + 0x128);
  local_50 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_48,param_1 + 0x30,&local_68);
    plVar14 = local_50;
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_48 != (undefined8 *)0x0) {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar13 = *(short *)((long)local_48 + 0x1a);
LAB_0222b7f0:
      sVar4 = *psVar1;
      if (sVar4 == sVar13) {
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0222b814;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0222b814:
        bVar12 = false;
      }
      if (!bVar12) goto code_r0x0222b81c;
      lVar11 = local_48[2];
      if (lVar11 == 0) goto LAB_0222b908;
      lVar9 = FUN_0222ba2c(lVar11 + 0xe0,&local_38);
      if ((lVar9 != 0) && (FUN_0222bb00(&local_38), local_38 != (long *)0x0)) {
        bVar3 = *(byte *)((long)local_38 + 0x65);
        uVar7 = FUN_012595d8(param_1,1);
        if (((uVar7 & 0xff) != 0) && (uVar7 = uVar7 >> 8 & 0xff, bVar3 != uVar7)) {
          *(bool *)((long)local_38 + 0x65) = uVar7 != 0;
          uVar6 = FUN_012595d8(param_1,0x100000001);
          if (((uVar6 & 0xff) != 0) && (0xff < uVar6)) {
            puVar10 = (undefined8 *)FUN_01235878(param_1 + 0x158,&DAT_03d634d8);
            *(byte *)(puVar10 + 2) = bVar3;
            *puVar10 = PTR_LAB_047dcd90;
          }
        }
        lVar9 = local_38[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))(local_38);
        }
        else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
LAB_0222b904:
      if (local_48 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_0222b908:
    puVar10 = local_48;
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = (long *)*puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
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
code_r0x0222b81c:
  sVar13 = sVar4;
  if (sVar4 == 0) goto LAB_0222b904;
  goto LAB_0222b7f0;
}


