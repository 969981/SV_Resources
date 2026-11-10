/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02026598; name: FUN_02026598
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02026598(undefined8 *param_1,long param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_011f3030(local_50,*(undefined8 *)(*param_3 + (ulong)*(uint *)(param_2 + 8)));
  if (local_50[0] != (undefined8 *)0x0) {
    puVar6 = local_50[0];
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      sVar10 = *(short *)((long)local_50[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02026630;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02026630:
          bVar9 = false;
        }
        if (bVar9) {
          plVar8 = (long *)(local_50[0][2] + -0x28);
          if (local_50[0][2] == 0) goto LAB_020266d4;
          lVar7 = (**(code **)(*plVar8 + 0x68))(plVar8);
          uVar12 = *(undefined8 *)(lVar7 + 0x30);
          puVar6 = (undefined8 *)(*param_3 + (ulong)*(uint *)(param_2 + 0x11c));
          uVar17 = puVar6[1];
          uVar16 = *puVar6;
          fVar13 = *(float *)(*param_3 + (ulong)*(uint *)(param_2 + 0xec));
          fVar14 = (float)uVar12 + (float)uVar16 * fVar13;
          fVar15 = (float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar16 >> 0x20) * fVar13;
          uVar16 = CONCAT44(fVar15,fVar14);
          param_1[3] = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar13 + 0.0,
                                (float)*(undefined8 *)(lVar7 + 0x38) + (float)uVar17 * fVar13);
          param_1[2] = uVar16;
          FUN_02024ffc(local_70,param_2,param_3,1);
          if ((char)local_70[0] == '\0') {
            FUN_02024ffc(local_70,uVar16,
                         CONCAT44(fVar15 + (float)((ulong)_DAT_03cab0f0 >> 0x20),
                                  fVar14 + (float)_DAT_03cab0f0),param_2,param_3,2);
            if ((char)local_70[0] == '\0') {
              uVar11 = 1;
              goto LAB_020266b8;
            }
            param_1[2] = local_60;
            param_1[3] = uStack_58;
            uVar11 = 1;
            FUN_02024ffc(local_70,param_1[2],uVar12,param_2,param_3,1);
            if ((char)local_70[0] == '\0') goto LAB_020266b8;
          }
          else {
            uVar11 = 0;
LAB_020266b8:
            *(undefined1 *)param_1 = uVar11;
          }
          (**(code **)(*plVar8 + 0x60))(plVar8);
          break;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
      puVar6 = local_50[0];
      if (local_50[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_020266d4:
    psVar1 = (short *)(puVar6 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)puVar6 + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_70[0] = *puVar6;
        FUN_00c44438(lVar7 + 0x8040,local_70);
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
  return;
}


