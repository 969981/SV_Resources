/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155e550; name: FUN_0155e550
 */


void FUN_0155e550(long param_1,uint param_2)

{
  short *psVar1;
  void *__src;
  short sVar2;
  void *__src_00;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  void *__dest;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  size_t __n;
  long *plVar20;
  void *local_98;
  int local_78;
  uint uStack_74;
  undefined1 auStack_70 [8];
  long local_68;
  
  plVar19 = (long *)(param_1 + 0xf0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar19 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *plVar19 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0155e594;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar19 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0155e594;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *plVar19 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0155e594:
  plVar19 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_0155ebe4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar19;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x98,8);
  puVar5 = PTR_DAT_047d66f8;
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar19 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar9[2] = 0;
  *(undefined4 *)(plVar9 + 3) = 0;
  *plVar9 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar10 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar14 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *plVar9 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar9[1] = lVar14;
  plVar9[4] = (long)(puVar5 + 0x88);
  plVar16 = plVar9 + 5;
  *plVar16 = (long)(puVar5 + 0xd8);
  plVar11 = plVar9 + 6;
  *plVar11 = 0;
  plVar9[7] = 0;
  FUN_00d1a3f4(plVar11,plVar16);
  *plVar9 = (long)&PTR_FUN_045993e8;
  plVar9[4] = (long)&PTR_LAB_04599480;
  *plVar16 = (long)&DAT_045994d0;
  plVar9[9] = 0x1fffffffffffffff;
  plVar9[10] = 0;
  *(undefined4 *)(plVar9 + 0xb) = 0;
  plVar9[8] = (long)plVar19;
  plVar17 = plVar9 + 0xc;
  *plVar17 = (long)plVar19;
  plVar9[0xf] = plVar9[0xb];
  plVar9[0xd] = 0x1fffffffffffffff;
  plVar9[0xe] = 0;
  plVar16 = plVar9 + 0x10;
  *plVar16 = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  if (param_2 != 0) {
    uVar18 = (ulong)param_2;
    if ((ulong)plVar9[0xd] < uVar18) goto LAB_0155ebe4;
    __dest = (void *)(**(code **)(*(long *)*plVar17 + 0x10))((long *)*plVar17,uVar18 << 3,4);
    if (__dest == (void *)0x0) {
      (**(code **)(*(long *)*plVar17 + 0xe8))();
    }
    __src_00 = (void *)plVar9[0x10];
    lVar10 = plVar9[0x11];
    local_98 = __dest;
    if ((__src_00 != (void *)0x0) && (lVar10 != 0)) {
      memmove(__dest,__src_00,lVar10 << 3);
      local_98 = (void *)((long)__dest + lVar10 * 8);
    }
    if (__src_00 != (void *)0x0) {
      if (plVar9[0x11] != lVar10) {
        __src = (void *)((long)__src_00 + lVar10 * 8);
        __n = (long)__src_00 + (plVar9[0x11] * 8 - (long)__src);
        memmove(local_98,__src,__n);
        local_98 = (void *)((long)local_98 + __n);
      }
      lVar10 = plVar9[0x12];
      plVar20 = (long *)plVar9[0xc];
      lVar14 = plVar9[0x10];
      uVar15 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar15 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar14,lVar10 << 3,4);
      }
      else {
        FUN_00c48fe8(plVar20,lVar14,lVar10 << 3,4);
      }
    }
    plVar9[0x12] = uVar18;
    plVar9[0x10] = (long)__dest;
    plVar9[0x11] = (long)local_98 - (long)__dest >> 3;
  }
  *(undefined4 *)(plVar9 + 3) = 0x80098;
  plVar9[1] = (long)plVar19;
  plVar9[2] = (long)plVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = plVar9[6];
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_0155ebe8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar12;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_0155ec08;
  uVar18 = plVar9[0x12];
  if (0 < (int)uVar18) {
    iVar7 = 0;
    do {
      uStack_74 = uStack_74 & 0xffffff00;
      uVar15 = plVar9[0x11];
      local_78 = iVar7;
      if (uVar15 < uVar18) {
        lVar8 = *plVar16;
        lVar10 = *plVar17;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar14 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar14 == 0) {
          *(ulong *)(lVar8 + uVar15 * 8) = CONCAT44(uStack_74,local_78);
        }
        else {
          if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_0155ebe4;
          *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar10;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
          *(ulong *)(lVar8 + uVar15 * 8) = CONCAT44(uStack_74,local_78);
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        }
        plVar9[0x11] = plVar9[0x11] + 1;
      }
      else {
        local_68 = *plVar16 + uVar15 * 8;
        FUN_0155ec9c(auStack_70,plVar17,&local_68,&local_78);
      }
      uVar18 = plVar9[0x12];
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar18);
  }
  lVar8 = *plVar11;
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0155ebe8;
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar12;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_0155ec08;
  lVar8 = *plVar11;
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0155ebe8;
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar12;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
LAB_0155ec08:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar19 = *(long **)(param_1 + 0x148);
  *(long **)(param_1 + 0x148) = plVar9;
  if (plVar19 != (long *)0x0) {
    lVar8 = plVar19[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar19 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0155ec30;
  }
  lVar8 = *plVar11;
  psVar1 = (short *)(lVar8 + 0x1a);
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
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar2 == 0) goto LAB_0155ec30;
  lVar8 = *plVar11;
  psVar1 = (short *)(lVar8 + 0x1a);
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
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar2 == 0) {
LAB_0155ec30:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  return;
}


