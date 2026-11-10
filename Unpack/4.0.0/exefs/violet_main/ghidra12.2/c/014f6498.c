/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f6498; name: FUN_014f6498
 */


void FUN_014f6498(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_var;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_28;
  
  local_60 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x720) == 0) {
    fVar16 = 0.0;
  }
  else {
    iVar6 = (**(code **)(**(long **)(param_1 + 200) + 0x108))
                      (*(long **)(param_1 + 200),param_1 + 0x400);
    fVar16 = (float)iVar6;
  }
  fVar11 = (float)(**(code **)(**(long **)(param_1 + 200) + 0x60))
                            (*(long **)(param_1 + 200),param_1 + 0x3e0);
  puVar5 = PTR_DAT_047d2098;
  fVar15 = 4.0;
  if (**(char **)(param_1 + 0x3a8) != '\0') {
    (**(code **)(**(long **)(param_1 + 200) + 0x140))(&local_70);
    plVar7 = (long *)FUN_00c8c7b4(local_70,param_1 + 0x3a0);
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar6 != 0)) {
      *(undefined8 *)PTR_DAT_047d20a0 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    if ((plVar7 == (long *)0x0) ||
       (puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7), puVar8 == (undefined8 *)0x0))
    {
      plVar10 = (long *)0x0;
    }
    else {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_047d20a0) {
          plVar10 = plVar7;
          break;
        }
        puVar8 = (undefined8 *)*puVar8;
        plVar10 = (long *)0x0;
      } while (puVar8 != (undefined8 *)0x0);
    }
    if (local_70 != (long *)0x0) {
      lVar9 = local_70[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_014f66bc;
    }
    if (((*PTR_DAT_047d21b0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d21b0), iVar6 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar6 != 0)) {
        *(undefined8 *)PTR_DAT_047d20a0 = 0;
        __cxa_guard_release(PTR_DAT_047d2098);
      }
      *(undefined **)PTR_DAT_047d21b8 = PTR_DAT_047d20a0;
      __cxa_guard_release(PTR_DAT_047d21b0);
    }
    fVar12 = 4.0;
    if ((plVar10 == (long *)0x0) ||
       (puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10), puVar8 == (undefined8 *)0x0)
       ) {
LAB_014f67d4:
      fVar15 = fVar12;
    }
    else {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_047d21b8) {
          fVar12 = (float)FUN_014f6910(plVar10);
          goto LAB_014f67d4;
        }
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)0x0);
    }
  }
  uVar13 = uStack_58;
  fVar16 = fVar15 + fVar16 + fVar11 + *(float *)(param_1 + 0x72c);
  lVar9 = param_1 + 0x3c0;
  local_60 = CONCAT44((int)((ulong)local_60 >> 0x20),fVar16);
  (**(code **)(**(long **)(param_1 + 200) + 0x60))(*(long **)(param_1 + 200),lVar9);
  local_60 = CONCAT44(extraout_var,fVar16);
  uStack_58 = uVar13;
  (**(code **)(**(long **)(param_1 + 200) + 0x58))(*(long **)(param_1 + 200),lVar9,&local_60);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  uVar13 = (**(code **)(**(long **)(param_1 + 200) + 0x30))(*(long **)(param_1 + 200),lVar9);
  uVar14 = (undefined4)((ulong)uVar13 >> 0x20);
  local_70 = (long *)CONCAT44(uVar14,((float)uVar13 - (float)local_60 * 0.5) +
                                     fVar11 * 0.5 + *(float *)(param_1 + 0x72c) * 0.5);
  uStack_68 = 0;
  (**(code **)(**(long **)(param_1 + 200) + 0x28))
            (*(long **)(param_1 + 200),param_1 + 0x3e0,&local_70);
  local_80 = CONCAT44(uVar14,fVar11 * 0.5 + fVar15 + local_70._0_4_);
  uStack_78 = 0;
  (**(code **)(**(long **)(param_1 + 200) + 0x140))(&local_28,uVar13);
  plVar7 = (long *)FUN_00c8c7b4(local_28,param_1 + 0x400);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar6 != 0)) {
    *(undefined8 *)PTR_DAT_047d20a0 = 0;
    __cxa_guard_release(PTR_DAT_047d2098);
  }
  if ((plVar7 == (long *)0x0) ||
     (puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7), puVar8 == (undefined8 *)0x0)) {
    plVar10 = (long *)0x0;
  }
  else {
    do {
      if (puVar8 == (undefined8 *)PTR_DAT_047d20a0) {
        plVar10 = plVar7;
        break;
      }
      puVar8 = (undefined8 *)*puVar8;
      plVar10 = (long *)0x0;
    } while (puVar8 != (undefined8 *)0x0);
  }
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_014f66bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (plVar10 != (long *)0x0) {
    *(byte *)((long)plVar10 + 0x5b) = *(byte *)((long)plVar10 + 0x5b) & 0xfc | 1;
    (**(code **)(**(long **)(param_1 + 200) + 0x28))
              (*(long **)(param_1 + 200),param_1 + 0x400,&local_80);
  }
  (**(code **)(**(long **)(param_1 + 200) + 0x70))(*(long **)(param_1 + 200),param_1 + 0x380,1);
  return;
}


