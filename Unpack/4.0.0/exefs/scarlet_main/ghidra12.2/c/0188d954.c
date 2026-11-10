/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188d954; name: FUN_0188d954
 */


void FUN_0188d954(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint *puVar8;
  ushort uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong unaff_x23;
  float fVar19;
  
  if (((*(long *)(param_1 + 0x30) != 0) && ((*(byte *)(*(long *)(param_1 + 0x30) + 0x1e8) & 1) != 0)
      ) && (puVar8 = (uint *)(**(code **)(**(long **)(param_1 + 0x30) + 0x70))(),
           puVar8 != (uint *)0x0)) {
    piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
    if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar11 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar11 != 0)) {
      puVar8 = (uint *)((long)piVar3 + uVar11);
      puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
      uVar5 = *puVar8;
      plVar1 = (long *)(param_1 + 0x68);
      FUN_02b731cc(plVar1,(long)((float)uVar5 / *(float *)(param_1 + 200)));
      if (uVar5 != 0) {
        uVar11 = 0;
        plVar2 = (long *)(param_1 + 0x98);
        do {
          puVar4 = puVar8 + uVar11 + 1;
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar14 = (ushort *)((long)piVar3 - (long)*piVar3);
          uVar9 = *puVar14;
          if ((uVar9 < 5) || (uVar15 = (ulong)puVar14[2], uVar15 == 0)) {
            uVar15 = 0;
          }
          else {
            uVar15 = (ulong)*(ushort *)((long)piVar3 + uVar15);
          }
          uVar17 = *(ulong *)(param_1 + 0x70);
          if (uVar17 == 0) {
LAB_0188daf0:
            plVar16 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                                        (*(long **)(param_1 + 0xa0),0x20,8);
            if (plVar16 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0xa0) + 0xe8))();
            }
            uVar18 = *(undefined8 *)(param_1 + 0xa0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar12 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar12 == 0) {
              *(short *)(plVar16 + 2) = (short)uVar15;
              plVar16[3] = (long)piVar3;
            }
            else {
              if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar18;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *(short *)(plVar16 + 2) = (short)uVar15;
              plVar16[3] = (long)piVar3;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
            }
            *plVar16 = 0;
            plVar16[1] = uVar15;
            fVar19 = (float)(*(long *)(param_1 + 0xc0) + 1);
            if ((uVar17 == 0) || (*(float *)(param_1 + 200) * (float)uVar17 < fVar19)) {
              uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
              uVar13 = (ulong)(fVar19 / *(float *)(param_1 + 200));
              if (uVar13 <= uVar17) {
                uVar13 = uVar17;
              }
              FUN_02b731cc(plVar1,uVar13);
              uVar17 = *(ulong *)(param_1 + 0x70);
              if ((uVar17 & uVar17 - 1) == 0) {
                unaff_x23 = (int)uVar17 - 1 & uVar15;
              }
              else if (uVar15 < uVar17) {
                unaff_x23 = uVar15;
              }
              else {
                uVar13 = 0;
                if (uVar17 != 0) {
                  uVar13 = uVar15 / uVar17;
                }
                unaff_x23 = uVar15 - uVar13 * uVar17;
              }
            }
            plVar10 = *(long **)(*plVar1 + unaff_x23 * 8);
            if (plVar10 == (long *)0x0) {
              *plVar16 = *plVar2;
              *plVar2 = (long)plVar16;
              *(long **)(*plVar1 + unaff_x23 * 8) = plVar2;
              if (*plVar16 != 0) {
                uVar15 = *(ulong *)(*plVar16 + 8);
                if ((uVar17 & uVar17 - 1) == 0) {
                  uVar15 = uVar15 & uVar17 - 1;
                }
                else if (uVar17 <= uVar15) {
                  uVar13 = 0;
                  if (uVar17 != 0) {
                    uVar13 = uVar15 / uVar17;
                  }
                  uVar15 = uVar15 - uVar13 * uVar17;
                }
                plVar10 = (long *)(*plVar1 + uVar15 * 8);
                goto LAB_0188dc6c;
              }
            }
            else {
              *plVar16 = *plVar10;
LAB_0188dc6c:
              *plVar10 = (long)plVar16;
            }
            *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
            lVar12 = -(long)*piVar3;
            uVar9 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          else {
            lVar12 = -(long)*piVar3;
            if ((uVar17 & uVar17 - 1) == 0) {
              unaff_x23 = (int)uVar17 - 1 & uVar15;
              plVar16 = *(long **)(*plVar1 + unaff_x23 * 8);
              if (plVar16 == (long *)0x0) goto LAB_0188daf0;
              do {
                plVar16 = (long *)*plVar16;
                if ((plVar16 == (long *)0x0) ||
                   (plVar16[1] != uVar15 && (plVar16[1] & uVar17 - 1) != unaff_x23))
                goto LAB_0188daf0;
              } while ((uint)*(ushort *)(plVar16 + 2) != (uint)uVar15);
            }
            else {
              unaff_x23 = uVar15;
              if (uVar17 <= uVar15) {
                uVar13 = 0;
                if (uVar17 != 0) {
                  uVar13 = uVar15 / uVar17;
                }
                unaff_x23 = uVar15 - uVar13 * uVar17;
              }
              plVar16 = *(long **)(*plVar1 + unaff_x23 * 8);
              if (plVar16 == (long *)0x0) goto LAB_0188daf0;
              do {
                plVar16 = (long *)*plVar16;
                if (plVar16 == (long *)0x0) goto LAB_0188daf0;
                uVar13 = plVar16[1];
                if (uVar13 != uVar15) {
                  if (uVar17 <= uVar13) {
                    uVar6 = 0;
                    if (uVar17 != 0) {
                      uVar6 = uVar13 / uVar17;
                    }
                    uVar13 = uVar13 - uVar6 * uVar17;
                  }
                  if (uVar13 != unaff_x23) goto LAB_0188daf0;
                }
              } while ((uint)*(ushort *)(plVar16 + 2) != (uint)uVar15);
            }
          }
          if (((uVar9 < 5) || (uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 4), uVar15 == 0))
             || (*(short *)((long)piVar3 + uVar15) == 0)) {
            *(int **)(param_1 + 0xd0) = piVar3;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar5);
      }
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
  }
  return;
}


