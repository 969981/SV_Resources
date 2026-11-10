/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b6a170; name: FUN_02b6a170
 */


undefined8 * FUN_02b6a170(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    puVar4 = (undefined8 *)(param_1 + 0x24);
    do {
      uVar5 = *(undefined8 *)((long)puVar4 + -0x24);
      uVar3 = *(undefined8 *)((long)puVar4 + -0x1c);
      uVar6 = *(undefined8 *)((long)puVar4 + -0xc);
      param_3[2] = *(undefined8 *)((long)puVar4 + -0x14);
      param_3[3] = uVar6;
      *param_3 = uVar5;
      param_3[1] = uVar3;
      if (*(char *)(param_3 + 4) == '\0') {
        if (*(char *)((long)puVar4 + -4) != '\0') {
          *(undefined8 *)((long)param_3 + 0x24) = *puVar4;
          *(undefined1 *)(param_3 + 4) = 1;
        }
      }
      else if (*(char *)((long)puVar4 + -4) == '\0') {
        *(undefined1 *)(param_3 + 4) = 0;
      }
      else {
        *(undefined8 *)((long)param_3 + 0x24) = *puVar4;
      }
      puVar1 = puVar4 + 1;
      lVar2 = (long)puVar4 + 0xc;
      puVar4 = puVar4 + 6;
      *(undefined1 *)((long)param_3 + 0x2c) = *(undefined1 *)puVar1;
      param_3 = param_3 + 6;
    } while (lVar2 != param_2);
  }
  return param_3;
}


