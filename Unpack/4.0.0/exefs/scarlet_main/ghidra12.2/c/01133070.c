/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01133070; name: FUN_01133070
 */


void FUN_01133070(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  
  plVar18 = (long *)(param_1 + 0x100);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar18 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_011330b4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x108));
  do {
    if (*plVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x108));
        while (*plVar18 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011330b4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011330b4:
  uVar9 = *(ulong *)(param_1 + 0x98);
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    FUN_01133678(puVar1,uVar9,param_2);
    *(ulong *)(param_1 + 0x98) = uVar9 + 0x120;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0xb0);
    lVar7 = (long)(uVar9 - *(long *)(param_1 + 0x90)) >> 5;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar9 = lVar7 * -0x71c71c71c71c71c7 + 1;
    if (uVar16 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)(*(ulong *)(param_1 + 0xa0) - *(long *)(param_1 + 0x90)) >> 5;
    uVar12 = lVar10 * 0x1c71c71c71c71c72;
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    if (uVar16 >> 1 <= (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
      uVar9 = uVar16;
    }
    if (uVar9 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 * 0x120,0x10);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    lVar19 = lVar10 + lVar7 * 0x20;
    FUN_01133678(puVar1,lVar19,param_2);
    lVar7 = *(long *)(param_1 + 0x90);
    lVar11 = *(long *)(param_1 + 0x98);
    if (lVar11 == lVar7) {
      lVar11 = lVar19;
      lVar20 = lVar7;
    }
    else {
      lVar20 = 0;
      do {
        uVar17 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar17;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        lVar2 = lVar11 + lVar20;
        lVar3 = lVar19 + lVar20;
        *(undefined8 *)(lVar3 + -0x120) = *(undefined8 *)(lVar2 + -0x120);
        *(undefined8 *)(lVar3 + -0x118) = *(undefined8 *)(lVar2 + -0x118);
        *(undefined8 *)(lVar3 + -0x110) = *(undefined8 *)(lVar2 + -0x110);
        uVar17 = *(undefined8 *)(lVar2 + -0x108);
        *(undefined8 *)(lVar2 + -0x108) = 0;
        *(undefined8 *)(lVar3 + -0x100) = 0;
        *(undefined8 *)(lVar3 + -0xf8) = 0;
        *(undefined8 *)(lVar3 + -0xf0) = 0;
        *(undefined8 *)(lVar3 + -0x108) = uVar17;
        *(undefined8 *)(lVar3 + -0xe8) = 0;
        if (*(code **)(lVar2 + -0xe8) != (code *)0x0) {
          (**(code **)(lVar2 + -0xe8))(lVar2 + -0xe0,lVar3 + -0xe0);
          uVar17 = *(undefined8 *)(lVar2 + -0x100);
          uVar14 = *(undefined8 *)(lVar2 + -0xf8);
          *(undefined8 *)(lVar3 + -0xe8) = *(undefined8 *)(lVar2 + -0xe8);
          uVar15 = *(undefined8 *)(lVar2 + -0xf0);
          *(undefined8 *)(lVar3 + -0xf8) = uVar14;
          *(undefined8 *)(lVar3 + -0xf0) = uVar15;
          *(undefined8 *)(lVar3 + -0x100) = uVar17;
          pcVar13 = *(code **)(lVar2 + -0xf8);
          if (pcVar13 != (code *)0x0) {
            *(undefined8 *)(lVar2 + -0xf0) = 0;
            *(undefined8 *)(lVar2 + -0xe8) = 0;
            *(undefined8 *)(lVar2 + -0x100) = 0;
            *(undefined8 *)(lVar2 + -0xf8) = 0;
            (*pcVar13)(lVar2 + -0xe0);
          }
        }
        *(undefined8 *)(lVar3 + -0x80) = 0;
        *(undefined8 *)(lVar3 + -0x70) = 0;
        *(undefined8 *)(lVar3 + -0x68) = 0;
        *(undefined8 *)(lVar3 + -0x78) = 0;
        if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
          (**(code **)(lVar2 + -0x68))(lVar2 + -0x60,lVar3 + -0x60);
          uVar17 = *(undefined8 *)(lVar2 + -0x80);
          uVar14 = *(undefined8 *)(lVar2 + -0x78);
          *(undefined8 *)(lVar3 + -0x68) = *(undefined8 *)(lVar2 + -0x68);
          uVar15 = *(undefined8 *)(lVar2 + -0x70);
          *(undefined8 *)(lVar3 + -0x78) = uVar14;
          *(undefined8 *)(lVar3 + -0x70) = uVar15;
          *(undefined8 *)(lVar3 + -0x80) = uVar17;
          pcVar13 = *(code **)(lVar2 + -0x78);
          if (pcVar13 != (code *)0x0) {
            *(undefined8 *)(lVar2 + -0x70) = 0;
            *(undefined8 *)(lVar2 + -0x68) = 0;
            *(undefined8 *)(lVar2 + -0x80) = 0;
            *(undefined8 *)(lVar2 + -0x78) = 0;
            (*pcVar13)(lVar2 + -0x60);
          }
        }
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar20 = lVar20 + -0x120;
      } while (lVar7 - lVar11 != lVar20);
      lVar7 = *(long *)(param_1 + 0x90);
      lVar11 = lVar19 + lVar20;
      lVar20 = *(long *)(param_1 + 0x98);
    }
    lVar8 = *(long *)(param_1 + 0xa0);
    *(long *)(param_1 + 0x90) = lVar11;
    *(long *)(param_1 + 0x98) = lVar19 + 0x120;
    *(ulong *)(param_1 + 0xa0) = lVar10 + uVar9 * 0x120;
    if (lVar20 != lVar7) {
      pcVar13 = *(code **)(lVar20 + -0x78);
      if (pcVar13 != (code *)0x0) {
        *(undefined8 *)(lVar20 + -0x70) = 0;
        *(undefined8 *)(lVar20 + -0x68) = 0;
        *(undefined8 *)(lVar20 + -0x80) = 0;
        *(undefined8 *)(lVar20 + -0x78) = 0;
        (*pcVar13)(lVar20 + -0x60);
      }
      pcVar13 = *(code **)(lVar20 + -0xf8);
      if (pcVar13 != (code *)0x0) {
        *(undefined8 *)(lVar20 + -0xf0) = 0;
        *(undefined8 *)(lVar20 + -0xe8) = 0;
        *(undefined8 *)(lVar20 + -0x100) = 0;
        *(undefined8 *)(lVar20 + -0xf8) = 0;
        (*pcVar13)(lVar20 + -0xe0);
      }
      if (*(long **)(lVar20 + -0x108) != (long *)0x0) {
        (**(code **)(**(long **)(lVar20 + -0x108) + 0x20))();
      }
      if (lVar20 + -0x120 != lVar7) {
        pcVar13 = *(code **)(lVar20 + -0x198);
        if (pcVar13 != (code *)0x0) {
          *(undefined8 *)(lVar20 + -0x188) = 0;
          *(undefined8 *)(lVar20 + -400) = 0;
          *(undefined8 *)(lVar20 + -0x198) = 0;
          *(undefined8 *)(lVar20 + -0x1a0) = 0;
          (*pcVar13)(lVar20 + -0x180);
        }
        pcVar13 = *(code **)(lVar20 + -0x218);
        if (pcVar13 != (code *)0x0) {
          *(undefined8 *)(lVar20 + -0x208) = 0;
          *(undefined8 *)(lVar20 + -0x210) = 0;
          *(undefined8 *)(lVar20 + -0x218) = 0;
          *(undefined8 *)(lVar20 + -0x220) = 0;
          (*pcVar13)(lVar20 + -0x200);
        }
        if (*(long **)(lVar20 + -0x228) != (long *)0x0) {
          (**(code **)(**(long **)(lVar20 + -0x228) + 0x20))();
        }
        if (lVar20 + -0x240 != lVar7) {
          pcVar13 = *(code **)(lVar20 + -0x2b8);
          if (pcVar13 != (code *)0x0) {
            *(undefined8 *)(lVar20 + -0x2a8) = 0;
            *(undefined8 *)(lVar20 + -0x2b0) = 0;
            *(undefined8 *)(lVar20 + -0x2b8) = 0;
            *(undefined8 *)(lVar20 + -0x2c0) = 0;
            (*pcVar13)(lVar20 + -0x2a0);
          }
          pcVar13 = *(code **)(lVar20 + -0x338);
          if (pcVar13 != (code *)0x0) {
            *(undefined8 *)(lVar20 + -0x328) = 0;
            *(undefined8 *)(lVar20 + -0x330) = 0;
            *(undefined8 *)(lVar20 + -0x338) = 0;
            *(undefined8 *)(lVar20 + -0x340) = 0;
            (*pcVar13)(lVar20 + -800);
          }
          if (*(long **)(lVar20 + -0x348) != (long *)0x0) {
            (**(code **)(**(long **)(lVar20 + -0x348) + 0x20))();
          }
          if (lVar20 + -0x360 != lVar7) {
            lVar10 = 0;
            do {
              lVar11 = lVar20 + lVar10;
              pcVar13 = *(code **)(lVar11 + -0x3d8);
              if (pcVar13 != (code *)0x0) {
                *(undefined8 *)(lVar11 + -0x3d0) = 0;
                *(undefined8 *)(lVar11 + -0x3c8) = 0;
                *(undefined8 *)(lVar11 + -0x3e0) = 0;
                *(undefined8 *)(lVar11 + -0x3d8) = 0;
                (*pcVar13)(lVar11 + -0x3c0);
              }
              pcVar13 = *(code **)(lVar11 + -0x458);
              if (pcVar13 != (code *)0x0) {
                *(undefined8 *)(lVar11 + -0x450) = 0;
                *(undefined8 *)(lVar11 + -0x448) = 0;
                *(undefined8 *)(lVar11 + -0x460) = 0;
                *(undefined8 *)(lVar11 + -0x458) = 0;
                (*pcVar13)(lVar11 + -0x440);
              }
              if (*(long **)(lVar11 + -0x468) != (long *)0x0) {
                (**(code **)(**(long **)(lVar11 + -0x468) + 0x20))();
              }
              lVar10 = lVar10 + -0x120;
            } while ((lVar7 - lVar20) + 0x360 != lVar10);
          }
        }
      }
    }
    if (lVar7 != 0) {
      plVar18 = (long *)*puVar1;
      lVar8 = lVar8 - lVar7;
      uVar9 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar7,lVar8,0x10);
      }
      else {
        FUN_00c48fe8(plVar18,lVar7,lVar8,0x10);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x108));
  return;
}


