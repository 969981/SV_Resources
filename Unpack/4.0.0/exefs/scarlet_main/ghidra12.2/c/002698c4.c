/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002698c4; name: FUN_002698c4
 */


void FUN_002698c4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    plVar1 = *(long **)(param_1 + 0x20);
    do {
      plVar1 = plVar1 + 1;
      lVar3 = *plVar1;
      FUN_002679fc(lVar3);
      uVar2 = *(ulong *)(lVar3 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 & 0xfffffffffffffffe;
        if ((*(byte *)(uVar2 + 8) & 1) == 0) {
          *(undefined2 *)(uVar2 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar2 + 0x18) = 0;
          *(undefined8 *)(uVar2 + 0x10) = 0;
        }
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar4 + 8) & 1) != 0) {
      **(undefined1 **)(uVar4 + 0x18) = 0;
      *(undefined8 *)(uVar4 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar4 + 8) = 0;
  }
  return;
}


