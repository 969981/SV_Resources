/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01073294; name: FUN_01073294
 */


void FUN_01073294(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  void *pvVar8;
  size_t sVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  bool bVar14;
  long lVar15;
  void *pvVar16;
  int iVar17;
  ulong *puVar18;
  void *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  *param_1 = 1;
  puVar5 = PTR_PTR_047d1a50;
  local_b8 = (void *)0x0;
  local_b0 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    local_b8 = (void *)0x0;
    local_b0 = 0x8000000000000000;
  }
  else {
    pvVar16 = (void *)*param_2;
    pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,(ulong)uVar2 << 6);
    local_b0 = CONCAT44(uVar2,uVar2);
    local_b8 = pvVar8;
    memcpy(pvVar8,pvVar16,0x34);
    *(undefined8 *)((long)pvVar8 + 0x38) = 0;
    pcVar1 = (char *)(*(ulong *)((long)pvVar16 + 0x38) & 0xfffffffffffffffe);
    if (pcVar1 != (char *)0x0) {
      sVar9 = strlen(pcVar1);
      sVar9 = (size_t)((int)sVar9 + 1);
      pvVar10 = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,sVar9);
      memcpy(pvVar10,pcVar1,sVar9);
      *(ulong *)((long)pvVar8 + 0x38) = (ulong)pvVar10 | 1;
    }
    if (uVar2 != 1) {
      memcpy((void *)((long)pvVar8 + 0x40),(void *)((long)pvVar16 + 0x40),0x34);
      *(undefined8 *)((long)pvVar8 + 0x78) = 0;
      pcVar1 = (char *)(*(ulong *)((long)pvVar16 + 0x78) & 0xfffffffffffffffe);
      if (pcVar1 != (char *)0x0) {
        sVar9 = strlen(pcVar1);
        sVar9 = (size_t)((int)sVar9 + 1);
        pvVar10 = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,sVar9);
        memcpy(pvVar10,pcVar1,sVar9);
        *(ulong *)((long)pvVar8 + 0x78) = (ulong)pvVar10 | 1;
      }
      iVar17 = uVar2 - 2;
      if (iVar17 != 0) {
        pvVar16 = (void *)((long)pvVar16 + 0x80);
        puVar18 = (ulong *)((long)pvVar8 + 0xb8);
        do {
          memcpy(puVar18 + -7,pvVar16,0x34);
          *puVar18 = 0;
          pcVar1 = (char *)(*(ulong *)((long)pvVar16 + 0x38) & 0xfffffffffffffffe);
          if (pcVar1 != (char *)0x0) {
            sVar9 = strlen(pcVar1);
            sVar9 = (size_t)((int)sVar9 + 1);
            pvVar8 = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,sVar9);
            memcpy(pvVar8,pcVar1,sVar9);
            *puVar18 = (ulong)pvVar8 | 1;
          }
          iVar17 = iVar17 + -1;
          puVar18 = puVar18 + 8;
          pvVar16 = (void *)((long)pvVar16 + 0x40);
        } while (iVar17 != 0);
      }
    }
  }
  puVar4 = PTR_DAT_047d38f8;
  local_a8 = *(undefined4 *)(param_2 + 2);
  lVar15 = *(long *)PTR_DAT_047d38f8;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar15) {
    bVar14 = true;
LAB_010733ec:
    puVar6 = PTR_DAT_047d3920;
    FUN_010736d0(&local_80,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8),&local_b8);
    if (local_80 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_010736d0(&local_a0,*(undefined8 *)(*(long *)puVar6 + 8),&local_b8);
      local_80 = local_a0;
      local_78 = uStack_98;
      local_70 = local_90;
      local_68 = uStack_88;
      if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    *(long *)(param_1 + 8) = local_80;
    *(undefined8 *)(param_1 + 0x18) = local_70;
    *(undefined8 *)(param_1 + 0x20) = local_68;
    *(undefined8 *)(param_1 + 0x10) = local_78;
    if (!bVar14) {
      *(undefined8 *)puVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    }
    pvVar16 = local_b8;
    lVar11 = (long)(int)local_b0;
    if ((int)local_b0 != 0) {
      pvVar8 = (void *)((long)local_b8 + lVar11 * 0x40 + -0x40);
      uVar13 = *(ulong *)((long)local_b8 + lVar11 * 0x40 + -8);
      if ((uVar13 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar13 - 1,0);
      }
      if (pvVar8 != pvVar16) {
        uVar13 = *(ulong *)((long)pvVar16 + lVar11 * 0x40 + -0x48);
        if ((uVar13 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar13 - 1,0);
        }
        if ((void *)((long)pvVar16 + lVar11 * 0x40 + -0x80) != pvVar16) {
          uVar13 = *(ulong *)((long)pvVar16 + lVar11 * 0x40 + -0x88);
          if ((uVar13 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar13 - 1,0);
          }
          puVar4 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar16 + lVar11 * 0x40 + -0xc0) != pvVar16) {
            lVar11 = lVar11 << 6;
            do {
              uVar13 = *(ulong *)((long)pvVar16 + lVar11 + -200);
              if ((uVar13 & 1) != 0) {
                (**(code **)(puVar4 + 8))(0,uVar13 - 1,0);
              }
              lVar11 = lVar11 + -0x40;
            } while (lVar11 != 0xc0);
          }
        }
      }
    }
    uVar7 = local_b0;
    uVar13 = local_b0 >> 0x20;
    local_b0 = uVar13 << 0x20;
    if ((pvVar16 == (void *)0x0) || ((long)uVar7 < 0)) {
      return;
    }
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,pvVar16,uVar13 << 6);
    return;
  }
  uVar12 = nn::os::GetCurrentThread();
  while (*(long *)puVar4 == 0) {
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar14) {
      *(undefined8 *)puVar4 = uVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01073560;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
  do {
    if (*(long *)puVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
        while (*(long *)puVar4 == 0) {
          cVar3 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar14) {
            *(undefined8 *)puVar4 = uVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01073560;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar14) {
      *(undefined8 *)puVar4 = uVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01073560:
  bVar14 = false;
  goto LAB_010733ec;
}


