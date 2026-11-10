/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4a8a4; name: FUN_01d4a8a4
 */


void FUN_01d4a8a4(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_30;
  
  lVar2 = 0x8c0;
  if (DAT_04830fe8 == '\0') {
    lVar2 = -1;
  }
  puVar4 = (undefined8 *)FUN_01d4c5b4(param_2);
  uVar3 = *puVar4;
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    local_30 = (undefined4)puVar4[2];
    puVar1[1] = puVar4[1];
    *(undefined4 *)(puVar1 + 2) = local_30;
    *puVar1 = uVar3;
  }
  return;
}


