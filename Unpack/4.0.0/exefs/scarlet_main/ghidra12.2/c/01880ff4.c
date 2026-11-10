/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01880ff4; name: FUN_01880ff4
 */


void FUN_01880ff4(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  ushort *puVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong unaff_x23;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  
  if (((*(long *)(param_1 + 0x30) != 0) && ((*(byte *)(*(long *)(param_1 + 0x30) + 0x1e8) & 1) != 0)
      ) && (puVar9 = (uint *)(**(code **)(**(long **)(param_1 + 0x30) + 0x70))(),
           puVar9 != (uint *)0x0)) {
    piVar3 = (int *)((long)puVar9 + (ulong)*puVar9);
    if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar14 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar14 != 0)) {
      puVar9 = (uint *)((long)piVar3 + uVar14);
      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
      uVar6 = *puVar9;
      plVar1 = (long *)(param_1 + 0x68);
      FUN_02b6f864(plVar1,(long)((float)uVar6 / *(float *)(param_1 + 200)));
      if (uVar6 != 0) {
        uVar14 = 0;
        plVar2 = (long *)(param_1 + 0x98);
        do {
          puVar4 = puVar9 + uVar14 + 1;
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar5 = (ushort *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)))
          ;
          uVar17 = (ulong)puVar5[1] + (ulong)*puVar5 * 10000;
          uVar16 = *(ulong *)(param_1 + 0x70);
          if (uVar16 == 0) {
LAB_01881180:
            plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                                        (*(long **)(param_1 + 0xa0),0x20,8);
            if (plVar12 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0xa0) + 0xe8))();
            }
            uVar15 = *(undefined8 *)(param_1 + 0xa0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar10 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar10 == 0) {
              plVar12[2] = uVar17;
              plVar12[3] = (long)piVar3;
            }
            else {
              if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar15;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
              plVar12[2] = uVar17;
              plVar12[3] = (long)piVar3;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            }
            *plVar12 = 0;
            plVar12[1] = uVar17;
            fVar18 = (float)(*(long *)(param_1 + 0xc0) + 1);
            if ((uVar16 == 0) || (*(float *)(param_1 + 200) * (float)uVar16 < fVar18)) {
              uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
              uVar11 = (ulong)(fVar18 / *(float *)(param_1 + 200));
              if (uVar11 <= uVar16) {
                uVar11 = uVar16;
              }
              FUN_02b6f864(plVar1,uVar11);
              uVar16 = *(ulong *)(param_1 + 0x70);
              if ((uVar16 & uVar16 - 1) == 0) {
                unaff_x23 = (int)uVar16 - 1 & uVar17;
              }
              else if (uVar17 < uVar16) {
                unaff_x23 = uVar17;
              }
              else {
                uVar11 = 0;
                if (uVar16 != 0) {
                  uVar11 = uVar17 / uVar16;
                }
                unaff_x23 = uVar17 - uVar11 * uVar16;
              }
            }
            plVar13 = *(long **)(*plVar1 + unaff_x23 * 8);
            if (plVar13 == (long *)0x0) {
              *plVar12 = *plVar2;
              *plVar2 = (long)plVar12;
              *(long **)(*plVar1 + unaff_x23 * 8) = plVar2;
              if (*plVar12 != 0) {
                uVar11 = *(ulong *)(*plVar12 + 8);
                if ((uVar16 & uVar16 - 1) == 0) {
                  uVar11 = uVar11 & uVar16 - 1;
                }
                else if (uVar16 <= uVar11) {
                  uVar7 = 0;
                  if (uVar16 != 0) {
                    uVar7 = uVar11 / uVar16;
                  }
                  uVar11 = uVar11 - uVar7 * uVar16;
                }
                plVar13 = (long *)(*plVar1 + uVar11 * 8);
                goto LAB_018812dc;
              }
            }
            else {
              *plVar12 = *plVar13;
LAB_018812dc:
              *plVar13 = (long)plVar12;
            }
            *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
          }
          else {
            uVar11 = uVar16 - 1;
            if ((uVar16 & uVar11) == 0) {
              unaff_x23 = uVar11 & uVar17;
              plVar12 = *(long **)(*plVar1 + unaff_x23 * 8);
              if (plVar12 == (long *)0x0) goto LAB_01881180;
              do {
                plVar12 = (long *)*plVar12;
                if ((plVar12 == (long *)0x0) ||
                   (plVar12[1] != uVar17 && (plVar12[1] & uVar11) != unaff_x23)) goto LAB_01881180;
              } while (plVar12[2] != uVar17);
            }
            else {
              unaff_x23 = uVar17;
              if (uVar16 <= uVar17) {
                uVar11 = 0;
                if (uVar16 != 0) {
                  uVar11 = uVar17 / uVar16;
                }
                unaff_x23 = uVar17 - uVar11 * uVar16;
              }
              plVar12 = *(long **)(*plVar1 + unaff_x23 * 8);
              if (plVar12 == (long *)0x0) goto LAB_01881180;
              do {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_01881180;
                uVar11 = plVar12[1];
                if (uVar11 != uVar17) {
                  if (uVar16 <= uVar11) {
                    uVar7 = 0;
                    if (uVar16 != 0) {
                      uVar7 = uVar11 / uVar16;
                    }
                    uVar11 = uVar11 - uVar7 * uVar16;
                  }
                  if (uVar11 != unaff_x23) goto LAB_01881180;
                }
              } while (plVar12[2] != uVar17);
            }
          }
          if (uVar17 == 0) {
            *(int **)(param_1 + 0xd0) = piVar3;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar6);
      }
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
  }
  return;
}


