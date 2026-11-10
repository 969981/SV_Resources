/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4a2f4; name: FUN_00c4a2f4
 */


long FUN_00c4a2f4(long *param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_70;
  
  if (0 < param_4 - param_3) {
    lVar11 = param_4 - param_3 >> 7;
    lVar18 = param_1[1];
    if (param_1[2] - lVar18 >> 7 < lVar11) {
      lVar20 = *param_1;
      uVar6 = lVar11 + (lVar18 - lVar20 >> 7);
      uVar12 = param_1[4];
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar18 = param_1[2] - lVar20;
      lVar17 = param_2 - lVar20 >> 7;
      uVar9 = lVar18 >> 6;
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (uVar12 >> 1 <= (ulong)(lVar18 >> 7)) {
        uVar6 = uVar12;
      }
      if (uVar6 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 7,0x10);
        if (lVar18 == 0) {
          (**(code **)(*(long *)param_1[3] + 0xe8))();
        }
      }
      lVar19 = lVar18 + lVar17 * 0x80;
      lVar15 = lVar11 << 7;
      param_3 = param_3 + 0x20;
      local_70 = lVar19 + lVar11 * 0x80;
      lVar11 = lVar19 + 0x20;
      do {
        lVar4 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00c4a910;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar4;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        *(undefined8 *)(lVar11 + -0x20) = 0;
        *(undefined8 *)(lVar11 + -0x10) = 0;
        *(undefined8 *)(lVar11 + -8) = 0;
        *(undefined8 *)(lVar11 + -0x18) = 0;
        if (*(code **)(param_3 + -0x10) != (code *)0x0) {
          (**(code **)(param_3 + -0x10))(param_3,lVar11);
          uVar8 = *(undefined8 *)(param_3 + -8);
          *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)(param_3 + -0x18);
          *(undefined8 *)(lVar11 + -8) = uVar8;
          uVar8 = *(undefined8 *)(param_3 + -0x20);
          *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(param_3 + -0x10);
          *(undefined8 *)(lVar11 + -0x20) = uVar8;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar11 = lVar11 + 0x80;
        lVar15 = lVar15 + -0x80;
        param_3 = param_3 + 0x80;
      } while (lVar15 != 0);
      lVar15 = *param_1;
      lVar11 = lVar19;
      if (lVar15 != param_2) {
        lVar11 = 0;
        do {
          lVar4 = param_1[3];
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar5 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar5 != 0) {
            if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00c4a910;
            *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar4;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          }
          lVar4 = lVar19 + lVar11;
          lVar7 = param_2 + lVar11;
          *(undefined8 *)(lVar4 + -0x80) = 0;
          *(undefined8 *)(lVar4 + -0x70) = 0;
          *(undefined8 *)(lVar4 + -0x68) = 0;
          *(undefined8 *)(lVar4 + -0x78) = 0;
          if (*(code **)(lVar7 + -0x68) != (code *)0x0) {
            (**(code **)(lVar7 + -0x68))(lVar7 + -0x60,lVar4 + -0x60);
            uVar8 = *(undefined8 *)(lVar7 + -0x80);
            uVar14 = *(undefined8 *)(lVar7 + -0x78);
            *(undefined8 *)(lVar4 + -0x68) = *(undefined8 *)(lVar7 + -0x68);
            uVar13 = *(undefined8 *)(lVar7 + -0x70);
            *(undefined8 *)(lVar4 + -0x78) = uVar14;
            *(undefined8 *)(lVar4 + -0x70) = uVar13;
            *(undefined8 *)(lVar4 + -0x80) = uVar8;
            pcVar10 = *(code **)(lVar7 + -0x78);
            if (pcVar10 != (code *)0x0) {
              *(undefined8 *)(lVar7 + -0x70) = 0;
              *(undefined8 *)(lVar7 + -0x68) = 0;
              *(undefined8 *)(lVar7 + -0x80) = 0;
              *(undefined8 *)(lVar7 + -0x78) = 0;
              (*pcVar10)(lVar7 + -0x60);
            }
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          }
          lVar11 = lVar11 + -0x80;
        } while ((lVar15 + lVar17 * -0x80) - lVar20 != lVar11);
        lVar11 = lVar19 + lVar11;
      }
      lVar15 = param_1[1];
      if (lVar15 != param_2) {
        lVar4 = 0;
        do {
          lVar5 = param_1[3];
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar7 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar7 != 0) {
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00c4a910;
            *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar5;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          }
          puVar1 = (undefined8 *)(local_70 + lVar4);
          puVar2 = (undefined8 *)(lVar20 + lVar17 * 0x80 + lVar4);
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          if ((code *)puVar2[3] != (code *)0x0) {
            (*(code *)puVar2[3])(puVar2 + 4,puVar1 + 4);
            uVar8 = puVar2[1];
            puVar1[3] = puVar2[3];
            uVar14 = puVar2[2];
            *puVar1 = *puVar2;
            puVar1[1] = uVar8;
            puVar1[2] = uVar14;
            pcVar10 = (code *)puVar2[1];
            if (pcVar10 != (code *)0x0) {
              puVar2[2] = 0;
              puVar2[3] = 0;
              *puVar2 = 0;
              puVar2[1] = 0;
              (*pcVar10)(puVar2 + 4);
            }
          }
          if (lVar7 != 0) {
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          }
          lVar4 = lVar4 + 0x80;
        } while ((lVar15 + lVar17 * -0x80) - lVar20 != lVar4);
        local_70 = local_70 + lVar4;
        param_2 = param_1[1];
      }
      lVar20 = *param_1;
      *param_1 = lVar11;
      param_1[1] = local_70;
      lVar11 = param_1[2];
      param_1[2] = lVar18 + uVar6 * 0x80;
      while (lVar18 = param_2, lVar18 != lVar20) {
        pcVar10 = *(code **)(lVar18 + -0x78);
        param_2 = lVar18 + -0x80;
        if (pcVar10 != (code *)0x0) {
          *(undefined8 *)(lVar18 + -0x70) = 0;
          *(undefined8 *)(lVar18 + -0x68) = 0;
          *(undefined8 *)(lVar18 + -0x80) = 0;
          *(undefined8 *)(lVar18 + -0x78) = 0;
          (*pcVar10)(lVar18 + -0x60);
        }
      }
      if (lVar20 == 0) {
        return lVar19;
      }
      plVar16 = (long *)param_1[3];
      uVar6 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar6 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar20,lVar11 - lVar20,0x10);
        return lVar19;
      }
      FUN_00c48fe8(plVar16,lVar20,lVar11 - lVar20,0x10);
      return lVar19;
    }
    lVar20 = lVar18 - param_2 >> 7;
    lVar17 = param_4;
    if (lVar20 < lVar11) {
      lVar17 = param_3 + lVar20 * 0x80;
      if (lVar17 == param_4) {
        lVar20 = lVar18;
      }
      else {
        lVar19 = 0;
        do {
          lVar15 = param_1[3];
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar4 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar4 != 0) {
            if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00c4a910:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar15;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          }
          puVar1 = (undefined8 *)(lVar18 + lVar19);
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar2 = (undefined8 *)(lVar17 + lVar19);
          *puVar1 = 0;
          puVar1[1] = 0;
          if ((code *)puVar2[2] != (code *)0x0) {
            (*(code *)puVar2[2])(puVar2 + 4,puVar1 + 4);
            uVar8 = puVar2[3];
            puVar1[1] = puVar2[1];
            puVar1[3] = uVar8;
            uVar8 = *puVar2;
            puVar1[2] = puVar2[2];
            *puVar1 = uVar8;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          }
          lVar19 = lVar19 + 0x80;
        } while ((param_4 + lVar20 * -0x80) - param_3 != lVar19);
        lVar20 = lVar18 + lVar19;
      }
      param_1[1] = lVar20;
      if (lVar18 - param_2 < 1) {
        return param_2;
      }
    }
    FUN_00c4acb0(param_1,param_2,lVar18,param_2 + lVar11 * 0x80);
    if (lVar17 != param_3) {
      lVar18 = 0;
      do {
        puVar1 = (undefined8 *)(param_2 + lVar18);
        pcVar10 = (code *)puVar1[1];
        if (pcVar10 != (code *)0x0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          (*pcVar10)(puVar1 + 4);
        }
        puVar2 = (undefined8 *)(param_3 + lVar18);
        if ((code *)puVar2[2] != (code *)0x0) {
          (*(code *)puVar2[2])(puVar2 + 4,puVar1 + 4);
          uVar8 = puVar2[3];
          puVar1[1] = puVar2[1];
          puVar1[3] = uVar8;
          uVar8 = *puVar2;
          puVar1[2] = puVar2[2];
          *puVar1 = uVar8;
        }
        lVar18 = lVar18 + 0x80;
      } while (lVar17 - param_3 != lVar18);
    }
  }
  return param_2;
}


