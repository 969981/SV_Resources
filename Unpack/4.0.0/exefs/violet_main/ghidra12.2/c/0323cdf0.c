/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0323cdf0; name: FUN_0323cdf0
 */


void FUN_0323cdf0(long param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (0 < *(int *)(param_1 + 0x34)) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x38 + lVar4 * 8);
      if (*(int *)(lVar5 + 0x38) != 0) {
        (**(code **)(*(long *)(param_1 + -0x18) + 0x68))
                  ((long *)(param_1 + -0x18),*(undefined8 *)(lVar5 + 0x30),*(int *)(lVar5 + 0x38),8)
        ;
        *(undefined4 *)(lVar5 + 0x38) = 0;
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x34));
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x240);
  if (0 < (int)*(uint *)(param_1 + 0x240)) {
    lVar4 = 0;
    iVar3 = -1;
    do {
      iVar1 = (int)uVar2 + iVar3;
      iVar3 = iVar3 + -1;
      *(int *)(*(long *)(param_1 + 0x238) + lVar4 * 4) = iVar1;
      uVar2 = (ulong)*(int *)(param_1 + 0x240);
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)uVar2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_0323cd0c(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x348) = 0;
  return;
}


