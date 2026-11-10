/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01690c24; name: FUN_01690c24
 */


void FUN_01690c24(long param_1)

{
  if (*(char *)(param_1 + 0x120) == '\0') {
    if ((*(char *)(param_1 + 0x11c) == *(char *)(*(long *)(param_1 + 0x48) + 0x95)) &&
       (*(short *)(param_1 + 0x104) != 0)) {
      *(undefined2 *)(param_1 + 0x104) = 0;
      *(undefined1 *)(param_1 + 0x106) = 0;
      FUN_020fe744();
      if (*(char *)(param_1 + 0x120) != '\0') {
        return;
      }
    }
    if ((*(char *)(param_1 + 0x11c) == *(char *)(*(long *)(param_1 + 0x48) + 0x95)) &&
       (*(short *)(param_1 + 0x108) != 0)) {
      *(undefined2 *)(param_1 + 0x108) = 0;
      *(undefined1 *)(param_1 + 0x10a) = 0;
      FUN_020fe744();
      if (*(char *)(param_1 + 0x120) != '\0') {
        return;
      }
    }
    if ((*(char *)(param_1 + 0x11c) == *(char *)(*(long *)(param_1 + 0x48) + 0x95)) &&
       (*(short *)(param_1 + 0x10c) != 0)) {
      *(undefined2 *)(param_1 + 0x10c) = 0;
      *(undefined1 *)(param_1 + 0x10e) = 0;
      FUN_020fe744();
      if (*(char *)(param_1 + 0x120) != '\0') {
        return;
      }
    }
    if ((*(char *)(param_1 + 0x11c) == *(char *)(*(long *)(param_1 + 0x48) + 0x95)) &&
       (*(short *)(param_1 + 0x110) != 0)) {
      *(undefined2 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x112) = 0;
      FUN_020fe744();
      if (*(char *)(param_1 + 0x120) != '\0') {
        return;
      }
    }
    if ((*(char *)(param_1 + 0x11c) == *(char *)(*(long *)(param_1 + 0x48) + 0x95)) &&
       (*(short *)(param_1 + 0x114) != 0)) {
      *(undefined2 *)(param_1 + 0x114) = 0;
      *(undefined1 *)(param_1 + 0x116) = 0;
      FUN_020fe744();
      if (*(char *)(param_1 + 0x120) != '\0') {
        return;
      }
    }
    if ((*(char *)(param_1 + 0x11c) == *(char *)(*(long *)(param_1 + 0x48) + 0x95)) &&
       (*(short *)(param_1 + 0x118) != 0)) {
      *(undefined2 *)(param_1 + 0x118) = 0;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      FUN_020fe744();
      return;
    }
  }
  return;
}


