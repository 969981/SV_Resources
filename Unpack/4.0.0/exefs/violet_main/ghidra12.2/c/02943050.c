/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943050; name: FUN_02943050
 */


void FUN_02943050(long param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar6 = *(long *)(lVar5 + 0x2b0);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0xc) == 0)) {
    lVar5 = *(long *)(lVar5 + 0x28);
    iVar4 = 0;
    if (lVar5 != 0) {
      iVar4 = *(int *)(lVar5 + 0xc);
    }
    if (iVar4 == param_2) {
      plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
      uVar3 = (**(code **)(*plVar2 + 0x308))();
      if ((uVar3 & 1) == 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x98);
        if (lVar5 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(lVar5 + 0xc);
        }
        uVar3 = FUN_021fb6dc(uVar1);
        if ((((uVar3 & 1) != 0) &&
            (lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x240), lVar5 != 0)) &&
           (*(byte *)(lVar5 + 10) < 2)) {
          *(undefined4 *)(lVar5 + 0xc) = 1;
          if (*(byte *)(lVar5 + 10) == 1) {
            *(undefined1 *)(lVar5 + 10) = 2;
          }
          lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
          if (lVar5 == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined4 *)(lVar5 + 0xc);
          }
          FUN_02942fb0(param_1,param_2,uVar1);
          lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x2d0);
          if (((lVar5 != 0) && (*(byte *)(lVar5 + 10) < 2)) &&
             (*(undefined4 *)(lVar5 + 0xc) = 1, *(byte *)(lVar5 + 10) == 1)) {
            *(undefined1 *)(lVar5 + 10) = 2;
          }
        }
      }
    }
  }
  return;
}


