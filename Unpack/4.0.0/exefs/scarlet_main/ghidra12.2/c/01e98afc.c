/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e98afc; name: FUN_01e98afc
 */


bool FUN_01e98afc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 == 0) {
    lVar1 = param_1 + 0x48;
    uVar3 = FUN_019ab5f0(lVar1);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0x100000008;
      iVar4 = 1;
    }
    else {
      uVar3 = FUN_019ab588(lVar1);
      if ((uVar3 & 1) == 0) {
        FUN_019ab614(lVar1);
        uVar2 = FUN_01e988c0();
        iVar4 = 1;
        *(undefined4 *)(param_1 + 0x40) = uVar2;
        *(undefined4 *)(param_1 + 0x44) = 1;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x44);
      }
    }
  }
  return iVar4 == 1;
}


