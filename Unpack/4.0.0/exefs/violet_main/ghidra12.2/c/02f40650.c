/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f40650; name: FUN_02f40650
 */


void FUN_02f40650(long param_1,ulong param_2,ulong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(long *)(param_1 + 0x698) != 0) {
    uVar5 = (uint)param_2;
    uVar1 = uVar5 & 0xffffff;
    if ((uVar1 == 0xffffff) ||
       (((uVar1 < *(uint *)(param_1 + 0x40) &&
         ((*(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0xc0 + 0x54) & 3) != 0)) &&
        (*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0xc0 + 0x50) == uVar5)))) {
      uVar4 = (uint)param_3;
      uVar2 = uVar4 & 0xffffff;
      if ((uVar2 == 0xffffff) ||
         (((uVar2 < *(uint *)(param_1 + 0x40) &&
           ((*(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar2 * 0xc0 + 0x54) & 3) != 0)) &&
          (*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar2 * 0xc0 + 0x50) == uVar4)))) {
        if (param_4 == 0) {
          if ((uVar1 != 0xffffff) &&
             ((*(byte *)(*(long *)(param_1 + 0x38) + (param_2 & 0xffffff) * 0xc0 + 0x54) & 9) == 0))
          {
            FUN_02f35f08(param_1,param_2 & 0xffffffff,0);
          }
          if ((uVar2 != 0xffffff) &&
             ((*(byte *)(*(long *)(param_1 + 0x38) + (param_3 & 0xffffff) * 0xc0 + 0x54) & 9) == 0))
          {
            FUN_02f35f08(param_1,param_3 & 0xffffffff,0);
          }
        }
        if (((((((uVar1 != 0xffffff) && (uVar1 < *(uint *)(param_1 + 0x40))) &&
               (lVar3 = *(long *)(param_1 + 0x38),
               (*(byte *)(lVar3 + (ulong)uVar1 * 0xc0 + 0x54) & 3) != 0)) &&
              ((*(uint *)(lVar3 + (ulong)uVar1 * 0xc0 + 0x50) == uVar5 &&
               ((*(byte *)(lVar3 + (param_2 & 0xffffff) * 0xc0 + 0x88) & 1) != 0)))) &&
             ((uVar2 < *(uint *)(param_1 + 0x40) &&
              ((uVar2 != 0xffffff && ((*(byte *)(lVar3 + (ulong)uVar2 * 0xc0 + 0x54) & 3) != 0))))))
            && (*(uint *)(lVar3 + (ulong)uVar2 * 0xc0 + 0x50) == uVar4)) &&
           ((*(byte *)(lVar3 + (param_3 & 0xffffff) * 0xc0 + 0x88) & 1) != 0)) {
          FUN_02f56b6c(*(undefined8 *)(param_1 + 0x698),param_2 & 0xffffffff,param_3 & 0xffffffff);
          return;
        }
      }
    }
  }
  return;
}


