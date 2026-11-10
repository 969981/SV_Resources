/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350bb5c; name: FUN_0350bb5c
 */


void FUN_0350bb5c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x118) + 0x18);
  if (((*(byte *)((long)plVar3 + 10) >> 4 & 1) != 0) && (*(int *)(param_2 + 0x1c) != -1)) {
    FUN_034b4848(*(undefined8 *)PTR_DAT_047e6988,(int)plVar3[0x45]);
  }
  uVar1 = (**(code **)(*plVar3 + 0xc0))(plVar3);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < *(ushort *)(param_2 + 0x12)) {
      *(short *)(param_2 + 0x12) = (short)uVar1;
    }
    *(undefined4 *)(param_1 + 0x130) = 2;
  }
  plVar3 = *(long **)(param_1 + 0x120);
  if ((plVar3 != (long *)0x0) && ((*(byte *)(plVar3 + 4) & 1) == 0)) {
    iVar2 = (**(code **)(*plVar3 + 0x68))
                      (plVar3,*(undefined8 *)(plVar3[3] + 0x2e0),*(undefined4 *)(plVar3[3] + 0x2e8))
    ;
    if (iVar2 == 2) {
      *(undefined4 *)(param_2 + 0x2c) = 2;
    }
    else if (iVar2 == 1) {
      *(byte *)(plVar3 + 4) = *(byte *)(plVar3 + 4) | 1;
    }
  }
  return;
}


