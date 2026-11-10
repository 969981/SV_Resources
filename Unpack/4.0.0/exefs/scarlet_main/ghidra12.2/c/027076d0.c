/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027076d0; name: FUN_027076d0
 */


void FUN_027076d0(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_30;
  undefined1 local_28;
  
  local_28 = 2;
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_0270774c;
    }
    if (param_2 == 0xfff0b9d8) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      goto LAB_0270774c;
    }
    plVar2 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar2[1] != '\x16') &&
       (lVar1 = *plVar2, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar1 + 10))) {
      plVar2 = (long *)(lVar1 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      goto LAB_0270774c;
    }
  }
  else {
    plVar2 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (plVar2 < *(long **)(param_1 + 0x10)) goto LAB_0270774c;
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
LAB_0270774c:
  lVar3 = *plVar2;
  local_30 = param_3;
  FUN_0013cfe0(param_1,lVar3,&local_30,*(long *)(param_1 + 0x10) + -0x10);
  *(byte *)(lVar3 + 10) = *(byte *)(lVar3 + 10) & 0xc0;
  lVar1 = *(long *)(param_1 + 0x10);
  if ((((*(byte *)(lVar1 + -8) >> 6 & 1) != 0) && ((*(byte *)(lVar3 + 9) >> 5 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar1 + -0x10) + 9) & 0x18) != 0)) {
    FUN_00129f00(param_1,lVar3);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar1 + -0x10;
  return;
}


