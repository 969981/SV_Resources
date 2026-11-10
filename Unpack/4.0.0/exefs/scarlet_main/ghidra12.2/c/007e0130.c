/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e0130; name: FUN_007e0130
 */


void FUN_007e0130(long param_1)

{
  long lVar1;
  undefined2 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_007e0200(param_1);
  puVar2 = *(undefined2 **)(param_1 + 8);
  if (puVar2 != (undefined2 *)0x0) {
    if (*(char *)(puVar2 + 0x38) != '\0') {
      *(undefined8 *)(puVar2 + 0x34) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      if (*(char *)(puVar2 + 0x32) != '\0') {
        *(undefined4 *)(puVar2 + 0x30) = 0;
        *(undefined8 *)(puVar2 + 0x1c) = 0;
        *(undefined1 *)(puVar2 + 0x32) = 0;
      }
      *(undefined1 *)(puVar2 + 0x38) = 0;
    }
    lVar1 = *(long *)(puVar2 + 0x3c);
    if (lVar1 != 0) {
      FUN_007bfae0(lVar1);
      FUN_007bfaa0(lVar1);
      *(undefined8 *)(puVar2 + 0x3c) = 0;
    }
    lVar1 = *(long *)(puVar2 + 4);
    if (lVar1 != 0) {
      FUN_007bfae0(lVar1);
      FUN_007bfaa0(lVar1);
      *(undefined8 *)(puVar2 + 4) = 0;
    }
    *puVar2 = 0;
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 100) != '\0') {
        *(undefined4 *)(lVar1 + 0x60) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined1 *)(lVar1 + 100) = 0;
      }
      FUN_007bfaa0();
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return;
}


