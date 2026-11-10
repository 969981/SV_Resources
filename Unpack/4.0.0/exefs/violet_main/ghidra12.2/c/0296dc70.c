/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0296dc70; name: FUN_0296dc70
 */


void FUN_0296dc70(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar2 = 0;
  if (lVar5 != 0) {
    iVar2 = *(int *)(lVar5 + 0xc);
  }
  if (iVar2 == param_2) {
    plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    uVar1 = (**(code **)(*plVar3 + 0x2a8))();
    if ((((((uVar1 & 0xffff) == 0) || (iVar2 = FUN_01972c00(param_1,uVar1,3), iVar2 == 0)) ||
         (uVar4 = FUN_018f6550(param_1,param_2), (uVar4 & 1) == 0)) ||
        (uVar4 = FUN_02942950(param_1,param_2), (uVar4 & 1) != 0)) &&
       (((lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x130), lVar5 != 0 &&
         (*(byte *)(lVar5 + 10) < 2)) &&
        (*(undefined4 *)(lVar5 + 0xc) = 0x24, *(byte *)(lVar5 + 10) == 1)))) {
      *(undefined1 *)(lVar5 + 10) = 2;
    }
  }
  return;
}


