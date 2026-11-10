/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3d84; name: FUN_001f3d84
 */


undefined8 FUN_001f3d84(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_001f992c(param_1,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN_001ee90c(*param_2,*(undefined4 *)(param_1 + 0xb8),3);
    return uVar2;
  }
  if (((*(byte *)(*param_2 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0xe7) == '\0')) {
    uVar2 = FUN_001ed6e8(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xc0));
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN_001f3450(*param_2,0,*(undefined4 *)(param_1 + 0xb8),
                             *(undefined4 *)(param_1 + 0xc0)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


