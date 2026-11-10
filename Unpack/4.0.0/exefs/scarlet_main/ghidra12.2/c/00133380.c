/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133380; name: FUN_00133380
 */


int FUN_00133380(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar3 + 0x40),
                       (int)param_1[4],lVar3 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar3 + 0x40) = lVar2;
  lVar1 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar1 + 1;
  *(undefined4 *)(lVar2 + (long)(int)lVar1 * 4) = 0x7fffff38;
  FUN_00133660(param_1,lVar3,*(undefined4 *)(param_1[2] + 8));
  return (int)param_1[4] + -1;
}


