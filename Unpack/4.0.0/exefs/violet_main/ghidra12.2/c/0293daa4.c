/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293daa4; name: FUN_0293daa4
 */


int FUN_0293daa4(long param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_2 < *(byte *)(param_1 + 0x30)) {
    iVar2 = 0;
    uVar3 = (ulong)param_2;
    do {
      uVar1 = (**(code **)(**(long **)(param_1 + uVar3 * 8) + 0x208))();
      iVar2 = iVar2 + (uVar1 & 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x30));
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


