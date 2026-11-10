/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122550; name: FUN_00122550
 */


undefined8 FUN_00122550(long param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
        cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x001225b4;
      }
      plVar3 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar3[1] != '\x16') &&
         (lVar4 = *plVar3, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar4 + 10))) {
        lVar4 = lVar4 + (ulong)(~param_2 - 0xf4628) * 0x10;
        puVar2 = (undefined8 *)(lVar4 + 0x20);
        cVar1 = *(char *)(lVar4 + 0x28);
        goto joined_r0x001225b4;
      }
      goto LAB_00122570;
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
  }
  else {
    puVar2 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar2) {
LAB_00122570:
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
      cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x58);
      goto joined_r0x001225b4;
    }
  }
  cVar1 = *(char *)(puVar2 + 1);
joined_r0x001225b4:
  if (cVar1 == 'H') {
    return *puVar2;
  }
  return 0;
}


