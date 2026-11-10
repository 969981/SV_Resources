/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01318944; name: FUN_01318944
 */


void FUN_01318944(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *local_58;
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = PTR_DAT_047d3908;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(&local_58,uVar11,param_2);
  if ((local_58 == (undefined8 *)0x0) ||
     (puVar12 = (undefined8 *)local_58[1], puVar12 == (undefined8 *)0x0)) {
LAB_013189d8:
    FUN_00e27ae4(param_1);
LAB_01318a20:
    puVar12 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
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
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_38 = *puVar12;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
LAB_01318c14:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
  puVar14 = (undefined8 *)PTR_DAT_047db008;
  if ((*PTR_DAT_047db000 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_047db000);
    puVar9 = PTR_DAT_047d3988;
    puVar14 = (undefined8 *)PTR_DAT_047db008;
    if (iVar10 != 0) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar10 != 0)) {
        uVar11 = FUN_01adab84();
        *(undefined8 *)puVar9 = uVar11;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      puVar14 = (undefined8 *)PTR_DAT_047db008;
      *(undefined **)PTR_DAT_047db008 = puVar9;
      __cxa_guard_release(PTR_DAT_047db000);
    }
  }
LAB_013189c8:
  if (puVar12 != puVar14) goto code_r0x013189d0;
  puVar12 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar12 + 3);
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
      piVar2 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)puVar7;
        *(long *)puVar8 = lVar13;
        local_38 = *puVar12;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_01318c14;
  }
  puVar12 = local_58;
  local_58 = (undefined8 *)0x0;
  *param_1 = (long)puVar12;
  param_1[1] = param_2;
  goto LAB_01318a20;
code_r0x013189d0:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_013189d8;
  goto LAB_013189c8;
}


