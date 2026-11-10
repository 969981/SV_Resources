/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b5436c; name: FUN_02b5436c
 */


void FUN_02b5436c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if ((((*(char *)(lVar1 + 0x488) == '\0') && (*(char *)(lVar1 + 0x48c) == '\0')) &&
      (*(char *)(lVar1 + 0x470) == '\0')) && (*(char *)(lVar1 + 0x474) == '\0')) {
    *(undefined8 *)(lVar1 + 0x458) = *(undefined8 *)*param_1;
    FUN_00e5a670();
    return;
  }
  return;
}


