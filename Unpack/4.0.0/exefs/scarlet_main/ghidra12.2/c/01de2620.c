/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de2620; name: FUN_01de2620
 */


bool FUN_01de2620(void)

{
  bool bVar1;
  ushort uVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  bVar1 = true;
  FUN_011722d4(auStack_38,1);
  uVar3 = FUN_019c7a40(auStack_38);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_014bfb44(auStack_38);
    if ((uVar3 & 1) == 0) {
      bVar1 = true;
    }
    else {
      uVar2 = FUN_01419468(auStack_38);
      bVar1 = uVar2 < 2;
    }
  }
  FUN_00d8e444(auStack_38);
  return bVar1;
}


