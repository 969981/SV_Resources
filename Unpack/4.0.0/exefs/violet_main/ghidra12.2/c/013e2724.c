/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e2724; name: FUN_013e2724
 */


void FUN_013e2724(long param_1,ulong *param_2,void *param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  float fVar21;
  undefined8 *puStack_70;
  undefined1 local_68;
  
  plVar17 = *(long **)(param_1 + 0x3c8);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_013e2d28:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar17;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,0x10);
  puVar7 = PTR_DAT_047d66f8;
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar17 + 0xe8))(plVar17);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar13 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *plVar10 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar10[1] = lVar13;
  plVar10[4] = (long)(puVar7 + 0x88);
  plVar12 = plVar10 + 5;
  *plVar12 = (long)(puVar7 + 0xd8);
  plVar20 = plVar10 + 6;
  *plVar20 = 0;
  plVar10[7] = 0;
  FUN_00d1a3f4(plVar20,plVar12);
  *plVar10 = (long)&PTR_LAB_045a1308;
  plVar10[4] = (long)&PTR_LAB_045a1380;
  *plVar12 = (long)&DAT_045a13d0;
  memcpy(plVar10 + 8,param_3,0x30);
  *(undefined4 *)(plVar10 + 3) = 0x100080;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  plVar10[1] = (long)plVar17;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = *plVar20;
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  plVar17 = (long *)(param_1 + 0x2d0);
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 0) {
    uVar19 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar19;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  puVar2 = (undefined8 *)(param_1 + 0x308);
  plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x308) + 0x10))
                              (*(long **)(param_1 + 0x308),0x20,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  local_68 = 0;
  uVar19 = *puVar2;
  puStack_70 = puVar2;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    uVar14 = *param_2;
    plVar12[2] = uVar14;
    plVar12[3] = (long)plVar10;
  }
  else {
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_013e2d28;
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar19;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar12[2] = *param_2;
    plVar12[3] = (long)plVar10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    uVar14 = plVar12[2];
  }
  local_68 = 1;
  *plVar12 = 0;
  plVar12[1] = uVar14;
  uVar18 = *(ulong *)(param_1 + 0x2d8);
  if (uVar18 != 0) {
    uVar16 = uVar18 - 1;
    if ((uVar18 & uVar16) == 0) {
      plVar10 = *(long **)(*plVar17 + (uVar16 & uVar14) * 8);
      if (plVar10 != (long *)0x0) {
        do {
          plVar10 = (long *)*plVar10;
          if ((plVar10 == (long *)0x0) || ((plVar10[1] & uVar16) != (uVar16 & uVar14)))
          goto LAB_013e29d8;
        } while (plVar10[2] != uVar14);
        goto LAB_013e2968;
      }
    }
    else {
      uVar16 = uVar14;
      if (uVar18 <= uVar14) {
        uVar16 = 0;
        if (uVar18 != 0) {
          uVar16 = uVar14 / uVar18;
        }
        uVar16 = uVar14 - uVar16 * uVar18;
      }
      plVar10 = *(long **)(*plVar17 + uVar16 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_013e29d8;
          uVar15 = plVar10[1];
          if (uVar18 <= uVar15) {
            uVar6 = 0;
            if (uVar18 != 0) {
              uVar6 = uVar15 / uVar18;
            }
            uVar15 = uVar15 - uVar6 * uVar18;
          }
          if (uVar15 != uVar16) goto LAB_013e29d8;
        } while (plVar10[2] != uVar14);
LAB_013e2968:
        if (plVar12 == (long *)0x0) {
          return;
        }
        FUN_013e3114(&puStack_70);
        return;
      }
    }
  }
LAB_013e29d8:
  fVar21 = (float)(*(long *)(param_1 + 0x328) + 1);
  if ((uVar18 == 0) || (*(float *)(param_1 + 0x330) * (float)uVar18 < fVar21)) {
    uVar14 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
    uVar16 = (ulong)(fVar21 / *(float *)(param_1 + 0x330));
    if (uVar16 <= uVar14) {
      uVar16 = uVar14;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      uVar16 = std::__next_prime(uVar16);
      uVar18 = *(ulong *)(param_1 + 0x2d8);
    }
    if (uVar18 < uVar16) {
      uVar14 = uVar16;
LAB_013e2b00:
      FUN_013e2db8(plVar17,uVar14);
    }
    else if (uVar16 < uVar18) {
      uVar14 = (ulong)((float)*(ulong *)(param_1 + 0x328) / *(float *)(param_1 + 0x330));
      if ((uVar18 < 3) ||
         (uVar15 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
         uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
         1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar14 = std::__next_prime(uVar14);
      }
      else if (1 < uVar14) {
        uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
      }
      if (uVar14 <= uVar16) {
        uVar14 = uVar16;
      }
      if (uVar14 < uVar18) goto LAB_013e2b00;
    }
    uVar18 = *(ulong *)(param_1 + 0x2d8);
    uVar14 = plVar12[1];
  }
  uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar16 < 2) {
    uVar14 = uVar18 - 1 & uVar14;
  }
  else if (uVar18 <= uVar14) {
    uVar15 = 0;
    if (uVar18 != 0) {
      uVar15 = uVar14 / uVar18;
    }
    uVar14 = uVar14 - uVar15 * uVar18;
  }
  plVar10 = *(long **)(*plVar17 + uVar14 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar12 = *(long *)(param_1 + 0x300);
    *(long **)(param_1 + 0x300) = plVar12;
    *(long *)(*(long *)(param_1 + 0x2d0) + uVar14 * 8) = param_1 + 0x300;
    if (*plVar12 == 0) goto LAB_013e2a88;
    uVar14 = *(ulong *)(*plVar12 + 8);
    if (uVar16 < 2) {
      uVar14 = uVar14 & uVar18 - 1;
    }
    else if (uVar18 <= uVar14) {
      uVar16 = 0;
      if (uVar18 != 0) {
        uVar16 = uVar14 / uVar18;
      }
      uVar14 = uVar14 - uVar16 * uVar18;
    }
    plVar10 = (long *)(*plVar17 + uVar14 * 8);
  }
  else {
    *plVar12 = *plVar10;
  }
  *plVar10 = (long)plVar12;
LAB_013e2a88:
  *(long *)(param_1 + 0x328) = *(long *)(param_1 + 0x328) + 1;
  return;
}


