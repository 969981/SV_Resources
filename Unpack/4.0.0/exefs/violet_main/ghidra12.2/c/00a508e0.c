/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a508e0; name: FUN_00a508e0
 */


undefined8 FUN_00a508e0(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 == 2) {
    lVar4 = -0x6030;
    do {
      lVar1 = param_1 + 0x2c + lVar4;
      local_48 = *(undefined8 *)(lVar1 + 0x6030);
      local_40 = *(undefined8 *)(lVar1 + 0x6038);
      uStack_38 = *(undefined8 *)(lVar1 + 0x6040);
      uVar2 = ((uint)local_48 & 0xffff) - 0x3d4;
      if (((0x2a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x40000000081U) == 0) &&
          (uVar3 = FUN_00a664ac(&local_48,2), (uVar3 & 1) != 0)) &&
         (uVar3 = FUN_00a65174(&local_48,2,0), (uVar3 & 1) == 0)) {
        return 0;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != 0);
  }
  else {
    lVar4 = -0x6030;
    do {
      lVar1 = param_1 + 0x2c + lVar4;
      local_48 = *(undefined8 *)(lVar1 + 0x6030);
      local_40 = *(undefined8 *)(lVar1 + 0x6038);
      uStack_38 = *(undefined8 *)(lVar1 + 0x6040);
      uVar3 = FUN_00a664ac(&local_48,param_2);
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_00a65174(&local_48,param_2,0), (uVar3 & 1) == 0)) {
        return 0;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != 0);
  }
  return 1;
}


