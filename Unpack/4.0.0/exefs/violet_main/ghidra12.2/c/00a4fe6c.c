/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4fe6c; name: FUN_00a4fe6c
 */


void FUN_00a4fe6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar3 = -0x6030;
  do {
    lVar1 = param_1 + 0x2c + lVar3;
    local_38 = *(undefined8 *)(lVar1 + 0x6030);
    local_30 = *(undefined8 *)(lVar1 + 0x6038);
    uStack_28 = *(undefined8 *)(lVar1 + 0x6040);
    uVar2 = FUN_00a664ac(&local_38,0);
    if ((uVar2 & 1) != 0) {
      FUN_00a6420c(&local_38,0);
    }
    uVar2 = FUN_00a4f8c0(1);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_00a664ac(&local_38,1), (uVar2 & 1) != 0)) {
      FUN_00a6420c(&local_38,1);
    }
    uVar2 = FUN_00a4f8c0(2);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_00a664ac(&local_38,2), (uVar2 & 1) != 0)) {
      FUN_00a6420c(&local_38,2);
    }
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0);
  return;
}


