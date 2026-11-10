/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00219f48; name: FUN_00219f48
 */


void FUN_00219f48(undefined *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_1 == PTR_DAT_047cbd60) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_0021bfd0();
      iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar4 + 8);
  if ((bVar1 & 1) == 0) {
    uVar2 = (uint)(bVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)(uVar4 + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar2 + iVar3;
  return;
}


