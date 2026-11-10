/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dadbb8; name: FUN_00dadbb8
 */


void FUN_00dadbb8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char *__s;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  int *piVar9;
  undefined1 *puVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint *puVar19;
  long *plVar20;
  undefined8 uVar21;
  
  *param_1 = param_2;
  param_1[2] = 0;
  plVar20 = param_1 + 1;
  *plVar20 = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  lVar8 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar8 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar6;
  param_1[4] = 0x38e38e38e38e38e;
  param_1[5] = 0;
  param_1[7] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar8 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[8] = lVar6;
  param_1[9] = 0x38e38e38e38e38e;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  FUN_00dae20c(param_1 + 0xe);
  piVar9 = (int *)*param_1;
  if (((piVar9 != (int *)0x0) && (6 < *(ushort *)((long)piVar9 - (long)*piVar9))) &&
     (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar12 != 0)) {
    puVar2 = (uint *)((long)piVar9 + uVar12);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    if (*puVar2 != 0) {
      FUN_00dadaac(plVar20,(long)((float)*puVar2 / *(float *)(param_1 + 0xd)));
      puVar19 = puVar2 + 1;
      if ((ulong)*puVar2 != 0) {
        puVar2 = puVar19 + *puVar2;
        plVar1 = param_1 + 7;
        do {
          puVar18 = &DAT_cbf29ce484222645;
          piVar9 = (int *)((long)puVar19 + (ulong)*puVar19);
          if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
             (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar12 == 0)) {
            puVar16 = (undefined1 *)0x0;
          }
          else {
            puVar3 = (uint *)((long)piVar9 + uVar12);
            puVar16 = (undefined1 *)((long)puVar3 + (ulong)*puVar3);
          }
          __s = puVar16 + 4;
          sVar7 = strlen(__s);
          bVar4 = puVar16[4];
          if (bVar4 != 0) {
            pbVar13 = puVar16 + 5;
            do {
              puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar4 != 0);
          }
          puVar17 = (undefined1 *)param_1[2];
          if (puVar17 == (undefined1 *)0x0) {
LAB_00dade18:
            plVar14 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x58,8);
            if (plVar14 == (long *)0x0) {
              (**(code **)(*(long *)param_1[8] + 0xe8))();
            }
            uVar21 = param_1[8];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
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
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar21;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            plVar14[2] = (long)puVar18;
            plVar14[3] = (long)__s;
            plVar14[10] = 0;
            plVar14[4] = sVar7;
            plVar14[5] = 0;
            plVar14[6] = (long)piVar9;
            plVar14[7] = (long)puVar18;
            plVar14[8] = (long)__s;
            plVar14[9] = sVar7;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            *plVar14 = 0;
            plVar14[1] = (long)puVar18;
            if ((puVar17 == (undefined1 *)0x0) ||
               (*(float *)(param_1 + 0xd) * (float)puVar17 < (float)(param_1[0xc] + 1))) {
              uVar12 = (ulong)(puVar17 < (undefined1 *)0x3 ||
                              ((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0) | (long)puVar17 << 1;
              uVar15 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
              if (uVar15 <= uVar12) {
                uVar15 = uVar12;
              }
              FUN_00dadaac(plVar20,uVar15);
              puVar17 = (undefined1 *)param_1[2];
              if (((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0) {
                puVar16 = (undefined1 *)((ulong)(puVar17 + -1) & (ulong)puVar18);
              }
              else if (puVar18 < puVar17) {
                puVar16 = puVar18;
              }
              else {
                uVar12 = 0;
                if (puVar17 != (undefined1 *)0x0) {
                  uVar12 = (ulong)puVar18 / (ulong)puVar17;
                }
                puVar16 = puVar18 + -(uVar12 * (long)puVar17);
              }
            }
            plVar11 = *(long **)(*plVar20 + (long)puVar16 * 8);
            if (plVar11 == (long *)0x0) {
              *plVar14 = *plVar1;
              *plVar1 = (long)plVar14;
              *(long **)(*plVar20 + (long)puVar16 * 8) = plVar1;
              if (*plVar14 != 0) {
                puVar18 = *(undefined1 **)(*plVar14 + 8);
                if (((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0) {
                  puVar18 = (undefined1 *)((ulong)puVar18 & (ulong)(puVar17 + -1));
                }
                else if (puVar17 <= puVar18) {
                  uVar12 = 0;
                  if (puVar17 != (undefined1 *)0x0) {
                    uVar12 = (ulong)puVar18 / (ulong)puVar17;
                  }
                  puVar18 = puVar18 + -(uVar12 * (long)puVar17);
                }
                plVar11 = (long *)(*plVar20 + (long)puVar18 * 8);
                goto LAB_00dadf64;
              }
            }
            else {
              *plVar14 = *plVar11;
LAB_00dadf64:
              *plVar11 = (long)plVar14;
            }
            param_1[0xc] = param_1[0xc] + 1;
          }
          else {
            puVar10 = puVar17 + -1;
            if (((ulong)puVar17 & (ulong)puVar10) == 0) {
              puVar16 = (undefined1 *)((ulong)puVar10 & (ulong)puVar18);
              plVar14 = *(long **)(*plVar20 + (long)puVar16 * 8);
              if (plVar14 == (long *)0x0) goto LAB_00dade18;
              do {
                plVar14 = (long *)*plVar14;
                if ((plVar14 == (long *)0x0) ||
                   ((undefined1 *)plVar14[1] != puVar18 &&
                    (undefined1 *)((ulong)plVar14[1] & (ulong)puVar10) != puVar16))
                goto LAB_00dade18;
              } while ((undefined1 *)plVar14[2] != puVar18);
            }
            else {
              puVar16 = puVar18;
              if (puVar17 <= puVar18) {
                uVar12 = 0;
                if (puVar17 != (undefined1 *)0x0) {
                  uVar12 = (ulong)puVar18 / (ulong)puVar17;
                }
                puVar16 = puVar18 + -(uVar12 * (long)puVar17);
              }
              plVar14 = *(long **)(*plVar20 + (long)puVar16 * 8);
              if (plVar14 == (long *)0x0) goto LAB_00dade18;
              do {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_00dade18;
                puVar10 = (undefined1 *)plVar14[1];
                if (puVar10 != puVar18) {
                  if (puVar17 <= puVar10) {
                    uVar12 = 0;
                    if (puVar17 != (undefined1 *)0x0) {
                      uVar12 = (ulong)puVar10 / (ulong)puVar17;
                    }
                    puVar10 = puVar10 + -(uVar12 * (long)puVar17);
                  }
                  if (puVar10 != puVar16) goto LAB_00dade18;
                }
              } while ((undefined1 *)plVar14[2] != puVar18);
            }
          }
          puVar19 = puVar19 + 1;
        } while (puVar19 != puVar2);
      }
    }
  }
  return;
}


