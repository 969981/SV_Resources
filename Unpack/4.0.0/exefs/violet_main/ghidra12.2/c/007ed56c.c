/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ed56c; name: FUN_007ed56c
 */


void FUN_007ed56c(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  bVar1 = *(byte *)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_3 + 9);
  }
  if (((bVar1 >> 1 & 1) == 0) &&
     (uVar2 = *(ushort *)(param_3 + 10), *(ushort *)(param_2 + 10) = uVar2, 0x5a4 < uVar2)) {
    *(undefined2 *)(param_2 + 10) = 0;
    local_28[0] = 0x10407;
  }
  else {
    if ((bVar1 >> 2 & 1) == 0) {
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    }
    if ((bVar1 >> 3 & 1) == 0) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    }
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


