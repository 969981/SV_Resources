/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ce00b4; name: FUN_01ce00b4
 */


void FUN_01ce00b4(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar2 = 8;
  if (DAT_0481b838 == '\0') {
    lVar2 = -1;
  }
  puVar5 = (undefined8 *)FUN_01ce0b84(param_2);
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  uVar6 = puVar5[2];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar5 + 3);
    puVar1[1] = uVar4;
    puVar1[2] = uVar6;
    *puVar1 = uVar3;
  }
  return;
}


