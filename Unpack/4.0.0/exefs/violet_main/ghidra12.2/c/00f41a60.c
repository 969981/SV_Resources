/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f41a60; name: FUN_00f41a60
 */


int FUN_00f41a60(long param_1)

{
  int *piVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 local_38;
  
  lVar11 = param_1 + (ulong)*(uint *)(param_1 + 0x250);
  puVar14 = *(undefined1 **)(param_1 + 600);
  puVar13 = *(undefined1 **)(param_1 + 0x260);
  piVar1 = (int *)(param_1 + 0x250);
  puVar12 = (undefined1 *)(lVar11 + 0x50);
  if (puVar14 != puVar13) {
    if ((puVar14[1] != '\0') &&
       ((((puVar14[3] == '\0' || (puVar14[2] != puVar14[4])) && (0 < (int)(0x200U - *piVar1))) &&
        (2 < 0x200U - *piVar1)))) {
      uVar5 = *puVar14;
      *puVar12 = 1;
      *(undefined1 *)(lVar11 + 0x51) = uVar5;
      *(undefined1 *)(lVar11 + 0x52) = puVar14[2];
      *piVar1 = *piVar1 + 3;
      puVar12 = (undefined1 *)(lVar11 + 0x53);
      if (puVar14[1] != '\0') {
        puVar14[4] = puVar14[2];
        puVar14[3] = 1;
        puVar14[1] = 0;
      }
    }
    while (puVar14 = puVar14 + 5, puVar14 != puVar13) {
      if ((((puVar14[1] != '\0') && ((puVar14[3] == '\0' || (puVar14[2] != puVar14[4])))) &&
          (0 < (int)(0x200U - *piVar1))) && (2 < 0x200U - *piVar1)) {
        uVar5 = *puVar14;
        *puVar12 = 1;
        puVar12[1] = uVar5;
        puVar12[2] = puVar14[2];
        *piVar1 = *piVar1 + 3;
        puVar12 = puVar12 + 3;
        if (puVar14[1] != '\0') {
          puVar14[4] = puVar14[2];
          puVar14[3] = 1;
          puVar14[1] = 0;
        }
      }
    }
  }
  puVar14 = *(undefined1 **)(param_1 + 0x290);
  puVar13 = *(undefined1 **)(param_1 + 0x298);
  if (puVar14 != puVar13) {
    if (((puVar14[4] != '\0') &&
        ((puVar14[0xc] == '\0' ||
         (1.1920929e-07 < ABS(*(float *)(puVar14 + 8) - *(float *)(puVar14 + 0x10)))))) &&
       ((0 < (int)(0x200U - *piVar1) && (5 < 0x200U - *piVar1)))) {
      uVar5 = *puVar14;
      *puVar12 = 2;
      puVar12[1] = uVar5;
      *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar14 + 8);
      *piVar1 = *piVar1 + 6;
      puVar12 = puVar12 + 6;
      if (puVar14[4] != '\0') {
        *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar14 + 8);
        puVar14[0xc] = 1;
        puVar14[4] = 0;
      }
    }
    if (puVar14 + 0x14 != puVar13) {
      if (((puVar14[0x18] != '\0') &&
          (((puVar14[0x20] == '\0' ||
            (1.1920929e-07 < ABS(*(float *)(puVar14 + 0x1c) - *(float *)(puVar14 + 0x24)))) &&
           (0 < (int)(0x200U - *piVar1))))) && (5 < 0x200U - *piVar1)) {
        uVar5 = puVar14[0x14];
        *puVar12 = 2;
        puVar12[1] = uVar5;
        *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar14 + 0x1c);
        *piVar1 = *piVar1 + 6;
        puVar12 = puVar12 + 6;
        if (puVar14[0x18] != '\0') {
          *(undefined4 *)(puVar14 + 0x24) = *(undefined4 *)(puVar14 + 0x1c);
          puVar14[0x20] = 1;
          puVar14[0x18] = 0;
        }
      }
      for (puVar14 = puVar14 + 0x28; puVar14 != puVar13; puVar14 = puVar14 + 0x14) {
        if ((((puVar14[4] != '\0') &&
             ((puVar14[0xc] == '\0' ||
              (1.1920929e-07 < ABS(*(float *)(puVar14 + 8) - *(float *)(puVar14 + 0x10)))))) &&
            (0 < (int)(0x200U - *piVar1))) && (5 < 0x200U - *piVar1)) {
          uVar5 = *puVar14;
          *puVar12 = 2;
          puVar12[1] = uVar5;
          *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar14 + 8);
          *piVar1 = *piVar1 + 6;
          puVar12 = puVar12 + 6;
          if (puVar14[4] != '\0') {
            *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar14 + 8);
            puVar14[0xc] = 1;
            puVar14[4] = 0;
          }
        }
      }
    }
  }
  puVar14 = *(undefined1 **)(param_1 + 0x2c8);
  puVar13 = *(undefined1 **)(param_1 + 0x2d0);
  if (puVar14 != puVar13) {
    if (((puVar14[1] != '\0') && ((puVar14[3] == '\0' || (puVar14[2] != puVar14[4])))) &&
       ((0 < (int)(0x200U - *piVar1) && (2 < 0x200U - *piVar1)))) {
      uVar5 = *puVar14;
      *puVar12 = 3;
      puVar12[1] = uVar5;
      puVar12[2] = puVar14[2];
      *piVar1 = *piVar1 + 3;
      puVar12 = puVar12 + 3;
      if (puVar14[1] != '\0') {
        puVar14[4] = puVar14[2];
        puVar14[3] = 1;
        puVar14[1] = 0;
      }
    }
    while (puVar14 = puVar14 + 5, puVar14 != puVar13) {
      if (((puVar14[1] != '\0') &&
          (((puVar14[3] == '\0' || (puVar14[2] != puVar14[4])) && (0 < (int)(0x200U - *piVar1)))))
         && (2 < 0x200U - *piVar1)) {
        uVar5 = *puVar14;
        *puVar12 = 3;
        puVar12[1] = uVar5;
        puVar12[2] = puVar14[2];
        *piVar1 = *piVar1 + 3;
        puVar12 = puVar12 + 3;
        if (puVar14[1] != '\0') {
          puVar14[4] = puVar14[2];
          puVar14[3] = 1;
          puVar14[1] = 0;
        }
      }
    }
  }
  puVar14 = *(undefined1 **)(param_1 + 0x300);
  puVar13 = *(undefined1 **)(param_1 + 0x308);
  if (puVar14 != puVar13) {
    if (((puVar14[1] != '\0') && (puVar14[2] != '\0')) &&
       ((0 < (int)(0x200U - *piVar1) && (2 < 0x200U - *piVar1)))) {
      uVar5 = *puVar14;
      *puVar12 = 4;
      puVar12[1] = uVar5;
      puVar12[2] = puVar14[2];
      puVar12 = puVar12 + 3;
      *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 3;
      puVar14[1] = 0;
      *(undefined1 *)(param_1 + 0x338) = 1;
    }
    if (puVar14 + 3 != puVar13) {
      if (((puVar14[4] != '\0') && (puVar14[5] != '\0')) &&
         ((0 < (int)(0x200U - *piVar1) && (2 < 0x200U - *piVar1)))) {
        uVar5 = puVar14[3];
        *puVar12 = 4;
        puVar12[1] = uVar5;
        puVar12[2] = puVar14[5];
        puVar12 = puVar12 + 3;
        *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 3;
        puVar14[4] = 0;
        *(undefined1 *)(param_1 + 0x338) = 1;
      }
      for (puVar14 = puVar14 + 6; puVar14 != puVar13; puVar14 = puVar14 + 3) {
        if ((((puVar14[1] != '\0') && (puVar14[2] != '\0')) && (0 < (int)(0x200U - *piVar1))) &&
           (2 < 0x200U - *piVar1)) {
          uVar5 = *puVar14;
          *puVar12 = 4;
          puVar12[1] = uVar5;
          puVar12[2] = puVar14[2];
          puVar12 = puVar12 + 3;
          *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 3;
          puVar14[1] = 0;
          *(undefined1 *)(param_1 + 0x338) = 1;
        }
      }
    }
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar11 != 0)) {
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x340);
    plVar15 = *(long **)(param_1 + 0x358);
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x348);
    *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x350);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    plVar9 = *(long **)(param_1 + 0x378);
    *(long **)(param_1 + 0x378) = plVar15;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    local_70 = &DAT_afc4d6c05abef19e;
    pcStack_68 = "default";
    local_60 = 7;
    local_58 = (long *)0x0;
    FUN_00f425a4(&local_50,lVar11 + -0x28,&local_70);
    if (((local_50 == (long *)0x0) || (local_48 == (undefined8 *)0x0)) ||
       (*(short *)((long)local_48 + 0x1a) == 0)) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar10 = (undefined8 *)PTR_DAT_047d3e30,
         iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      else {
        puVar10 = (undefined8 *)PTR_DAT_047d3e30;
      }
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(*local_50 + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x340) = *puVar10;
    *(undefined8 *)(param_1 + 0x348) = puVar10[1];
    *(undefined8 *)(param_1 + 0x350) = puVar10[2];
    plVar15 = (long *)puVar10[3];
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    plVar9 = *(long **)(param_1 + 0x358);
    *(long **)(param_1 + 0x358) = plVar15;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    if (local_48 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_48 + 3);
      do {
        sVar4 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_48 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *local_48;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return *piVar1;
}


