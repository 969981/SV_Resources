/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c3a60; name: FUN_003c3a60
 */


void FUN_003c3a60(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == -1) {
    if ((*(uint *)(param_1 + 0x5c) & 0xfffffffe) != 0x2e) {
      return;
    }
    *(undefined4 *)(param_1 + 100) = 1;
    iVar1 = *(int *)(param_1 + 0x84);
joined_r0x003c3aa4:
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x84) = 7;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar2 = *(uint *)(param_1 + 0x5c);
      if (param_2 != 0) {
        if ((uVar2 & 0xfffffffe) != 0x2e) {
          return;
        }
        iVar1 = *(int *)(param_1 + 0x84);
        if (iVar1 == 4) {
          return;
        }
        *(undefined4 *)(param_1 + 100) = 1;
        goto joined_r0x003c3aa4;
      }
    }
    else {
      if (*(int *)(param_1 + 0x84) != 0xc) {
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x5c);
    }
    if (uVar2 == 0x2e) {
      *(undefined4 *)(param_1 + 100) = 1;
    }
  }
  return;
}


