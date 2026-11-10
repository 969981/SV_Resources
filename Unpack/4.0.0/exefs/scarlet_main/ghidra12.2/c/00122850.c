/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00122850; name: FUN_00122850
 */


byte FUN_00122850(long param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_001228d4;
    }
    if (param_2 != 0xfff0b9d8) {
      plVar4 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar4[1] == '\x16') ||
         (lVar2 = *plVar4, (int)(uint)*(byte *)(lVar2 + 10) < (int)(-0xf4628 - param_2)))
      goto LAB_00122880;
      lVar2 = lVar2 + (ulong)(~param_2 - 0xf4628) * 0x10;
      puVar5 = (undefined8 *)(lVar2 + 0x20);
      cVar1 = *(char *)(lVar2 + 0x28);
      goto joined_r0x00122954;
    }
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
    cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x48);
joined_r0x001228c4:
    if (cVar1 != 'E') goto LAB_00122958;
LAB_001228e0:
    puVar3 = (undefined8 *)FUN_0013d560(*puVar5,*(long *)(param_1 + 0x10) + -0x10);
    if ((*(byte *)(puVar3 + 1) & 0xf) != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar2 + -0x10) = *puVar3;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar3 + 1);
      goto LAB_00122974;
    }
  }
  else {
    puVar5 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
LAB_001228d4:
      cVar1 = *(char *)(puVar5 + 1);
      goto joined_r0x001228c4;
    }
LAB_00122880:
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
    cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x58);
joined_r0x00122954:
    if (cVar1 == 'E') goto LAB_001228e0;
LAB_00122958:
    puVar3 = (undefined8 *)0x0;
  }
  lVar2 = *(long *)(param_1 + 0x10) + -0x10;
  FUN_001400d0(param_1,puVar5,lVar2,lVar2,puVar3);
LAB_00122974:
  return *(byte *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
}


