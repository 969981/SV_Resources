/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02305084; name: FUN_02305084
 */


void FUN_02305084(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  lVar2 = 4;
  if (DAT_048462e0 == '\0') {
    lVar2 = -1;
  }
  puVar4 = (undefined4 *)FUN_022fcb00(param_2);
  uVar3 = puVar4[1];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + lVar2);
    *puVar1 = *puVar4;
    puVar1[1] = uVar3;
  }
  return;
}


