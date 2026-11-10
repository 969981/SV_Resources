/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278eaa4; name: FUN_0278eaa4
 */


void FUN_0278eaa4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  uVar11 = *(ulong *)(*(long *)(param_1 + 0x78) + 0x28);
  if (uVar11 < *(ulong *)(param_1 + 0x30)) {
    puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x20);
    puVar4 = puVar16;
    if (uVar11 != 0) {
      puVar4 = puVar16 + uVar11 * 0x22;
    }
    if (puVar4 != puVar16) {
      do {
        uVar11 = FUN_027b6d40(puVar16,param_2);
        if ((uVar11 & 1) != 0) goto LAB_0278eb28;
        puVar16 = puVar16 + 0x22;
      } while (puVar16 != puVar4);
      puVar16 = puVar4;
    }
LAB_0278eb28:
    puVar20 = *(undefined8 **)(param_1 + 0x78);
    puVar6 = (undefined8 *)puVar20[4];
    uVar11 = puVar20[5];
    puVar14 = puVar6 + uVar11 * 0x22;
    puVar4 = puVar6;
    if (uVar11 != 0) {
      puVar4 = puVar14;
    }
    if (puVar4 == puVar16) {
      uVar13 = puVar20[6];
      if (uVar13 <= uVar11) {
        uVar12 = puVar20[1];
        uVar1 = uVar11 + 1;
        if (uVar1 - uVar13 <= uVar12 - uVar13) {
          uVar5 = uVar13 << 3;
          if (4 < uVar13 >> 0x3d) {
            uVar5 = 0xffffffffffffffff;
          }
          if (uVar13 >> 0x3d == 0) {
            uVar5 = (uVar13 << 3) / 5;
          }
          uVar13 = uVar12;
          if (uVar5 <= uVar12) {
            uVar13 = uVar5;
          }
          if (uVar1 <= uVar13) {
            uVar1 = uVar13;
          }
          if (uVar1 <= uVar12) {
            lVar8 = (**(code **)(*(long *)*puVar20 + 0x10))((long *)*puVar20,uVar1 * 0x110,8);
            if (lVar8 == 0) {
              (**(code **)(*(long *)*puVar20 + 0xe8))();
            }
            puVar16 = (undefined8 *)puVar20[4];
            lVar19 = lVar8;
            if ((puVar16 != (undefined8 *)0x0) && (puVar16 != puVar14)) {
              lVar19 = 0;
              puVar2 = PTR_DAT_047e20b8 + 0x10;
              do {
                uVar17 = *puVar20;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar9 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar9 != 0) {
                  if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0278f0b4;
                  *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
                  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                }
                plVar18 = (long *)(lVar8 + lVar19);
                *plVar18 = (long)puVar2;
                memcpy(plVar18 + 1,(void *)((long)puVar16 + lVar19 + 8),0xfc);
                *(undefined1 *)((long)plVar18 + 0x104) = 0;
                if (*(char *)((long)puVar16 + lVar19 + 0x104) != '\0') {
                  plVar18[0x21] = *(long *)((long)puVar16 + lVar19 + 0x108);
                  *(undefined1 *)((long)plVar18 + 0x104) = 1;
                }
                if (lVar9 != 0) {
                  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                }
                lVar19 = lVar19 + 0x110;
              } while ((long)puVar6 + (uVar11 * 0x110 - (long)puVar16) != lVar19);
              lVar19 = lVar8 + lVar19;
            }
            uVar17 = *puVar20;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar9 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar9 == 0) {
              FUN_027b6e2c(lVar19,param_2);
            }
            else {
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0278f0b4;
              *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              FUN_027b6e2c(lVar19,param_2);
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            }
            lVar9 = lVar19 + 0x110;
            if (puVar16 != (undefined8 *)0x0) {
              lVar15 = puVar20[5];
              if (puVar16 + lVar15 * 0x22 != puVar14) {
                lVar9 = 0;
                puVar2 = PTR_DAT_047e20b8 + 0x10;
                do {
                  uVar17 = *puVar20;
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar10 != 0) {
                    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0278f0b4;
                    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar17;
                    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                  }
                  lVar3 = lVar19 + lVar9;
                  *(undefined **)(lVar3 + 0x110) = puVar2;
                  memcpy((void *)(lVar3 + 0x118),(void *)((long)puVar14 + lVar9 + 8),0xfc);
                  *(undefined1 *)(lVar3 + 0x214) = 0;
                  if (*(char *)((long)puVar14 + lVar9 + 0x104) != '\0') {
                    *(undefined8 *)(lVar3 + 0x218) = *(undefined8 *)((long)puVar14 + lVar9 + 0x108);
                    *(undefined1 *)(lVar3 + 0x214) = 1;
                  }
                  if (lVar10 != 0) {
                    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                  }
                  lVar9 = lVar9 + 0x110;
                } while ((long)puVar16 + ((lVar15 - uVar11) * 0x110 - (long)puVar6) != lVar9);
                lVar15 = puVar20[5];
                lVar9 = lVar19 + lVar9 + 0x110;
              }
              for (; lVar15 != 0; lVar15 = lVar15 + -1) {
                (**(code **)*puVar16)(puVar16);
                puVar16 = puVar16 + 0x22;
              }
              lVar19 = puVar20[6];
              plVar18 = (long *)*puVar20;
              uVar17 = puVar20[4];
              uVar11 = (**(code **)(*plVar18 + 0xf8))(plVar18);
              if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar18 + 0x18))(plVar18,uVar17,lVar19 * 0x110,8);
              }
              else {
                FUN_00c48fe8(plVar18,uVar17,lVar19 * 0x110,8);
              }
            }
            puVar20[4] = lVar8;
            puVar20[5] = (lVar9 - lVar8 >> 4) * -0xf0f0f0f0f0f0f0f;
            puVar20[6] = uVar1;
            goto LAB_0278eb48;
          }
        }
LAB_0278f0b4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar17 = *puVar20;
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        FUN_027b6e2c(puVar14,param_2);
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0278f0b4;
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar17;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        FUN_027b6e2c(puVar14,param_2);
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      puVar20[5] = puVar20[5] + 1;
    }
  }
LAB_0278eb48:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}


