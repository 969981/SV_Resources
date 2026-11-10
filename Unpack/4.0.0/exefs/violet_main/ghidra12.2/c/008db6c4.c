/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008db6c4; name: FUN_008db6c4
 */


void FUN_008db6c4(long param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  iVar5 = 0;
  if ((param_2 != 0) && (*(uint *)(param_2 + 8) != 0xffffffff)) {
    iVar5 = 0;
    piVar4 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    do {
      puVar1 = (uint *)(piVar4 + 3);
      if (*piVar4 == 0x54455345) {
        iVar5 = iVar5 + 1;
      }
      piVar2 = (int *)((long)piVar4 + (ulong)*puVar1);
      piVar4 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar4 = piVar2;
      }
    } while (piVar4 != (int *)0x0);
  }
  *(int *)(param_1 + 0x4c) = iVar5;
  pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                             (*(long **)(param_1 + 0x458),(long)iVar5 * 0x38,0x80);
  *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + (long)iVar5 * 0x38;
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  *(void **)(param_1 + 0x58) = pvVar3;
  memset(pvVar3,0,(long)*(int *)(param_1 + 0x4c) * 0x38);
  lVar6 = (long)*(int *)(param_1 + 0x4c) * 8;
  pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                             (*(long **)(param_1 + 0x458),lVar6,0x80);
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + lVar6;
  *(void **)(param_1 + 0x60) = pvVar3;
  memset(pvVar3,0,(long)*(int *)(param_1 + 0x4c) << 3);
  if ((param_2 != 0) && (*(uint *)(param_2 + 8) != 0xffffffff)) {
    piVar4 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    do {
      if (*piVar4 == 0x54455345) {
        if (piVar4 == (int *)0x0) {
          return;
        }
        uVar7 = 0;
        do {
          *(int **)(*(long *)(param_1 + 0x58) + uVar7 * 0x38 + 8) = piVar4;
          FUN_008dbb94(param_1,*(long *)(param_1 + 0x58) + uVar7 * 0x38,param_3);
          puVar1 = (uint *)(piVar4 + 3);
          piVar2 = (int *)((long)piVar4 + (ulong)*puVar1);
          uVar7 = (ulong)((int)uVar7 + 1);
          piVar4 = (int *)0x0;
          if (*puVar1 != 0xffffffff) {
            piVar4 = piVar2;
          }
        } while (piVar4 != (int *)0x0);
        return;
      }
      puVar1 = (uint *)(piVar4 + 3);
      piVar2 = (int *)((long)piVar4 + (ulong)*puVar1);
      piVar4 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar4 = piVar2;
      }
    } while (piVar4 != (int *)0x0);
  }
  return;
}


