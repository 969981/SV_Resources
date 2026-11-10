/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f8ea4; name: FUN_004f8ea4
 */


ulong FUN_004f8ea4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)(param_3 + 0x18) != 1) ||
     (lVar2 = **(long **)(param_3 + 0x20), *(char *)(lVar2 + 0x41) == '\0')) {
    return (ulong)(*(int *)(param_2 +
                           (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                                        (int)((ulong)(param_3 -
                                                     *(long *)(*(long *)(param_3 + 0x10) + 0x30)) >>
                                             4) * -0x55555554)) != 0);
  }
  if (*(char *)(lVar2 + 0x43) != '\0') {
    uVar1 = FUN_005213cc(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(lVar2 + 0x44));
    return uVar1;
  }
  lVar3 = *(long *)(lVar2 + 0x58);
  if ((lVar3 == 0) ||
     ((*(int *)(lVar3 + 0x18) == 1 && (*(char *)(**(long **)(lVar3 + 0x20) + 0x41) != '\0')))) {
    uVar1 = FUN_004f4588();
    return uVar1;
  }
  return (ulong)(*(int *)(param_2 +
                         (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                                      (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x30
                                                                     )) >> 4) * -0x55555554)) ==
                *(int *)(lVar2 + 0x44));
}


