/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01986a1c; name: FUN_01986a1c
 */


void FUN_01986a1c(long param_1,long param_2)

{
  char cVar1;
  char local_48 [36];
  int local_24;
  
  if (param_2 != 0) {
    local_24 = 0;
    local_48[0x20] = 0;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_48[0x18] = '\0';
    local_48[0x19] = '\0';
    local_48[0x1a] = '\0';
    local_48[0x1b] = '\0';
    local_48[0x1c] = '\0';
    local_48[0x1d] = '\0';
    local_48[0x1e] = '\0';
    local_48[0x1f] = '\0';
    local_24 = snprintf(local_48,0x21,"%s",param_2);
    cVar1 = *(char *)(param_1 + 0x50);
    memcpy((void *)(param_1 + 0x54),local_48,0x28);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
  return;
}


