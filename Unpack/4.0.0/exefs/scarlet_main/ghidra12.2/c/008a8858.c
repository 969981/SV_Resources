/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a8858; name: FUN_008a8858
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a8858(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  (**(code **)(*param_1 + 0x68))(param_1,&local_30);
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  uVar2 = _UNK_03cab5b8;
  uVar1 = _DAT_03cab5b0;
  fVar5 = 1.0 / ((local_30 + local_28) - local_30);
  fVar6 = 1.0 / ((fStack_2c - fStack_24) - fStack_2c);
  param_2[1] = (ulong)(uint)(fVar5 * -(local_30 + local_30 + local_28)) << 0x20;
  *param_2 = (ulong)(uint)(fVar5 + fVar5);
  param_2[3] = (ulong)(uint)(fVar6 * -(fStack_2c + (fStack_2c - fStack_24))) << 0x20;
  param_2[2] = (ulong)(uint)(fVar6 + fVar6) << 0x20;
  param_2[5] = uVar2;
  param_2[4] = uVar1;
  param_2[7] = uVar4;
  param_2[6] = uVar3;
  return;
}


