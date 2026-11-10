/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a957c; name: FUN_034a957c
 */


int FUN_034a957c(long param_1,long param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  
  if ((param_3 & 1) != 0) {
    uVar1 = *(ushort *)(param_2 + 0x24);
    uVar4 = FUN_034abe20(param_1);
    lVar5 = *(long *)(param_1 + 0x90);
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x90) = *(short *)(lVar5 + 0x90) + 1, (uVar1 & 1) != 0))
    {
      *(short *)(lVar5 + 0x92) = *(short *)(lVar5 + 0x92) + 1;
    }
    if ((uVar4 & 1) == 0) {
      bVar6 = *(byte *)(param_2 + 0x28);
      iVar2 = 2;
      goto LAB_034a9648;
    }
  }
  if (*(char *)(param_2 + 0x28) == '\0') {
    if ((*(long *)(param_1 + 0x90) == 0) || ((*(byte *)(*(long *)(param_1 + 0x90) + 0x98) & 1) != 0)
       ) {
      if ((param_4 & 1) == 0) {
        iVar2 = FUN_034b0124(param_1,param_2,param_3 & 1);
      }
      else {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = FUN_034b03d4(param_1,param_2,param_3 & 1);
    }
    bVar6 = (byte)((uint)*(undefined4 *)(param_1 + 0xda) >> 0x1c) & 1;
    *(byte *)(param_2 + 0x28) = bVar6;
  }
  else {
    bVar6 = 1;
    iVar2 = 1;
  }
LAB_034a9648:
  if (((*(ushort *)(param_2 + 0x24) & 1) != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
    *(ushort *)(param_2 + 0x24) = *(ushort *)(param_2 + 0x24) & 0xfffe;
    *(undefined1 *)(param_2 + 0x28) = 0;
    iVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x118))
                      (*(long **)(param_1 + 0xa0),param_2,param_3 & 1,param_4 & 1);
    if (iVar3 != 1) {
      if (iVar3 == 0x50) {
        iVar3 = 0x50;
        if (iVar2 != 1) {
          iVar3 = iVar2;
        }
        iVar2 = iVar3;
      }
      else {
        iVar2 = iVar3;
      }
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(byte *)(param_2 + 0x28) = bVar6;
    *(long *)(param_2 + 0x10) = param_1;
    iVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0x118))
                      (*(long **)(param_1 + 0x98),param_2,param_3 & 1,param_4 & 1);
    if (iVar3 != 1) {
      if (iVar3 == 0x50) {
        iVar3 = 0x50;
        if (iVar2 != 1) {
          iVar3 = iVar2;
        }
        iVar2 = iVar3;
      }
      else {
        iVar2 = iVar3;
      }
    }
  }
  return iVar2;
}


