/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01525a14; name: FUN_01525a14
 */


void FUN_01525a14(long *param_1,char *param_2,byte *param_3,byte *param_4)

{
  short *psVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  bool bVar13;
  short sVar14;
  code *pcVar15;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  puVar7 = PTR_DAT_047d3e30;
  puVar6 = PTR_DAT_047d3e28;
  pcVar15 = (code *)*param_1;
  uVar2 = param_1[1];
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)puVar7;
    pbStack_68 = *(byte **)(puVar7 + 8);
    local_60 = *(size_t *)(puVar7 + 0x10);
    local_58 = *(long **)(puVar7 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_3);
    bVar4 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar12 = param_3;
    while (bVar4 != 0) {
      pbVar12 = pbVar12 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  if (param_4 == (byte *)0x0) {
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(undefined1 **)puVar7;
    pbStack_88 = *(byte **)(puVar7 + 8);
    local_80 = *(size_t *)(puVar7 + 0x10);
    local_78 = *(long **)(puVar7 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    local_80 = strlen((char *)param_4);
    bVar4 = *param_4;
    local_90 = &DAT_cbf29ce484222645;
    pbVar12 = param_4;
    while (bVar4 != 0) {
      pbVar12 = pbVar12 + 1;
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
    }
    local_78 = (long *)0x0;
    pbStack_88 = param_4;
  }
  cVar3 = *param_2;
  lVar10 = (long)uVar2 >> 1;
  if (cVar3 == '\x03') {
    lVar9 = *(long *)(param_2 + 8);
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar14 = *(short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar14) {
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01525b94;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01525b94:
          bVar13 = false;
        }
        if (bVar13) {
          lVar9 = *(long *)(lVar9 + 0x10);
          plVar11 = (long *)(lVar9 + -0x28);
          if (lVar9 != 0) {
            if ((uVar2 & 1) != 0) {
              pcVar15 = *(code **)(pcVar15 + *(long *)((long)plVar11 + lVar10));
            }
            (*pcVar15)((long *)((long)plVar11 + lVar10),&local_70,&local_90);
            lVar10 = *(long *)(lVar9 + 8);
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar14 = *psVar1;
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar14 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*plVar11 + 0x50))(plVar11);
            }
            else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar14 = sVar5;
      } while (sVar5 != 0);
    }
  }
  else {
    if (cVar3 == '\x02') {
      if ((*(long *)(param_2 + 8) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar9 == 0)) goto LAB_01525ab8;
      plVar11 = (long *)(lVar9 + lVar10 + -0x28);
    }
    else {
      if (((cVar3 != '\x01') && (cVar3 != '\0')) || (*(long *)(param_2 + 8) == 0))
      goto LAB_01525ab8;
      plVar11 = (long *)(*(long *)(param_2 + 8) + lVar10);
    }
    if ((uVar2 & 1) != 0) {
      pcVar15 = *(code **)(pcVar15 + *plVar11);
    }
    (*pcVar15)(plVar11,&local_70,&local_90);
  }
LAB_01525ab8:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


