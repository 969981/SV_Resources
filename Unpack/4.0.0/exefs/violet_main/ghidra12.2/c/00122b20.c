/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122b20; name: FUN_00122b20
 */


byte FUN_00122b20(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_00122b8c;
    }
    if (param_2 == 0xfff0b9d8) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      goto LAB_00122b8c;
    }
    plVar5 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar5[1] != '\x16') &&
       (lVar2 = *plVar5, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar2 + 10))) {
      puVar1 = (undefined8 *)(lVar2 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      goto LAB_00122b8c;
    }
  }
  else {
    puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) goto LAB_00122b8c;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
LAB_00122b8c:
  puVar1 = (undefined8 *)FUN_0013d560(*puVar1,*(long *)(param_1 + 0x10) + -0x10);
  lVar2 = *(long *)(param_1 + 0x10);
  puVar4 = (undefined8 *)(lVar2 + -0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  if ((*(byte *)(puVar1 + 1) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    *puVar4 = *puVar1;
    uVar3 = *(undefined1 *)(puVar1 + 1);
  }
  *(undefined1 *)(lVar2 + -8) = uVar3;
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2 + 0x10;
  return *(byte *)(lVar2 + 8) & 0xf;
}


