/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ae5a0; name: FUN_004ae5a0
 */


void FUN_004ae5a0(long param_1,long param_2,int param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  byte local_58 [16];
  undefined8 local_48;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)param_3 * 8 + 8);
  FUN_004a8ec0(local_58,"Import \"",uVar3);
                    /* try { // try from 004ae5d4 to 004ae5e7 has its CatchHandler @ 004ae6c0 */
  puVar1 = (ulong *)FUN_0021d540(local_58,"\" was listed twice.",0x13);
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  local_30 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 004ae614 to 004ae627 has its CatchHandler @ 004ae688 */
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x38,uVar3,param_2,9,&local_40);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((local_40 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_30);
  }
  if ((local_58[0] & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_48);
  return;
}


