/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008045f8; name: FUN_008045f8
 */


void FUN_008045f8(long param_1)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 0xc0) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb8) + 0x6c);
    do {
      if ((*(long *)(piVar2 + -0x17) != -1) && (1 < piVar2[-0x13] - 0xdU)) {
        if (*piVar2 == 0) {
          *piVar2 = piVar2[-0x13] + 10;
        }
        piVar2[-0x13] = 0xe;
      }
      piVar2 = piVar2 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}


