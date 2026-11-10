/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee643c; name: FUN_00ee643c
 */


void FUN_00ee643c(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  undefined8 *local_8e0 [2];
  undefined1 auStack_8d0 [336];
  undefined1 auStack_780 [80];
  undefined8 local_730;
  undefined8 uStack_728;
  undefined1 auStack_710 [336];
  undefined1 auStack_5c0 [336];
  undefined1 auStack_470 [336];
  undefined1 auStack_320 [336];
  undefined8 local_1d0 [6];
  undefined1 auStack_1a0 [336];
  
  FUN_01f90a60(local_8e0,param_1);
  if (local_8e0[0] == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_8e0[0] + 0x1a) != 0) {
    if (local_8e0[0] == (undefined8 *)0x0) {
      return;
    }
    if (*(short *)((long)local_8e0[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_8e0[0] + 0x1a);
      sVar12 = *(short *)((long)local_8e0[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00ee64ec;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00ee64ec:
          bVar5 = false;
        }
        if (bVar5) {
          lVar10 = local_8e0[0][2];
          if (lVar10 != 0) {
            lVar11 = *(long *)(lVar10 + 0x100);
            plVar13 = (long *)(lVar10 + -0x28);
            if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) goto LAB_00ee651c;
            psVar1 = (short *)(lVar11 + 0x1a);
            sVar12 = *(short *)(lVar11 + 0x1a);
            goto LAB_00ee6618;
          }
          break;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
  }
  goto LAB_00ee6540;
  while (sVar12 = sVar3, sVar3 != 0) {
LAB_00ee6618:
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00ee663c;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00ee663c:
      bVar5 = false;
    }
    if (bVar5) {
      if (*(long *)(lVar11 + 0x10) != 0) {
        plVar14 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
        if (plVar14 == param_3) {
          iVar7 = *(int *)(lVar10 + 0xf8);
          if (iVar7 == 3) {
            FUN_01014118(plVar13);
            lVar11 = (*(code *)**(undefined8 **)*param_2)
                               ((undefined8 *)*param_2,*(undefined4 *)(lVar10 + 0xec));
            lVar15 = *(long *)(lVar10 + 0xd68);
            if ((lVar15 != 0) && (*(char *)(lVar10 + 0x230) != '\0')) {
              fVar16 = *(float *)(lVar15 + 0x434) +
                       (float)((double)*(long *)(lVar11 + 8) / 1000000000.0);
              fVar6 = *(float *)(lVar15 + 0x430);
              if (fVar16 <= *(float *)(lVar15 + 0x430)) {
                fVar6 = fVar16;
              }
              memcpy(auStack_8d0,(void *)(lVar15 + 0x40),0x150);
              memcpy(auStack_470,(void *)(lVar15 + 0x2e0),0x150);
              memcpy(auStack_320,auStack_8d0,0x150);
              FUN_02760f68(local_1d0,fVar6,lVar15,auStack_320,auStack_470);
              memcpy(auStack_5c0,auStack_8d0,0x150);
              memcpy(auStack_710,auStack_1a0,0x150);
              FUN_027611a8(auStack_780,fVar6,lVar15,auStack_5c0,auStack_710);
              *(undefined8 *)(lVar10 + 0x7c8) = local_730;
              *(undefined8 *)(lVar10 + 2000) = uStack_728;
            }
          }
          else if (iVar7 == 1) {
            uVar8 = FUN_0101442c(plVar13);
            uVar9 = FUN_010147e4(plVar13);
            if (((uVar8 & 1) != 0) && ((uVar9 & 1) != 0)) {
              *(undefined4 *)(lVar10 + 0xf8) = 2;
LAB_00ee6810:
              FUN_010161a0(plVar13);
              *(undefined4 *)(lVar10 + 0xf8) = 3;
              FUN_013e7a84(plVar13);
            }
          }
          else if (iVar7 == 2) goto LAB_00ee6810;
        }
        (**(code **)(*plVar14 + 0x60))(plVar14);
      }
      break;
    }
  }
LAB_00ee651c:
  lVar10 = *(long *)(lVar10 + 0x70);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
  }
  else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00ee6540:
  if (local_8e0[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_8e0[0] + 3);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_8e0[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_1d0[0] = *local_8e0[0];
        FUN_00c44438(lVar10 + 0x8040,local_1d0);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


