/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ef3e8; name: FUN_004ef3e8
 */


long FUN_004ef3e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    lVar5 = (ulong)*(ushort *)(param_1 + 10) << 5;
    if ((ulong)*(ushort *)(param_1 + 10) != 0) {
      lVar2 = *(long *)(param_1 + 0x10) + 8;
      lVar6 = lVar5;
      do {
        lVar1 = FUN_004ef4b4(lVar2);
        lVar5 = lVar5 + lVar1;
        lVar6 = lVar6 + -0x20;
        lVar2 = lVar2 + 0x20;
      } while (lVar6 != 0);
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    lVar5 = puVar3[2] << 5;
    plVar7 = (long *)*puVar3;
    while (plVar7 != puVar3 + 1) {
      lVar2 = FUN_004ef4b4(plVar7 + 5);
      lVar5 = lVar5 + lVar2;
      plVar4 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar4 = plVar7 + 2;
        if (*(long **)*plVar4 == plVar7) {
          plVar7 = (long *)*plVar4;
        }
        else {
          do {
            lVar2 = *plVar4;
            plVar4 = (long *)(lVar2 + 0x10);
            plVar7 = (long *)*plVar4;
          } while (*plVar7 != lVar2);
        }
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
  }
  return lVar5;
}


