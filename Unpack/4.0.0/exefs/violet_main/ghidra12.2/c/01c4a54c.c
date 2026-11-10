/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c4a54c; name: FUN_01c4a54c
 */


void FUN_01c4a54c(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  lVar2 = 4;
  if (DAT_04815b10 == '\0') {
    lVar2 = -1;
  }
  puVar5 = (undefined4 *)FUN_01c4add8(param_2);
  uVar4 = puVar5[2];
  uVar3 = puVar5[1];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + lVar2);
    *puVar1 = *puVar5;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
  }
  return;
}


