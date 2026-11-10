/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124358c; name: FUN_0124358c
 */


undefined8 FUN_0124358c(long param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = (ulong)param_2;
  if (((int)param_2 < 0xe) &&
     (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x70),
     *(int *)(lVar4 + uVar3 * 4 + 0xa8) != 0)) {
    bVar2 = FUN_01a375b0(lVar4 + uVar3 * 0x10 + 0x348);
    if ((bVar2 != 0) &&
       (lVar4 = lVar4 + uVar3 * 4, uVar1 = *(int *)(lVar4 + 0x38) + 1,
       *(uint *)(lVar4 + 0x38) = uVar1, bVar2 <= uVar1)) {
      uVar5 = 1;
      goto LAB_012435c8;
    }
  }
  uVar5 = 0;
LAB_012435c8:
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x44,uVar3);
  return uVar5;
}


