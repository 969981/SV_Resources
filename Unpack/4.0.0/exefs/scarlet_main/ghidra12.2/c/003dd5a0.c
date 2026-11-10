/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dd5a0; name: FUN_003dd5a0
 */


ulong FUN_003dd5a0(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *local_30;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = local_28;
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = param_2[1];
  if (uVar1 < 0x1f) {
    if ((0x2a23efffU >> ((ulong)uVar1 & 0x3f) & 1) != 0) {
      return 0xffffffff;
    }
    local_28[0] = 0;
    local_20 = 0;
    uStack_18 = 0;
    uVar2 = FUN_003ddaf0(&local_30,*(undefined8 *)(param_2 + 2),*param_2,
                         (int)(char)(&DAT_03cdd2db)[uVar1] | 0x1000,0x2000);
    if (-1 < (int)uVar2) {
      *param_1 = local_20;
      return (ulong)local_28[0];
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


