/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00170aa0; name: FUN_00170aa0
 */


void FUN_00170aa0(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  puVar1 = (undefined8 *)((long)*(undefined8 **)(param_1 + 8) + (long)param_3);
  puVar2 = *(undefined8 **)(param_1 + 8);
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar3;
  } while (puVar3 < puVar1);
  *(undefined8 **)(param_1 + 8) = puVar1;
  if (param_3 + -3 < 0xff) {
    puVar5 = *(undefined1 **)(param_1 + 0x58);
    *(undefined1 **)(param_1 + 0x58) = puVar5 + 1;
    *puVar5 = (char)(param_3 + -3);
    return;
  }
  puVar5 = *(undefined1 **)(param_1 + 0x58);
  *(undefined1 **)(param_1 + 0x58) = puVar5 + 1;
  *puVar5 = 0xff;
  piVar4 = *(int **)(param_1 + 0x68);
  *(int **)(param_1 + 0x68) = piVar4 + 1;
  *piVar4 = param_3 + -0x102;
  return;
}


