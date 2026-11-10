/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03001450; name: FUN_03001450
 */


undefined1  [16] FUN_03001450(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = FUN_030014e8();
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == uVar2) {
    uVar3 = uVar2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar2) {
      FUN_02eb1f88(param_1,PTR_PTR_047d1a50,(long)(int)(uVar2 + 1));
      uVar3 = *(uint *)(param_1 + 1);
    }
    *(undefined4 *)(*param_1 + (long)(int)uVar3 * 4) = *param_2;
    *(uint *)(param_1 + 1) = uVar2 + 1;
  }
  auVar4[8] = uVar1 == uVar2;
  auVar4._0_8_ = *param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1e);
  auVar4._9_7_ = 0;
  return auVar4;
}


