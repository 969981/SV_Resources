/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00123640; name: FUN_00123640
 */


/* WARNING: Type propagation algorithm not settling */

char * FUN_00123640(long param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x001236fc;
      }
      plVar4 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar4[1] != '\x16') &&
         (lVar3 = *plVar4, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar3 + 10))) {
        lVar3 = lVar3 + (ulong)(~param_2 - 0xf4628) * 0x10;
        plVar4 = (long *)(lVar3 + 0x20);
        bVar1 = *(byte *)(lVar3 + 0x28);
        goto joined_r0x001236fc;
      }
      goto LAB_0012366c;
    }
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
  }
  else {
    plVar4 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar4) {
LAB_0012366c:
      plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
      bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x58);
      goto joined_r0x001236fc;
    }
  }
  bVar1 = *(byte *)(plVar4 + 1);
joined_r0x001236fc:
  if ((bVar1 & 0x3f) == 6) {
    uVar2 = param_3 - 1;
    lVar5 = *(long *)(*plVar4 + 0x18);
    if (*(uint *)(lVar5 + 0x10) <= uVar2) {
      return (char *)0x0;
    }
    lVar3 = *(long *)(*plVar4 + (long)(int)uVar2 * 8 + 0x20);
    lVar5 = *(long *)(*(long *)(lVar5 + 0x50) +
                     (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4));
    plVar4 = *(long **)(lVar3 + 0x10);
    pcVar7 = "(no name)";
    if (lVar5 != 0) {
      pcVar7 = (char *)(lVar5 + 0x18);
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0x26) {
      return (char *)0x0;
    }
    lVar3 = *plVar4;
    if ((uint)*(byte *)(lVar3 + 10) <= param_3 - 1U) {
      return (char *)0x0;
    }
    plVar4 = (long *)(lVar3 + (long)(int)(param_3 - 1U) * 0x10 + 0x20);
    pcVar7 = "";
  }
  lVar6 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar6 + -0x10;
  lVar5 = *(long *)(lVar6 + -0x10);
  *plVar4 = lVar5;
  bVar1 = *(byte *)(lVar6 + -8);
  *(byte *)(plVar4 + 1) = bVar1;
  if ((((bVar1 >> 6 & 1) == 0) || ((*(byte *)(lVar3 + 9) >> 5 & 1) == 0)) ||
     ((*(byte *)(lVar5 + 9) & 0x18) == 0)) {
    return pcVar7;
  }
  FUN_00129d70();
  return pcVar7;
}


