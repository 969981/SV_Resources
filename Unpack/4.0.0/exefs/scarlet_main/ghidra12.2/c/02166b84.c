/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02166b84; name: FUN_02166b84
 */


void FUN_02166b84(long param_1,uint param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x100) + -1;
  iVar2 = *(int *)(param_1 + 0x100);
  while ((int)param_2 <= iVar1) {
    if (iVar2 < 5) {
      memcpy((void *)(param_1 + 0x10 + (long)iVar2 * 0x30),
             (void *)(param_1 + 0x10 + (long)(iVar2 + -1) * 0x30),0x30);
    }
    iVar1 = iVar2 + -2;
    iVar2 = iVar2 + -1;
  }
  lVar3 = param_1 + (ulong)param_2 * 0x30;
  *(undefined4 *)(lVar3 + 0x10) = param_3;
  *(undefined8 *)(lVar3 + 0x28) = param_4[1];
  *(undefined8 *)(lVar3 + 0x20) = *param_4;
  *(undefined8 *)(lVar3 + 0x38) = param_5[1];
  *(undefined8 *)(lVar3 + 0x30) = *param_5;
  if (*(uint *)(param_1 + 0x100) < 5) {
    *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) + 1;
  }
  return;
}


