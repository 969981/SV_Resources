/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5ddd0; name: FUN_00c5ddd0
 */


undefined8
FUN_00c5ddd0(long param_1,uint param_2,int param_3,uint param_4,undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_40;
  int local_38;
  
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    if ((int)param_4 < 1) {
      lVar2 = *(long *)(param_1 + 0x10) + (long)(int)param_4 * 0x10;
    }
    else {
      lVar2 = **(long **)(param_1 + 0x20) + (ulong)param_4 * 0x10;
    }
    lVar2 = lVar2 - *(long *)(param_1 + 0x30);
  }
  local_40 = *(long *)(param_1 + 0x10) + (long)(int)~param_2 * 0x10;
  if ((param_6 == 0) || (0xffff < *(uint *)(param_1 + 0xb0))) {
    local_38 = param_3;
    uVar1 = FUN_001282b0(param_1,&LAB_001232d0,&local_40,local_40 - *(long *)(param_1 + 0x30),lVar2)
    ;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(long *)(lVar3 + 0x20) = param_6;
    *(undefined8 *)(lVar3 + 0x30) = param_5;
    *(int *)(lVar3 + 0x38) = (int)local_40 - *(int *)(param_1 + 0x30);
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa8) = lVar2;
    *(ushort *)(lVar3 + 0x3e) =
         *(ushort *)(lVar3 + 0x3e) & 0xfffe | (ushort)*(byte *)(param_1 + 0xb) | 0x10;
    FUN_00127d10(param_1,local_40,param_3);
    *(ushort *)(lVar3 + 0x3e) = *(ushort *)(lVar3 + 0x3e) & 0xffef;
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar3 + 0x28);
  }
  if (param_3 < 0) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
    }
  }
  return uVar1;
}


