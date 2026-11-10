/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f77c34; name: FUN_01f77c34
 */


void FUN_01f77c34(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*param_1 & 1) != 0) {
    (**(code **)(*(long *)param_1[3] + 0x18))
              ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  }
  uVar1 = *param_2;
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  *param_1 = uVar1;
  *(undefined2 *)param_2 = 0;
  return;
}


