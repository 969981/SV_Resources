/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080b868; name: FUN_0080b868
 */


void FUN_0080b868(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_007fe354();
  puVar1 = PTR_DAT_047d1770;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x27a] = 0;
  FUN_00799bf4(*(undefined8 *)PTR_DAT_047d15d8,param_1);
  puVar1 = PTR_DAT_047d0860;
  lVar2 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  FUN_007a543c(*(undefined8 *)(lVar2 + 8),param_1);
  lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
  FUN_007ae4c4(*(undefined8 *)(lVar2 + 0x10),param_1);
  return;
}


