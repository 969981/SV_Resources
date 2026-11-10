/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b6ad0; name: FUN_021b6ad0
 */


void FUN_021b6ad0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 300) = 1;
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x138) = param_2[1];
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  FUN_00e819b0(param_2,param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x129) = 1;
  FUN_00c6a514(param_1 + 0x38,0);
  return;
}


