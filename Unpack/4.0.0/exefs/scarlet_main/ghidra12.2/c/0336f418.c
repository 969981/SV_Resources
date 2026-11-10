/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336f418; name: FUN_0336f418
 */


undefined1  [16] FUN_0336f418(long *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  iVar2 = FUN_0336f4b8();
  lVar1 = param_1[1];
  if ((int)lVar1 == iVar2) {
    iVar3 = iVar2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar2) {
      FUN_0336f5d4(param_1,(long)(iVar2 + 1));
      iVar3 = (int)param_1[1];
    }
    puVar4 = (undefined8 *)(*param_1 + (long)iVar3 * 0xc);
    uVar5 = *param_2;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar4 = uVar5;
    *(int *)(param_1 + 1) = iVar2 + 1;
  }
  auVar6._0_8_ = *param_1 + (long)iVar2 * 0xc;
  auVar6[8] = (int)lVar1 == iVar2;
  auVar6._9_7_ = 0;
  return auVar6;
}


