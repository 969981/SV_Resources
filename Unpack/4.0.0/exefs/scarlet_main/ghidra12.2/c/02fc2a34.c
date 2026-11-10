/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc2a34; name: FUN_02fc2a34
 */


void FUN_02fc2a34(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    param_4 = 0;
    pcVar3 = "FullStep";
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\0') {
      puVar2 = &DAT_03c6be76;
LAB_02fc2b14:
      FUN_031c6c18(param_2,&DAT_03bf359a,puVar2,param_4);
      return;
    }
    param_4 = 0;
    bVar1 = *(byte *)(param_1 + 0x11);
    lVar4 = **(long **)(*(long *)(*(long *)**(undefined8 **)(param_1 + 8) + 0x4c0) +
                        (ulong)bVar1 * 8 + 0x78) + (ulong)*(ushort *)(param_1 + 0x12) * 0x20;
    do {
      param_4 = (ulong)(uint)(*(int *)(lVar4 + 0xc) + (int)param_4);
      lVar4 = *(long *)(lVar4 + 0x10);
    } while (lVar4 != 0);
    if (bVar1 != 2) {
      if (bVar1 == 1) {
        puVar2 = &DAT_03c5ed3f;
      }
      else {
        if (bVar1 != 0) {
          puVar2 = &DAT_03c728b0;
          goto LAB_02fc2b14;
        }
        puVar2 = &DAT_03bdd3c4;
      }
      FUN_031c6c18(param_2,"%s %i\\n%d:%d",puVar2,param_4,*(undefined1 *)(param_1 + 0x14),
                   *(undefined1 *)(param_1 + 0x15));
      return;
    }
    pcVar3 = "FC";
  }
  FUN_031c6c18(param_2,"%s %i\\n%d",pcVar3,param_4,*(undefined1 *)(param_1 + 0x14));
  return;
}


