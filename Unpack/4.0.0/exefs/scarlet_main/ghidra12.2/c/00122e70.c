/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00122e70; name: FUN_00122e70
 */


void FUN_00122e70(long param_1,uint param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long local_40;
  undefined1 local_38;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_00122f00;
    }
    if (param_2 != 0xfff0b9d8) {
      plVar5 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar5[1] == '\x16') ||
         (lVar3 = *plVar5, (int)(uint)*(byte *)(lVar3 + 10) < (int)(-0xf4628 - param_2)))
      goto LAB_00122eac;
      lVar3 = lVar3 + (ulong)(~param_2 - 0xf4628) * 0x10;
      plVar5 = (long *)(lVar3 + 0x20);
      cVar1 = *(char *)(lVar3 + 0x28);
      goto joined_r0x00122fd4;
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x48);
joined_r0x00122ef0:
    if (cVar1 == 'E') goto LAB_00122f0c;
LAB_00122fd8:
    puVar4 = (undefined8 *)0x0;
  }
  else {
    plVar5 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (plVar5 < *(long **)(param_1 + 0x10)) {
LAB_00122f00:
      cVar1 = (char)plVar5[1];
      goto joined_r0x00122ef0;
    }
LAB_00122eac:
    plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
    cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x58);
joined_r0x00122fd4:
    if (cVar1 != 'E') goto LAB_00122fd8;
LAB_00122f0c:
    lVar3 = *plVar5;
    if (param_3 - 1U < (ulong)*(uint *)(lVar3 + 0xc)) {
      puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x10) + (param_3 - 1U) * 0x10);
      bVar2 = *(byte *)(puVar4 + 1);
    }
    else {
      puVar4 = (undefined8 *)FUN_0013d200(lVar3,param_3);
      bVar2 = *(byte *)(puVar4 + 1);
    }
    if ((bVar2 & 0xf) != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      *puVar4 = *(undefined8 *)(lVar3 + -0x10);
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(lVar3 + -8);
      if ((((*(byte *)(*(long *)(param_1 + 0x10) + -8) >> 6 & 1) != 0) &&
          ((*(byte *)(*plVar5 + 9) >> 5 & 1) != 0)) &&
         ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 9) & 0x18) != 0)) {
        FUN_00129f00(param_1);
      }
      goto LAB_00123000;
    }
  }
  local_38 = 3;
  local_40 = param_3;
  FUN_00140220(param_1,plVar5,&local_40,*(long *)(param_1 + 0x10) + -0x10,puVar4);
LAB_00123000:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return;
}


