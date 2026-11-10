/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008cb1b4; name: FUN_008cb1b4
 */


undefined8 FUN_008cb1b4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x1a0);
  uVar1 = (*(long *)(param_2 + 0x188) + 0x74fU & -*(long *)(param_2 + 0x188)) +
          *(long *)(param_2 + 0x1a0);
  if (uVar1 <= *(ulong *)(param_2 + 0x48)) {
    *(ulong *)(param_2 + 0x1a0) = uVar1;
  }
  if (*(long *)(param_1 + 0x338) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x1a0);
    uVar1 = (*(long *)(lVar2 + 0x188) + 0x7fU & -*(long *)(lVar2 + 0x188)) +
            *(long *)(lVar2 + 0x1a0);
    if (uVar1 <= *(ulong *)(lVar2 + 0x48)) {
      *(ulong *)(lVar2 + 0x1a0) = uVar1;
    }
  }
  if (*(long *)(param_1 + 0x300) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x1a0);
    uVar1 = ((*(long *)(param_1 + 0x308) + *(long *)(lVar2 + 0x188)) - 1U &
            -*(long *)(lVar2 + 0x188)) + *(long *)(lVar2 + 0x1a0);
    if (uVar1 <= *(ulong *)(lVar2 + 0x48)) {
      *(ulong *)(lVar2 + 0x1a0) = uVar1;
    }
  }
  if (*(char *)(param_1 + 3) != '\0') {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar2 + 0x1a0);
    uVar1 = (*(long *)(lVar2 + 0x188) + 0x11fU & -*(long *)(lVar2 + 0x188)) +
            *(long *)(lVar2 + 0x1a0);
    if (uVar1 <= *(ulong *)(lVar2 + 0x48)) {
      *(ulong *)(lVar2 + 0x1a0) = uVar1;
    }
  }
  return 1;
}


