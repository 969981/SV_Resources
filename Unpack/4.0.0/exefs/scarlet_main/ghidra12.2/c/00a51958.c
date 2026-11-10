/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a51958; name: FUN_00a51958
 */


undefined1  [16] FUN_00a51958(long param_1,int param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (param_2 < (int)((ulong)(*(long *)(param_1 + 0x6450) - *(long *)(param_1 + 0x6448)) >> 4)) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x6448) + (long)param_2 * 0x10);
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    uVar3 = uVar4 & 0xffffffff00000000;
    uVar4 = uVar4 & 0xffffffff;
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  auVar5._0_8_ = uVar3 | uVar4;
  auVar5._8_8_ = uVar2;
  return auVar5;
}


