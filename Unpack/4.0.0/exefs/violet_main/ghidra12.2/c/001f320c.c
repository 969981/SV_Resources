/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f320c; name: FUN_001f320c
 */


undefined8 FUN_001f320c(long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0xc0);
  if (*(int *)(param_2 + 0xcc) - param_3 < iVar1 || 0x7fffffff - param_3 < iVar1) {
    uVar2 = FUN_001ee90c(param_1,*(undefined4 *)(param_2 + 0xb8),3);
    return uVar2;
  }
  *(int *)(param_2 + 0xc0) = iVar1 + param_3;
  if (((param_4 == 0) || ((*(byte *)(param_1 + 0x99c) & 1) != 0)) ||
     (*(char *)(param_2 + 0xe7) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_001ed6e8();
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN_001f3450(param_1,0,*(undefined4 *)(param_2 + 0xb8),
                             *(undefined4 *)(param_2 + 0xc0)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_2 + 0xc0) = 0;
    }
  }
  return uVar2;
}


