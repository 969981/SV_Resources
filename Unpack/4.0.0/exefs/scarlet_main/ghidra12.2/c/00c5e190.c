/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5e190; name: FUN_00c5e190
 */


undefined8 FUN_00c5e190(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_00c5e220;
    }
    if (param_2 != 0xfff0b9d8) {
      plVar5 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar5[1] == '\x16') ||
         (lVar3 = *plVar5, (int)(uint)*(byte *)(lVar3 + 10) < (int)(-0xf4628 - param_2)))
      goto LAB_00c5e1c4;
      plVar5 = (long *)(lVar3 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      lVar3 = *(long *)(param_1 + 0x10);
      bVar1 = *(byte *)(lVar3 + -8);
      goto joined_r0x00c5e2ac;
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    lVar3 = *(long *)(param_1 + 0x10);
    bVar1 = *(byte *)(lVar3 + -8);
joined_r0x00c5e210:
    if ((bVar1 & 0xf) != 0) goto LAB_00c5e230;
LAB_00c5e2b0:
    lVar3 = 0;
    uVar4 = (ulong)*(byte *)(plVar5 + 1) & 0xf;
    if ((int)uVar4 != 7) goto LAB_00c5e244;
LAB_00c5e2c4:
    *(long *)(*plVar5 + 0x18) = lVar3;
  }
  else {
    plVar5 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (plVar5 < *(long **)(param_1 + 0x10)) {
LAB_00c5e220:
      lVar3 = *(long *)(param_1 + 0x10);
      bVar1 = *(byte *)(lVar3 + -8);
      goto joined_r0x00c5e210;
    }
LAB_00c5e1c4:
    plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
    lVar3 = *(long *)(param_1 + 0x10);
    bVar1 = *(byte *)(lVar3 + -8);
joined_r0x00c5e2ac:
    if ((bVar1 & 0xf) == 0) goto LAB_00c5e2b0;
LAB_00c5e230:
    lVar3 = *(long *)(lVar3 + -0x10);
    uVar4 = (ulong)*(byte *)(plVar5 + 1) & 0xf;
    if ((int)uVar4 == 7) goto LAB_00c5e2c4;
LAB_00c5e244:
    if ((int)uVar4 != 5) {
      *(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8 + 0x1e0) = lVar3;
      goto LAB_00c5e304;
    }
    *(long *)(*plVar5 + 0x28) = lVar3;
  }
  if (lVar3 != 0) {
    lVar2 = *plVar5;
    if (((*(byte *)(lVar2 + 9) >> 5 & 1) != 0) && ((*(byte *)(lVar3 + 9) & 0x18) != 0)) {
      FUN_00129d70(param_1,lVar2,lVar3);
      lVar2 = *plVar5;
    }
    FUN_0012a020(param_1,lVar2,lVar3);
  }
LAB_00c5e304:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return 1;
}


