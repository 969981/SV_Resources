/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5fc50; name: FUN_00c5fc50
 */


byte FUN_00c5fc50(long param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_00c5fcbc;
    }
    if (param_2 == 0xfff0b9d8) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      goto LAB_00c5fcbc;
    }
    plVar5 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar5[1] != '\x16') &&
       (lVar3 = *plVar5, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar3 + 10))) {
      puVar1 = (undefined8 *)(lVar3 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      goto LAB_00c5fcbc;
    }
  }
  else {
    puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) goto LAB_00c5fcbc;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
LAB_00c5fcbc:
  puVar1 = (undefined8 *)FUN_0013d200(*puVar1,param_3);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((*(byte *)(puVar1 + 1) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    *puVar2 = *puVar1;
    uVar4 = *(undefined1 *)(puVar1 + 1);
  }
  *(undefined1 *)(puVar2 + 1) = uVar4;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  return *(byte *)(lVar3 + 8) & 0xf;
}


