/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133400; name: FUN_00133400
 */


void FUN_00133400(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  uVar4 = 0x48;
  if (param_3 != 1) {
    uVar4 = 0x46;
  }
  uVar1 = 0x47;
  if (param_3 != 0) {
    uVar1 = uVar4;
  }
  lVar3 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar5 + 0x40),
                       (int)param_1[4],lVar5 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar5 + 0x40) = lVar3;
  lVar2 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar2 + 1;
  *(uint *)(lVar3 + (long)(int)lVar2 * 4) = param_3 * 0x10000 + 0x10000U | param_2 << 7 | uVar1;
  FUN_00133660(param_1,lVar5,*(undefined4 *)(param_1[2] + 8));
  return;
}


