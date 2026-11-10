/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01419128; name: FUN_01419128
 */


void FUN_01419128(undefined8 param_1,undefined8 *param_2,char *param_3,byte *param_4,char *param_5,
                 undefined4 param_6,uint param_7)

{
  long *plVar1;
  short *psVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  code *pcVar10;
  byte *pbVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  code *pcVar15;
  undefined1 *puVar16;
  long *local_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  long *local_48;
  
  cVar3 = *param_3;
  pcVar15 = (code *)*param_2;
  if (cVar3 == '\x02') {
    lVar9 = *(long *)(param_3 + 8);
    if (lVar9 == 0) {
LAB_01419170:
      plVar13 = (long *)0x0;
    }
    else if (*(short *)(lVar9 + 0x1a) == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      psVar2 = (short *)(lVar9 + 0x1a);
      sVar12 = *(short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar12) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0141938c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0141938c:
          bVar6 = false;
        }
        if (bVar6) {
          plVar13 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            plVar13 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          break;
        }
        plVar13 = (long *)0x0;
        sVar12 = sVar5;
      } while (sVar5 != 0);
    }
  }
  else if (cVar3 == '\x01') {
    plVar13 = *(long **)(param_3 + 8);
    if (plVar13 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar13 + 0x58);
LAB_014192f8:
      (*pcVar10)(plVar13);
    }
  }
  else {
    if (cVar3 != '\0') goto LAB_01419170;
    plVar13 = *(long **)(param_3 + 8);
    if (plVar13 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar13 + 0x58);
      goto LAB_014192f8;
    }
  }
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar16 = *(undefined1 **)PTR_DAT_047d3e30;
    param_4 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  else {
    puVar16 = &DAT_cbf29ce484222645;
    sVar8 = strlen((char *)param_4);
    bVar4 = *param_4;
    pbVar11 = param_4;
    while (bVar4 != 0) {
      pbVar11 = pbVar11 + 1;
      puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar11;
    }
    plVar14 = (long *)0x0;
  }
  if (*param_5 == '\x01') {
    local_88 = *(long **)(param_5 + 8);
    if (local_88 == (long *)0x0) goto LAB_014191cc;
    plVar1 = local_88 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*param_5 != '\0') {
      local_88 = (long *)0x0;
      goto LAB_014191cc;
    }
    local_88 = *(long **)(param_5 + 8);
    if (local_88 == (long *)0x0) goto LAB_014191cc;
    plVar1 = local_88 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.",param_1);
  }
LAB_014191cc:
  local_80 = puVar16;
  pbStack_78 = param_4;
  local_70 = sVar8;
  local_68 = plVar14;
  local_48 = plVar13;
  (*pcVar15)(&local_48,&local_80,&local_88,param_6,param_7 & 1);
  if (local_88 != (long *)0x0) {
    plVar13 = local_88 + 5;
    do {
      lVar9 = *plVar13;
      iVar7 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  return;
}


