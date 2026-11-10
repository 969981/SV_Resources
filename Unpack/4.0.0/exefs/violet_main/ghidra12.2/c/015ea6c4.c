/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ea6c4; name: FUN_015ea6c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ea6c4(long param_1)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  char *pcVar17;
  void *__dest;
  long *plVar18;
  byte *__s;
  long *plVar19;
  undefined8 *puVar20;
  size_t sVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined1 auVar26 [16];
  undefined8 local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  long *local_48;
  
  local_48 = DAT_0485a0a0;
  if (DAT_0485a0a0 != (long *)0x0) {
    plVar18 = DAT_0485a0a0 + 5;
    do {
      lVar24 = *plVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = (int)lVar24 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar24 == -1) goto LAB_015eab30;
  }
  lVar24 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x20) + 0x10))();
  }
  FUN_015eac78(&local_90,*(undefined8 *)(param_1 + 8));
  FUN_015eabe0(param_1 + 0xc60,&local_90);
  if (local_90 != (long *)0x0) {
    lVar22 = local_90[6];
    psVar2 = (short *)(lVar22 + 0x1a);
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
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_90 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  uVar15 = _UNK_03cabe68;
  uVar14 = _DAT_03cabe60;
  uVar13 = _UNK_03cabe58;
  uVar12 = _DAT_03cabe50;
  uVar11 = DAT_03cab628;
  uVar10 = DAT_03cab620;
  uVar9 = _UNK_03caa5b8;
  uVar8 = _DAT_03caa5b0;
  lVar22 = 0;
  puVar20 = (undefined8 *)(param_1 + 0xa10);
  do {
    puVar3 = (undefined8 *)(param_1 + 0x210 + lVar22);
    lVar22 = lVar22 + 0x40;
    puVar3[1] = uVar11;
    *puVar3 = uVar10;
    puVar3[3] = uVar15;
    puVar3[2] = uVar14;
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar3[7] = uVar13;
    puVar3[6] = uVar12;
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20 = puVar20 + 2;
  } while (lVar22 != 0x800);
  *(undefined4 *)(param_1 + 0xc10) = 0;
  FUN_015ead3c(param_1 + 0x208,&local_48);
  lVar22 = *(long *)(param_1 + 0x208);
  pcVar17 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar22 + 0x70) + 0x110),lVar22 + 0x30);
  if (*pcVar17 == '\0' || *(long *)(pcVar17 + 8) == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar17 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    __dest = (void *)(**(code **)PTR_DAT_047d8da8)();
  }
  memcpy(__dest,(void *)(param_1 + 0x210),0xa10);
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar22 + 0x70) + 0x110),lVar22 + 0x30);
  local_90 = (long *)0x100000001;
  uStack_88 = 0;
  local_80 = 0x3f800000;
  uStack_78 = 0x447a0000;
  local_6c = 0x100000001;
  local_70 = 0;
  local_50 = 8;
  local_4c = 0;
  local_64 = 7;
  local_60 = 0;
  uStack_58 = 0;
  auVar26 = FUN_00d07744(local_48,&local_90);
  *(undefined1 (*) [16])(param_1 + 0x1f8) = auVar26;
  FUN_015eab78(&local_98,6);
  plVar18 = *(long **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (plVar18 != (long *)0x0) {
    plVar19 = plVar18 + 5;
    do {
      lVar22 = *plVar19;
      iVar16 = (int)lVar22 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *(int *)plVar19 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_015eab08;
  }
  *(undefined8 *)(param_1 + 0x128) = local_98;
  __s = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,1);
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar25 = *(undefined1 **)PTR_DAT_047d3e30;
    __s = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar21 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar18 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  else {
    puVar25 = &DAT_cbf29ce484222645;
    sVar21 = strlen((char *)__s);
    bVar5 = *__s;
    pbVar23 = __s;
    while (bVar5 != 0) {
      pbVar23 = pbVar23 + 1;
      puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar23;
    }
    plVar18 = (long *)0x0;
  }
  plVar19 = *(long **)(param_1 + 0x150);
  *(undefined1 **)(param_1 + 0x138) = puVar25;
  *(byte **)(param_1 + 0x140) = __s;
  *(size_t *)(param_1 + 0x148) = sVar21;
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  *(long **)(param_1 + 0x150) = plVar18;
  puVar20 = (undefined8 *)FUN_00e514cc(lVar24);
  plVar18 = (long *)*puVar20;
  if (plVar18 != (long *)0x0) {
    plVar19 = plVar18 + 5;
    do {
      lVar22 = *plVar19;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *(int *)plVar19 = (int)lVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar22 == -1) {
LAB_015eab30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_00fff044(&local_98,plVar18,param_1 + 0x138);
  plVar19 = *(long **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 5;
    do {
      lVar22 = *plVar1;
      iVar16 = (int)lVar22 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_015eab08;
  }
  *(undefined8 *)(param_1 + 0x130) = local_98;
  if (plVar18 != (long *)0x0) {
    plVar19 = plVar18 + 5;
    do {
      lVar22 = *plVar19;
      iVar16 = (int)lVar22 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *(int *)plVar19 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    else if ((int)lVar22 == 0) goto LAB_015eab08;
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x20) + 0x18))((long *)(lVar24 + 0x20));
  }
  if (local_48 != (long *)0x0) {
    plVar18 = local_48 + 5;
    do {
      lVar24 = *plVar18;
      iVar16 = (int)lVar24 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar24 == 0) {
LAB_015eab08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


