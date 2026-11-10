/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c646d0; name: FUN_00c646d0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00c646d0(long param_1,uint param_2,ulong *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_00c64768;
    }
    if (param_2 == 0xfff0b9d8) {
      plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x48);
    }
    else {
      plVar4 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar4[1] == '\x16') ||
         (lVar2 = *plVar4, (int)(uint)*(byte *)(lVar2 + 10) < (int)(-0xf4628 - param_2)))
      goto LAB_00c6470c;
      lVar2 = lVar2 + (ulong)(~param_2 - 0xf4628) * 0x10;
      plVar4 = (long *)(lVar2 + 0x20);
      bVar1 = *(byte *)(lVar2 + 0x28);
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (plVar4 < *(long **)(param_1 + 0x10)) {
LAB_00c64768:
      bVar1 = *(byte *)(plVar4 + 1);
    }
    else {
LAB_00c6470c:
      plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
      bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x58);
    }
  }
  if ((bVar1 & 0xf) != 3) {
    if ((bVar1 & 0xf) != 4) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = 0;
      }
      return 0;
    }
    goto joined_r0x00c648d4;
  }
  FUN_0012dfb0(param_1);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0012ac30(param_1);
  }
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto joined_r0x00c648d4;
    }
    if (param_2 == 0xfff0b9d8) {
      plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      goto joined_r0x00c648d4;
    }
    plVar4 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar4[1] != '\x16') &&
       (lVar2 = *plVar4, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar2 + 10))) {
      plVar4 = (long *)(lVar2 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      goto joined_r0x00c648d4;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (plVar4 < *(long **)(param_1 + 0x10)) goto joined_r0x00c648d4;
  }
  plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
joined_r0x00c648d4:
  if (param_3 != (ulong *)0x0) {
    lVar2 = *plVar4;
    if (*(char *)(lVar2 + 8) == '\x04') {
      uVar3 = (ulong)*(byte *)(lVar2 + 0xb);
    }
    else {
      uVar3 = *(ulong *)(lVar2 + 0x10);
    }
    *param_3 = uVar3;
  }
  return *plVar4 + 0x18;
}


