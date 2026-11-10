/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278a644; name: FUN_0278a644
 */


void FUN_0278a644(undefined8 param_1,long *param_2,uint *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_50 [4];
  undefined4 local_28 [2];
  
  if (((param_3 == (uint *)0x0) || (param_4 == (int *)0x0)) ||
     (uVar1 = (**(code **)(*param_2 + 0x40))(), param_5 < uVar1)) {
    local_50[0] = 0x10407;
  }
  else {
    uVar1 = (*(uint *)((long)param_2 + 0x14) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_2 + 0x14) & 0xff00ff) << 8;
    *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(char *)(param_3 + 1) = (char)param_2[3];
    memcpy((void *)((long)param_3 + 5),param_2 + 5,(ulong)*(uint *)((long)param_2 + 0x14));
    *param_4 = ((int)(void *)((long)param_3 + 5) + *(int *)((long)param_2 + 0x14)) - (int)param_3;
    local_50[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


