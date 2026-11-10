/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a03c4; name: FUN_007a03c4
 */


undefined8 FUN_007a03c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_28;
  
  if (*(short *)(param_1 + 0x114e) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_007967e8(*(long *)(*(long *)(param_1 + 0x88) + uVar3 * 8) + 0x10,param_2);
      if ((uVar1 & 1) != 0) {
        if ((short)uVar3 < 0) {
          return 0;
        }
        lVar2 = *(long *)(*(long *)(param_1 + 0x88) + uVar3 * 8);
        *(undefined2 *)(lVar2 + 8) = 0xff00;
        *(undefined1 *)(lVar2 + 10) = 0;
        FUN_007965fc(lVar2 + 0x10);
        if (*(long *)(param_1 + 0x1180) != 0) {
          local_28 = 0;
          FUN_007935cc(&local_28);
          *(undefined8 *)(*(long *)(param_1 + 0x1180) + uVar3 * 8) = local_28;
        }
        if (*(long *)(param_1 + 0x1188) != 0) {
          local_28 = 0;
          FUN_007935cc(&local_28);
          *(undefined8 *)(*(long *)(param_1 + 0x1188) + uVar3 * 8) = local_28;
        }
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x114e));
  }
  return 0;
}


