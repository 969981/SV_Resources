/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021da7d0; name: FUN_021da7d0
 */


void FUN_021da7d0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong *puVar3;
  long *plVar4;
  
  puVar3 = (ulong *)FUN_021dad50();
  do {
    plVar4 = (long *)FUN_021dad60();
    uVar2 = FUN_021dad80(puVar3);
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
    if ((*(byte *)((long)puVar3 + 0xc) >> 2 & 1) != 0) {
      *(int *)*param_2 = *(int *)*param_2 + 1;
      return;
    }
    lVar1 = *puVar3 + 0x18;
    if (*puVar3 < 0x11) {
      lVar1 = 0x28;
    }
    puVar3 = (ulong *)((long)puVar3 + lVar1);
    *(int *)*param_2 = *(int *)*param_2 + 1;
  } while (lVar1 != 0);
  return;
}


