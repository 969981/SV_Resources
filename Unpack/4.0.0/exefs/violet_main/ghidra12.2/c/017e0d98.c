/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e0d98; name: FUN_017e0d98
 */


void FUN_017e0d98(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = param_1[0x1a];
  uVar2 = (uint)uVar3;
  uVar1 = uVar2 | 1;
  if ((param_2 & 1) == 0) {
    uVar1 = uVar2 & 0xe;
  }
  if (((~uVar2 & 0xf) == 0) != ((uVar1 & 0xf) == 0xf)) {
    (**(code **)(*param_1 + 0xe0))(param_1,(uVar1 & 0xf) == 0xf);
    uVar3 = param_1[0x1a];
  }
  param_1[0x1a] = uVar3 & 0xfffffffffffffffe | param_2 & 1;
  return;
}


