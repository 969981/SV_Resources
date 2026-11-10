/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c5900; name: FUN_001c5900
 */


void FUN_001c5900(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    pcVar6 = "FALSE";
    puVar5 = &DAT_03c886bc;
  }
  else {
    puVar5 = &DAT_03c886bc;
    if ((pcVar7 != (char *)0x0) && (puVar5 = &DAT_03c886bc, *pcVar7 != '.')) {
      puVar5 = &DAT_03bdface;
    }
    pcVar6 = "TRUE";
  }
  pcVar1 = "unknown";
  if (pcVar7 != (char *)0x0) {
    pcVar1 = pcVar7;
  }
  puVar2 = &DAT_03bdfb3b;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x18);
  }
  puVar3 = &DAT_03c886bc;
  if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x10);
  }
  pcVar7 = "FALSE";
  if (*(char *)(param_1 + 0x58) != '\0') {
    pcVar7 = "TRUE";
  }
  pcVar4 = "";
  if (*(char *)(param_1 + 0x5a) != '\0') {
    pcVar4 = "#HttpOnly_";
  }
  FUN_001ce400("%s%s%s\t%s\t%s\t%s\t%ld\t%s\t%s",pcVar4,puVar5,pcVar1,pcVar6,puVar2,pcVar7,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8),puVar3);
  return;
}


