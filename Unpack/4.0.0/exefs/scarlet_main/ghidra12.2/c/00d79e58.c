/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d79e58; name: FUN_00d79e58
 */


void FUN_00d79e58(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x440) == '\x02') {
    FUN_00d79a28(lVar1);
    *(byte *)*param_1 = *(byte *)*param_1 & *(char *)(lVar1 + 0x448) == '\x03';
  }
  else if (*(char *)(lVar1 + 1099) != '\0') {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}


