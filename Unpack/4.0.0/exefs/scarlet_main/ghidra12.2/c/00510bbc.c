/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00510bbc; name: FUN_00510bbc
 */


undefined8 FUN_00510bbc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  byte local_58 [16];
  ulong local_48;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  
  if ((int)param_1[5] == 3) {
    uVar1 = FUN_004fd258(param_1 + 6,param_3,param_2);
    if ((uVar1 & 1) != 0) {
      FUN_004fcda0(param_1 + 5);
      return 1;
    }
    FUN_004a8ec0(local_58,"Integer out of range (",param_1 + 6);
                    /* try { // try from 00510c70 to 00510c87 has its CatchHandler @ 00510d24 */
    puVar2 = (ulong *)FUN_0021d540(local_58,&DAT_03c8f4f1,1);
    uStack_38 = puVar2[1];
    local_40 = *puVar2;
    local_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    plVar3 = (long *)*param_1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 00510cb8 to 00510cbf has its CatchHandler @ 00510d04 */
      (**(code **)(*plVar3 + 0x10))
                (plVar3,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_40);
    }
    if ((local_40 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_30);
    }
    if ((local_58[0] & 1) == 0) {
      return 0;
    }
  }
  else {
    FUN_004a8ec0(&local_40,"Expected integer, got: ",param_1 + 6);
    plVar3 = (long *)*param_1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 00510c40 to 00510c47 has its CatchHandler @ 00510d38 */
      (**(code **)(*plVar3 + 0x10))
                (plVar3,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_40);
    }
    if ((local_40 & 1) == 0) {
      return 0;
    }
    local_48 = local_30;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_48);
  return 0;
}


