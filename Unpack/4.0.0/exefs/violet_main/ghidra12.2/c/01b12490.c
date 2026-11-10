/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b12490; name: FUN_01b12490
 */


void FUN_01b12490(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined2 local_28;
  
  uVar5 = (uint)DAT_048042d8;
  puVar4 = (undefined8 *)FUN_01b130d8(param_2);
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) - ((ulong)~uVar5 & 1));
    local_28 = (undefined2)*(undefined4 *)(puVar4 + 2);
    *(undefined2 *)(puVar1 + 2) = local_28;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
  }
  return;
}


