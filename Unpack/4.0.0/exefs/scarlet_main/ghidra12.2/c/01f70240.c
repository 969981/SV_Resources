/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f70240; name: FUN_01f70240
 */


void FUN_01f70240(undefined8 param_1,long param_2,char *param_3)

{
  ulong uVar1;
  size_t sVar2;
  ulong *puVar3;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  long *plStack_28;
  
                    /* try { // try from 01f7025c to 01f70267 has its CatchHandler @ 01f70354 */
  FUN_00538e90(&local_60,param_2 + 0x50,0x2f);
  sVar2 = strlen(param_3);
                    /* try { // try from 01f70274 to 01f7027f has its CatchHandler @ 01f70324 */
  puVar3 = (ulong *)FUN_0020f8d0(&local_60,param_3,sVar2);
  uStack_38 = puVar3[1];
  local_40 = *puVar3;
  plStack_28 = (long *)puVar3[3];
  local_30 = puVar3[2];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
  FUN_01f6ef54(param_1,param_2,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))(plStack_28,local_30,local_40 & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_48 + 0x18))
            (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  return;
}


