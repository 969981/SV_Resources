/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007edee0; name: FUN_007edee0
 */


void FUN_007edee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x6b0);
  lVar1 = param_1 + (ulong)uVar2 * 0x20;
  *(undefined8 *)(lVar1 + 0x3d0) = param_2;
  *(undefined8 *)(lVar1 + 0x3d8) = param_3;
  *(undefined8 *)(lVar1 + 0x3e0) = param_4;
  uVar3 = *param_5;
  *(undefined4 *)(lVar1 + 0x3eb) = *(undefined4 *)((long)param_5 + 3);
  *(undefined4 *)(lVar1 + 1000) = uVar3;
  *(uint *)(param_1 + 0x6b0) = uVar2 + 1;
  return;
}


