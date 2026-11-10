/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00892ed4; name: FUN_00892ed4
 */


void FUN_00892ed4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x18b) == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x18b) = 1;
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    param_2[5] = *(undefined8 *)(param_1 + 0xa8);
    param_2[4] = uVar5;
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return;
  }
  return;
}


