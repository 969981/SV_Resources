/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ee39c; name: FUN_008ee39c
 */


void FUN_008ee39c(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_047d26f0;
  puVar2 = PTR_DAT_047d26e8;
  if (0 < *(int *)PTR_DAT_047d26f0) {
    lVar4 = 0;
    lVar5 = 0x28;
    do {
      lVar1 = *(long *)puVar2 + lVar5;
      (*param_1)(lVar1,lVar1 + 8,param_2);
      *(undefined8 *)(*(long *)puVar2 + lVar5) = 0xffffffffffffffff;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0xa8;
    } while (lVar4 < *(int *)puVar3);
  }
  return;
}


