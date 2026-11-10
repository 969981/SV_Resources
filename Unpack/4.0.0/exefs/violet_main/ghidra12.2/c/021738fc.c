/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021738fc; name: FUN_021738fc
 */


undefined * FUN_021738fc(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar3 = (byte *)(**(code **)(**(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x2b0) * 0x40 +
                                           0x30) + 0x70))();
  if ((*pbVar3 < param_2) || (pbVar3[1] < param_3)) {
    puVar4 = &DAT_03d317d8;
  }
  else {
    uVar2 = *(ushort *)(pbVar3 + (ulong)param_2 * 2 + 2);
    pbVar5 = (byte *)(**(code **)(**(long **)(param_1 + 0x28 +
                                              (ulong)*(uint *)(param_1 + 0x2b0) * 0x40 + 8) + 0x70))
                               ();
    bVar1 = pbVar5[(ulong)(param_3 + pbVar3[1] * param_2) + (ulong)*pbVar5 * 2 + 2];
    lVar6 = (**(code **)(**(long **)(param_1 + 0x28 + (ulong)*(uint *)(param_1 + 0x2b0) * 0x40 + 8)
                        + 0x70))();
    puVar4 = (undefined *)(lVar6 + (ulong)uVar2 + (ulong)bVar1);
  }
  return puVar4;
}


