/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c41a10; name: FUN_00c41a10
 */


long FUN_00c41a10(long param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x00c41a7c;
      }
      plVar3 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar3[1] != '\x16') &&
         (lVar4 = *plVar3, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar4 + 10))) {
        lVar4 = lVar4 + (ulong)(~param_2 - 0xf4628) * 0x10;
        plVar3 = (long *)(lVar4 + 0x20);
        bVar1 = *(byte *)(lVar4 + 0x28);
        goto joined_r0x00c41a7c;
      }
      goto LAB_00c41a30;
    }
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
  }
  else {
    plVar3 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar3) {
LAB_00c41a30:
      plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
      bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x58);
      goto joined_r0x00c41a7c;
    }
  }
  bVar1 = *(byte *)(plVar3 + 1);
joined_r0x00c41a7c:
  if ((bVar1 & 0xf) == 2) {
    return *plVar3;
  }
  if ((bVar1 & 0xf) != 7) {
    return 0;
  }
  uVar2 = *(ushort *)(*plVar3 + 10);
  lVar4 = 0x20;
  if (uVar2 != 0) {
    lVar4 = (ulong)uVar2 * 0x10 + 0x28;
  }
  return *plVar3 + lVar4;
}


