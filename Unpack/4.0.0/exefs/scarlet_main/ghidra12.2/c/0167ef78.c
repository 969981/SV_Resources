/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167ef78; name: FUN_0167ef78
 */


bool FUN_0167ef78(long param_1,long *param_2,long *param_3,undefined2 *param_4,undefined1 *param_5)

{
  undefined2 uVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  uVar8 = FUN_0167c614(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  if ((uVar8 & 1) == 0) {
    uVar1 = *param_4;
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7940,uVar1), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar9 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar9;
    piVar10 = (int *)FUN_00cf60cc(uVar9,uVar1);
    if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x11) ||
        (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[8], uVar8 == 0)) ||
       (*(char *)((long)piVar10 + uVar8) != 'e')) {
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar13 = *(uint *)(lVar14 + 0xc08);
      if (uVar13 < 0x60) {
        do {
          lVar18 = *(long *)(lVar14 + (ulong)uVar13 * 0x20 + 8);
          if (*(short *)(lVar18 + 8) == 0) {
            if (uVar13 < 0x5f) {
              *(undefined2 *)(lVar18 + 8) = 1;
              *(int *)(lVar14 + 0xc08) = *(int *)(lVar14 + 0xc08) + 1;
            }
            break;
          }
          uVar13 = uVar13 + 1;
          *(uint *)(lVar14 + 0xc08) = uVar13;
        } while (uVar13 != 0x60);
      }
      lVar14 = *(long *)(lVar12 + 0x58);
      uVar13 = *(uint *)(lVar14 + 0x408);
      if (uVar13 < 0x1f) {
        *(uint *)(lVar14 + 0x408) = uVar13 + 1;
        lVar14 = *(long *)(lVar12 + 0x58);
        uVar13 = *(uint *)(lVar14 + 0x408);
      }
      *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(lVar14 + (ulong)uVar13 * 0x20 + 8);
      lVar14 = *(long *)(param_1 + 0x10);
      uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
      lVar12 = *(long *)(lVar14 + 0x38);
      uVar13 = *(uint *)(lVar12 + 0xc08);
      uVar8 = (ulong)uVar13;
      if (uVar13 < 0x61) {
        uVar13 = 0x60;
      }
      plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
      do {
        uVar17 = uVar8;
        if (uVar13 == uVar17) goto LAB_0167f13c;
        lVar18 = *plVar16;
        if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f10c;
        plVar16 = plVar16 + 4;
        uVar8 = uVar17 + 1;
      } while (*(short *)(lVar18 + 8) != 3);
      if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f10c:
        lVar12 = *(long *)(lVar12 + (uVar17 & 0xffffffff) * 0x20 + 8);
        if (lVar12 != 0) {
          *(undefined2 *)(lVar12 + 8) = 3;
          *(undefined4 *)(lVar12 + 0xc) = uVar5;
          *(undefined1 *)(lVar12 + 10) = 4;
          *(undefined8 *)(lVar12 + 0x10) = 0;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          *(long *)(*(long *)(lVar14 + 0x78) + 0x20) = lVar12;
        }
      }
LAB_0167f13c:
      lVar14 = *(long *)(param_1 + 0x10);
      uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
      lVar12 = *(long *)(lVar14 + 0x38);
      uVar13 = *(uint *)(lVar12 + 0xc08);
      uVar8 = (ulong)uVar13;
      if (uVar13 < 0x61) {
        uVar13 = 0x60;
      }
      plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
      do {
        uVar17 = uVar8;
        if (uVar13 == uVar17) goto LAB_0167f1cc;
        lVar18 = *plVar16;
        if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f1a0;
        plVar16 = plVar16 + 4;
        uVar8 = uVar17 + 1;
      } while (*(short *)(lVar18 + 8) != 4);
      if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f1a0:
        lVar12 = *(long *)(lVar12 + (uVar17 & 0xffffffff) * 0x20 + 8);
        if (lVar12 != 0) {
          *(undefined2 *)(lVar12 + 8) = 4;
          *(undefined4 *)(lVar12 + 0xc) = uVar5;
          *(undefined1 *)(lVar12 + 10) = 4;
          *(undefined8 *)(lVar12 + 0x10) = 0;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          *(long *)(*(long *)(lVar14 + 0x78) + 0x28) = lVar12;
        }
      }
LAB_0167f1cc:
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar13 = *(uint *)(lVar14 + 0xc08);
      uVar8 = (ulong)uVar13;
      if (uVar13 < 0x61) {
        uVar13 = 0x60;
      }
      plVar16 = (long *)(lVar14 + uVar8 * 0x20 + 8);
      do {
        uVar17 = uVar8;
        if (uVar13 == uVar17) goto LAB_0167f258;
        lVar18 = *plVar16;
        if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f220;
        plVar16 = plVar16 + 4;
        uVar8 = uVar17 + 1;
      } while (*(short *)(lVar18 + 8) != 0x59);
      if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f220:
        lVar14 = *(long *)(lVar14 + (uVar17 & 0xffffffff) * 0x20 + 8);
        if (lVar14 != 0) {
          *(undefined2 *)(lVar14 + 8) = 0x59;
          *(undefined8 *)(lVar14 + 0xc) = 0;
          *(undefined8 *)(lVar14 + 0x14) = 0;
          *(undefined4 *)(lVar14 + 0x1c) = 0;
          *(undefined1 *)(lVar14 + 10) = 1;
          *(long *)(*(long *)(lVar12 + 0x78) + 0x2d0) = lVar14;
          lVar12 = *(long *)(param_1 + 0x10);
        }
      }
LAB_0167f258:
      FUN_0107b310(lVar12,0x40,8,1);
      lVar14 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(*(long *)(lVar14 + 0x78) + 0x2d0);
      if (lVar12 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(int *)(lVar12 + 0xc) != 0;
      }
      lVar12 = *(long *)(lVar14 + 0x58);
      if (*(uint *)(lVar12 + 0x408) == 0) {
        uVar8 = 0;
      }
      else {
        memset((void *)(*(long *)(lVar12 + (ulong)*(uint *)(lVar12 + 0x408) * 0x20 + 8) + 8),0,0x430
              );
        *(int *)(lVar12 + 0x408) = *(int *)(lVar12 + 0x408) + -1;
        lVar12 = *(long *)(lVar14 + 0x58);
        uVar8 = (ulong)*(uint *)(lVar12 + 0x408);
      }
      *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar12 + uVar8 * 0x20 + 8);
      lVar12 = *(long *)(lVar14 + 0x38);
      uVar13 = *(uint *)(lVar12 + 0xc08);
      if (uVar13 != 0) {
        if ((uVar13 & 0xffff) < 0x60) {
          uVar8 = (ulong)uVar13 & 0xffff;
          plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
          do {
            uVar8 = uVar8 + 1;
            if (*(short *)(*plVar16 + 8) == 0) break;
            *(undefined2 *)(*plVar16 + 8) = 0;
            plVar16 = plVar16 + 4;
          } while (((uint)uVar8 & 0xffff) != 0x60);
          uVar13 = *(uint *)(lVar12 + 0xc08);
        }
        *(uint *)(lVar12 + 0xc08) = uVar13 - 1;
        *(undefined2 *)(*(long *)(lVar12 + (ulong)(uVar13 - 1) * 0x20 + 8) + 8) = 0;
        uVar8 = (ulong)*(uint *)(lVar12 + 0xc08);
        do {
          if (uVar8 == 0) goto LAB_0167f35c;
          uVar8 = uVar8 - 1;
          *(int *)(lVar12 + 0xc08) = (int)uVar8;
        } while (*(short *)(*(long *)(lVar12 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
        *(int *)(lVar12 + 0xc08) = (int)uVar8 + 1;
      }
LAB_0167f35c:
      if ((!bVar2) && (uVar8 = (**(code **)(*param_3 + 0x220))(param_3,0x21), (uVar8 & 1) == 0)) {
        uVar6 = FUN_0292eb24(param_1,0x42,param_2,param_3,param_4);
        lVar12 = *(long *)(param_1 + 0x10);
        lVar14 = *(long *)(lVar12 + 0x38);
        uVar13 = *(uint *)(lVar14 + 0xc08);
        if (uVar13 < 0x60) {
          do {
            lVar18 = *(long *)(lVar14 + (ulong)uVar13 * 0x20 + 8);
            if (*(short *)(lVar18 + 8) == 0) {
              if (uVar13 < 0x5f) {
                *(undefined2 *)(lVar18 + 8) = 1;
                *(int *)(lVar14 + 0xc08) = *(int *)(lVar14 + 0xc08) + 1;
              }
              break;
            }
            uVar13 = uVar13 + 1;
            *(uint *)(lVar14 + 0xc08) = uVar13;
          } while (uVar13 != 0x60);
        }
        lVar14 = *(long *)(lVar12 + 0x58);
        uVar13 = *(uint *)(lVar14 + 0x408);
        if (uVar13 < 0x1f) {
          *(uint *)(lVar14 + 0x408) = uVar13 + 1;
          lVar14 = *(long *)(lVar12 + 0x58);
          uVar13 = *(uint *)(lVar14 + 0x408);
        }
        *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(lVar14 + (ulong)uVar13 * 0x20 + 8);
        lVar14 = *(long *)(param_1 + 0x10);
        uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
        lVar12 = *(long *)(lVar14 + 0x38);
        uVar13 = *(uint *)(lVar12 + 0xc08);
        uVar8 = (ulong)uVar13;
        if (uVar13 < 0x61) {
          uVar13 = 0x60;
        }
        plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
        do {
          uVar17 = uVar8;
          if (uVar13 == uVar17) goto LAB_0167f4d4;
          lVar18 = *plVar16;
          if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f4a4;
          plVar16 = plVar16 + 4;
          uVar8 = uVar17 + 1;
        } while (*(short *)(lVar18 + 8) != 3);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f4a4:
          lVar12 = *(long *)(lVar12 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar12 != 0) {
            *(undefined2 *)(lVar12 + 8) = 3;
            *(undefined4 *)(lVar12 + 0xc) = uVar5;
            *(undefined1 *)(lVar12 + 10) = 4;
            *(undefined8 *)(lVar12 + 0x10) = 0;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            *(long *)(*(long *)(lVar14 + 0x78) + 0x20) = lVar12;
          }
        }
LAB_0167f4d4:
        lVar14 = *(long *)(param_1 + 0x10);
        uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
        lVar12 = *(long *)(lVar14 + 0x38);
        uVar13 = *(uint *)(lVar12 + 0xc08);
        uVar8 = (ulong)uVar13;
        if (uVar13 < 0x61) {
          uVar13 = 0x60;
        }
        plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
        do {
          uVar17 = uVar8;
          if (uVar13 == uVar17) goto LAB_0167f564;
          lVar18 = *plVar16;
          if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f538;
          plVar16 = plVar16 + 4;
          uVar8 = uVar17 + 1;
        } while (*(short *)(lVar18 + 8) != 4);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f538:
          lVar12 = *(long *)(lVar12 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar12 != 0) {
            *(undefined2 *)(lVar12 + 8) = 4;
            *(undefined4 *)(lVar12 + 0xc) = uVar5;
            *(undefined1 *)(lVar12 + 10) = 4;
            *(undefined8 *)(lVar12 + 0x10) = 0;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            *(long *)(*(long *)(lVar14 + 0x78) + 0x28) = lVar12;
          }
        }
LAB_0167f564:
        lVar14 = *(long *)(param_1 + 0x10);
        lVar12 = *(long *)(lVar14 + 0x38);
        uVar13 = *(uint *)(lVar12 + 0xc08);
        uVar8 = (ulong)uVar13;
        if (uVar13 < 0x61) {
          uVar13 = 0x60;
        }
        plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
        do {
          uVar17 = uVar8;
          if (uVar13 == uVar17) goto LAB_0167f5f0;
          lVar18 = *plVar16;
          if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f5b8;
          plVar16 = plVar16 + 4;
          uVar8 = uVar17 + 1;
        } while (*(short *)(lVar18 + 8) != 0x52);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f5b8:
          lVar12 = *(long *)(lVar12 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar12 != 0) {
            *(undefined2 *)(lVar12 + 8) = 0x52;
            *(undefined8 *)(lVar12 + 0xc) = 0;
            *(undefined8 *)(lVar12 + 0x14) = 0;
            *(undefined4 *)(lVar12 + 0x1c) = 0;
            *(undefined1 *)(lVar12 + 10) = 1;
            *(long *)(*(long *)(lVar14 + 0x78) + 0x298) = lVar12;
            lVar14 = *(long *)(param_1 + 0x10);
          }
        }
LAB_0167f5f0:
        uVar5 = (**(code **)(*param_2 + 0xb0))(param_2,6);
        lVar12 = *(long *)(lVar14 + 0x38);
        uVar13 = *(uint *)(lVar12 + 0xc08);
        uVar8 = (ulong)uVar13;
        if (uVar13 < 0x61) {
          uVar13 = 0x60;
        }
        plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
        do {
          uVar17 = uVar8;
          if (uVar13 == uVar17) goto LAB_0167f680;
          lVar18 = *plVar16;
          if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f654;
          plVar16 = plVar16 + 4;
          uVar8 = uVar17 + 1;
        } while (*(short *)(lVar18 + 8) != 0x2a);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f654:
          lVar12 = *(long *)(lVar12 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar12 != 0) {
            *(undefined2 *)(lVar12 + 8) = 0x2a;
            *(undefined4 *)(lVar12 + 0xc) = uVar5;
            *(undefined1 *)(lVar12 + 10) = 0;
            *(undefined8 *)(lVar12 + 0x10) = 0;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            *(long *)(*(long *)(lVar14 + 0x78) + 0x158) = lVar12;
          }
        }
LAB_0167f680:
        lVar14 = *(long *)(param_1 + 0x10);
        uVar5 = (**(code **)(*param_3 + 0xb0))(param_3,7);
        lVar12 = *(long *)(lVar14 + 0x38);
        uVar13 = *(uint *)(lVar12 + 0xc08);
        uVar8 = (ulong)uVar13;
        if (uVar13 < 0x61) {
          uVar13 = 0x60;
        }
        plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
        do {
          uVar17 = uVar8;
          if (uVar13 == uVar17) goto LAB_0167f714;
          lVar18 = *plVar16;
          if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f6e8;
          plVar16 = plVar16 + 4;
          uVar8 = uVar17 + 1;
        } while (*(short *)(lVar18 + 8) != 0x2b);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f6e8:
          lVar12 = *(long *)(lVar12 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar12 != 0) {
            *(undefined2 *)(lVar12 + 8) = 0x2b;
            *(undefined4 *)(lVar12 + 0xc) = uVar5;
            *(undefined1 *)(lVar12 + 10) = 0;
            *(undefined8 *)(lVar12 + 0x10) = 0;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            *(long *)(*(long *)(lVar14 + 0x78) + 0x160) = lVar12;
          }
        }
LAB_0167f714:
        lVar12 = *(long *)(param_1 + 0x10);
        lVar14 = *(long *)(lVar12 + 0x38);
        uVar13 = *(uint *)(lVar14 + 0xc08);
        uVar8 = (ulong)uVar13;
        if (uVar13 < 0x61) {
          uVar13 = 0x60;
        }
        plVar16 = (long *)(lVar14 + uVar8 * 0x20 + 8);
        do {
          uVar17 = uVar8;
          if (uVar13 == uVar17) goto LAB_0167f7ac;
          lVar18 = *plVar16;
          if (*(short *)(lVar18 + 8) == 0) goto LAB_0167f768;
          plVar16 = plVar16 + 4;
          uVar8 = uVar17 + 1;
        } while (*(short *)(lVar18 + 8) != 0x38);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0167f768:
          lVar14 = *(long *)(lVar14 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar14 != 0) {
            *(undefined2 *)(lVar14 + 8) = 0x38;
            *(undefined8 *)(lVar14 + 0xc) = 0x2900001000;
            *(undefined4 *)(lVar14 + 0x14) = 0x20000;
            *(undefined8 *)(lVar14 + 0x18) = 0;
            *(undefined1 *)(lVar14 + 10) = 3;
            *(long *)(*(long *)(lVar12 + 0x78) + 0x1c8) = lVar14;
            lVar12 = *(long *)(param_1 + 0x10);
          }
        }
LAB_0167f7ac:
        FUN_0107b310(lVar12,0x41,8,1);
        lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
        if (*(long *)(lVar12 + 0x158) == 0) {
          iVar7 = 6;
        }
        else {
          iVar7 = *(char *)(*(long *)(lVar12 + 0x158) + 0xc) + 6;
        }
        if (*(long *)(lVar12 + 0x160) == 0) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(*(long *)(lVar12 + 0x160) + 0xc);
        }
        if (*(long *)(lVar12 + 0x298) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(uint *)(*(long *)(lVar12 + 0x298) + 0xc);
        }
        bVar3 = (**(code **)(*param_3 + 0x220))(param_3,0x11);
        uVar8 = (**(code **)(*param_2 + 0x510))(param_2,0xe);
        if (((uVar8 & 1) != 0) &&
           (lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x1c8), lVar12 != 0)) {
          FUN_01453760(lVar12,0x1333);
        }
        lVar14 = *(long *)(param_1 + 0x10);
        lVar12 = *(long *)(*(long *)(lVar14 + 0x78) + 0x1c8);
        if (lVar12 == 0) {
          iVar21 = 0;
        }
        else {
          iVar21 = *(int *)(lVar12 + 0xc);
        }
        lVar12 = *(long *)(lVar14 + 0x58);
        if (*(uint *)(lVar12 + 0x408) == 0) {
          uVar8 = 0;
        }
        else {
          memset((void *)(*(long *)(lVar12 + (ulong)*(uint *)(lVar12 + 0x408) * 0x20 + 8) + 8),0,
                 0x430);
          *(int *)(lVar12 + 0x408) = *(int *)(lVar12 + 0x408) + -1;
          lVar12 = *(long *)(lVar14 + 0x58);
          uVar8 = (ulong)*(uint *)(lVar12 + 0x408);
        }
        *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar12 + uVar8 * 0x20 + 8);
        lVar12 = *(long *)(lVar14 + 0x38);
        uVar15 = *(uint *)(lVar12 + 0xc08);
        if (uVar15 != 0) {
          if ((uVar15 & 0xffff) < 0x60) {
            uVar8 = (ulong)uVar15 & 0xffff;
            plVar16 = (long *)(lVar12 + uVar8 * 0x20 + 8);
            do {
              uVar8 = uVar8 + 1;
              if (*(short *)(*plVar16 + 8) == 0) break;
              *(undefined2 *)(*plVar16 + 8) = 0;
              plVar16 = plVar16 + 4;
            } while (((uint)uVar8 & 0xffff) != 0x60);
            uVar15 = *(uint *)(lVar12 + 0xc08);
          }
          *(uint *)(lVar12 + 0xc08) = uVar15 - 1;
          *(undefined2 *)(*(long *)(lVar12 + (ulong)(uVar15 - 1) * 0x20 + 8) + 8) = 0;
          uVar8 = (ulong)*(uint *)(lVar12 + 0xc08);
          do {
            if (uVar8 == 0) goto LAB_0167f950;
            uVar8 = uVar8 - 1;
            *(int *)(lVar12 + 0xc08) = (int)uVar8;
          } while (*(short *)(*(long *)(lVar12 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
          *(int *)(lVar12 + 0xc08) = (int)uVar8 + 1;
        }
LAB_0167f950:
        iVar11 = iVar20 * 0x1000000 >> 0x18;
        if (((uVar13 & 0xff) == 0 & (iVar20 * 0x1000000 < 0x6000001 | bVar3 ^ 1)) == 0) {
          iVar11 = 6;
        }
        uVar13 = iVar7 - iVar11 & (iVar7 - iVar11 >> 0x1f ^ 0xffffffffU);
        if (0xb < (int)uVar13) {
          uVar13 = 0xc;
        }
        if ((uVar13 & 0xff) < 0xd) {
          uVar15 = uVar6 * (byte)(&DAT_03d69d8d)[(ulong)uVar13 * 2];
          uVar6 = 0;
          if ((byte)(&DAT_03d69d8e)[(ulong)uVar13 * 2] != 0) {
            uVar6 = uVar15 / (byte)(&DAT_03d69d8e)[(ulong)uVar13 * 2];
          }
          if (99 < uVar6) {
            uVar6 = 100;
          }
        }
        uVar13 = uVar6 * iVar21 >> 0xc;
        if (0x800 < (uVar6 * iVar21 & 0xfff)) {
          uVar13 = uVar13 + 1;
        }
        if (99 < uVar13) {
          uVar13 = 100;
        }
        lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x38);
        if (((*(byte *)(lVar12 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar12 + 0x30) < 2)) {
          lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x290);
          uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
          piVar10 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar12 + 8) + 0x50),uVar5);
          if (((piVar10 == (int *)0x0) || (4 < *piVar10 || *piVar10 == 0)) &&
             (cVar4 = (**(code **)(*param_3 + 0x460))(param_3), cVar4 == -1)) {
            bVar2 = 9 < uVar13;
            uVar6 = uVar13 - 10;
            uVar13 = 0;
            if (bVar2) {
              uVar13 = uVar6;
            }
            if (param_5 != (undefined1 *)0x0) {
              *param_5 = 1;
            }
          }
        }
        uVar8 = *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
        if ((uVar8 & 0x200000) != 0) {
          uVar13 = 100;
        }
        uVar6 = uVar13;
        if ((uVar8 >> 0x21 & 1) != 0) {
          lVar12 = *(long *)(param_1 + 0x18);
          uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
          piVar10 = (int *)FUN_011e2dd4(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar12 + 0x290) + 8) + 0x50),uVar5);
          if ((piVar10 != (int *)0x0) && (*piVar10 == 1)) {
            lVar12 = *(long *)(param_1 + 0x18);
            uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
            piVar10 = (int *)FUN_011e2dd4(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar12 + 0x290) + 8) + 0x50),uVar5);
            if ((piVar10 == (int *)0x0) || (*piVar10 != 1)) {
              uVar8 = (**(code **)(*param_2 + 0x510))(param_2,0x1b);
              uVar6 = 100;
              if ((uVar8 & 1) == 0) {
                uVar6 = uVar13;
              }
            }
          }
        }
        lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        *(long *)(lVar12 + 0x20) = *(long *)(lVar12 + 0x20) + 1;
        uVar8 = *(ulong *)(lVar12 + 8);
        uVar17 = *(ulong *)(lVar12 + 0x10);
        do {
          uVar19 = uVar8 ^ uVar17;
          iVar7 = (int)uVar17;
          uVar17 = uVar19 >> 0x1b | uVar19 << 0x25;
          uVar13 = (int)uVar8 + iVar7 & 0x7f;
          uVar8 = uVar19 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar19 << 0x10;
        } while (99 < uVar13);
        *(ulong *)(lVar12 + 8) = uVar8;
        *(ulong *)(lVar12 + 0x10) = uVar17;
        return uVar13 < uVar6;
      }
    }
  }
  return true;
}


