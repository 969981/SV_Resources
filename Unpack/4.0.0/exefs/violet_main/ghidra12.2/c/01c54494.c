/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c54494; name: FUN_01c54494
 */


void FUN_01c54494(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = (uint)DAT_04815b40;
  puVar3 = (undefined4 *)FUN_01c55190(param_2);
  uVar2 = *(undefined2 *)(puVar3 + 1);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 8) - ((ulong)~uVar4 & 1));
    *puVar1 = *puVar3;
    *(undefined2 *)(puVar1 + 1) = uVar2;
  }
  return;
}


