/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b4fd0; name: FUN_008b4fd0
 */


uint * FUN_008b4fd0(long param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 != 0) {
    uVar4 = 0;
    puVar3 = (uint *)(param_1 + 0xc);
    do {
      iVar2 = strcmp((char *)(param_1 + (ulong)*puVar3),param_2);
      if (iVar2 == 0) {
        return puVar3;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0xc;
    } while (uVar4 < uVar1);
  }
  return (uint *)0x0;
}


