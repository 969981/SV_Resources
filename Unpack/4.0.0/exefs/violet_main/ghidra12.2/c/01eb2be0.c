/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb2be0; name: FUN_01eb2be0
 */


long FUN_01eb2be0(ushort *param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  uVar6 = 0xffffff84;
  if ((uint)uVar2 != ((int)(char)uVar2 & 0xffffU)) {
    uVar6 = 0xffffff85;
  }
  uVar1 = (uint)uVar2;
  if (0xbf < (ushort)(uVar2 + 0x40)) {
    uVar1 = uVar6;
  }
  lVar3 = FUN_0111b030(uVar1);
  iVar5 = (int)(char)param_1[1];
  if ((char)param_1[1] < -0x40) {
    iVar5 = -0x7c;
  }
  lVar4 = FUN_0111b030(iVar5);
  return lVar4 + lVar3;
}


