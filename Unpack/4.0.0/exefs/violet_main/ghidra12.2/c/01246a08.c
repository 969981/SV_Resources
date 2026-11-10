/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01246a08; name: FUN_01246a08
 */


void FUN_01246a08(long param_1,long *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) &&
     (*(undefined1 *)(param_2 + 0x15) = 0, *(char *)((long)param_2 + 0xa6) != '\0')) {
    plVar5 = (long *)*param_2;
    *(undefined1 *)(param_2 + 0x15) = 1;
    while (plVar5 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x10);
      uVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
      piVar3 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x290) + 8) + 0x50),
                                   uVar2);
      if (((piVar3 != (int *)0x0) && (*piVar3 == 1)) &&
         (uVar4 = (**(code **)(*plVar5 + 0x90))(plVar5,0x3fd,2), (uVar4 & 1) != 0)) {
        lVar6 = *(long *)(param_1 + 0x20);
        FUN_02e1dfe4(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 0x330),0);
        FUN_0129aff0(*(undefined8 *)(lVar6 + 0x18),0x87,3,0);
        FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc6,3,0);
        return;
      }
      bVar1 = *(byte *)(param_2 + 0x15);
      if (*(byte *)((long)param_2 + 0xa6) <= bVar1) {
        return;
      }
      *(byte *)(param_2 + 0x15) = bVar1 + 1;
      plVar5 = (long *)param_2[bVar1];
    }
  }
  return;
}


