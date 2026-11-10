/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c59e0; name: FUN_015c59e0
 */


void FUN_015c59e0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  lVar1 = lVar2 + lVar3 * 0x20;
  if (param_3 + 0x20 != lVar1) {
    lVar2 = param_3;
    do {
      FUN_00c96b7c(lVar2,lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x30);
      lVar3 = lVar2 + 0x40;
      *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(lVar2 + 0x38);
      lVar2 = lVar2 + 0x20;
    } while (lVar3 != lVar1);
    lVar2 = *(long *)(param_2 + 0x20);
    lVar3 = *(long *)(param_2 + 0x28);
  }
  FUN_0175afc8(lVar2 + lVar3 * 0x20 + -0x20);
  *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + -1;
  *param_1 = param_3;
  return;
}


