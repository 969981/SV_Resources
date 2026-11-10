/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b4e4c; name: FUN_007b4e4c
 */


void FUN_007b4e4c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_20 [16];
  
  *(undefined1 *)((long)param_1 + 0x1231) = 0;
  FUN_007a255c();
  FUN_00cbd7c0(auStack_20,param_1 + 0x35);
  uVar1 = (**(code **)(*param_1 + 0x398))(param_1,auStack_20);
  if (((((uVar1 & 1) != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) &&
      (lVar2 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0x10), lVar2 != 0)) &&
     ((*(long *)(lVar2 + 0xc0) != 0 && (uVar1 = FUN_0078cdf4(), (uVar1 & 1) != 0)))) {
    *(undefined4 *)((long)param_1 + 0x1c4) = 4;
  }
  return;
}


