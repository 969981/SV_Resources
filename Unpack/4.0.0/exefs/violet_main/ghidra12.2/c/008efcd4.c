/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008efcd4; name: FUN_008efcd4
 */


void FUN_008efcd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  long lVar5;
  
  if (((*(byte *)(param_1 + 4) >> 3 & 1) == 0) &&
     (bVar4 = *(byte *)(param_1 + 0x5b), (ulong)bVar4 != 0)) {
    lVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18) + lVar5;
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      puVar3 = *(undefined4 **)(lVar1 + 0x18);
      FUN_008f07f4(uVar2);
      puVar3[1] = 8;
      FUN_008f0810(uVar2,param_2,puVar3,param_3,(ulong)*(uint *)(lVar1 + 0x20) + param_4,*puVar3);
      FUN_008eff90(uVar2,"g3d_index");
      lVar5 = lVar5 + 0x38;
    } while ((ulong)bVar4 * 0x38 != lVar5);
  }
  return;
}


