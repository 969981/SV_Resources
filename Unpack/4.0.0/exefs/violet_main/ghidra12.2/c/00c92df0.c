/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c92df0; name: FUN_00c92df0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c92df0(long param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_8;
  
  local_8 = 0;
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_00c92e7c;
    }
    if (param_2 == 0xfff0b9d8) {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x48);
      goto joined_r0x00c92e6c;
    }
    plVar4 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar4[1] != '\x16') &&
       (lVar5 = *plVar4, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar5 + 10))) {
      lVar5 = lVar5 + (ulong)(~param_2 - 0xf4628) * 0x10;
      puVar3 = (undefined8 *)(lVar5 + 0x20);
      cVar1 = *(char *)(lVar5 + 0x28);
      goto joined_r0x00c92e6c;
    }
  }
  else {
    puVar3 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
LAB_00c92e7c:
      cVar1 = *(char *)(puVar3 + 1);
      goto joined_r0x00c92e6c;
    }
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
  cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x58);
joined_r0x00c92e6c:
  if (cVar1 == '\x03') {
    local_8 = *puVar3;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_0013ffb0(puVar3,&local_8,0);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return local_8;
}


