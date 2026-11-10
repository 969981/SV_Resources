/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ef980; name: thunk_FUN_026ef984
 */


void thunk_FUN_026ef984(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = FUN_026d5d80(lVar3);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_026ef9e0(param_1[5],param_2,lVar3 + 0x148,*(undefined4 *)(lVar3 + 0x348));
    *(undefined4 *)(lVar3 + 0x348) = uVar1;
  }
  return;
}


