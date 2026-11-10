/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d4c28; name: FUN_030d4c28
 */


undefined8 FUN_030d4c28(long *param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = FUN_030d4cc0();
  iVar4 = (int)uVar3;
  if ((int)param_1[1] == iVar4) {
    iVar2 = iVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_030d4dbc(param_1,PTR_PTR_047d1a50,(long)iVar2);
      iVar4 = (int)param_1[1];
    }
    puVar1 = (undefined4 *)(*param_1 + (long)iVar4 * 8);
    *puVar1 = *param_2;
    *(undefined2 *)(puVar1 + 1) = *param_3;
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar3;
}


