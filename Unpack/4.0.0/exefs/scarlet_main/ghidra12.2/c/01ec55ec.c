/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec55ec; name: FUN_01ec55ec
 */


void FUN_01ec55ec(undefined4 *param_1,ushort *param_2,long param_3)

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
  if (*(ulong *)(param_3 + 8) < (ulong)(*(long *)(param_3 + 0x10) + lVar3)) {
    *param_1 = 0xd;
    return;
  }
  FUN_01e94d28(param_1,param_2,param_3);
  return;
}


