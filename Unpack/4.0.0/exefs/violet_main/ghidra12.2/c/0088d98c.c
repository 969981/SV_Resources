/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088d98c; name: FUN_0088d98c
 */


void FUN_0088d98c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (*(short *)(lVar4 + 0xe) != 0) {
    uVar2 = *(uint *)(lVar4 + 0x10);
    uVar5 = 0;
    do {
      lVar1 = lVar4 + (ulong)*(uint *)(lVar4 + (ulong)uVar2 + uVar5 * 4);
      if (((*(char *)(lVar1 + 0x1d) == '\x01') &&
          (uVar3 = FUN_0088fe00(*(undefined8 *)(param_2 + 0x28),lVar1), (uVar3 & 1) != 0)) &&
         (uVar3 = FUN_0088d418(param_1,param_2,lVar1), (uVar3 & 1) == 0)) {
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(lVar4 + 0xe));
  }
  return;
}


