/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0c16c; name: FUN_00e0c16c
 */


void FUN_00e0c16c(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0xf8) != '\0') {
    lVar2 = *(long *)(param_1 + 0x100);
    *(undefined1 *)(param_1 + 0xf8) = 0;
    if (lVar2 != 0) {
      *(undefined4 *)
       (*(long *)(*(long *)(lVar2 + 0x60) + (long)*(int *)(lVar2 + 0x68) * 8 + -8) + 0x10c) =
           *(undefined4 *)(param_1 + 0x10c);
      iVar1 = *(int *)(param_1 + 0x10c);
      lVar4 = (long)*(int *)(lVar2 + 0x68) + -1;
      iVar3 = (int)lVar4;
      *(int *)(lVar2 + 0x68) = iVar3;
      if (iVar3 != iVar1) {
        *(undefined8 *)(*(long *)(lVar2 + 0x60) + (long)iVar1 * 8) =
             *(undefined8 *)(*(long *)(lVar2 + 0x60) + lVar4 * 8);
      }
    }
  }
  return;
}


