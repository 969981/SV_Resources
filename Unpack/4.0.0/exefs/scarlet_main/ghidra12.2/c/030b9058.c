/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b9058; name: FUN_030b9058
 */


void FUN_030b9058(long *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_047e50f0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffff80000000;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[10] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0xb) = 100000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x101000001030100;
  *(undefined8 *)((long)param_1 + 0xb4) = 0x3c23d70a3f800000;
  *(undefined8 *)((long)param_1 + 0xbc) = 0xbf8000007f7fffee;
  *(undefined4 *)((long)param_1 + 0xc4) = 0xbf800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = -1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_02e8df28(param_1 + 6,PTR_PTR_047d1a50,param_2);
    iVar2 = (int)param_1[7];
  }
  if (iVar2 != param_2) {
    *(int *)(param_1 + 7) = param_2;
  }
  if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) < param_2) {
    FUN_030bb7b8(param_1 + 9,PTR_PTR_047d1a50,(long)param_2);
  }
  if ((int)param_1[10] != param_2) {
    *(int *)(param_1 + 10) = param_2;
  }
  return;
}


