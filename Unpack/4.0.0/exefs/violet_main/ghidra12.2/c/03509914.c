/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03509914; name: FUN_03509914
 */


undefined8 FUN_03509914(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  plVar3 = *(long **)(param_1 + 0x118);
  if ((*(byte *)(plVar3 + 4) & 1) == 0) {
    iVar2 = (**(code **)(*plVar3 + 0x68))
                      (plVar3,*(undefined8 *)(plVar3[3] + 0x2e0),*(undefined4 *)(plVar3[3] + 0x2e8))
    ;
    if (iVar2 == 0x3f) {
      if (-1 < *(int *)(param_2 + 0x2d8)) {
        return 0x3f;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x118) + 0x20) >> 1 & 1) != 0) {
        return 0x3f;
      }
      *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 1;
      lVar1 = 0;
      if (*(long *)(param_1 + 8) != 0) {
        lVar1 = *(long *)(param_1 + 8) + -0x18;
      }
      FUN_034b3ef0(*(undefined8 *)PTR_DAT_047e6f38,*(undefined4 *)(lVar1 + 0x228),
                   *(undefined4 *)(*(long *)(lVar1 + 0x188) + 0x18));
      return 0x3f;
    }
    if (iVar2 != 1) {
      return 2;
    }
    *(byte *)(plVar3 + 4) = *(byte *)(plVar3 + 4) | 1;
  }
  fVar4 = *(float *)(param_2 + 0x264) *
          (float)((uint)*(ushort *)PTR_DAT_047e6d08 * (*(int *)(PTR_DAT_047e6ce8 + 0x14) + 1));
  fVar5 = 0.5;
  if (fVar4 <= 0.0) {
    fVar5 = -0.5;
  }
  if ((int)(fVar5 + fVar4) <= *(int *)(param_2 + 0x2d8)) {
    return 0x3f;
  }
  if ((*(int *)(param_2 + 0x2d8) < 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x118) + 0x20) >> 1 & 1) == 0)) {
    *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 1;
    lVar1 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      lVar1 = *(long *)(param_1 + 8) + -0x18;
    }
    FUN_034b3ef0(*(undefined8 *)PTR_DAT_047e6f38,*(undefined4 *)(lVar1 + 0x228),
                 *(undefined4 *)(*(long *)(lVar1 + 0x188) + 0x18));
  }
  return 1;
}


