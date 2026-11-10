/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2440; name: FUN_003a2440
 */


undefined8 FUN_003a2440(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar1 = (long *)param_1[5];
  if (plVar1 != (long *)0x0) {
    while ((uVar3 = param_1[3] - plVar1[3], uVar3 != 0 || ((*(byte *)(plVar1 + 4) & 3) == 0))) {
      uVar2 = plVar1[2];
      if (uVar2 != 0) {
        lVar4 = param_1[1];
        if (lVar4 == 0) {
          lVar4 = *(long *)(*param_1 + 8);
        }
        lVar4 = lVar4 + plVar1[1];
        uVar5 = uVar2 - 1;
        uVar6 = uVar2 & 7;
        if (uVar6 == 0) {
          lVar4 = lVar4 + uVar5;
        }
        else {
          do {
            *(char *)(lVar4 + -1 + uVar2) = (char)uVar3;
            uVar3 = uVar3 >> 8;
            uVar2 = uVar2 - 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          lVar4 = lVar4 + uVar2 + -1;
        }
        uVar6 = uVar3;
        if (6 < uVar5) {
          do {
            uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            uVar6 = 0;
            *(ulong *)(lVar4 + -7) = uVar3 >> 0x20 | uVar3 << 0x20;
            uVar2 = uVar2 - 8;
            lVar4 = lVar4 + -8;
            uVar3 = 0;
          } while (uVar2 != 0);
        }
        if (uVar6 != 0) {
          return 0;
        }
      }
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return 1;
      }
    }
  }
  return 0;
}


