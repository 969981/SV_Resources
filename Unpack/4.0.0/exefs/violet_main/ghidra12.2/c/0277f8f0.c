/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277f8f0; name: FUN_0277f8f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0277f8f0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined1 auVar4 [16];
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((ulong)param_2 < (ulong)(*(long *)(lVar2 + 0x90) - *(long *)(lVar2 + 0x88) >> 6)) {
    FUN_00c41540(lVar2);
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x88) + (ulong)param_2 * 0x40);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
  }
  else {
    uVar3 = DAT_03cab620;
    uVar5 = DAT_03cab628;
  }
  auVar4._8_8_ = uVar5;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


