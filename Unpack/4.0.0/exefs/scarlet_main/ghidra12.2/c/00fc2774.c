/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fc2774; name: FUN_00fc2774
 */


long * FUN_00fc2774(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != lVar3) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (param_1[4] == 0) {
LAB_00fc27cc:
        std::string::resize(lVar3 + lVar4 + 8,'\0');
        lVar3 = *param_1;
        lVar2 = param_1[1];
      }
      else {
        uVar1 = *(uint *)(lVar3 + lVar4);
        if (((int)uVar1 < 0) ||
           ((*(ulong *)(param_1[3] + ((ulong)(uVar1 >> 3) & 0x1ffffff8)) >> ((ulong)uVar1 & 0x3f) &
            1) == 0)) goto LAB_00fc27cc;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x78;
    } while (uVar5 < (ulong)((lVar2 - lVar3 >> 3) * -0x1111111111111111));
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  if ((param_1[4] != 0) && (0 < (int)*(uint *)(param_1 + 7))) {
    uVar5 = 0;
    do {
      if ((*(ulong *)(param_1[3] + (uVar5 >> 3 & 0x1ffffffffffffff8)) >> (uVar5 & 0x3f) & 1) == 0) {
        return param_1;
      }
      uVar5 = uVar5 + 1;
      *(int *)((long)param_1 + 0x34) = (int)uVar5;
    } while (*(uint *)(param_1 + 7) != uVar5);
  }
  return param_1;
}


