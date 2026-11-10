/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0337b9b0; name: FUN_0337b9b0
 */


void FUN_0337b9b0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0xa8) = -(uint)(*(int *)(param_1 + 0xc0) < 1);
  iVar2 = *(int *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 200) + lVar3);
      (**(code **)(**(long **)(param_1 + 0x98) + 0x20))
                (*(long **)(param_1 + 0x98),*puVar1,puVar1[1]);
      iVar2 = *(int *)(param_1 + 0xd0);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar2);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  FUN_033740c8(param_1);
  return;
}


