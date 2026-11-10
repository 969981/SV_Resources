/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016951d4; name: FUN_016951d4
 */


float FUN_016951d4(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  lVar8 = *(long *)(param_1 + 0x50);
  lVar9 = *(long *)(param_1 + 0x58);
  if (lVar8 != lVar9) {
    do {
      if (((*(long *)(lVar8 + 0x78) != 0) && (*(short *)(*(long *)(lVar8 + 0x78) + 0x1a) != 0)) &&
         (*(long *)(lVar8 + 0x78) == *param_2)) goto LAB_01695230;
      lVar8 = lVar8 + 0xd0;
    } while (lVar9 != lVar8);
    lVar8 = lVar9;
LAB_01695230:
    if (lVar8 != *(long *)(param_1 + 0x58)) {
      if (*(long *)(lVar8 + 0x78) == 0) {
        return 0.0;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10);
      if (lVar9 == 0) {
        return 0.0;
      }
      if (*(long *)(lVar8 + 0xa8) == 0) {
        return 0.0;
      }
      lVar11 = *(long *)(*(long *)(lVar8 + 0xa8) + 0x10);
      if (lVar11 == 0) {
        return 0.0;
      }
      if (*(long *)(lVar8 + 0x98) == 0) {
        return 0.0;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x98) + 0x10);
      if (lVar8 == 0) {
        return 0.0;
      }
      FUN_00e3353c(&local_60,lVar8 + -0x28);
      if (local_60 == (undefined8 *)0x0) {
        return 0.0;
      }
      lVar12 = local_60[2];
      plVar10 = (long *)(lVar9 + -0x28);
      psVar1 = (short *)(local_60 + 3);
      lVar8 = 0;
      if (lVar12 != 0) {
        lVar8 = lVar12 + -0x28;
      }
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
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *local_60;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (lVar12 == 0) {
        return 0.0;
      }
      local_60 = (undefined8 *)0xdb3511ae502a979c;
      pcStack_58 = "0000_defaultwait01_loop";
      local_50 = 0x17;
      uStack_48 = 0;
      uVar7 = FUN_00c738f0(lVar8,&local_60,1);
      if ((uVar7 & 1) == 0) {
        return 0.0;
      }
      if (*(char *)(lVar11 + 0x1f8) == '\0') {
        return 0.0;
      }
      fVar13 = *(float *)(lVar11 + 0x1ac);
      lVar8 = (**(code **)(*plVar10 + 0x68))(plVar10);
      return fVar13 - *(float *)(lVar8 + 0x34);
    }
  }
  lVar8 = *(long *)(param_1 + 0x88);
  lVar9 = *(long *)(param_1 + 0x90);
  fVar13 = 0.0;
  if (lVar8 != lVar9) {
    do {
      if (((*(long *)(lVar8 + 0x78) != 0) && (*(short *)(*(long *)(lVar8 + 0x78) + 0x1a) != 0)) &&
         (*(long *)(lVar8 + 0x78) == *param_2)) goto LAB_016953c8;
      lVar8 = lVar8 + 0xc0;
    } while (lVar9 != lVar8);
    lVar8 = lVar9;
LAB_016953c8:
    if (lVar8 != *(long *)(param_1 + 0x90)) {
      fVar13 = *(float *)(lVar8 + 0x98);
    }
  }
  return fVar13;
}


