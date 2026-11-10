/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d35504; name: FUN_01d35504
 */


void FUN_01d35504(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar2 = 0x14;
  if (DAT_0482f040 == '\0') {
    lVar2 = -1;
  }
  puVar6 = (undefined8 *)FUN_01d35664(param_2);
  uVar3 = *puVar6;
  uVar4 = puVar6[1];
  uVar5 = puVar6[3];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    puVar1[2] = puVar6[2];
    puVar1[3] = uVar5;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
  }
  return;
}


