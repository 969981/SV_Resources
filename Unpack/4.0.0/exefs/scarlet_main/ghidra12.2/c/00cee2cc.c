/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cee2cc; name: FUN_00cee2cc
 */


void FUN_00cee2cc(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_120 [8];
  long local_118;
  undefined1 *local_110;
  char *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *plStack_d8;
  undefined1 *local_d0;
  char *pcStack_c8;
  long *local_c0;
  long *local_b8;
  undefined1 auStack_a8 [8];
  char *local_a0;
  long *local_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  long *local_70;
  
  FUN_00ceecf8(auStack_a8,param_2 + 7);
  if (*local_a0 != '\0') {
    FUN_00cef088(param_1,auStack_a8);
    local_88 = 0x27366b26c0d28d33;
    puStack_80 = &DAT_03c85400;
    local_78 = 3;
    local_70 = (long *)0x0;
    if (param_1[1] == 0) {
      local_c0 = (long *)0x0;
      local_b8 = (long *)0x0;
      local_d0 = &DAT_cbf29ce484222645;
      pcStack_c8 = "";
    }
    else {
      FUN_00cee868(&local_d0,param_1[1],&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    cVar5 = *pcStack_c8;
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (cVar5 != '\0') goto LAB_00cee45c;
  }
  FUN_00ceec28(&local_d0,*param_2);
  if (local_c0 == (long *)0x0) {
LAB_00cee444:
    *param_1 = (long)(PTR_DAT_047d9318 + 0x10);
    param_1[1] = 0;
  }
  else {
    lVar12 = local_c0[0x42];
    uVar15 = *(long *)(lVar12 + 0x140) - *(long *)(lVar12 + 0x138);
    iVar10 = (int)(uVar15 >> 5);
    if (iVar10 < 0x21) {
      iVar13 = 0;
      if (*(int *)(lVar12 + 0x170) != 0) {
        fVar18 = (float)*(int *)(lVar12 + 0x130);
        fVar17 = (fVar18 / (float)*(undefined8 *)(lVar12 + 0x60)) *
                 (SUB84(local_d0,0) - (float)*(undefined8 *)(lVar12 + 0x40));
        if (0.0 <= fVar17) {
          iVar13 = 0;
          fVar19 = ((float)*(int *)(lVar12 + 0x134) / (float)*(undefined8 *)(lVar12 + 0x68)) *
                   (SUB84(pcStack_c8,0) - (float)*(undefined8 *)(lVar12 + 0x48));
          bVar8 = false;
          bVar9 = false;
          if (fVar19 < (float)*(int *)(lVar12 + 0x134)) {
            bVar8 = false;
            bVar9 = true;
            if (!NAN(fVar17) && !NAN(fVar18)) {
              bVar8 = fVar17 < fVar18;
              bVar9 = false;
            }
          }
          if ((bVar8 != bVar9) && (0.0 <= fVar19)) {
            uVar6 = (int)fVar17 + *(int *)(lVar12 + 0x130) * (int)fVar19;
            if ((int)uVar6 < 0) goto LAB_00cee368;
            iVar13 = *(int *)(*(long *)(lVar12 + 0x178) + (ulong)uVar6 * 4);
          }
        }
        else {
LAB_00cee368:
          iVar13 = 0;
        }
      }
      uVar14 = (ulong)iVar13;
    }
    else {
      uVar14 = FUN_00cf2664();
    }
    puVar7 = PTR_DAT_047d3e30;
    if (0 < iVar10 && uVar14 != 0) {
      lVar12 = 0;
      uVar16 = 0;
      do {
        if ((uVar14 >> (uVar16 & 0x3f) & 1) != 0) {
          if (local_c0 == (long *)0x0) {
            puVar11 = (undefined8 *)puVar7;
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
          }
          else {
            lVar3 = *(long *)(local_c0[0x42] + 0x138);
            if ((ulong)(*(long *)(local_c0[0x42] + 0x140) - lVar3 >> 5) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            puVar11 = (undefined8 *)(lVar3 + lVar12);
          }
          local_f0 = *puVar11;
          uStack_e8 = puVar11[1];
          local_e0 = puVar11[2];
          plVar4 = (long *)puVar11[3];
          plStack_d8 = plVar4;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
          FUN_00ceea80(param_1,&local_f0);
          local_88 = 0x27366b26c0d28d33;
          puStack_80 = &DAT_03c85400;
          local_78 = 3;
          local_70 = (long *)0x0;
          if (param_1[1] == 0) {
            local_110 = &DAT_cbf29ce484222645;
            local_108 = "";
            local_100 = 0;
            local_f8 = (long *)0x0;
          }
          else {
            FUN_00cee868(&local_110,param_1[1],&local_88);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
          }
          cVar5 = *local_108;
          if (local_f8 != (long *)0x0) {
            (**(code **)(*local_f8 + 0x20))();
          }
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x20))(plVar4);
          }
          if (cVar5 != '\0') goto LAB_00cee454;
        }
        lVar12 = lVar12 + 0x20;
        uVar16 = uVar16 + 1;
      } while ((uVar15 >> 5 & 0xffffffff) * 0x20 != lVar12);
    }
    if (local_c0 == (long *)0x0) {
      if ((*PTR_DAT_047d3e28 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28);
        puVar11 = (undefined8 *)PTR_DAT_047d3e30;
        if (iVar10 != 0) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
          goto LAB_00cee39c;
        }
      }
      puVar11 = (undefined8 *)PTR_DAT_047d3e30;
    }
    else {
      puVar11 = (undefined8 *)FUN_00d0ba70(local_d0);
      if (*(char *)puVar11[1] == '\0') {
        puVar11 = (undefined8 *)FUN_00cf2638(local_c0,0);
      }
    }
LAB_00cee39c:
    local_f0 = *puVar11;
    uStack_e8 = puVar11[1];
    local_e0 = puVar11[2];
    plVar4 = (long *)puVar11[3];
    plStack_d8 = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    FUN_00ceea80(auStack_120,&local_f0);
    local_88 = 0x27366b26c0d28d33;
    puStack_80 = &DAT_03c85400;
    local_78 = 3;
    local_70 = (long *)0x0;
    if (local_118 == 0) {
      local_100 = 0;
      local_f8 = (long *)0x0;
      local_110 = &DAT_cbf29ce484222645;
      local_108 = "";
    }
    else {
      FUN_00cee868(&local_110,local_118,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    cVar5 = *local_108;
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (cVar5 != '\0') {
      *param_1 = (long)(PTR_DAT_047d9318 + 0x10);
      param_1[1] = local_118;
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (cVar5 == '\0') goto LAB_00cee444;
  }
LAB_00cee454:
  if (local_c0 != (long *)0x0) {
    lVar12 = local_c0[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_c0 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_00cee45c:
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  return;
}


