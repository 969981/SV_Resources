/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c81880; name: FUN_01c81880
 */


void FUN_01c81880(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = 0x18;
  if (DAT_04815bc8 == '\0') {
    lVar2 = -1;
  }
  puVar4 = (undefined8 *)FUN_019548d0(param_2);
  uVar3 = puVar4[1];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    *puVar1 = *puVar4;
    puVar1[1] = uVar3;
  }
  return;
}


