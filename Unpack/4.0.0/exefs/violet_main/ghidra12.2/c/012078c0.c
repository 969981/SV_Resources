/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012078c0; name: FUN_012078c0
 */


void FUN_012078c0(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_0120792c;
    }
    if (param_2 == 0xfff0b9d8) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      goto LAB_0120792c;
    }
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar3[1] != '\x16') &&
       (lVar4 = *plVar3, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar4 + 10))) {
      puVar2 = (undefined8 *)(lVar4 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      goto LAB_0120792c;
    }
  }
  else {
    puVar2 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (puVar2 < *(undefined8 **)(param_1 + 0x10)) goto LAB_0120792c;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
LAB_0120792c:
  iVar1 = FUN_0013c2e0(param_1,*puVar2,*(long *)(param_1 + 0x10) + -0x10);
  lVar4 = 0x10;
  if (iVar1 == 0) {
    lVar4 = -0x10;
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar4;
  return;
}


