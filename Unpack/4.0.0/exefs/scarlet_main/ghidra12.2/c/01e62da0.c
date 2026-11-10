/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e62da0; name: FUN_01e62da0
 */


void FUN_01e62da0(undefined4 *param_1,ulong *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  uVar3 = 0xffffff82;
  if (uVar4 >> 0x20 != 0) {
    uVar3 = 0xffffff83;
  }
  uVar1 = 0x81;
  if (0xffff < uVar4) {
    uVar1 = uVar3;
  }
  uVar3 = 0x80;
  if (0xff < uVar4) {
    uVar3 = uVar1;
  }
  if (uVar4 < 0x80) {
    uVar3 = (undefined4)uVar4;
  }
  lVar2 = FUN_0111b030(uVar3);
  if (*(ulong *)(param_3 + 8) < (ulong)(*(long *)(param_3 + 0x10) + lVar2)) {
    *param_1 = 0xd;
    return;
  }
  FUN_0111b0ac(param_1,param_2,param_3);
  return;
}


