/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ab610; name: FUN_007ab610
 */


uint FUN_007ab610(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_18;
  
  uVar1 = FUN_0079d1ec(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(uint *)(param_1 + 0x80) & uVar1;
  *(uint *)(param_1 + 0x80) = uVar1;
  if (uVar1 != 0) {
    local_18 = 0;
    FUN_007935cc(&local_18);
    lVar4 = local_18 - *(long *)(param_1 + 0x88);
    plVar2 = (long *)FUN_0079365c();
    uVar1 = 0;
    if (*plVar2 != 0) {
      uVar1 = (uint)(lVar4 / *plVar2);
    }
    if (*(uint *)(param_1 + 0x90) <= uVar1) {
      uVar3 = FUN_00796784(param_1 + 0x60);
      if ((uVar3 & 1) == 0) {
        local_18 = (ulong)local_18._4_4_ << 0x20;
        (**(code **)(**(long **)(param_1 + 0xa8) + 0x148))
                  (*(long **)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98),
                   *(uint *)(param_1 + 0x80) & (*(uint *)(param_1 + 0x84) ^ 0xffffffff),&local_18);
      }
      else {
        local_18 = (ulong)local_18._4_4_ << 0x20;
        (**(code **)(**(long **)(param_1 + 0xa8) + 0x140))
                  (*(long **)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98),param_1 + 0x60,
                   &local_18);
      }
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | (uint)local_18;
      local_18 = 0;
      FUN_007935cc(&local_18);
      *(long *)(param_1 + 0x88) = local_18;
      return *(int *)(param_1 + 0x90) << 0x10 | 4;
    }
  }
  return 5;
}


