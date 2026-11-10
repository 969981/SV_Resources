/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029da1c0; name: FUN_029da1c0
 */


void FUN_029da1c0(long *param_1,ulong *param_2,ulong param_3,long param_4,ulong param_5,
                 undefined8 *param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *__src;
  int iVar5;
  long lVar6;
  ulong *local_60;
  int local_58;
  
  local_58 = *(int *)(param_6 + 1);
  local_60 = (ulong *)*param_6;
  iVar5 = (int)param_3;
  if (local_58 == iVar5) {
    uVar2 = ((param_5 & 0xffffffff) - (param_3 & 0xffffffff)) + (param_4 - (long)param_2) * 8;
    if (0 < (long)uVar2) {
      __src = param_2;
      if (iVar5 != 0) {
        uVar4 = (ulong)(0x40 - iVar5);
        __src = param_2 + 1;
        uVar3 = uVar2;
        if ((long)uVar4 <= (long)uVar2) {
          uVar3 = uVar4;
        }
        uVar2 = uVar2 - uVar3;
        lVar6 = uVar3 + (param_3 & 0xffffffff);
        uVar3 = 0xffffffffffffffffU >> (uVar4 - uVar3 & 0x3f) & -1L << (param_3 & 0x3f);
        *local_60 = *local_60 & (uVar3 ^ 0xffffffffffffffff) | *param_2 & uVar3;
        lVar1 = lVar6 + 0x3f;
        if (-1 < lVar6) {
          lVar1 = lVar6;
        }
        local_60 = local_60 + (lVar1 >> 6);
        param_3 = (ulong)(uint)((int)lVar6 + (int)(lVar1 >> 6) * -0x40);
      }
      uVar3 = uVar2 + 0x3f;
      if (-1 < (long)uVar2) {
        uVar3 = uVar2;
      }
      lVar6 = (long)uVar3 >> 6;
      memmove(local_60,__src,lVar6 << 3);
      uVar2 = (long)uVar2 % 0x40;
      local_60 = local_60 + lVar6;
      if (0 < (long)uVar2) {
        uVar3 = 0xffffffffffffffff >> (-uVar2 & 0x3f);
        param_3 = uVar2 & 0xffffffff;
        *local_60 = *local_60 & (uVar3 ^ 0xffffffffffffffff) | __src[lVar6] & uVar3;
      }
    }
    *param_1 = (long)local_60;
    *(int *)(param_1 + 1) = (int)param_3;
  }
  else {
    FUN_029da330(param_1,param_2,param_3,param_4,param_5,&local_60);
  }
  return;
}


