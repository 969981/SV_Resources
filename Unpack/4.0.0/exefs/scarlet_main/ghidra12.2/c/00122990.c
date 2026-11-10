/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00122990; name: FUN_00122990
 */


byte FUN_00122990(long param_1,uint param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long local_40;
  undefined1 local_38;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      plVar6 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_00122a20;
    }
    if (param_2 != 0xfff0b9d8) {
      plVar6 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar6[1] == '\x16') ||
         (lVar5 = *plVar6, (int)(uint)*(byte *)(lVar5 + 10) < (int)(-0xf4628 - param_2)))
      goto LAB_001229cc;
      lVar5 = lVar5 + (ulong)(~param_2 - 0xf4628) * 0x10;
      plVar6 = (long *)(lVar5 + 0x20);
      cVar1 = *(char *)(lVar5 + 0x28);
      goto joined_r0x00122ac4;
    }
    plVar6 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x48);
joined_r0x00122a10:
    if (cVar1 == 'E') goto LAB_00122a2c;
LAB_00122ac8:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    plVar6 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (plVar6 < *(long **)(param_1 + 0x10)) {
LAB_00122a20:
      cVar1 = (char)plVar6[1];
      goto joined_r0x00122a10;
    }
LAB_001229cc:
    plVar6 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
    cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x58);
joined_r0x00122ac4:
    if (cVar1 != 'E') goto LAB_00122ac8;
LAB_00122a2c:
    lVar5 = *plVar6;
    if (param_3 - 1U < (ulong)*(uint *)(lVar5 + 0xc)) {
      puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x10) + (param_3 - 1U) * 0x10);
      bVar2 = *(byte *)(puVar3 + 1);
    }
    else {
      puVar3 = (undefined8 *)FUN_0013d200(lVar5,param_3);
      bVar2 = *(byte *)(puVar3 + 1);
    }
    if ((bVar2 & 0xf) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x10);
      *puVar4 = *puVar3;
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar3 + 1);
      goto LAB_00122aec;
    }
  }
  local_38 = 3;
  local_40 = param_3;
  FUN_001400d0(param_1,plVar6,&local_40,*(undefined8 *)(param_1 + 0x10),puVar3);
LAB_00122aec:
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + 0x10;
  return *(byte *)(lVar5 + 8) & 0xf;
}


