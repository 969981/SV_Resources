/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c4b7cc; name: FUN_01c4b7cc
 */


void FUN_01c4b7cc(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  lVar2 = 0xc;
  if (DAT_04815b20 == '\0') {
    lVar2 = -1;
  }
  puVar6 = (undefined4 *)FUN_01c4c2b4(param_2);
  uVar4 = puVar6[1];
  uVar3 = puVar6[2];
  uVar5 = puVar6[3];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + lVar2);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar5;
  }
  return;
}


