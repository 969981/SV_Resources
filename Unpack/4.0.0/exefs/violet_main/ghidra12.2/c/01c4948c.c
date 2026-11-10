/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c4948c; name: FUN_01c4948c
 */


void FUN_01c4948c(long *param_1,char *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  puVar3 = (undefined2 *)FUN_018f5d68(param_3);
  uVar2 = *puVar3;
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    puVar1 = (undefined2 *)(*(long *)(param_2 + 8) + lVar4);
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar3 + 1);
    *puVar1 = uVar2;
  }
  return;
}


