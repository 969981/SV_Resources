/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00126ce0; name: FUN_00126ce0
 */


undefined8 FUN_00126ce0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *__dest;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  int iVar10;
  
  lVar6 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar1 = param_2 + 5;
  __dest = (void *)FUN_0012d700(param_1,0,0,
                                -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4);
  if (__dest == (void *)0x0) {
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00126bd0(param_1,4);
    }
    uVar4 = 0;
  }
  else {
    uVar9 = lVar6 - lVar5;
    iVar10 = (int)(uVar9 >> 4);
    iVar3 = param_2;
    if (iVar10 <= param_2) {
      iVar3 = iVar10;
    }
    uVar2 = iVar3 + 5;
    memcpy(__dest,*(void **)(param_1 + 0x30),
           -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4);
    if (iVar10 < param_2) {
      lVar6 = (long)(int)uVar2;
      puVar8 = (undefined1 *)((long)__dest + lVar6 * 0x10 + 8);
      do {
        lVar6 = lVar6 + 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 0x10;
      } while (lVar6 < (int)uVar1);
    }
    lVar5 = *(long *)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x10) = (long)__dest + (*(long *)(param_1 + 0x10) - lVar5);
    *(long *)(param_1 + 0x40) = (long)__dest + (*(long *)(param_1 + 0x40) - lVar5);
    for (; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x18)) {
      *(long *)(lVar6 + 0x10) = (long)__dest + (*(long *)(lVar6 + 0x10) - lVar5);
    }
    for (plVar7 = *(long **)(param_1 + 0x20); plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
      plVar7[1] = (long)__dest + (plVar7[1] - lVar5);
      *plVar7 = (long)__dest + (*plVar7 - lVar5);
      if ((*(byte *)((long)plVar7 + 0x3e) >> 1 & 1) == 0) {
        *(undefined4 *)(plVar7 + 5) = 1;
      }
    }
    FUN_0012d6c0(param_1,*(undefined8 *)(param_1 + 0x30),
                 ((long)(uVar9 * 0x10000000 + 0x500000000) >> 0x20) << 4);
    uVar4 = 1;
    *(void **)(param_1 + 0x28) = (void *)((long)__dest + (long)param_2 * 0x10);
    *(void **)(param_1 + 0x30) = __dest;
  }
  return uVar4;
}


