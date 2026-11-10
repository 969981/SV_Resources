/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e5880; name: FUN_013e5880
 */


void FUN_013e5880(long *param_1,long *param_2,long param_3)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  void *__src;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 uVar6;
  short sVar7;
  char cVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  void *__dest;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  bool bVar19;
  short sVar20;
  undefined8 *local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar9 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar11 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar16 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d10b0;
  param_1[1] = lVar16;
  param_1[4] = (long)&PTR_LAB_045d10e8;
  local_88 = (undefined8 *)param_2[3];
  lStack_80 = param_2[4];
  local_78 = param_2[5];
  lStack_70 = param_2[6];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = local_78;
  param_1[0xc] = lStack_70;
  param_1[9] = (long)local_88;
  param_1[10] = lStack_80;
  lVar11 = param_2[1] - *param_2;
  if (lVar11 != 0) {
    uVar17 = param_1[10];
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar11 >> 4) * 0x4ec4ec4ec4ec4ec5)) goto LAB_013e60a0;
    puVar12 = (undefined8 *)
              (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],lVar11,0x10);
    if (puVar12 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[9] + 0xe8))();
    }
    param_1[8] = (long)(puVar12 + (lVar11 >> 4) * 2);
    param_1[6] = (long)puVar12;
    param_1[7] = (long)puVar12;
    puVar4 = (undefined8 *)param_2[1];
    for (puVar3 = (undefined8 *)*param_2; puVar3 != puVar4; puVar3 = puVar3 + 0x1a) {
      lVar11 = param_1[9];
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar16 != 0) {
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_013e6060;
        *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar11;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      }
      *puVar12 = *puVar3;
      puVar12[1] = puVar3[1];
      puVar12[2] = puVar3[2];
      plVar13 = (long *)puVar3[3];
      puVar12[3] = plVar13;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))();
      }
      puVar12[4] = puVar3[4];
      puVar12[5] = puVar3[5];
      puVar12[6] = puVar3[6];
      plVar13 = (long *)puVar3[7];
      puVar12[7] = plVar13;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))();
      }
      memcpy(puVar12 + 8,puVar3 + 8,0x89);
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      puVar12 = puVar12 + 0x1a;
    }
    param_1[7] = (long)puVar12;
  }
  local_88 = (undefined8 *)param_2[10];
  lStack_80 = param_2[0xb];
  local_78 = param_2[0xc];
  lStack_70 = param_2[0xd];
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = local_78;
  param_1[0x13] = lStack_70;
  param_1[0x10] = (long)local_88;
  param_1[0x11] = lStack_80;
  lVar11 = param_2[8] - param_2[7];
  if (lVar11 != 0) {
    uVar17 = param_1[0x11];
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < (ulong)((lVar11 >> 4) * -0x3333333333333333)) {
LAB_013e60a0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (void *)(**(code **)(*(long *)param_1[0x10] + 0x10))((long *)param_1[0x10],lVar11,0x10)
    ;
    if (__dest == (void *)0x0) {
      (**(code **)(*(long *)param_1[0x10] + 0xe8))();
    }
    param_1[0xf] = (long)((long)__dest + (lVar11 >> 4) * 0x10);
    param_1[0xd] = (long)__dest;
    param_1[0xe] = (long)__dest;
    pvVar5 = (void *)param_2[8];
    for (__src = (void *)param_2[7]; __src != pvVar5; __src = (void *)((long)__src + 0x50)) {
      lVar11 = param_1[0x10];
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar16 == 0) {
        memcpy(__dest,__src,0x50);
      }
      else {
        if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_013e6060:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar11;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        memcpy(__dest,__src,0x50);
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      __dest = (void *)((long)__dest + 0x50);
    }
    param_1[0xe] = (long)__dest;
  }
  local_88 = (undefined8 *)param_2[0x11];
  lStack_80 = param_2[0x12];
  local_78 = param_2[0x13];
  lStack_70 = param_2[0x14];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = local_78;
  param_1[0x1a] = lStack_70;
  param_1[0x17] = (long)local_88;
  param_1[0x18] = lStack_80;
  if (param_2[0xf] - param_2[0xe] != 0) {
    FUN_013e62cc(param_1 + 0x14,(param_2[0xf] - param_2[0xe] >> 6) * -0x5555555555555555);
    lVar11 = param_2[0xe];
    lVar18 = param_2[0xf];
    lVar16 = param_1[0x15];
    if (lVar11 != lVar18) {
      do {
        FUN_013e60ec(param_1 + 0x17,lVar16,lVar11);
        lVar11 = lVar11 + 0xc0;
        lVar16 = lVar16 + 0xc0;
      } while (lVar18 != lVar11);
    }
    param_1[0x15] = lVar16;
  }
  lVar11 = param_2[0x15];
  uVar6 = *(undefined1 *)((long)param_2 + 0xac);
  plVar13 = param_1 + 0x1d;
  *plVar13 = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = uVar6;
  *(int *)(param_1 + 0x1b) = (int)lVar11;
  puVar9 = PTR_DAT_047e0dc0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1c] = (long)(puVar9 + 0x10);
  lVar11 = *(long *)(param_3 + 0x10);
  FUN_00ffa2f4(&local_88,lVar11);
  if ((local_88 != (undefined8 *)0x0) && (*(short *)((long)local_88 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_88 + 0x1a);
    sVar20 = *(short *)((long)local_88 + 0x1a);
LAB_013e5e90:
    sVar7 = *psVar2;
    if (sVar7 == sVar20) {
      cVar8 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar19) {
        *psVar2 = sVar20 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_013e5eb4;
      bVar19 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_013e5eb4:
      bVar19 = false;
    }
    if (!bVar19) goto code_r0x013e5ebc;
    lVar16 = local_88[2];
    if (lVar16 != 0) {
      plVar14 = (long *)*plVar13;
      *plVar13 = 0;
      if (plVar14 != (long *)0x0) {
        lVar18 = plVar14[6];
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar20 = *psVar2;
          cVar8 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar20 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar20 == 0) goto LAB_013e5f78;
      }
      *plVar13 = lVar16 + -0x28;
      goto LAB_013e5b38;
    }
  }
LAB_013e5b28:
  plVar14 = (long *)*plVar13;
  lVar11 = 0;
  *plVar13 = 0;
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar20 = *psVar2;
      cVar8 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar19) {
        *psVar2 = sVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar20 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar20 == 0) goto LAB_013e5f78;
    lVar11 = 0;
  }
LAB_013e5b38:
  puVar12 = local_88;
  param_1[0x1e] = lVar11;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar20 = *psVar2;
      cVar8 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar19) {
        *psVar2 = sVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar20 == 1) {
      piVar1 = (int *)((long)local_88 + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar8 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_68 = *puVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_68);
      }
    }
    else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar11 = *(long *)(param_3 + 0x18);
  if (lVar11 != 0) {
    lVar16 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar20 = *psVar2;
      cVar8 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar19) {
        *psVar2 = sVar20 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar20 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar15;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar20 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar13 = (long *)param_1[0x1f];
  param_1[0x1f] = lVar11;
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar20 = *psVar2;
      cVar8 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar19) {
        *psVar2 = sVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar20 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar20 == 0) {
LAB_013e5f78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_1 + 0x20,param_3 + 0x20);
  FUN_00ceffd4(param_1 + 0x22,param_3 + 0x30);
  puVar9 = PTR_DAT_047dd6e0;
  param_1[0x24] = 0;
  param_1[0x1c] = (long)(puVar9 + 0x10);
  return;
code_r0x013e5ebc:
  sVar20 = sVar7;
  if (sVar7 == 0) goto LAB_013e5b28;
  goto LAB_013e5e90;
}


