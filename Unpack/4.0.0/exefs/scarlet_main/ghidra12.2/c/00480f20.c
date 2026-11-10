/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00480f20; name: FUN_00480f20
 */


undefined8 FUN_00480f20(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong local_30 [2];
  
  iVar1 = FUN_0047e650(&DAT_047f3ba8,&LAB_004805b0);
  uVar2 = 0;
  if ((iVar1 != 0) && (DAT_047f3bac != 0)) {
    local_30[0] = param_1 & 0xff000fff;
    FUN_0047e5c0(DAT_047f3bc0);
    lVar3 = FUN_00451a40(DAT_047f3bc8,local_30);
    FUN_0047e600(DAT_047f3bc0);
    if (lVar3 == 0) {
      local_30[0] = param_1 & 0xfff;
      FUN_0047e5c0(DAT_047f3bc0);
      lVar3 = FUN_00451a40(DAT_047f3bc8,local_30);
      FUN_0047e600(DAT_047f3bc0);
      if (lVar3 == 0) {
        return 0;
      }
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
  }
  return uVar2;
}


