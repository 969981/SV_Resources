/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028995b0; name: FUN_028995b0
 */


undefined8 FUN_028995b0(long param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_30;
  undefined4 local_28;
  
  if (param_2 != (long *)0x0) {
    local_28 = 0;
    local_30 = 0x40;
    (**(code **)(*param_2 + 0x50))(param_2,&local_30);
    uVar1 = *(ushort *)(param_1 + 0x14);
    if ((uVar1 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 8);
      lVar6 = (**(code **)(*param_2 + 0x38))(param_2);
      if (lVar9 != lVar6) {
        return 0;
      }
      uVar1 = *(ushort *)(param_1 + 0x14);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
      if (uVar1 < *(ushort *)(param_1 + 0x12)) {
        return 0;
      }
      uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
      if (*(ushort *)(param_1 + 0x10) < uVar1) {
        return 0;
      }
      uVar1 = *(ushort *)(param_1 + 0x14);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar7 = (**(code **)(*param_2 + 0x10))(param_2);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar1 = *(ushort *)(param_1 + 0x14);
    }
    if ((uVar1 >> 3 & 1) == 0) {
      return 1;
    }
    sVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    sVar3 = (**(code **)(*param_2 + 0x20))(param_2);
    if (sVar2 != sVar3) {
      lVar6 = *(long *)PTR_DAT_047d0a08;
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x459) == '\0')) {
        uVar8 = 1;
      }
      else {
        uVar8 = (uint)*(byte *)(lVar6 + 0x458);
      }
      uVar4 = (**(code **)(*param_2 + 0x28))(param_2);
      uVar5 = (**(code **)(*param_2 + 0x20))(param_2);
      if (uVar8 + (uVar4 & 0xffff) <= (uVar5 & 0xffff)) {
        return 1;
      }
    }
  }
  return 0;
}


