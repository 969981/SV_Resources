/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5d9a0; name: FUN_00c5d9a0
 */


byte FUN_00c5d9a0(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_1 + 0x20);
        if (((char)plVar4[1] == '\x16') ||
           (lVar1 = *plVar4, (int)(uint)*(byte *)(lVar1 + 10) < (int)(-0xf4628 - param_2)))
        goto LAB_00c5d9d4;
        puVar3 = (undefined8 *)(lVar1 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      }
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    puVar3 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar3) {
LAB_00c5d9d4:
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
    }
  }
  lVar1 = FUN_0013c0f0(param_1,param_3);
  if (*(char *)(puVar3 + 1) == 'E') {
    puVar2 = (undefined8 *)FUN_0013d320(*puVar3,lVar1);
    if ((*(byte *)(puVar2 + 1) & 0xf) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      *puVar3 = *puVar2;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar2 + 1);
      lVar1 = *(long *)(param_1 + 0x10) + 0x10;
      *(long *)(param_1 + 0x10) = lVar1;
      goto LAB_00c5daa4;
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  *plVar4 = lVar1;
  *(byte *)(plVar4 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_001400d0(param_1,puVar3,lVar1,lVar1,puVar2);
  lVar1 = *(long *)(param_1 + 0x10);
LAB_00c5daa4:
  return *(byte *)(lVar1 + -8) & 0xf;
}


