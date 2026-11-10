/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ddcb48; name: FUN_00ddcb48
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ddcb48(long param_1)

{
  short *psVar1;
  long *plVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  void *__dest;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  byte *pbVar14;
  bool bVar15;
  short sVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  
  if (*(char *)(param_1 + 0x11e) == '\0') {
    return;
  }
  plVar17 = (long *)(param_1 + 0xc30);
  lVar9 = nn::os::GetCurrentThread();
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc38));
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar15) {
            *plVar17 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00ddcb94;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar15) {
      *plVar17 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00ddcb94:
  if ((*(long *)(param_1 + 0xc50) == 0) || (*(short *)(*(long *)(param_1 + 0xc50) + 0x1a) == 0))
  goto LAB_00ddcfc4;
  lVar9 = *(long *)(param_1 + 0xc50);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar16 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar16) {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00ddd094;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00ddd094:
        bVar15 = false;
      }
      if (bVar15) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          plVar17 = (long *)(lVar9 + -0x28);
          if (*(long *)(lVar9 + 0xf8) == 0) {
            pcVar13 = *(code **)(*plVar17 + 0x60);
            goto LAB_00ddd014;
          }
          cVar5 = *(char *)(*(long *)(lVar9 + 0xf8) + 0x210);
          (**(code **)(*plVar17 + 0x60))();
          goto joined_r0x00ddd0cc;
        }
        break;
      }
      sVar16 = sVar4;
    } while (sVar4 != 0);
  }
  if (_DAT_00000120 == 0) goto LAB_00ddcfc4;
  cVar5 = *(char *)(_DAT_00000120 + 0x210);
joined_r0x00ddd0cc:
  if (cVar5 == '\0') goto LAB_00ddcfc4;
  lVar9 = *(long *)(param_1 + 0xc50);
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar16 = *psVar1;
  if (sVar16 == *(short *)(lVar9 + 0x1a)) {
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = *(short *)(lVar9 + 0x1a) + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00ddcc24;
    bVar15 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00ddcc24:
    bVar15 = false;
  }
  while (!bVar15) {
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00ddcc50;
      bVar15 = true;
      sVar16 = sVar4;
    }
    else {
      ClearExclusiveLocal();
LAB_00ddcc50:
      bVar15 = false;
      sVar16 = sVar4;
    }
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  plVar18 = (long *)0x0;
  if (lVar9 != 0) {
    plVar18 = (long *)(lVar9 + -0x28);
  }
  plVar17 = (long *)plVar18[0x24];
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 5;
    do {
      lVar6 = *plVar2;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar15) {
        *(int *)plVar2 = (int)lVar6 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar6 == -1) {
LAB_00ddd120:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (lVar9 != 0) {
    (**(code **)(*plVar18 + 0x60))();
  }
  if (plVar17 == (long *)0x0) goto LAB_00ddcfc4;
  if (*(int *)(param_1 + 0xc20) == 0) {
    if (*(char *)(param_1 + 0x11f) != '\0') goto LAB_00ddcd30;
  }
  else {
    if (*(char *)(param_1 + 0x11f) == '\0') {
      lVar9 = *(long *)(param_1 + 0x208);
      *(int *)(param_1 + 0xc10) = *(int *)(param_1 + 0xc20);
      *(int *)(param_1 + 0xc24) = 1 - *(int *)(param_1 + 0xc24);
      pcVar10 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar9 + 0x30);
      if (*pcVar10 == '\0' || *(long *)(pcVar10 + 8) == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (*(long *)(*(long *)(pcVar10 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_buffer","Map",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                     ,0x31);
        }
        __dest = (void *)(**(code **)PTR_DAT_047d8da8)();
      }
      memcpy(__dest,(void *)(param_1 + 0x210),0xa10);
      FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar9 + 0x30);
    }
LAB_00ddcd30:
    lVar9 = *(long *)(param_1 + 0x158);
    lVar6 = *(long *)(param_1 + 0x160);
    if (lVar9 != lVar6) {
      do {
        if (*(int *)((long)plVar17 + 0x194) == *(int *)(lVar9 + 0x18)) {
          local_90 = (long *)((ulong)local_90 & 0xffffffffffffff00);
          FUN_00d8219c(*(undefined8 *)(*(long *)(lVar9 + 0x10) + 200),0,
                       lVar9 + (ulong)*(uint *)(param_1 + 0xc24) * 8,0xffffffff,&local_90);
          uVar7 = (**(code **)(*DAT_0485a020 + 0x88))();
          uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 200);
          local_90 = *(long **)(param_1 + 0x208);
          if (local_90 != (long *)0x0) {
            plVar18 = local_90 + 5;
            do {
              lVar19 = *plVar18;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar15) {
                *(int *)plVar18 = (int)lVar19 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar19 == -1) goto LAB_00ddd120;
          }
          FUN_00c4b998(uVar11,0x1f,uVar7,&local_90);
          if (local_90 != (long *)0x0) {
            plVar18 = local_90 + 5;
            do {
              lVar19 = *plVar18;
              iVar8 = (int)lVar19 + -1;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar15) {
                *(int *)plVar18 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*local_90 + 0x10))();
            }
            else if ((int)lVar19 == 0) goto LAB_00ddd148;
          }
          uVar12 = (**(code **)(*DAT_0485a020 + 0x70))(DAT_0485a020,1);
          FUN_00ead0d0(*(undefined8 *)(*(long *)(lVar9 + 0x10) + 200),0x1f,uVar12 >> 0x20,
                       param_1 + 0x1f8);
          uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 200);
          if (*(char *)(param_1 + 0x11f) == '\0') {
            FUN_0170bbb8(uVar11);
            uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 200);
            lVar19 = lVar9 + (ulong)(1 - *(int *)(param_1 + 0xc24)) * 8;
          }
          else {
            FUN_00d81b84(0,0,0,0,uVar11,0);
            uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 200);
            lVar19 = param_1 + 0x128;
          }
          FUN_00d101e0(uVar11,0x1f,uVar12 >> 0x20,lVar19);
          FUN_015b3280(*(undefined8 *)(*(long *)(lVar9 + 0x10) + 200),0,1,1,1,1);
          lVar19 = *(long *)(lVar9 + 0x10);
          FUN_00f190b8(*(undefined8 *)(lVar19 + 200),0,1);
          *(undefined1 *)(lVar19 + 0x158) = 0;
          FUN_00eada7c(*(undefined8 *)(*(long *)(lVar9 + 0x10) + 200),1);
          FUN_00eae2a4(*(undefined4 *)(param_1 + 0xc48),
                       *(undefined8 *)(*(long *)(lVar9 + 0x10) + 200));
          FUN_00c4cf3c(*(undefined8 *)(lVar9 + 0x10));
        }
        lVar9 = lVar9 + 0x20;
      } while (lVar9 != lVar6);
    }
    pbStack_88 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,2);
    if (pbStack_88 == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_90 = *(long **)PTR_DAT_047d3e30;
      pbStack_88 = *(byte **)(PTR_DAT_047d3e30 + 8);
      local_80 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      local_78 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
    }
    else {
      local_80 = strlen((char *)pbStack_88);
      bVar3 = *pbStack_88;
      local_90 = (long *)&DAT_cbf29ce484222645;
      pbVar14 = pbStack_88;
      while (bVar3 != 0) {
        pbVar14 = pbVar14 + 1;
        local_90 = (long *)(((ulong)local_90 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar14;
      }
      local_78 = (long *)0x0;
    }
    plVar18 = *(long **)(param_1 + 0x1c0);
    if (plVar18 != (long *)0x0) {
      do {
        if (*(char *)(plVar18[8] + 0x2a0) == '\0') {
          FUN_010e88e0(plVar18[8],&local_90,plVar18 + (ulong)*(uint *)(param_1 + 0xc24) + 6,
                       param_1 + 0x1f8);
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
  }
  plVar18 = plVar17 + 5;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(undefined4 *)(param_1 + 0xc20) = 0;
  do {
    lVar9 = *plVar18;
    iVar8 = (int)lVar9 + -1;
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar15) {
      *(int *)plVar18 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    pcVar13 = *(code **)(*plVar17 + 0x10);
LAB_00ddd014:
    (*pcVar13)(plVar17);
  }
  else if ((int)lVar9 == 0) {
LAB_00ddd148:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_00ddcfc4:
  *(undefined8 *)(param_1 + 0xc30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc38));
  return;
}


