/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fff24; name: FUN_007fff24
 */


void FUN_007fff24(long param_1,undefined8 param_2,void *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  void *__dest;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_0080147c(*(undefined8 *)(param_1 + 0x1308));
  if ((((puVar4 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x1320) != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x1328), iVar2 != 0)) && (param_4 < 0x5c1)) {
    iVar1 = *(int *)(param_1 + 0x132c) + 1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    if (iVar1 - iVar3 * iVar2 != *(int *)(param_1 + 0x1330)) {
      __dest = (void *)(*(long *)(param_1 + 0x1320) + (long)*(int *)(param_1 + 0x132c) * 0x5d0);
      uVar5 = *puVar4;
      memcpy(__dest,param_3,(ulong)param_4);
      *(uint *)((long)__dest + 0x5c0) = param_4;
      *(undefined8 *)((long)__dest + 0x5c8) = uVar5;
      iVar1 = *(int *)(param_1 + 0x1328);
      iVar2 = *(int *)(param_1 + 0x132c) + 1;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar2 / iVar1;
      }
      *(int *)(param_1 + 0x132c) = iVar2 - iVar3 * iVar1;
    }
  }
  return;
}


