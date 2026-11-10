/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017dac64; name: FUN_017dac64
 */


void FUN_017dac64(long param_1,int param_2,short *param_3)

{
  short sVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  short *psVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  int local_98 [2];
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar12 = *(ulong *)(param_1 + 0x118);
  uVar19 = (ulong)param_2;
  plVar11 = (long *)(param_1 + 0x110);
  if (uVar12 != 0) {
    uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar12 - 1 & uVar19;
    }
    else {
      uVar15 = uVar19;
      if (uVar12 <= uVar19) {
        uVar15 = 0;
        if (uVar12 != 0) {
          uVar15 = uVar19 / uVar12;
        }
        uVar15 = uVar19 - uVar15 * uVar12;
      }
    }
    puVar16 = *(undefined8 **)(*plVar11 + uVar15 * 8);
    if ((puVar16 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar16, plVar18 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar18[1] == uVar19) {
            if ((int)plVar18[2] == param_2) goto LAB_017dad20;
          }
          else if ((plVar18[1] & uVar12 - 1) != uVar15) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar18[1];
          if (uVar14 == uVar19) {
            if ((int)plVar18[2] == param_2) goto LAB_017dad20;
          }
          else {
            if (uVar12 <= uVar14) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar14 / uVar12;
              }
              uVar14 = uVar14 - uVar5 * uVar12;
            }
            if (uVar14 != uVar15) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  FUN_017db130(&local_70,*(undefined8 *)(param_1 + 8));
  local_90 = local_70;
  uStack_88 = uStack_68;
  local_70 = 0;
  local_80 = local_60;
  uStack_78 = uStack_58;
  local_98[0] = param_2;
  FUN_017db238(plVar11,local_98);
  lVar17 = local_90;
  local_90 = 0;
  if (lVar17 != 0) {
    FUN_017db9cc(&uStack_88);
  }
  uVar12 = *(ulong *)(param_1 + 0x118);
  if (uVar12 != 0) {
    uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar12 - 1 & uVar19;
    }
    else {
      uVar15 = uVar19;
      if (uVar12 <= uVar19) {
        uVar15 = 0;
        if (uVar12 != 0) {
          uVar15 = uVar19 / uVar12;
        }
        uVar15 = uVar19 - uVar15 * uVar12;
      }
    }
    plVar11 = *(long **)(*plVar11 + uVar15 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar11[1] == uVar19) {
            if ((int)plVar11[2] == param_2) goto LAB_017dafd4;
          }
          else if ((plVar11[1] & uVar12 - 1) != uVar15) goto LAB_017db084;
          plVar11 = (long *)*plVar11;
          plVar18 = (long *)0x0;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar11[1];
          if (uVar14 == uVar19) {
            if ((int)plVar11[2] == param_2) goto LAB_017dafd4;
          }
          else {
            if (uVar12 <= uVar14) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar14 / uVar12;
              }
              uVar14 = uVar14 - uVar5 * uVar12;
            }
            if (uVar14 != uVar15) goto LAB_017db084;
          }
          plVar11 = (long *)*plVar11;
          plVar18 = (long *)0x0;
        } while (plVar11 != (long *)0x0);
      }
      goto LAB_017dad20;
    }
  }
LAB_017db084:
  plVar18 = (long *)0x0;
LAB_017dad20:
  puVar6 = PTR_DAT_047d8938;
  if (((*PTR_DAT_047d8938 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  puVar8 = PTR_DAT_047d8948;
  puVar7 = PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = *(undefined8 *)PTR_DAT_047d8940;
  psVar13 = (short *)plVar18[3];
  if (((((*psVar13 != *param_3) || (psVar13[1] != param_3[1])) ||
       ((char)psVar13[2] != (char)param_3[2])) ||
      ((*(char *)((long)psVar13 + 5) != *(char *)((long)param_3 + 5) ||
       ((char)psVar13[3] != (char)param_3[3])))) ||
     ((*(int *)(psVar13 + 6) != *(int *)(param_3 + 6) ||
      ((*(float *)(psVar13 + 4) != *(float *)(param_3 + 4) ||
       (*(int *)(psVar13 + 8) != *(int *)(param_3 + 8))))))) {
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
    uVar10 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar10;
    uVar10 = FUN_011b047c(uVar10,(ulong)CONCAT14((char)param_3[2] == '\x01',*(undefined4 *)param_3)
                                 | (ulong)*(byte *)(param_3 + 3) << 0x21,0);
    lVar17 = plVar18[3];
    if (*(long *)(lVar17 + 0x18) != 0) {
      FUN_016a29fc();
      plVar11 = *(long **)(lVar17 + 0x18);
      *(undefined8 *)(lVar17 + 0x18) = 0;
      if (plVar11 != (long *)0x0) {
        lVar17 = plVar11[6];
        psVar13 = (short *)(lVar17 + 0x1a);
        do {
          sVar1 = *psVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar13,0x10);
          if (bVar4) {
            *psVar13 = sVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar1 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    FUN_0132a9c0(plVar18[3] + 0x18,uVar10,*(undefined8 *)(param_1 + 8));
    if (*(long *)(plVar18[3] + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_pokeSetupHandler","LoadAsync",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include\\pokemon/pokemon_model_system/poke_setup_file.h"
                 ,0x1e);
    }
    FUN_0132b848();
    puVar16 = (undefined8 *)plVar18[3];
    uVar10 = *(undefined8 *)param_3;
    uVar2 = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_3 + 8);
    *puVar16 = uVar10;
    puVar16[1] = uVar2;
  }
  return;
LAB_017dafd4:
  plVar18 = plVar11;
  goto LAB_017dad20;
}


