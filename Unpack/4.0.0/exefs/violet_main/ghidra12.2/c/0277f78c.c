/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277f78c; name: FUN_0277f78c
 */


void FUN_0277f78c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,uint param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + 0x38);
  if ((ulong)param_6 < (ulong)(*(long *)(lVar2 + 0x90) - *(long *)(lVar2 + 0x88) >> 6)) {
    FUN_00c41540(lVar2);
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x88) + (ulong)param_6 * 0x40);
    puVar1[1] = param_1._8_8_;
    *puVar1 = param_1._0_8_;
    puVar1[3] = param_2._8_8_;
    puVar1[2] = param_2._0_8_;
    puVar1[5] = param_3._8_8_;
    puVar1[4] = param_3._0_8_;
    puVar1[7] = param_4._8_8_;
    puVar1[6] = param_4._0_8_;
  }
  return;
}


