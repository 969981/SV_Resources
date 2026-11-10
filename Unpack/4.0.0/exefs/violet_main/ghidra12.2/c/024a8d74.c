/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a8d74; name: FUN_024a8d74
 */


void FUN_024a8d74(long *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)param_1[2];
  if ((*pcVar1 == '\0') &&
     (FUN_024a8dcc(*(long *)(*(long *)(*param_1 + 0x10) + 0x20) + 0xf8,
                   **(undefined8 **)(pcVar1 + 0x110),**(undefined8 **)(pcVar1 + 0x118)),
     *pcVar1 == '\0')) {
    *pcVar1 = '\x01';
  }
  return;
}


