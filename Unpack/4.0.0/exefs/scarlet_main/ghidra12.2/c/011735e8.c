/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011735e8; name: FUN_011735e8
 */


void FUN_011735e8(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  
  if ((param_2 != (code *)0x0) && (0 < *(int *)(param_1 + 0xa0))) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x28) + lVar1 * 8);
      local_48 = *(undefined8 *)(lVar2 + 0x90);
      (*param_2)(&local_48,*(undefined8 *)(lVar2 + 0x88),param_3);
      *(undefined8 *)(lVar2 + 0x90) = 0xffffffffffffffff;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xa0));
  }
  return;
}


