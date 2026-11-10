/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d6174; name: FUN_001d6174
 */


undefined8 FUN_001d6174(long param_1,long param_2,size_t param_3)

{
  undefined8 uVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(long *)(param_2 + 0x60) + param_3;
  if (uVar4 < 0x19001) {
    uVar3 = *(ulong *)(param_1 + 0x1128);
    if (uVar4 < uVar3) {
      __dest = *(void **)(param_2 + 0x58);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x1120);
      lVar6 = *(long *)(param_2 + 0x58);
      uVar4 = uVar4 * 3 >> 1;
      if (uVar4 <= uVar3 * 2) {
        uVar4 = uVar3 << 1;
      }
      lVar2 = FUN_001ec318(lVar5,uVar4);
      if (lVar2 == 0) {
        FUN_001db9c8(param_1,"Failed to alloc memory for big header!");
        goto LAB_001d61b8;
      }
      *(long *)(param_1 + 0x1120) = lVar2;
      __dest = (void *)(lVar2 + (lVar6 - lVar5));
      *(ulong *)(param_1 + 0x1128) = uVar4;
      *(void **)(param_2 + 0x58) = __dest;
    }
    memcpy(__dest,*(void **)(param_2 + 0x70),param_3);
    lVar5 = *(long *)(param_2 + 0x58);
    uVar1 = 0;
    *(size_t *)(param_2 + 0x58) = lVar5 + param_3;
    *(size_t *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + param_3;
    *(undefined1 *)(lVar5 + param_3) = 0;
  }
  else {
    FUN_001db9c8(param_1,"Rejected %zu bytes header (max is %d)!",uVar4,0x19000);
LAB_001d61b8:
    uVar1 = 0x1b;
  }
  return uVar1;
}


