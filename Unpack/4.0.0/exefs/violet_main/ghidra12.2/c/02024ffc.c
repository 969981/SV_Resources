/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02024ffc; name: FUN_02024ffc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02024ffc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined4 param_6)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar7 = FUN_020252cc(param_4,*param_5);
  if ((((*(long *)(lVar7 + 0x128) == 0) || (*(short *)(*(long *)(lVar7 + 0x128) + 0x1a) == 0)) &&
      (uVar8 = FUN_00d53914(lVar7 + 0x110), (uVar8 & 1) == 0)) || (*(long *)(lVar7 + 0x120) == 0)) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_00d52990(local_48,*(long *)(lVar7 + 0x120),0);
    if (((local_48[0] != (undefined8 *)0x0) && (*(short *)((long)local_48[0] + 0x1a) != 0)) &&
       ((local_48[0] != (undefined8 *)0x0 && (*(short *)((long)local_48[0] + 0x1a) != 0)))) {
      psVar2 = (short *)((long)local_48[0] + 0x1a);
      sVar10 = *(short *)((long)local_48[0] + 0x1a);
LAB_02025168:
      sVar3 = *psVar2;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0202518c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0202518c:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x02025194;
      lVar7 = local_48[0][2];
      if (lVar7 != 0) {
        iVar6 = *(int *)(lVar7 + 0x248);
        uStack_5c = 0;
        uStack_70 = _DAT_03cabe50;
        uStack_68 = _UNK_03cabe58;
        if ((iVar6 == 1) || (iVar6 == 7)) {
          uStack_78 = *(undefined8 *)(lVar7 + 0x260);
          local_80 = *(undefined8 *)(lVar7 + 600);
          local_60 = *(float *)(lVar7 + 0x268);
LAB_020251f0:
          local_60 = local_60 + 0.049999997;
        }
        else {
          if (iVar6 == 3) {
            uStack_78 = *(undefined8 *)(lVar7 + 0x280);
            local_80 = *(undefined8 *)(lVar7 + 0x278);
            local_60 = *(float *)(lVar7 + 0x298);
            uStack_5c = *(undefined4 *)(lVar7 + 0x29c);
            uStack_70 = *(undefined8 *)(lVar7 + 0x288);
            uStack_68 = *(undefined8 *)(lVar7 + 0x290);
            goto LAB_020251f0;
          }
          local_80 = 0;
          uStack_78 = 0;
          local_60 = 0.0;
        }
        local_58 = 0;
        FUN_02024e74(param_1,param_2,param_3,&local_80,param_6);
        lVar9 = *(long *)(lVar7 + 8);
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        goto LAB_02025088;
      }
    }
LAB_02025080:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
LAB_02025088:
    if (local_48[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_48[0] + 3);
      do {
        sVar10 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar1 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar6 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_38 = *local_48[0];
          FUN_00c44438(lVar7 + 0x8040,&local_38);
        }
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x02025194:
  sVar10 = sVar3;
  if (sVar3 == 0) goto LAB_02025080;
  goto LAB_02025168;
}


