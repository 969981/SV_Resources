/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00121e90; name: FUN_00121e90
 */


undefined8 FUN_00121e90(long param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 local_18 [8];
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        uVar2 = *(long *)(param_1 + 0x18) + 0x40;
        cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x00121f04;
      }
      plVar4 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar4[1] != '\x16') &&
         (lVar5 = *plVar4, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar5 + 10))) {
        lVar5 = lVar5 + (ulong)(~param_2 - 0xf4628) * 0x10;
        uVar2 = lVar5 + 0x20;
        cVar1 = *(char *)(lVar5 + 0x28);
        goto joined_r0x00121f04;
      }
      goto LAB_00121ec0;
    }
    uVar2 = *(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10;
  }
  else {
    uVar2 = **(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10;
    if (*(ulong *)(param_1 + 0x10) <= uVar2) {
LAB_00121ec0:
      uVar2 = *(long *)(param_1 + 0x18) + 0x50;
      cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x58);
      goto joined_r0x00121f04;
    }
  }
  cVar1 = *(char *)(uVar2 + 8);
joined_r0x00121f04:
  if (cVar1 == '\x13') {
    return 1;
  }
  uVar3 = FUN_0013fe10(uVar2,local_18);
  return uVar3;
}


