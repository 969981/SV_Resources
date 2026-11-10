/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a8024; name: FUN_007a8024
 */


void FUN_007a8024(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  if (*(short *)(param_1 + 0x18) != *(short *)(param_2 + 0x18)) {
    *(short *)(param_1 + 0x18) = *(short *)(param_2 + 0x18);
  }
  if (*(short *)(param_1 + 0x1a) != *(short *)(param_2 + 0x1a)) {
    *(short *)(param_1 + 0x1a) = *(short *)(param_2 + 0x1a);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  FUN_018ff39c(param_1 + 0x20,param_2 + 0x20);
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      if (uVar2 < *(ushort *)(param_2 + 0x38)) {
        FUN_00796828(*(long *)(param_1 + 0x30) + lVar1,*(long *)(param_2 + 0x30) + lVar1);
      }
      else {
        FUN_007965fc(*(long *)(param_1 + 0x30) + lVar1);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (uVar2 < *(ushort *)(param_1 + 0x38));
  }
  return;
}


