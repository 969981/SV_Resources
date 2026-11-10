/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4a6d4; name: FUN_01d4a6d4
 */


void FUN_01d4a6d4(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = 0x8a0;
  if (DAT_04830fe0 == '\0') {
    lVar2 = -1;
  }
  puVar3 = (undefined8 *)FUN_01d4c530(param_2);
  uVar6 = *puVar3;
  uVar5 = puVar3[3];
  uVar4 = puVar3[2];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    puVar1[1] = puVar3[1];
    *puVar1 = uVar6;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
  return;
}


