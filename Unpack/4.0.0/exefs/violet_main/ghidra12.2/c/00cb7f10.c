/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb7f10; name: FUN_00cb7f10
 */


void FUN_00cb7f10(undefined8 *param_1,long *param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  long *local_898;
  undefined1 *local_890;
  byte *pbStack_888;
  size_t local_880;
  long *local_878;
  byte local_870 [2048];
  undefined1 auStack_70 [16];
  
  uVar11 = (**(code **)(*param_2 + 0x70))();
  if ((uVar11 & 1) != 0) {
    *param_1 = 0;
    return;
  }
  strncpy((char *)local_870,*(char **)(param_3 + 8),0x800);
  puVar7 = PTR_DAT_047d3e30;
  puVar6 = PTR_DAT_047d3e28;
  iVar10 = 0;
  for (pbVar14 = local_870; *pbVar14 != 0; pbVar14 = pbVar14 + 1) {
    if (*pbVar14 == 0x2e) {
      iVar10 = iVar10 + 1;
      *pbVar14 = 0;
    }
  }
  if (iVar10 < 1) {
    pbVar14 = local_870;
  }
  else {
    iVar16 = 0;
    pbVar14 = local_870;
    do {
      pbVar15 = pbVar14;
      if (pbVar15 == (byte *)0x0) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,puVar7,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar6);
        }
        local_890 = *(undefined1 **)puVar7;
        pbStack_888 = *(byte **)(puVar7 + 8);
        local_880 = *(size_t *)(puVar7 + 0x10);
        local_878 = *(long **)(puVar7 + 0x18);
        if (local_878 != (long *)0x0) {
          (**(code **)(*local_878 + 0x18))();
        }
      }
      else {
        local_880 = strlen((char *)pbVar15);
        bVar3 = *pbVar15;
        if (bVar3 == 0) {
          local_890 = &DAT_cbf29ce484222645;
        }
        else {
          local_890 = &DAT_cbf29ce484222645;
          pbVar14 = pbVar15;
          do {
            pbVar14 = pbVar14 + 1;
            local_890 = (undefined1 *)(((ulong)local_890 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar14;
          } while (bVar3 != 0);
        }
        local_878 = (long *)0x0;
        pbStack_888 = pbVar15;
      }
      (**(code **)(*param_2 + 0x80))(&local_898,param_2,&local_890);
      if (local_898 == (long *)0x0) {
        *param_1 = 0;
        goto LAB_00cb7fe8;
      }
      lVar12 = FUN_00cb829c(local_898 + 0x21,auStack_70);
      sVar8 = local_880;
      if (lVar12 == 0) {
        *param_1 = 0;
        if (local_898 != (long *)0x0) {
          lVar12 = local_898[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*local_898 + 0x50))();
            goto LAB_00cb7fe8;
          }
          if (sVar2 == 0) {
LAB_00cb81a8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        goto LAB_00cb7fe8;
      }
      if (local_898 != (long *)0x0) {
        lVar13 = local_898[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*local_898 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_00cb81a8;
      }
      param_2 = (long *)(lVar12 + 0x120);
      pbVar14 = pbVar15 + sVar8 + 1;
      if (local_878 != (long *)0x0) {
        (**(code **)(*local_878 + 0x20))();
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != iVar10);
    if (pbVar15 == (byte *)0x0) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_890 = *(undefined1 **)puVar7;
      pbStack_888 = *(byte **)(puVar7 + 8);
      local_880 = *(size_t *)(puVar7 + 0x10);
      local_878 = *(long **)(puVar7 + 0x18);
      if (local_878 != (long *)0x0) {
        (**(code **)(*local_878 + 0x18))();
      }
      goto LAB_00cb7fd0;
    }
  }
  local_880 = strlen((char *)pbVar14);
  bVar3 = *pbVar14;
  local_890 = &DAT_cbf29ce484222645;
  pbVar15 = pbVar14;
  while (bVar3 != 0) {
    pbVar15 = pbVar15 + 1;
    local_890 = (undefined1 *)(((ulong)local_890 ^ (ulong)bVar3) * 0x100000001b3);
    bVar3 = *pbVar15;
  }
  local_878 = (long *)0x0;
  pbStack_888 = pbVar14;
LAB_00cb7fd0:
  (**(code **)(*param_2 + 0x80))(param_1,param_2,&local_890);
LAB_00cb7fe8:
  if (local_878 != (long *)0x0) {
    (**(code **)(*local_878 + 0x20))();
  }
  return;
}


