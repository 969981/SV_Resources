/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eaf730; name: FUN_01eaf730
 */


void FUN_01eaf730(undefined4 *param_1,ushort *param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *param_2;
  uVar4 = 0xffffff84;
  if ((uint)uVar2 != ((int)(char)uVar2 & 0xffffU)) {
    uVar4 = 0xffffff85;
  }
  uVar1 = (uint)uVar2;
  if (0xbf < (ushort)(uVar2 + 0x40)) {
    uVar1 = uVar4;
  }
  lVar3 = FUN_0111b030(uVar1);
  if ((ulong)param_3[1] < lVar3 + param_3[2] + 0xeU) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_01eb2b00(param_1,param_2,param_3);
  return;
}


