/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172b8a0; name: FUN_0172b8a0
 */


void FUN_0172b8a0(long param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  if (*(uint *)(*(long *)(param_1 + 0x38) + 0x30) < 2) {
    piVar1 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x290) + 8) + 0x50),
                                 param_3);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
      if (4 < iVar3) {
        iVar3 = 0;
      }
    }
    *(int *)(*(long *)(param_1 + 0x40) + 0x278) = iVar3;
    lVar2 = FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x290) + 8) + 0x50),param_3);
    if (lVar2 == 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = (uint)*(byte *)(lVar2 + 4);
    }
    *(uint *)(*(long *)(param_1 + 0x40) + 0x27c) = uVar4;
  }
  return;
}


