/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3b90; name: FUN_001f3b90
 */


undefined4 FUN_001f3b90(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    uVar2 = 0xfffffe02;
  }
  else {
    iVar1 = FUN_001eed50();
    if (iVar1 == 0) {
      if ((*(byte *)(param_2 + 0xe5) >> 1 & 1) == 0) {
        if (*(uint *)(param_2 + 0xb8) == 0) {
          iVar1 = *(int *)(param_2 + 0xdc);
        }
        else {
          iVar1 = *(int *)(param_2 + 0xdc);
          if ((*(uint *)(param_2 + 0xb8) & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
            uVar2 = 0xfffffdfe;
            if (iVar1 != 4) {
              uVar2 = 0;
            }
            uVar3 = 0xfffffe01;
            if (iVar1 != 3) {
              uVar3 = uVar2;
            }
            return uVar3;
          }
        }
        uVar3 = 0xfffffe01;
        if (iVar1 != 3) {
          uVar3 = 0xfffffdfe;
        }
        uVar2 = 0;
        if (iVar1 != 2) {
          uVar2 = uVar3;
        }
      }
      else {
        uVar2 = 0xfffffe00;
      }
    }
    else {
      uVar2 = 0xfffffdee;
    }
  }
  return uVar2;
}


