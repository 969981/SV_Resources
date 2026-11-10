/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03473890; name: FUN_03473890
 */


int FUN_03473890(long param_1,long param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  
  if ((param_3 & 1) == 0) {
    iVar4 = 1;
  }
  else {
    uVar2 = FUN_034abe20(param_1);
    lVar5 = *(long *)(param_1 + 0x90);
    if (lVar5 != 0) {
      *(short *)(lVar5 + 0x90) = *(short *)(lVar5 + 0x90) + 1;
      *(short *)(lVar5 + 0x92) = *(short *)(lVar5 + 0x92) + 1;
    }
    iVar4 = 1;
    if ((uVar2 & 1) == 0) {
      iVar4 = 2;
    }
  }
  if (((param_4 & 1) == 0) && (*(char *)(param_2 + 0x28) == '\0')) {
    FUN_034b0124(param_1,param_2,param_3 & 1);
    *(byte *)(param_2 + 0x28) = (byte)((uint)*(undefined4 *)(param_1 + 0xda) >> 0x1c) & 1;
  }
  plVar3 = *(long **)(param_1 + 0xa0);
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (**(code **)(*plVar3 + 0x118))(plVar3,param_2,param_3 & 1,param_4 & 1), iVar1 != 1)) {
    if (iVar1 == 0x50) {
      iVar1 = 0x50;
      if (iVar4 != 1) {
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
    }
    else {
      iVar4 = iVar1;
    }
  }
  if ((*(long *)(param_1 + 0x90) != 0) && (*(short *)(*(long *)(param_1 + 0x90) + 0x90) == 1)) {
    *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xf8 | 1;
    FUN_03473774(param_1);
  }
  return iVar4;
}


