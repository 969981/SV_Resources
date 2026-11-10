/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f4ee60; name: FUN_02f4ee60
 */


void FUN_02f4ee60(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_0460fe48;
  param_1[1] = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_02f4fa14(param_1 + 9,PTR_PTR_047d1a50,0x100);
  iVar2 = (**(code **)(*(long *)param_1[4] + 0xf0))();
  if ((int)(*(uint *)((long)param_1 + 100) & 0x7fffffff) < iVar2) {
    FUN_02e8bb18(param_1 + 0xb,PTR_PTR_047d1a50,(long)iVar2);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < iVar2) {
    *(int *)(param_1 + 0xc) = iVar2;
    memset((void *)(param_1[0xb] + (long)(int)uVar1 * 2),0xff,(ulong)(iVar2 + ~uVar1) * 2 + 2);
  }
  else if (iVar2 < (int)uVar1) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  return;
}


