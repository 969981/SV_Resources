/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fcb0c4; name: FUN_00fcb0c4
 */


void FUN_00fcb0c4(long *param_1,ulong param_2,undefined4 *param_3)

{
  string *psVar1;
  locale *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  string *psVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [40];
  
  puVar5 = (undefined4 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar5 >> 3) * -0x1111111111111111) < param_2) {
    lVar8 = ((long)puVar5 - *param_1 >> 3) * -0x1111111111111111;
    uVar4 = lVar8 + param_2;
    if (0x222222222222222 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1 >> 3;
    uVar12 = lVar9 * -0x2222222222222222;
    if (uVar4 <= uVar12) {
      uVar4 = uVar12;
    }
    if (0x111111111111110 < (ulong)(lVar9 * -0x1111111111111111)) {
      uVar4 = 0x222222222222222;
    }
    FUN_01e4007c(auStack_88,uVar4,lVar8,param_1 + 2);
    FUN_01e40190(auStack_88,param_2,param_3);
    FUN_01e40284(param_1,auStack_88);
    FUN_01e402ec(auStack_88);
  }
  else {
    puVar15 = puVar5;
    if (param_2 != 0) {
      puVar15 = puVar5 + param_2 * 0x1e;
      psVar1 = (string *)(param_3 + 2);
      psVar14 = (string *)(param_3 + 8);
      *puVar5 = *param_3;
      std::string::string((string *)(puVar5 + 2),psVar1);
      std::string::string((string *)(puVar5 + 8),psVar14);
      puVar16 = (undefined8 *)(param_3 + 0xe);
      uVar10 = *puVar16;
      plVar2 = (locale *)(param_3 + 0x18);
      uVar13 = *(undefined8 *)(param_3 + 0x14);
      uVar11 = *(undefined8 *)(param_3 + 0x10);
      uVar6 = *(undefined8 *)(param_3 + 0x12);
      *(undefined1 *)(puVar5 + 0x16) = 0;
      *(undefined8 *)(puVar5 + 0x12) = uVar6;
      *(undefined8 *)(puVar5 + 0x14) = uVar13;
      puVar3 = (undefined8 *)(param_3 + 0x1a);
      *(undefined8 *)(puVar5 + 0xe) = uVar10;
      *(undefined8 *)(puVar5 + 0x10) = uVar11;
      if (*(char *)(param_3 + 0x16) != '\0') {
        std::locale::locale((locale *)(puVar5 + 0x18),plVar2);
        *(undefined1 *)(puVar5 + 0x16) = 1;
      }
      uVar11 = *puVar3;
      puVar5[0x1c] = param_3[0x1c];
      *(undefined8 *)(puVar5 + 0x1a) = uVar11;
      if (param_2 != 1) {
        puVar5[0x1e] = *param_3;
        std::string::string((string *)(puVar5 + 0x20),psVar1);
        std::string::string((string *)(puVar5 + 0x26),psVar14);
        uVar11 = *puVar16;
        uVar10 = *(undefined8 *)(param_3 + 0x10);
        uVar6 = *(undefined8 *)(param_3 + 0x12);
        uVar13 = *(undefined8 *)(param_3 + 0x14);
        *(undefined1 *)(puVar5 + 0x34) = 0;
        *(undefined8 *)(puVar5 + 0x30) = uVar6;
        *(undefined8 *)(puVar5 + 0x32) = uVar13;
        *(undefined8 *)(puVar5 + 0x2c) = uVar11;
        *(undefined8 *)(puVar5 + 0x2e) = uVar10;
        if (*(char *)(param_3 + 0x16) != '\0') {
          std::locale::locale((locale *)(puVar5 + 0x36),plVar2);
          *(undefined1 *)(puVar5 + 0x34) = 1;
        }
        uVar11 = *puVar3;
        puVar5[0x3a] = param_3[0x1c];
        *(undefined8 *)(puVar5 + 0x38) = uVar11;
        if (param_2 != 2) {
          lVar8 = 0;
          do {
            *(undefined4 *)((long)puVar5 + lVar8 + 0xf0) = *param_3;
            std::string::string((string *)((long)puVar5 + lVar8 + 0xf8),psVar1);
            std::string::string((string *)((long)puVar5 + lVar8 + 0x110),psVar14);
            uVar11 = *puVar16;
            uVar10 = *(undefined8 *)(param_3 + 0x10);
            uVar6 = *(undefined8 *)(param_3 + 0x12);
            uVar13 = *(undefined8 *)(param_3 + 0x14);
            *(undefined1 *)((long)puVar5 + lVar8 + 0x148) = 0;
            *(undefined8 *)((long)puVar5 + lVar8 + 0x138) = uVar6;
            *(undefined8 *)((long)puVar5 + lVar8 + 0x140) = uVar13;
            *(undefined8 *)((long)puVar5 + lVar8 + 0x128) = uVar11;
            *(undefined8 *)((long)puVar5 + lVar8 + 0x130) = uVar10;
            if (*(char *)(param_3 + 0x16) != '\0') {
              std::locale::locale((locale *)((long)puVar5 + lVar8 + 0x150),plVar2);
              *(undefined1 *)((long)puVar5 + lVar8 + 0x148) = 1;
            }
            lVar9 = lVar8 + 0x78;
            uVar7 = param_3[0x1c];
            *(undefined8 *)((long)puVar5 + lVar8 + 0x158) = *puVar3;
            *(undefined4 *)((long)puVar5 + lVar8 + 0x160) = uVar7;
            lVar8 = lVar9;
          } while (param_2 * 0x78 + -0xf0 != lVar9);
        }
      }
    }
    param_1[1] = (long)puVar15;
  }
  return;
}


