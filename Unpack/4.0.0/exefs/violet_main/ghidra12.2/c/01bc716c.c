/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc716c; name: FUN_01bc716c
 */


void FUN_01bc716c(char *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    uVar2 = *param_3;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2);
    uVar3 = param_3[2];
    puVar1[1] = param_3[1];
    puVar1[2] = uVar3;
    *puVar1 = uVar2;
    puVar1[3] = param_3[3];
    puVar1[4] = param_3[4];
    puVar1[5] = param_3[5];
    puVar1[6] = param_3[6];
    puVar1[7] = param_3[7];
    puVar1[8] = param_3[8];
  }
  return;
}


