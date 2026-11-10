/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e27b4; name: FUN_007e27b4
 */


void FUN_007e27b4(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = *(undefined4 **)(param_1 + 0x110);
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 0x12) != '\0')) {
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *puVar2 = 0;
    if (*(char *)(puVar2 + 0xf) != '\0') {
      puVar2[0xe] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 0xf) = 0;
    }
    *(undefined1 *)(puVar2 + 0x12) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x110);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x3c) != '\0') {
      *(undefined4 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined1 *)(lVar3 + 0x3c) = 0;
    }
    FUN_007bfaa0();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x100);
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 0x12) != '\0')) {
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *puVar2 = 0;
    if (*(char *)(puVar2 + 0xf) != '\0') {
      iVar1 = puVar2[0xe];
      if (0 < iVar1) {
        iVar4 = 0;
        iVar5 = -1;
        do {
          FUN_0284e3d4(*(long *)(puVar2 + 4) + (long)(iVar1 + iVar5) * 0x58);
          iVar1 = puVar2[0xe];
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar4 < iVar1);
      }
      puVar2[0xe] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 0xf) = 0;
    }
    *(undefined1 *)(puVar2 + 0x12) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x108);
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x100);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x3c) != '\0') {
      iVar1 = *(int *)(lVar3 + 0x38);
      if (0 < iVar1) {
        iVar4 = 0;
        iVar5 = -1;
        do {
          FUN_0284e3d4(*(long *)(lVar3 + 0x10) + (long)(iVar1 + iVar5) * 0x58);
          iVar1 = *(int *)(lVar3 + 0x38);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar4 < iVar1);
      }
      *(undefined4 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined1 *)(lVar3 + 0x3c) = 0;
    }
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0xf0);
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 0x12) != '\0')) {
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *puVar2 = 0;
    if (*(char *)(puVar2 + 0xf) != '\0') {
      puVar2[0xe] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 0xf) = 0;
    }
    *(undefined1 *)(puVar2 + 0x12) = 0;
  }
  lVar3 = *(long *)(param_1 + 0xf8);
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  lVar3 = *(long *)(param_1 + 0xf0);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x3c) != '\0') {
      *(undefined4 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined1 *)(lVar3 + 0x3c) = 0;
    }
    FUN_007bfaa0();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}


