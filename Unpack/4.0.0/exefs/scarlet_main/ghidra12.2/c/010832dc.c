/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010832dc; name: FUN_010832dc
 */


void FUN_010832dc(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x110);
  if (*(char *)(lVar3 + 0x4c) != '\0') {
    uVar1 = *(uint *)(lVar3 + 0x48);
    *(undefined1 *)(lVar3 + 0x4c) = 0;
    if (uVar1 != 0) {
      if (*(long *)(*(long *)(lVar3 + 0x10) + 0x28) != 0) {
        FUN_010833f4(param_2);
        uVar1 = *(uint *)(lVar3 + 0x48);
      }
      if (1 < uVar1) {
        if (*(long *)(*(long *)(lVar3 + 0x10) + 0x60) != 0) {
          FUN_010833f4(param_2);
          uVar1 = *(uint *)(lVar3 + 0x48);
        }
        if (2 < uVar1) {
          if (*(long *)(*(long *)(lVar3 + 0x10) + 0x98) != 0) {
            FUN_010833f4(param_2);
            uVar1 = *(uint *)(lVar3 + 0x48);
          }
          if (3 < uVar1) {
            if (*(long *)(*(long *)(lVar3 + 0x10) + 0xd0) != 0) {
              FUN_010833f4(param_2);
              uVar1 = *(uint *)(lVar3 + 0x48);
            }
            if (4 < uVar1) {
              if (*(long *)(*(long *)(lVar3 + 0x10) + 0x108) != 0) {
                FUN_010833f4(param_2,*(long *)(lVar3 + 0x10) + 0x108);
                uVar1 = *(uint *)(lVar3 + 0x48);
              }
              uVar2 = (ulong)uVar1;
              if (5 < uVar1) {
                uVar4 = 5;
                lVar5 = 0x140;
                do {
                  if (*(long *)(*(long *)(lVar3 + 0x10) + lVar5) != 0) {
                    FUN_010833f4(param_2);
                    uVar2 = (ulong)*(uint *)(lVar3 + 0x48);
                  }
                  uVar4 = uVar4 + 1;
                  lVar5 = lVar5 + 0x38;
                } while (uVar4 < uVar2);
              }
            }
          }
        }
      }
    }
  }
  return;
}


