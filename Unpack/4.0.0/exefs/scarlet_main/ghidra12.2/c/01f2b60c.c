/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f2b60c; name: FUN_01f2b60c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01f2b60c(long param_1,uint *param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  ushort uVar15;
  undefined4 uVar16;
  long lVar17;
  ushort *puVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined4 uVar25;
  long *local_70;
  undefined1 auStack_68 [8];
  
  uVar21 = (ulong)*param_2;
  piVar2 = (int *)((long)param_2 + uVar21);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
    uVar25 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    uVar25 = 0;
    if (uVar11 != 0) {
      uVar25 = *(undefined4 *)((long)piVar2 + uVar11);
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar25;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    uVar10 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = (uint)*(byte *)((long)piVar2 + uVar11);
    }
  }
  *(uint *)(param_1 + 0x30) = uVar10;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
    uVar10 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = (uint)*(byte *)((long)piVar2 + uVar11);
    }
  }
  *(uint *)(param_1 + 0x34) = uVar10;
  lVar17 = (long)*piVar2;
  uVar15 = *(ushort *)((long)piVar2 - lVar17);
  if (10 < uVar15) {
    uVar11 = (ulong)((ushort *)((long)piVar2 - lVar17))[5];
    if (uVar11 != 0) {
      puVar12 = (uint *)((long)piVar2 + uVar11);
      piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 5) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x3c) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 7) {
        uVar15 = 0;
      }
      else {
        uVar15 = ((ushort *)((long)piVar20 - (long)*piVar20))[3];
        if ((ulong)uVar15 != 0) {
          uVar15 = *(ushort *)((long)piVar20 + (ulong)uVar15);
        }
      }
      *(ushort *)(param_1 + 0x3e) = uVar15;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 9) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[4];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0x40) = uVar14;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0xb) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[5];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0x41) = uVar14;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0xd) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[6];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0x42) = uVar14;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0xf) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[7];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x43) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x11) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[8];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0x44) = uVar14;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x13) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[9];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0x45) = uVar14;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x15) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[10];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0x46) = uVar14;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x17) {
        uVar15 = 0;
      }
      else {
        uVar15 = ((ushort *)((long)piVar20 - (long)*piVar20))[0xb];
        if ((ulong)uVar15 != 0) {
          uVar15 = *(ushort *)((long)piVar20 + (ulong)uVar15);
        }
      }
      *(ushort *)(param_1 + 0x48) = uVar15;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x19) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xc];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0x4a) = uVar14;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x1b) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xd];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0x4b) = uVar14;
      uVar25 = 0;
      if ((0x1c < *(ushort *)((long)piVar20 - (long)*piVar20)) &&
         (uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xe], uVar11 != 0)) {
        uVar25 = *(undefined4 *)((long)piVar20 + uVar11);
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar25;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x1f) {
        uVar25 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xf];
        uVar25 = 0;
        if (uVar11 != 0) {
          uVar25 = *(undefined4 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined4 *)(param_1 + 0x50) = uVar25;
      if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 0x21) ||
         (uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0x10], uVar11 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
      }
      *(bool *)(param_1 + 0x54) = bVar6;
      lVar17 = (long)*piVar2;
      uVar15 = *(ushort *)((long)piVar2 - lVar17);
    }
    if ((0xc < uVar15) && (uVar11 = (ulong)*(ushort *)((long)piVar2 + (0xc - lVar17)), uVar11 != 0))
    {
      puVar12 = (uint *)((long)piVar2 + uVar11);
      piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 5) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x58) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 7) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[3];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x59) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 9) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[4];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x5a) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0xb) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[5];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x5b) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0xd) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[6];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x5c) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0xf) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[7];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x5d) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x11) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[8];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x5e) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x13) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[9];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x5f) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x15) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[10];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x60) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x17) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xb];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x61) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x19) {
        bVar6 = false;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xc];
        bVar6 = false;
        if (uVar11 != 0) {
          bVar6 = *(char *)((long)piVar20 + uVar11) != '\0';
        }
      }
      *(bool *)(param_1 + 0x62) = bVar6;
      if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0x1b) {
        uVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xd];
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
        }
      }
      *(undefined1 *)(param_1 + 99) = uVar14;
      if ((0x1c < *(ushort *)((long)piVar20 - (long)*piVar20)) &&
         (uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xe], uVar11 != 0)) {
        puVar12 = (uint *)((long)piVar20 + uVar11);
        piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
        if (*(ushort *)((long)piVar20 - (long)*piVar20) < 5) {
          uVar25 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2];
          uVar25 = 0;
          if (uVar11 != 0) {
            uVar25 = *(undefined4 *)((long)piVar20 + uVar11);
          }
        }
        *(undefined4 *)(param_1 + 0x6c) = uVar25;
        if (*(ushort *)((long)piVar20 - (long)*piVar20) < 7) {
          uVar14 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[3];
          uVar14 = 0;
          if (uVar11 != 0) {
            uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
          }
        }
        *(undefined1 *)(param_1 + 0x70) = uVar14;
        if (*(ushort *)((long)piVar20 - (long)*piVar20) < 9) {
          uVar14 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[4];
          uVar14 = 0;
          if (uVar11 != 0) {
            uVar14 = *(undefined1 *)((long)piVar20 + uVar11);
          }
        }
        *(undefined1 *)(param_1 + 0x71) = uVar14;
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 4);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 6);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x76) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 8);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 10);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0xc);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0xe);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0x10);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0x12);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0x14);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0x16);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0x18);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0x1a);
        puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20))
                          );
        *(undefined2 *)(param_1 + 0x8a) = *(undefined2 *)((long)puVar12 + (ulong)*puVar12 + 0x1c);
      }
    }
  }
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) {
    uVar14 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = *(undefined1 *)((long)piVar2 + uVar11);
    }
  }
  *(undefined1 *)(param_1 + 0x38) = uVar14;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) {
    uVar14 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8];
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = *(undefined1 *)((long)piVar2 + uVar11);
    }
  }
  *(undefined1 *)(param_1 + 0x8c) = uVar14;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) {
    bVar9 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9];
    bVar9 = 0;
    if (uVar11 != 0) {
      bVar9 = *(byte *)((long)piVar2 + uVar11);
      if (5 < bVar9) {
        bVar9 = bVar9 - 6;
      }
    }
  }
  *(byte *)(param_1 + 0x8d) = bVar9;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x15) {
    uVar10 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = (uint)*(byte *)((long)piVar2 + uVar11);
    }
  }
  *(uint *)(param_1 + 0x90) = uVar10;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1b) {
    bVar6 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xd];
    bVar6 = false;
    if (uVar11 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar11) != '\0';
    }
  }
  *(bool *)(param_1 + 0x98) = bVar6;
  puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar15 = *puVar18;
  if (uVar15 < 0x19) {
LAB_01f2c8cc:
    bVar6 = false;
  }
  else {
    uVar11 = (ulong)puVar18[0xc];
    lVar17 = -(long)*piVar2;
    if (uVar11 != 0) {
      puVar12 = (uint *)((long)piVar2 + uVar11);
      if (*(int *)((long)puVar12 + (ulong)*puVar12) != 0) {
        *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 4);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x18 - (long)*piVar2)))
        ;
        *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 5);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x18 - (long)*piVar2)))
        ;
        *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 6);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x18 - (long)*piVar2)))
        ;
        *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 7);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x18 - (long)*piVar2)))
        ;
        *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 8);
        lVar17 = -(long)*piVar2;
        uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
      }
    }
    if (uVar15 < 0x5d) {
LAB_01f2c25c:
      if (0x5a < uVar15) goto LAB_01f2c264;
LAB_01f2c2d8:
      if (uVar15 < 0x1d) goto LAB_01f2c8cc;
    }
    else {
      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x5c);
      if (uVar11 != 0) {
        puVar12 = (uint *)((long)piVar2 + uVar11);
        if (*(int *)((long)puVar12 + (ulong)*puVar12) != 0) {
          puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12 + 4);
          piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
          if (((4 < *(ushort *)((long)piVar20 - (long)*piVar20)) &&
              (uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar11 != 0)) &&
             (puVar12 = (uint *)((long)piVar20 + uVar11),
             piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 == 0x212)) {
            plVar8 = (long *)FUN_010a0d38(auStack_68,*(undefined8 *)(param_1 + 8));
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 5;
              do {
                lVar17 = *plVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = (int)lVar17 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((int)lVar17 == -1) goto LAB_01f2d108;
            }
            FUN_0298f084(plVar8,piVar20 + 1,param_3);
            FUN_0298e50c(param_1,0,plVar8);
            plVar1 = plVar8 + 5;
            do {
              lVar17 = *plVar1;
              iVar7 = (int)lVar17 + -1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
            else if ((int)lVar17 == 0) goto LAB_01f2d208;
          }
          puVar12 = (uint *)((long)piVar2 +
                            (ulong)*(ushort *)((long)piVar2 + (0x5c - (long)*piVar2)));
          puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12 + 8);
          piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
          if (((4 < *(ushort *)((long)piVar20 - (long)*piVar20)) &&
              (uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar11 != 0)) &&
             (puVar12 = (uint *)((long)piVar20 + uVar11),
             piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 == 0x212)) {
            plVar8 = (long *)FUN_010a0d38(auStack_68,*(undefined8 *)(param_1 + 8));
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 5;
              do {
                lVar17 = *plVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = (int)lVar17 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((int)lVar17 == -1) goto LAB_01f2d108;
            }
            FUN_0298f084(plVar8,piVar20 + 1,param_3);
            FUN_0298e50c(param_1,1,plVar8);
            plVar1 = plVar8 + 5;
            do {
              lVar17 = *plVar1;
              iVar7 = (int)lVar17 + -1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
            else if ((int)lVar17 == 0) goto LAB_01f2d208;
          }
          puVar12 = (uint *)((long)piVar2 +
                            (ulong)*(ushort *)((long)piVar2 + (0x5c - (long)*piVar2)));
          puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12 + 0xc);
          piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
          if (((4 < *(ushort *)((long)piVar20 - (long)*piVar20)) &&
              (uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar11 != 0)) &&
             (puVar12 = (uint *)((long)piVar20 + uVar11),
             piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 == 0x212)) {
            plVar8 = (long *)FUN_010a0d38(auStack_68,*(undefined8 *)(param_1 + 8));
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 5;
              do {
                lVar17 = *plVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = (int)lVar17 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((int)lVar17 == -1) goto LAB_01f2d108;
            }
            FUN_0298f084(plVar8,piVar20 + 1,param_3);
            FUN_0298e50c(param_1,2,plVar8);
            plVar1 = plVar8 + 5;
            do {
              lVar17 = *plVar1;
              iVar7 = (int)lVar17 + -1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
            else if ((int)lVar17 == 0) goto LAB_01f2d208;
          }
          puVar12 = (uint *)((long)piVar2 +
                            (ulong)*(ushort *)((long)piVar2 + (0x5c - (long)*piVar2)));
          puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12 + 0x10);
          piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
          if (((4 < *(ushort *)((long)piVar20 - (long)*piVar20)) &&
              (uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar11 != 0)) &&
             (puVar12 = (uint *)((long)piVar20 + uVar11),
             piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 == 0x212)) {
            plVar8 = (long *)FUN_010a0d38(auStack_68,*(undefined8 *)(param_1 + 8));
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 5;
              do {
                lVar17 = *plVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = (int)lVar17 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((int)lVar17 == -1) goto LAB_01f2d108;
            }
            FUN_0298f084(plVar8,piVar20 + 1,param_3);
            FUN_0298e50c(param_1,3,plVar8);
            plVar1 = plVar8 + 5;
            do {
              lVar17 = *plVar1;
              iVar7 = (int)lVar17 + -1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
            else if ((int)lVar17 == 0) goto LAB_01f2d208;
          }
          puVar12 = (uint *)((long)piVar2 +
                            (ulong)*(ushort *)((long)piVar2 + (0x5c - (long)*piVar2)));
          puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12 + 0x14);
          piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
          if (((4 < *(ushort *)((long)piVar20 - (long)*piVar20)) &&
              (uVar11 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar11 != 0)) &&
             (puVar12 = (uint *)((long)piVar20 + uVar11),
             piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 == 0x212)) {
            plVar8 = (long *)FUN_010a0d38(auStack_68,*(undefined8 *)(param_1 + 8));
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 5;
              do {
                lVar17 = *plVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = (int)lVar17 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((int)lVar17 == -1) {
LAB_01f2d108:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
            }
            FUN_0298f084(plVar8,piVar20 + 1,param_3);
            FUN_0298e50c(param_1,4,plVar8);
            plVar1 = plVar8 + 5;
            do {
              lVar17 = *plVar1;
              iVar7 = (int)lVar17 + -1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
            else if ((int)lVar17 == 0) {
LAB_01f2d208:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          lVar17 = -(long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
          goto LAB_01f2c25c;
        }
      }
LAB_01f2c264:
      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x5a);
      if (uVar11 != 0) {
        puVar12 = (uint *)((long)piVar2 + uVar11);
        uVar22 = (ulong)*puVar12;
        if (*(int *)((long)puVar12 + uVar22) != 0) {
          lVar23 = 0;
          uVar24 = 0;
          lVar17 = param_1 + 200;
          lVar5 = uVar21 + uVar22 + uVar11 + 4;
          do {
            FUN_0298ddc0(lVar17,(long)param_2 +
                                lVar23 + (ulong)*(uint *)((long)param_2 + uVar24 * 4 + lVar5) +
                                lVar5);
            uVar24 = uVar24 + 1;
            lVar17 = lVar17 + 0xc0;
            lVar23 = lVar23 + 4;
          } while (uVar24 < *(uint *)((long)puVar12 + uVar22));
          lVar17 = -(long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
          goto LAB_01f2c2d8;
        }
      }
    }
    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x1c);
    bVar6 = false;
    if (uVar11 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar11) != '\0';
    }
  }
  *(bool *)(param_1 + 0x488) = bVar6;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1f) {
    bVar6 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xf];
    bVar6 = false;
    if (uVar11 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar11) != '\0';
    }
  }
  *(bool *)(param_1 + 0x489) = bVar6;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x21) {
    uVar15 = 0;
  }
  else {
    uVar15 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x10];
    if ((ulong)uVar15 != 0) {
      uVar15 = *(ushort *)((long)piVar2 + (ulong)uVar15);
    }
  }
  *(ushort *)(param_1 + 0x48a) = uVar15;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x23) {
    uVar15 = 0;
  }
  else {
    uVar15 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x11];
    if ((ulong)uVar15 != 0) {
      uVar15 = *(ushort *)((long)piVar2 + (ulong)uVar15);
    }
  }
  *(ushort *)(param_1 + 0x48c) = uVar15;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x25) {
    uVar15 = 0;
  }
  else {
    uVar15 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x12];
    if ((ulong)uVar15 != 0) {
      uVar15 = *(ushort *)((long)piVar2 + (ulong)uVar15);
    }
  }
  *(ushort *)(param_1 + 0x48e) = uVar15;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x27) {
    uVar15 = 0;
  }
  else {
    uVar15 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x13];
    if ((ulong)uVar15 != 0) {
      uVar15 = *(ushort *)((long)piVar2 + (ulong)uVar15);
    }
  }
  *(ushort *)(param_1 + 0x490) = uVar15;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x29) {
    bVar6 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x14];
    bVar6 = false;
    if (uVar11 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar11) != '\0';
    }
  }
  *(bool *)(param_1 + 0x492) = bVar6;
  uVar25 = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar15 = *puVar18;
  if (0x2a < uVar15) {
    uVar11 = (ulong)puVar18[0x15];
    lVar17 = -(long)*piVar2;
    if ((uVar11 != 0) &&
       (uVar22 = (ulong)*(uint *)((long)piVar2 + uVar11),
       *(int *)((long)((long)piVar2 + uVar11) + uVar22) != 0)) {
      uVar24 = 0;
      uVar19 = 0;
      do {
        uVar19 = uVar19 | (long)(1 << (ulong)(*(byte *)((long)param_2 +
                                                       uVar24 + uVar11 + uVar22 + uVar21 + 4) & 0x1f
                                             ));
        *(ulong *)(param_1 + 0x498) = uVar19;
        puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar15 = *puVar18;
        if (uVar15 < 0x2b) goto LAB_01f2c49c;
        uVar11 = (ulong)puVar18[0x15];
        uVar22 = (ulong)*(uint *)((long)piVar2 + uVar11);
        uVar24 = uVar24 + 1;
      } while (uVar24 < *(uint *)((long)((long)piVar2 + uVar11) + uVar22));
      lVar17 = -(long)*piVar2;
    }
    if ((0x2c < uVar15) && (uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x2c), uVar21 != 0))
    {
      uVar25 = *(undefined4 *)((long)piVar2 + uVar21);
    }
  }
LAB_01f2c49c:
  *(undefined4 *)(param_1 + 0x4a0) = uVar25;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) {
    uVar14 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17];
    uVar14 = 0;
    if (uVar21 != 0) {
      uVar14 = *(undefined1 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined1 *)(param_1 + 0x4a4) = uVar14;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x31) {
    uVar14 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x18];
    uVar14 = 0;
    if (uVar21 != 0) {
      uVar14 = *(undefined1 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined1 *)(param_1 + 0x4a5) = uVar14;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x33) {
    uVar25 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x19];
    uVar25 = 0;
    if (uVar21 != 0) {
      uVar25 = *(undefined4 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined4 *)(param_1 + 0x4a8) = uVar25;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x35) {
    uVar25 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1a];
    uVar25 = 0;
    if (uVar21 != 0) {
      uVar25 = *(undefined4 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined4 *)(param_1 + 0x4ac) = uVar25;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x37) {
    uVar25 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1b];
    uVar25 = 0;
    if (uVar21 != 0) {
      uVar25 = *(undefined4 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined4 *)(param_1 + 0x4b0) = uVar25;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x39) {
    uVar25 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1c];
    uVar25 = 0;
    if (uVar21 != 0) {
      uVar25 = *(undefined4 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined4 *)(param_1 + 0x4b4) = uVar25;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x3b) {
    bVar6 = false;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1d];
    bVar6 = false;
    if (uVar21 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar21) != '\0';
    }
  }
  *(bool *)(param_1 + 0x4b8) = bVar6;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x3d) {
    bVar6 = false;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1e];
    bVar6 = false;
    if (uVar21 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar21) != '\0';
    }
  }
  *(bool *)(param_1 + 0x704) = bVar6;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x3f) {
    bVar6 = false;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1f];
    bVar6 = false;
    if (uVar21 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar21) != '\0';
    }
  }
  *(bool *)(param_1 + 0x705) = bVar6;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x41) {
    bVar6 = false;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x20];
    bVar6 = false;
    if (uVar21 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar21) != '\0';
    }
  }
  *(bool *)(param_1 + 0x706) = bVar6;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x43) {
    bVar6 = false;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x21];
    bVar6 = false;
    if (uVar21 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar21) != '\0';
    }
  }
  *(bool *)(param_1 + 0x707) = bVar6;
  puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar15 = *puVar18;
  if (uVar15 < 0x4f) {
LAB_01f2d024:
    uVar15 = 0;
  }
  else {
    uVar21 = (ulong)puVar18[0x27];
    lVar17 = -(long)*piVar2;
    if (uVar21 != 0) {
      puVar12 = (uint *)((long)piVar2 + uVar21);
      if (*(int *)((long)puVar12 + (ulong)*puVar12) != 0) {
        *(bool *)(param_1 + 0x4dd) = *(char *)((long)puVar12 + (ulong)*puVar12 + 4) != '\0';
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x4e - (long)*piVar2)))
        ;
        *(bool *)(param_1 + 0x4de) = *(char *)((long)puVar12 + (ulong)*puVar12 + 5) != '\0';
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x4e - (long)*piVar2)))
        ;
        *(bool *)(param_1 + 0x4df) = *(char *)((long)puVar12 + (ulong)*puVar12 + 6) != '\0';
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x4e - (long)*piVar2)))
        ;
        *(bool *)(param_1 + 0x4e0) = *(char *)((long)puVar12 + (ulong)*puVar12 + 7) != '\0';
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x4e - (long)*piVar2)))
        ;
        *(bool *)(param_1 + 0x4e1) = *(char *)((long)puVar12 + (ulong)*puVar12 + 8) != '\0';
        lVar17 = -(long)*piVar2;
        uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
      }
    }
    if (uVar15 < 0x51) goto LAB_01f2d024;
    uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x50);
    if (uVar21 != 0) {
      puVar12 = (uint *)((long)piVar2 + uVar21);
      if (*(int *)((long)puVar12 + (ulong)*puVar12) != 0) {
        *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 4);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x50 - (long)*piVar2)))
        ;
        *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 8);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x50 - (long)*piVar2)))
        ;
        *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0xc);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x50 - (long)*piVar2)))
        ;
        *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0x10);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x50 - (long)*piVar2)))
        ;
        *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0x14);
        lVar17 = -(long)*piVar2;
        uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
      }
    }
    if (uVar15 < 0x53) goto LAB_01f2d024;
    uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x52);
    if (uVar21 != 0) {
      puVar12 = (uint *)((long)piVar2 + uVar21);
      if (*(int *)((long)puVar12 + (ulong)*puVar12) != 0) {
        if (uVar15 < 0x55) {
LAB_01f2c8c4:
          uVar25 = 0;
        }
        else {
          uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x54);
          uVar25 = 0;
          if (uVar21 != 0) {
            puVar3 = (uint *)((long)piVar2 + uVar21);
            if (*(int *)((long)puVar3 + (ulong)*puVar3) == 0) goto LAB_01f2c8c4;
            uVar25 = *(undefined4 *)((long)puVar3 + (ulong)*puVar3 + 4);
          }
        }
        *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 4);
        *(undefined4 *)(param_1 + 0x6f0) = uVar25;
        puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar18 < 0x53) {
          uVar25 = _DAT_00000008;
LAB_01f2ca74:
          uVar16 = 0;
        }
        else {
          uVar25 = *(undefined4 *)
                    ((long)((long)piVar2 + (ulong)puVar18[0x29]) +
                    (ulong)*(uint *)((long)piVar2 + (ulong)puVar18[0x29]) + 8);
          if (*puVar18 < 0x55) goto LAB_01f2ca74;
          uVar16 = 0;
          if ((ulong)puVar18[0x2a] != 0) {
            puVar12 = (uint *)((long)piVar2 + (ulong)puVar18[0x2a]);
            if (*(uint *)((long)puVar12 + (ulong)*puVar12) < 2) goto LAB_01f2ca74;
            uVar16 = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 8);
          }
        }
        *(undefined4 *)(param_1 + 0x6e0) = uVar25;
        *(undefined4 *)(param_1 + 0x6f4) = uVar16;
        puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar18 < 0x53) {
          uVar25 = _DAT_0000000c;
LAB_01f2cae0:
          uVar16 = 0;
        }
        else {
          uVar25 = *(undefined4 *)
                    ((long)((long)piVar2 + (ulong)puVar18[0x29]) +
                    (ulong)*(uint *)((long)piVar2 + (ulong)puVar18[0x29]) + 0xc);
          if (*puVar18 < 0x55) goto LAB_01f2cae0;
          uVar16 = 0;
          if ((ulong)puVar18[0x2a] != 0) {
            puVar12 = (uint *)((long)piVar2 + (ulong)puVar18[0x2a]);
            if (*(uint *)((long)puVar12 + (ulong)*puVar12) < 3) goto LAB_01f2cae0;
            uVar16 = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0xc);
          }
        }
        *(undefined4 *)(param_1 + 0x6e4) = uVar25;
        *(undefined4 *)(param_1 + 0x6f8) = uVar16;
        puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar18 < 0x53) {
          uVar25 = _DAT_00000010;
LAB_01f2cb4c:
          uVar16 = 0;
        }
        else {
          uVar25 = *(undefined4 *)
                    ((long)((long)piVar2 + (ulong)puVar18[0x29]) +
                    (ulong)*(uint *)((long)piVar2 + (ulong)puVar18[0x29]) + 0x10);
          if (*puVar18 < 0x55) goto LAB_01f2cb4c;
          uVar16 = 0;
          if ((ulong)puVar18[0x2a] != 0) {
            puVar12 = (uint *)((long)piVar2 + (ulong)puVar18[0x2a]);
            if (*(uint *)((long)puVar12 + (ulong)*puVar12) < 4) goto LAB_01f2cb4c;
            uVar16 = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0x10);
          }
        }
        *(undefined4 *)(param_1 + 0x6e8) = uVar25;
        *(undefined4 *)(param_1 + 0x6fc) = uVar16;
        puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar18 < 0x53) {
          uVar25 = _DAT_00000014;
LAB_01f2cbb8:
          uVar16 = 0;
        }
        else {
          uVar25 = *(undefined4 *)
                    ((long)((long)piVar2 + (ulong)puVar18[0x29]) +
                    (ulong)*(uint *)((long)piVar2 + (ulong)puVar18[0x29]) + 0x14);
          if (*puVar18 < 0x55) goto LAB_01f2cbb8;
          uVar16 = 0;
          if ((ulong)puVar18[0x2a] != 0) {
            puVar12 = (uint *)((long)piVar2 + (ulong)puVar18[0x2a]);
            if (*(uint *)((long)puVar12 + (ulong)*puVar12) < 5) goto LAB_01f2cbb8;
            uVar16 = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0x14);
          }
        }
        *(undefined4 *)(param_1 + 0x6ec) = uVar25;
        *(undefined4 *)(param_1 + 0x700) = uVar16;
        lVar17 = -(long)*piVar2;
        uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
      }
    }
    if (uVar15 < 0x6f) {
LAB_01f2cc18:
      if (0x6a < uVar15) goto LAB_01f2cc20;
LAB_01f2cca0:
      if (uVar15 < 0x69) goto LAB_01f2d024;
    }
    else {
      uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x6e);
      if ((uVar21 != 0) &&
         (puVar12 = (uint *)((long)piVar2 + uVar21),
         piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 != 0)) {
        FUN_0298f238(param_1 + 0x510,piVar20 + 1);
        lVar17 = -(long)*piVar2;
        uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
        goto LAB_01f2cc18;
      }
LAB_01f2cc20:
      uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x6a);
      if ((uVar21 != 0) &&
         (puVar12 = (uint *)((long)piVar2 + uVar21),
         piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 != 0)) {
        FUN_0298f240(param_1 + 0x560,piVar20 + 1);
        lVar17 = -(long)*piVar2;
        uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
      }
      if (uVar15 < 0x6d) goto LAB_01f2cca0;
      uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x6c);
      if ((uVar21 != 0) &&
         (puVar12 = (uint *)((long)piVar2 + uVar21),
         piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 != 0)) {
        FUN_0298f278(param_1 + 0x500,piVar20 + 1);
        lVar17 = -(long)*piVar2;
        uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
        goto LAB_01f2cca0;
      }
    }
    uVar15 = *(ushort *)((long)piVar2 + lVar17 + 0x68);
    if ((ulong)uVar15 != 0) {
      uVar15 = *(ushort *)((long)piVar2 + (ulong)uVar15);
    }
  }
  *(ushort *)(param_1 + 0x4f8) = uVar15;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x57) {
    uVar14 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x2b];
    uVar14 = 0;
    if (uVar21 != 0) {
      uVar14 = *(undefined1 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined1 *)(param_1 + 0x714) = uVar14;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x47) {
    bVar6 = false;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x23];
    bVar6 = false;
    if (uVar21 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar21) != '\0';
    }
  }
  *(bool *)(param_1 + 0x710) = bVar6;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x49) {
    bVar6 = false;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x24];
    bVar6 = false;
    if (uVar21 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar21) != '\0';
    }
  }
  *(bool *)(param_1 + 0x711) = bVar6;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x4b) {
    uVar14 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x25];
    uVar14 = 0;
    if (uVar21 != 0) {
      uVar14 = *(undefined1 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined1 *)(param_1 + 0x712) = uVar14;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x4d) {
    uVar14 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x26];
    uVar14 = 0;
    if (uVar21 != 0) {
      uVar14 = *(undefined1 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined1 *)(param_1 + 0x713) = uVar14;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x59) {
    uVar13 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x2c];
    uVar13 = 0;
    if (uVar21 != 0) {
      uVar13 = *(undefined8 *)((long)piVar2 + uVar21);
    }
  }
  *(undefined8 *)(param_1 + 0x718) = uVar13;
  puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
  lVar17 = -(long)*piVar2;
  uVar15 = *puVar18;
  if (uVar15 < 0x67) {
LAB_01f2ce38:
    if (0x5e < uVar15) goto LAB_01f2ce40;
  }
  else {
    uVar21 = (ulong)puVar18[0x33];
    if ((uVar21 != 0) &&
       (puVar12 = (uint *)((long)piVar2 + uVar21),
       piVar20 = (int *)((long)puVar12 + (ulong)*puVar12), *piVar20 != 0)) {
      piVar20 = piVar20 + 1;
      if ((char)*piVar20 == '\0') {
        local_70 = (long *)FUN_00d44228();
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x18))(local_70);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar13 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar13;
        FUN_00cf9884(&local_70,uVar13,piVar20);
      }
      plVar8 = *(long **)(param_1 + 0x720);
      *(undefined8 *)(param_1 + 0x720) = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
      *(long **)(param_1 + 0x720) = local_70;
      lVar17 = -(long)*piVar2;
      uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
      goto LAB_01f2ce38;
    }
LAB_01f2ce40:
    uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 0x5e);
    if (uVar21 != 0) {
      uVar25 = *(undefined4 *)((long)piVar2 + uVar21);
      goto LAB_01f2ce50;
    }
  }
  uVar25 = 0;
LAB_01f2ce50:
  *(undefined4 *)(param_1 + 0x4bc) = uVar25;
  uVar25 = 0;
  if ((0x60 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x30], uVar21 != 0)) {
    uVar25 = *(undefined4 *)((long)piVar2 + uVar21);
  }
  *(undefined4 *)(param_1 + 0x4c0) = uVar25;
  puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar15 = *puVar18;
  if (0x62 < uVar15) {
    uVar21 = (ulong)puVar18[0x31];
    lVar17 = -(long)*piVar2;
    if (uVar21 != 0) {
      puVar12 = (uint *)((long)piVar2 + uVar21);
      if (*(int *)((long)puVar12 + (ulong)*puVar12) != 0) {
        *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 4);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x62 - (long)*piVar2)))
        ;
        *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 8);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x62 - (long)*piVar2)))
        ;
        *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0xc);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x62 - (long)*piVar2)))
        ;
        *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0x10);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x62 - (long)*piVar2)))
        ;
        *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)((long)puVar12 + (ulong)*puVar12 + 0x14);
        lVar17 = -(long)*piVar2;
        uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
      }
    }
    if ((100 < uVar15) && (uVar21 = (ulong)*(ushort *)((long)piVar2 + lVar17 + 100), uVar21 != 0)) {
      puVar12 = (uint *)((long)piVar2 + uVar21);
      if (*(int *)((long)puVar12 + (ulong)*puVar12) != 0) {
        *(undefined1 *)(param_1 + 0x4d8) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 4);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (100 - (long)*piVar2)));
        *(undefined1 *)(param_1 + 0x4d9) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 5);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (100 - (long)*piVar2)));
        *(undefined1 *)(param_1 + 0x4da) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 6);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (100 - (long)*piVar2)));
        *(undefined1 *)(param_1 + 0x4db) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 7);
        puVar12 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (100 - (long)*piVar2)));
        *(undefined1 *)(param_1 + 0x4dc) = *(undefined1 *)((long)puVar12 + (ulong)*puVar12 + 8);
      }
    }
  }
  return 1;
}


