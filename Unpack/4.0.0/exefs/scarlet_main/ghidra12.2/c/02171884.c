/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02171884; name: FUN_02171884
 */


uint FUN_02171884(undefined2 *param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = FUN_021718e4(*param_1,1);
  lVar1 = 2;
  if ((uVar4 & 1) == 0) {
    lVar1 = 0;
  }
  uVar2 = *(ushort *)((long)param_1 + lVar1);
  if (uVar2 < 0x100) {
    uVar3 = *(uint *)(&DAT_03cbf2c0 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


