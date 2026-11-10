/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02171b9c; name: FUN_02171b9c
 */


void FUN_02171b9c(long param_1,undefined2 *param_2)

{
  void *__s;
  undefined2 *puVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_021718e4(*param_2,1);
  puVar1 = param_2 + 1;
  if ((uVar2 & 1) == 0) {
    puVar1 = param_2;
  }
  __s = (void *)(param_1 + 0x2b4);
  memset(__s,0,0x400);
  FUN_011b8d00(__s,puVar1,0x400);
  lVar3 = 0;
  do {
    if (*(short *)((long)__s + lVar3) == 0) {
      return;
    }
    uVar2 = FUN_021718e4(*(short *)((long)__s + lVar3),1);
    if ((uVar2 & 1) != 0) {
      *(undefined2 *)((long)__s + lVar3) = 0;
    }
    lVar3 = lVar3 + 2;
  } while (lVar3 != 0x800);
  return;
}


