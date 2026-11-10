/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb8bf8; name: FUN_00fb8bf8
 */


void FUN_00fb8bf8(long *param_1,ulong param_2,undefined4 *param_3)

{
  string *psVar1;
  locale *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  string *psVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  
  lVar14 = param_1[2];
  puVar11 = (undefined4 *)*param_1;
  if (param_2 <= (ulong)((lVar14 - (long)puVar11 >> 3) * -0x1111111111111111)) {
    lVar14 = param_1[1] - (long)puVar11 >> 3;
    uVar16 = lVar14 * -0x1111111111111111;
    uVar8 = uVar16;
    if (param_2 <= uVar16) {
      uVar8 = param_2;
    }
    if (uVar8 != 0) {
      do {
        *puVar11 = *param_3;
        std::string::operator=((string *)(puVar11 + 2),(string *)(param_3 + 2));
        std::string::operator=((string *)(puVar11 + 8),(string *)(param_3 + 8));
        uVar4 = *(undefined8 *)(param_3 + 0x14);
        uVar15 = *(undefined8 *)(param_3 + 0xe);
        uVar13 = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(puVar11 + 0x12) = *(undefined8 *)(param_3 + 0x12);
        *(undefined8 *)(puVar11 + 0x14) = uVar4;
        *(undefined8 *)(puVar11 + 0xe) = uVar15;
        *(undefined8 *)(puVar11 + 0x10) = uVar13;
        FUN_00fb9a54(puVar11 + 0x16,param_3 + 0x16);
        uVar15 = *(undefined8 *)(param_3 + 0x1a);
        uVar8 = uVar8 - 1;
        puVar11[0x1c] = param_3[0x1c];
        *(undefined8 *)(puVar11 + 0x1a) = uVar15;
        puVar11 = puVar11 + 0x1e;
      } while (uVar8 != 0);
    }
    if (param_2 <= uVar16) {
      lVar14 = *param_1 + param_2 * 0x78;
      if (param_1[1] != lVar14) {
        lVar22 = tpidr_el0;
        lVar9 = param_1[1];
        do {
          if (*(char *)(lVar9 + -0x20) != '\0') {
            std::locale::~locale((locale *)(lVar9 + -0x18));
            *(undefined1 *)(lVar9 + -0x20) = 0;
          }
          if (((*(byte *)(lVar9 + -0x58) & 1) != 0) &&
             (lVar21 = *(long *)(lVar9 + -0x48), lVar21 != 0)) {
            plVar12 = *(long **)(lVar22 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar22 + 0x30) = DAT_04859430;
            }
            uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar21,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar21,0,8);
            }
          }
          lVar21 = lVar9 + -0x78;
          if (((*(byte *)(lVar9 + -0x70) & 1) != 0) &&
             (lVar9 = *(long *)(lVar9 + -0x60), lVar9 != 0)) {
            plVar12 = *(long **)(lVar22 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar22 + 0x30) = DAT_04859430;
            }
            uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar9,0,8);
            }
          }
          lVar9 = lVar21;
        } while (lVar14 != lVar21);
      }
      param_1[1] = lVar14;
      return;
    }
    lVar22 = param_2 + lVar14 * 0x1111111111111111;
    puVar7 = (undefined4 *)param_1[1];
    puVar11 = puVar7;
    if (lVar22 != 0) {
      puVar11 = puVar7 + lVar22 * 0x1e;
      psVar1 = (string *)(param_3 + 2);
      psVar18 = (string *)(param_3 + 8);
      *puVar7 = *param_3;
      std::string::string((string *)(puVar7 + 2),psVar1);
      std::string::string((string *)(puVar7 + 8),psVar18);
      puVar20 = (undefined8 *)(param_3 + 0xe);
      uVar13 = *puVar20;
      plVar2 = (locale *)(param_3 + 0x18);
      uVar17 = *(undefined8 *)(param_3 + 0x14);
      uVar15 = *(undefined8 *)(param_3 + 0x10);
      uVar4 = *(undefined8 *)(param_3 + 0x12);
      *(undefined1 *)(puVar7 + 0x16) = 0;
      *(undefined8 *)(puVar7 + 0x12) = uVar4;
      *(undefined8 *)(puVar7 + 0x14) = uVar17;
      puVar3 = (undefined8 *)(param_3 + 0x1a);
      *(undefined8 *)(puVar7 + 0xe) = uVar13;
      *(undefined8 *)(puVar7 + 0x10) = uVar15;
      if (*(char *)(param_3 + 0x16) != '\0') {
        std::locale::locale((locale *)(puVar7 + 0x18),plVar2);
        *(undefined1 *)(puVar7 + 0x16) = 1;
      }
      uVar15 = *puVar3;
      puVar7[0x1c] = param_3[0x1c];
      *(undefined8 *)(puVar7 + 0x1a) = uVar15;
      if (lVar22 != 1) {
        puVar7[0x1e] = *param_3;
        std::string::string((string *)(puVar7 + 0x20),psVar1);
        std::string::string((string *)(puVar7 + 0x26),psVar18);
        uVar15 = *puVar20;
        uVar13 = *(undefined8 *)(param_3 + 0x10);
        uVar4 = *(undefined8 *)(param_3 + 0x12);
        uVar17 = *(undefined8 *)(param_3 + 0x14);
        *(undefined1 *)(puVar7 + 0x34) = 0;
        *(undefined8 *)(puVar7 + 0x30) = uVar4;
        *(undefined8 *)(puVar7 + 0x32) = uVar17;
        *(undefined8 *)(puVar7 + 0x2c) = uVar15;
        *(undefined8 *)(puVar7 + 0x2e) = uVar13;
        if (*(char *)(param_3 + 0x16) != '\0') {
          std::locale::locale((locale *)(puVar7 + 0x36),plVar2);
          *(undefined1 *)(puVar7 + 0x34) = 1;
        }
        uVar15 = *puVar3;
        puVar7[0x3a] = param_3[0x1c];
        *(undefined8 *)(puVar7 + 0x38) = uVar15;
        if (lVar22 != 2) {
          lVar22 = 0;
          do {
            *(undefined4 *)((long)puVar7 + lVar22 + 0xf0) = *param_3;
            std::string::string((string *)((long)puVar7 + lVar22 + 0xf8),psVar1);
            std::string::string((string *)((long)puVar7 + lVar22 + 0x110),psVar18);
            uVar15 = *puVar20;
            uVar13 = *(undefined8 *)(param_3 + 0x10);
            uVar4 = *(undefined8 *)(param_3 + 0x12);
            uVar17 = *(undefined8 *)(param_3 + 0x14);
            *(undefined1 *)((long)puVar7 + lVar22 + 0x148) = 0;
            *(undefined8 *)((long)puVar7 + lVar22 + 0x138) = uVar4;
            *(undefined8 *)((long)puVar7 + lVar22 + 0x140) = uVar17;
            *(undefined8 *)((long)puVar7 + lVar22 + 0x128) = uVar15;
            *(undefined8 *)((long)puVar7 + lVar22 + 0x130) = uVar13;
            if (*(char *)(param_3 + 0x16) != '\0') {
              std::locale::locale((locale *)((long)puVar7 + lVar22 + 0x150),plVar2);
              *(undefined1 *)((long)puVar7 + lVar22 + 0x148) = 1;
            }
            uVar15 = *puVar3;
            lVar9 = lVar22 + 0x78;
            *(undefined4 *)((long)puVar7 + lVar22 + 0x160) = param_3[0x1c];
            *(undefined8 *)((long)puVar7 + lVar22 + 0x158) = uVar15;
            lVar22 = lVar9;
          } while (lVar14 * -8 + param_2 * 0x78 + -0xf0 != lVar9);
        }
      }
    }
LAB_00fb8da4:
    param_1[1] = (long)puVar11;
    return;
  }
  if (puVar11 != (undefined4 *)0x0) {
    puVar7 = puVar11;
    if ((undefined4 *)param_1[1] != puVar11) {
      lVar14 = tpidr_el0;
      puVar7 = (undefined4 *)param_1[1];
      do {
        if (*(char *)(puVar7 + -8) != '\0') {
          std::locale::~locale((locale *)(puVar7 + -6));
          *(undefined1 *)(puVar7 + -8) = 0;
        }
        if (((*(byte *)(puVar7 + -0x16) & 1) != 0) &&
           (lVar22 = *(long *)(puVar7 + -0x12), lVar22 != 0)) {
          plVar12 = *(long **)(lVar14 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar14 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,lVar22,0,8);
          }
          else {
            FUN_00c48fe8(plVar12,lVar22,0,8);
          }
        }
        puVar19 = puVar7 + -0x1e;
        if (((*(byte *)(puVar7 + -0x1c) & 1) != 0) &&
           (lVar22 = *(long *)(puVar7 + -0x18), lVar22 != 0)) {
          plVar12 = *(long **)(lVar14 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar14 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,lVar22,0,8);
          }
          else {
            FUN_00c48fe8(plVar12,lVar22,0,8);
          }
        }
        puVar7 = puVar19;
      } while (puVar11 != puVar19);
      puVar7 = (undefined4 *)*param_1;
    }
    param_1[1] = (long)puVar11;
    if (puVar7 != (undefined4 *)0x0) {
      lVar14 = tpidr_el0;
      plVar12 = *(long **)(lVar14 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar8 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar7,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,puVar7,0,8);
      }
    }
    lVar14 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_2 < 0x222222222222223) {
    uVar16 = (lVar14 >> 3) * -0x2222222222222222;
    uVar8 = param_2;
    if (param_2 <= uVar16) {
      uVar8 = uVar16;
    }
    if (0x111111111111110 < (ulong)((lVar14 >> 3) * -0x1111111111111111)) {
      uVar8 = 0x222222222222222;
    }
    if (uVar8 < 0x222222222222223) {
      lVar14 = tpidr_el0;
      plVar12 = *(long **)(lVar14 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
      puVar7 = (undefined4 *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar8 * 0x78,8);
      param_1[2] = (long)(puVar7 + uVar8 * 0x1e);
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar7;
      puVar11 = puVar7 + param_2 * 0x1e;
      psVar18 = (string *)(param_3 + 8);
      psVar1 = (string *)(param_3 + 2);
      *puVar7 = *param_3;
      std::string::string((string *)(puVar7 + 2),psVar1);
      std::string::string((string *)(puVar7 + 8),psVar18);
      puVar20 = (undefined8 *)(param_3 + 0xe);
      uVar13 = *puVar20;
      plVar2 = (locale *)(param_3 + 0x18);
      uVar17 = *(undefined8 *)(param_3 + 0x14);
      uVar15 = *(undefined8 *)(param_3 + 0x10);
      uVar4 = *(undefined8 *)(param_3 + 0x12);
      *(undefined1 *)(puVar7 + 0x16) = 0;
      *(undefined8 *)(puVar7 + 0x12) = uVar4;
      *(undefined8 *)(puVar7 + 0x14) = uVar17;
      puVar3 = (undefined8 *)(param_3 + 0x1a);
      *(undefined8 *)(puVar7 + 0xe) = uVar13;
      *(undefined8 *)(puVar7 + 0x10) = uVar15;
      if (*(char *)(param_3 + 0x16) != '\0') {
        std::locale::locale((locale *)(puVar7 + 0x18),plVar2);
        *(undefined1 *)(puVar7 + 0x16) = 1;
      }
      uVar5 = param_3[0x1c];
      *(undefined8 *)(puVar7 + 0x1a) = *puVar3;
      puVar7[0x1c] = uVar5;
      if (puVar11 != puVar7 + 0x1e) {
        puVar7[0x1e] = *param_3;
        std::string::string((string *)(puVar7 + 0x20),psVar1);
        std::string::string((string *)(puVar7 + 0x26),psVar18);
        uVar15 = *puVar20;
        uVar13 = *(undefined8 *)(param_3 + 0x10);
        uVar4 = *(undefined8 *)(param_3 + 0x12);
        uVar17 = *(undefined8 *)(param_3 + 0x14);
        *(undefined1 *)(puVar7 + 0x34) = 0;
        *(undefined8 *)(puVar7 + 0x30) = uVar4;
        *(undefined8 *)(puVar7 + 0x32) = uVar17;
        *(undefined8 *)(puVar7 + 0x2c) = uVar15;
        *(undefined8 *)(puVar7 + 0x2e) = uVar13;
        if (*(char *)(param_3 + 0x16) != '\0') {
          std::locale::locale((locale *)(puVar7 + 0x36),plVar2);
          *(undefined1 *)(puVar7 + 0x34) = 1;
        }
        uVar5 = param_3[0x1c];
        *(undefined8 *)(puVar7 + 0x38) = *puVar3;
        puVar7[0x3a] = uVar5;
        if (puVar11 != puVar7 + 0x3c) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)puVar7 + lVar14 + 0xf0) = *param_3;
            std::string::string((string *)((long)puVar7 + lVar14 + 0xf8),psVar1);
            std::string::string((string *)((long)puVar7 + lVar14 + 0x110),psVar18);
            uVar15 = *puVar20;
            uVar13 = *(undefined8 *)(param_3 + 0x10);
            uVar4 = *(undefined8 *)(param_3 + 0x12);
            uVar17 = *(undefined8 *)(param_3 + 0x14);
            *(undefined1 *)((long)puVar7 + lVar14 + 0x148) = 0;
            *(undefined8 *)((long)puVar7 + lVar14 + 0x138) = uVar4;
            *(undefined8 *)((long)puVar7 + lVar14 + 0x140) = uVar17;
            *(undefined8 *)((long)puVar7 + lVar14 + 0x128) = uVar15;
            *(undefined8 *)((long)puVar7 + lVar14 + 0x130) = uVar13;
            if (*(char *)(param_3 + 0x16) != '\0') {
              std::locale::locale((locale *)((long)puVar7 + lVar14 + 0x150),plVar2);
              *(undefined1 *)((long)puVar7 + lVar14 + 0x148) = 1;
            }
            lVar22 = lVar14 + 0x78;
            uVar5 = param_3[0x1c];
            *(undefined8 *)((long)puVar7 + lVar14 + 0x158) = *puVar3;
            *(undefined4 *)((long)puVar7 + lVar14 + 0x160) = uVar5;
            lVar14 = lVar22;
          } while (param_2 * 0x78 + -0xf0 != lVar22);
        }
      }
      goto LAB_00fb8da4;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


