/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00137bc0; name: FUN_00137bc0
 */


void FUN_00137bc0(long *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (uint *)(*(long *)(*param_1 + 0x40) + (long)param_2 * 4);
  if (param_5 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0012d860(param_5);
    uVar3 = iVar2 * 0x10000 + 0x10000;
  }
  iVar2 = param_4 + 0xff;
  if (-1 < param_4) {
    iVar2 = param_4;
  }
  *puVar1 = param_3 << 7 | param_4 << 0x18 | (uint)(0xff < param_4) << 0xf | uVar3 | 0x13;
  puVar1[1] = (iVar2 >> 8) << 7 | 0x52;
  return;
}


