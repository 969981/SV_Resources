/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148d208; name: FUN_0148d208
 */


undefined1 FUN_0148d208(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  if (*param_2 == 0) {
    return 0xfd;
  }
  puVar3 = *(undefined1 **)(param_1 + 0x170);
  puVar1 = *(undefined1 **)(param_1 + 0x178);
  if (puVar3 == puVar1) {
LAB_0148d23c:
    if (puVar3 == puVar1) {
      return 0xfd;
    }
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 0xfd;
    do {
      if (*(long *)(puVar3 + 8) == *param_2) goto LAB_0148d23c;
      puVar3 = puVar3 + 0x10;
    } while (puVar1 != puVar3);
  }
  return uVar2;
}


