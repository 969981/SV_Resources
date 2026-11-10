/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f0d14; name: FUN_007f0d14
 */


ulong FUN_007f0d14(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long local_38;
  
  local_38 = 0;
  FUN_007935cc(&local_38);
  lVar2 = local_38;
  puVar1 = PTR_DAT_047d0860;
  if (*(short *)(*(long *)PTR_DAT_047d0860 + 0x50) != 0) {
    uVar8 = 0;
    iVar7 = -1;
    do {
      if (*(long *)(*(long *)(param_1 + 0x40) + uVar8 * 8) != 0) {
        plVar5 = (long *)FUN_01f7c4e8();
        lVar6 = (**(code **)(*plVar5 + 0x38))
                          (plVar5,*(undefined8 *)(*(long *)(param_1 + 0x40) + uVar8 * 8));
        if (lVar6 != 0) {
          uVar3 = FUN_007f452c();
          iVar4 = FUN_007f44bc(lVar6,uVar3);
          if (iVar4 <= iVar7) {
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(*(long *)puVar1 + 0x50));
    if (-1 < iVar7) {
      return *(long *)(param_1 + 0x80) + lVar2 +
             (*(long *)PTR_DAT_047d0970 * (long)(int)((float)iVar7 * 1.4)) / 1000;
    }
  }
  return (ulong)*(ushort *)(param_1 + 0x5c);
}


