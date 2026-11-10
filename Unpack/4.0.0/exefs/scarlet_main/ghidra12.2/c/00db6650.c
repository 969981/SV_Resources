/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db6650; name: FUN_00db6650
 */


void FUN_00db6650(long *param_1,long param_2,uint param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_30 [16];
  long local_20;
  uint local_18;
  
  uVar3 = param_1[1];
  uVar1 = ((param_5 & 0xffffffff) - (ulong)param_3) + (param_4 - param_2) * 8 + uVar3;
  param_1[1] = uVar1;
  if ((uVar3 == 0) || (0x3f < (uVar1 - 1 ^ uVar3 - 1))) {
    uVar2 = 0;
    if (0x40 < uVar1) {
      uVar2 = uVar1 - 1 >> 6;
    }
    *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
  }
  local_18 = (uint)uVar3 & 0x3f;
  local_20 = *param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8);
  FUN_029da1c0(auStack_30);
  return;
}


