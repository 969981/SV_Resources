/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc8e50; name: FUN_01bc8e50
 */


void FUN_01bc8e50(char *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    uVar2 = *param_3;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2);
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_3 + 1);
    *puVar1 = uVar2;
    uVar3 = param_3[4];
    uVar2 = param_3[3];
    puVar1[2] = param_3[2];
    puVar1[3] = uVar2;
    puVar1[4] = uVar3;
    puVar1[5] = param_3[5];
    puVar1[6] = param_3[6];
    puVar1[7] = param_3[7];
    puVar1[8] = param_3[8];
    puVar1[9] = param_3[9];
    puVar1[10] = param_3[10];
  }
  return;
}


