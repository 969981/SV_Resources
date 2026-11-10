/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d100a8; name: FUN_00d100a8
 */


undefined1 FUN_00d100a8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  size_t sVar3;
  int *piVar4;
  int *piVar5;
  int *__src;
  size_t __n;
  int *__dest;
  char local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  __src = *(int **)(param_1 + 0x80);
  uVar2 = (ulong)*(byte *)(*(long *)(param_1 + 0x30) + 0x1b9);
  if (uVar2 != 0) {
    __dest = *(int **)(param_1 + 0xb8);
    __n = uVar2 << 2;
    sVar3 = __n;
    piVar4 = __dest;
    piVar5 = __src;
    do {
      if (*piVar5 != *piVar4) {
        FUN_00d10524(local_58,*(long *)(param_1 + 0x30),param_1 + 0x70);
        if (*(char *)(param_1 + 0xf0) == '\0') {
          if (local_58[0] == '\0') {
            return 0;
          }
          *(undefined8 *)(param_1 + 0xf8) = local_50;
          *(undefined8 *)(param_1 + 0x100) = local_48;
          *(undefined8 *)(param_1 + 0x108) = local_40;
          *(undefined8 *)(param_1 + 0x110) = local_38;
          *(undefined1 *)(param_1 + 0xf0) = 1;
        }
        else {
          if (local_58[0] == '\0') {
            if (*(long **)(param_1 + 0x110) != (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
            }
            *(undefined1 *)(param_1 + 0xf0) = 0;
            return 0;
          }
          plVar1 = *(long **)(param_1 + 0x110);
          *(undefined8 *)(param_1 + 0xf8) = local_50;
          *(undefined8 *)(param_1 + 0x100) = local_48;
          *(undefined8 *)(param_1 + 0x108) = local_40;
          *(undefined8 *)(param_1 + 0x110) = 0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x20))();
          }
          *(undefined8 *)(param_1 + 0x110) = local_38;
          if (*(char *)(param_1 + 0xf0) == '\0') {
            return 0;
          }
        }
        memmove(__dest,__src,__n);
        return 1;
      }
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
      sVar3 = sVar3 - 4;
    } while (sVar3 != 0);
  }
  return 1;
}


