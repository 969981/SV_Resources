/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010af048; name: FUN_010af048
 */


void FUN_010af048(long param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  do {
    uVar1 = (&DAT_03d6abe6)[lVar3];
    puVar2 = (undefined1 *)FUN_010af09c(param_1);
    lVar3 = lVar3 + 4;
    *puVar2 = uVar1;
  } while (lVar3 != 0x340);
  return;
}


