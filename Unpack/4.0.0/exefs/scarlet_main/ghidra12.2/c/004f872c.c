/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f872c; name: FUN_004f872c
 */


long FUN_004f872c(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)(param_3 + 0x18) != 1) ||
     (lVar3 = **(long **)(param_3 + 0x20), *(char *)(lVar3 + 0x41) == '\0')) {
    if (*(int *)(param_2 +
                (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                             (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x10) + 0x30)) >>
                                  4) * -0x55555554)) == 0) {
      return 0;
    }
    lVar3 = FUN_004a5180(*param_1);
    return lVar3;
  }
  if (*(char *)(lVar3 + 0x43) != '\0') {
    uVar1 = FUN_005213cc(param_2 + (ulong)*(uint *)(param_1 + 5),*(undefined4 *)(lVar3 + 0x44));
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    return lVar3;
  }
  lVar2 = *(long *)(lVar3 + 0x58);
  if ((lVar2 == 0) ||
     ((*(int *)(lVar2 + 0x18) == 1 && (*(char *)(**(long **)(lVar2 + 0x20) + 0x41) != '\0')))) {
    uVar1 = FUN_004f4588(param_1,param_2,lVar3);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    return lVar3;
  }
  if (*(int *)(param_2 +
              (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                           (int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x10) + 0x30)) >> 4) *
                           -0x55555554)) != *(int *)(lVar3 + 0x44)) {
    lVar3 = 0;
  }
  return lVar3;
}


