/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a509e4; name: FUN_00a509e4
 */


undefined8 FUN_00a509e4(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = -0x6030;
  do {
    lVar1 = param_1 + 0x2c + lVar3;
    local_48 = *(undefined8 *)(lVar1 + 0x6030);
    local_40 = *(undefined8 *)(lVar1 + 0x6038);
    uStack_38 = *(undefined8 *)(lVar1 + 0x6040);
    uVar2 = FUN_00a64c54(&local_48,param_2);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0);
  return 0;
}


