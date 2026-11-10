/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a3755c; name: FUN_01a3755c
 */


int FUN_01a3755c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (0xd < (int)param_2) {
    return 0;
  }
  uVar3 = FUN_01a375b0(param_1 + 8 + (ulong)param_2 * 0x10 + 0x340);
  uVar1 = *(uint *)(param_1 + 8 + (ulong)param_2 * 4 + 0x30);
  uVar3 = uVar3 & 0xff;
  iVar2 = uVar3 - uVar1;
  if ((uVar3 < uVar1 || iVar2 == 0) || uVar3 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}


