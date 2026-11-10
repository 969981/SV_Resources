/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb2278; name: FUN_01fb2278
 */


undefined8 FUN_01fb2278(long param_1,long *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x40);
  do {
    if ((*pcVar1 != '\0') && (*(long *)(pcVar1 + 8) == *param_2)) {
LAB_01fb22c8:
      if (pcVar1 == (char *)(param_1 + 0x3040)) {
        return 0xffffffffffffffff;
      }
      return *(undefined8 *)(pcVar1 + 0x10);
    }
    if ((pcVar1[0x18] != '\0') && (*(long *)(pcVar1 + 0x20) == *param_2)) {
      pcVar1 = pcVar1 + 0x18;
      goto LAB_01fb22c8;
    }
    pcVar1 = pcVar1 + 0x30;
    if (pcVar1 == (char *)(param_1 + 0x3040)) {
      return 0xffffffffffffffff;
    }
  } while( true );
}


