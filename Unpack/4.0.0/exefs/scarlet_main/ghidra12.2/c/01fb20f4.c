/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb20f4; name: FUN_01fb20f4
 */


void FUN_01fb20f4(long param_1,long *param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  pcVar1 = (char *)(param_1 + 0x40);
  do {
    if (*pcVar1 == '\0') {
      plVar3 = (long *)(pcVar1 + 8);
LAB_01fb214c:
      *plVar3 = lVar2;
      *(undefined8 *)(pcVar1 + 0x10) = param_3;
      *pcVar1 = '\x01';
      return;
    }
    if (*(long *)(pcVar1 + 8) == lVar2) {
LAB_01fb2164:
      *(undefined8 *)(pcVar1 + 0x10) = param_3;
      return;
    }
    if (pcVar1[0x18] == '\0') {
      plVar3 = (long *)(pcVar1 + 0x20);
      pcVar1 = pcVar1 + 0x18;
      goto LAB_01fb214c;
    }
    if (*(long *)(pcVar1 + 0x20) == lVar2) {
      pcVar1 = pcVar1 + 0x18;
      goto LAB_01fb2164;
    }
    pcVar1 = pcVar1 + 0x30;
    if (pcVar1 == (char *)(param_1 + 0x3040)) {
      return;
    }
  } while( true );
}


