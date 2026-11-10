/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d341e0; name: FUN_00d341e0
 */


void FUN_00d341e0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      puVar2 = puVar1 + (long)(int)param_2 * 2;
      goto LAB_00d34238;
    }
    if (param_2 == 0xfff0b9d8) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      goto LAB_00d34238;
    }
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar3[1] != '\x16') &&
       (lVar4 = *plVar3, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar4 + 10))) {
      puVar2 = (undefined8 *)(lVar4 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      goto LAB_00d34238;
    }
  }
  else {
    puVar2 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (puVar2 < puVar1) goto LAB_00d34238;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
LAB_00d34238:
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


