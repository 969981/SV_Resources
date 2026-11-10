/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ad48c; name: FUN_034ad48c
 */


void FUN_034ad48c(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong unaff_x21;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if ((((*(uint *)(param_1 + 0xda) & 0x400) == 0 ^ param_2) & 1) == 0) {
    uVar3 = 0x400;
    if ((param_2 & 1) == 0) {
      uVar3 = 0;
    }
    *(uint *)(param_1 + 0xda) = *(uint *)(param_1 + 0xda) & 0xfffffbff | uVar3;
    lVar2 = *(long *)(param_1 + 0x90);
    if (lVar2 != 0) {
      uVar3 = *(uint *)(lVar2 + 0x68);
      uVar4 = (ulong)uVar3;
      *(byte *)(lVar2 + 0x72) = *(byte *)(lVar2 + 0x72) ^ 1;
      if (uVar3 != 0) {
        *(undefined4 *)(lVar2 + 0x68) = 0;
        if (0 < (int)uVar3) {
          plVar5 = *(long **)(lVar2 + 0x60);
          do {
            lVar6 = *plVar5;
            unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)*(uint *)(lVar6 + 0x2c8);
            plVar1 = (long *)FUN_034a9e5c(lVar2 + 0x60,*(undefined8 *)(lVar6 + 0x2c0),unaff_x21);
            uVar4 = uVar4 - 1;
            *plVar1 = lVar6;
            plVar5 = plVar5 + 1;
          } while (uVar4 != 0);
        }
      }
      if ((int)(*(long **)(param_1 + 0x90))[1] != 0) {
        lVar2 = **(long **)(param_1 + 0x90);
        do {
          lVar6 = *(long *)(lVar2 + 8);
          if (lVar6 != 0) {
            uVar3 = *(uint *)(lVar6 + 0x50);
            uVar4 = (ulong)uVar3;
            *(byte *)(lVar6 + 0x5a) = *(byte *)(lVar6 + 0x5a) ^ 1;
            if (uVar3 != 0) {
              *(undefined4 *)(lVar6 + 0x50) = 0;
              if (0 < (int)uVar3) {
                plVar5 = *(long **)(lVar6 + 0x48);
                do {
                  lVar7 = *plVar5;
                  unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)*(uint *)(lVar7 + 0x2c8);
                  plVar1 = (long *)FUN_034a9e5c(lVar6 + 0x48,*(undefined8 *)(lVar7 + 0x2c0),
                                                unaff_x21);
                  uVar4 = uVar4 - 1;
                  *plVar1 = lVar7;
                  plVar5 = plVar5 + 1;
                } while (uVar4 != 0);
              }
            }
          }
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != **(long **)(param_1 + 0x90) +
                          (ulong)*(uint *)(*(long **)(param_1 + 0x90) + 1) * 0x10);
      }
    }
  }
  return;
}


