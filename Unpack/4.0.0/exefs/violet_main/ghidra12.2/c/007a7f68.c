/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a7f68; name: FUN_007a7f68
 */


void FUN_007a7f68(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(short *)(param_1 + 0x18) != -1) {
    *(undefined2 *)(param_1 + 0x18) = 0xffff;
  }
  if (*(short *)(param_1 + 0x1a) != -1) {
    *(undefined2 *)(param_1 + 0x1a) = 0xffff;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_018ff39c(param_1 + 0x20,local_38);
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_007965fc(*(long *)(param_1 + 0x30) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (uVar2 < *(ushort *)(param_1 + 0x38));
  }
  return;
}


