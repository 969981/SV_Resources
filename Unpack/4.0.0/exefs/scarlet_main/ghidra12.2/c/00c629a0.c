/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c629a0; name: FUN_00c629a0
 */


long FUN_00c629a0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *__addr;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  size_t __len;
  
  if (*(undefined8 **)(param_1 + 0x3a8) == (undefined8 *)0x0) {
    lVar6 = 0;
    uVar8 = 0xfff;
  }
  else {
    lVar6 = 0;
    uVar12 = 0;
    puVar10 = (undefined8 *)(param_1 + 0x398);
    puVar15 = *(undefined8 **)(param_1 + 0x3a8);
    do {
      puVar16 = (undefined8 *)puVar15[2];
      if ((*(uint *)(puVar15 + 3) & 9) == 1) {
        __addr = (void *)*puVar15;
        uVar8 = 0;
        if (((long)__addr + 0x10U & 0xf) != 0) {
          uVar8 = (ulong)(uint)-(int)((long)__addr + 0x10U) & 0xf;
        }
        uVar8 = (long)__addr + uVar8;
        uVar18 = *(ulong *)(uVar8 + 8);
        if ((uVar18 & 3) != 1) goto LAB_00c62a60;
        __len = puVar15[1];
        uVar9 = uVar18 & 0xfffffffffffffff8;
        if (uVar8 + uVar9 < (long)__addr + (__len - 0x50)) goto LAB_00c62a60;
        if (*(ulong *)(param_1 + 0x20) == uVar8) {
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
        }
        else {
          uVar11 = *(ulong *)(uVar8 + 0x18);
          uVar7 = *(ulong *)(uVar8 + 0x30);
          if (uVar11 == uVar8) {
            uVar14 = *(ulong *)(uVar8 + 0x28);
            puVar17 = (ulong *)(uVar8 + 0x28);
            if (uVar14 == 0) {
              uVar14 = *(ulong *)(uVar8 + 0x20);
              puVar17 = (ulong *)(uVar8 + 0x20);
              if (uVar14 == 0) {
                uVar11 = 0;
                goto LAB_00c62b4c;
              }
            }
            do {
              do {
                uVar11 = uVar14;
                puVar13 = puVar17;
                uVar14 = *(ulong *)(uVar11 + 0x28);
                puVar17 = (ulong *)(uVar11 + 0x28);
              } while (uVar14 != 0);
              uVar14 = *(ulong *)(uVar11 + 0x20);
              puVar17 = (ulong *)(uVar11 + 0x20);
            } while (uVar14 != 0);
            if (puVar13 < *(ulong **)(param_1 + 0x18)) goto LAB_00c62d80;
            *puVar13 = 0;
          }
          else {
            uVar14 = *(ulong *)(uVar8 + 0x10);
            if (((uVar14 < *(ulong *)(param_1 + 0x18)) || (*(ulong *)(uVar14 + 0x18) != uVar8)) ||
               (*(ulong *)(uVar11 + 0x10) != uVar8)) goto LAB_00c62d80;
            *(ulong *)(uVar14 + 0x18) = uVar11;
            *(ulong *)(uVar11 + 0x10) = uVar14;
          }
LAB_00c62b4c:
          if (uVar7 != 0) {
            lVar1 = param_1 + (ulong)*(uint *)(uVar8 + 0x38) * 8;
            if (*(ulong *)(lVar1 + 600) == uVar8) {
              *(ulong *)(lVar1 + 600) = uVar11;
              if (uVar11 == 0) {
                *(uint *)(param_1 + 4) =
                     *(uint *)(param_1 + 4) &
                     (1 << (ulong)(*(uint *)(uVar8 + 0x38) & 0x1f) ^ 0xffffffffU);
              }
              else {
LAB_00c62b88:
                if (uVar11 < *(ulong *)(param_1 + 0x18)) goto LAB_00c62d80;
                *(ulong *)(uVar11 + 0x30) = uVar7;
                uVar7 = *(ulong *)(uVar8 + 0x20);
                if (uVar7 != 0) {
                  if (uVar7 < *(ulong *)(param_1 + 0x18)) goto LAB_00c62d80;
                  *(ulong *)(uVar11 + 0x20) = uVar7;
                  *(ulong *)(uVar7 + 0x30) = uVar11;
                }
                uVar7 = *(ulong *)(uVar8 + 0x28);
                if (uVar7 != 0) {
                  if (uVar7 < *(ulong *)(param_1 + 0x18)) goto LAB_00c62d80;
                  *(ulong *)(uVar11 + 0x28) = uVar7;
                  *(ulong *)(uVar7 + 0x30) = uVar11;
                }
              }
            }
            else {
              if (uVar7 < *(ulong *)(param_1 + 0x18)) goto LAB_00c62d80;
              lVar1 = 0x20;
              if (*(ulong *)(uVar7 + 0x20) != uVar8) {
                lVar1 = 0x28;
              }
              *(ulong *)(uVar7 + lVar1) = uVar11;
              if (uVar11 != 0) goto LAB_00c62b88;
            }
          }
        }
        iVar4 = munmap(__addr,__len);
        if (iVar4 == 0) {
          *(size_t *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - __len;
          lVar6 = __len + lVar6;
          puVar10[2] = puVar16;
        }
        else {
          uVar5 = 0;
          if (uVar18 >> 8 != 0) {
            if (uVar18 >> 0x18 == 0) {
              iVar4 = (int)(uVar18 >> 8);
              uVar5 = iVar4 + 0xfff00U >> 0x10 & 8;
              iVar4 = iVar4 << (ulong)uVar5;
              uVar3 = iVar4 + 0x7f000U >> 0x10 & 4;
              iVar4 = iVar4 << (ulong)uVar3;
              uVar2 = iVar4 + 0x3c000U >> 0x10 & 2;
              iVar4 = ((uint)(iVar4 << (ulong)uVar2) >> 0xf) - (uVar3 | uVar5 | uVar2);
              uVar5 = ((uint)(uVar9 >> ((ulong)(iVar4 + 0x15) & 0x3f)) & 1 | iVar4 * 2) + 0x1c;
            }
            else {
              uVar5 = 0x1f;
            }
          }
          *(uint *)(uVar8 + 0x38) = uVar5;
          *(undefined8 *)(uVar8 + 0x20) = 0;
          *(undefined8 *)(uVar8 + 0x28) = 0;
          uVar3 = 1 << (ulong)(uVar5 & 0x1f);
          puVar17 = (ulong *)(param_1 + (ulong)uVar5 * 8 + 600);
          if ((*(uint *)(param_1 + 4) & uVar3) == 0) {
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar3;
            *puVar17 = uVar8;
            *(ulong **)(uVar8 + 0x30) = puVar17;
          }
          else {
            uVar18 = 0;
            if (uVar5 != 0x1f) {
              uVar18 = 0x3f - (ulong)((uVar5 >> 1) + 6);
            }
            uVar7 = uVar9 << (uVar18 & 0x3f);
            uVar18 = *puVar17;
            do {
              uVar11 = uVar18;
              if ((*(ulong *)(uVar11 + 8) & 0xfffffffffffffff8) == uVar9) {
                if ((uVar11 < *(ulong *)(param_1 + 0x18)) ||
                   (uVar18 = *(ulong *)(uVar11 + 0x10), uVar18 < *(ulong *)(param_1 + 0x18)))
                goto LAB_00c62d80;
                *(ulong *)(uVar18 + 0x18) = uVar8;
                *(ulong *)(uVar11 + 0x10) = uVar8;
                *(undefined8 *)(uVar8 + 0x30) = 0;
                *(ulong *)(uVar8 + 0x10) = uVar18;
                *(ulong *)(uVar8 + 0x18) = uVar11;
                goto LAB_00c62d48;
              }
              uVar18 = uVar7 >> 0x3c;
              uVar7 = uVar7 << 1;
              puVar17 = (ulong *)(uVar11 + (uVar18 & 8) + 0x20);
              uVar18 = *puVar17;
            } while (*puVar17 != 0);
            if (puVar17 < *(ulong **)(param_1 + 0x18)) {
LAB_00c62d80:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar17 = uVar8;
            *(ulong *)(uVar8 + 0x30) = uVar11;
          }
          *(ulong *)(uVar8 + 0x10) = uVar8;
          *(ulong *)(uVar8 + 0x18) = uVar8;
LAB_00c62d48:
          puVar10 = puVar15;
        }
      }
      else {
LAB_00c62a60:
        puVar10 = puVar15;
      }
      uVar12 = uVar12 + 1;
      puVar15 = puVar16;
    } while (puVar16 != (undefined8 *)0x0);
    uVar8 = (ulong)uVar12;
    if (uVar12 < 0x1000) {
      uVar8 = 0xfff;
    }
  }
  *(ulong *)(param_1 + 0x38) = uVar8;
  return lVar6;
}


