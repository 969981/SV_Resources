/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dbca8; name: FUN_027dbca8
 */


void FUN_027dbca8(char *param_1,char *param_2)

{
  char *pcVar1;
  
  if (*param_1 == '\0') {
    FUN_027de9b4(param_1 + 8,param_2);
    FUN_01cfa5b0(param_1 + 0x28,param_2 + 0x20);
    FUN_01cfa5b0(param_1 + 0x48,param_2 + 0x40);
    FUN_01d01ed8(param_1 + 0x68,param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x68);
    FUN_01cfa5b0(param_1 + 0x78,param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x90);
    FUN_027dea3c(param_1 + 0xa0,param_2 + 0x98);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xb8);
    *param_1 = '\x01';
  }
  else {
    pcVar1 = param_1 + 8;
    if (pcVar1 != param_2) {
      FUN_027de734(pcVar1,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    }
    FUN_01d0e1a8(param_1 + 0x28,param_2 + 0x20);
    FUN_01d0e1a8(param_1 + 0x48,param_2 + 0x40);
    FUN_027bbf28(param_1 + 0x68,param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x68);
    FUN_01d0e1a8(param_1 + 0x78,param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x90);
    if (pcVar1 != param_2) {
      FUN_027de880(param_1 + 0xa0,*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0xa0));
    }
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xb8);
  }
  return;
}


