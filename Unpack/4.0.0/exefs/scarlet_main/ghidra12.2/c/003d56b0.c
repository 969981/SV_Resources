/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d56b0; name: FUN_003d56b0
 */


undefined8 FUN_003d56b0(undefined8 param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort local_4 [2];
  
  uVar1 = (ulong)((param_2 & 0xffff) - 1);
  if ((param_2 - 1 & 0xffff) < 0x1e) {
    local_4[0] = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
    uVar2 = FUN_003af490(param_1,param_3,*(undefined4 *)(&DAT_03cdd008 + uVar1 * 0xc),
                         (&DAT_03cdd004)[uVar1 * 3],local_4);
    return uVar2;
  }
  return 0;
}


