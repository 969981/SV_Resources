/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290de38; name: FUN_0290de38
 */


int FUN_0290de38(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0xb8) == '\x10') || (*(char *)(param_1 + 0xb9) == '\x10')) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    iVar4 = 2;
    if ((uVar3 & 1) == 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0;
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  iVar1 = iVar4;
  if (7 < iVar2) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar1 = iVar4 + 2;
    if ((uVar3 & 1) == 0) {
      iVar1 = iVar4;
    }
  }
  return iVar1;
}


