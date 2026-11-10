/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01904894; name: FUN_01904894
 */


void FUN_01904894(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[1];
  lVar2 = param_2 + 0x18;
  lVar1 = param_2;
  if (lVar2 == lVar3) goto LAB_01904944;
  lVar4 = *param_1;
  FUN_00d0a34c(param_2,lVar2);
  lVar1 = param_2 + 0x30;
  *(undefined4 *)(lVar4 + (param_2 - lVar4 >> 3) * 8 + 0x10) = *(undefined4 *)(param_2 + 0x28);
  if (lVar1 != lVar3) {
    FUN_00d0a34c(lVar2,lVar1);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x40);
    lVar2 = param_2 + 0x48;
    if (lVar2 == lVar3) goto LAB_01904944;
    FUN_00d0a34c(lVar1,lVar2);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x58);
    if (param_2 + 0x60 != lVar3) {
      do {
        lVar1 = lVar2 + 0x18;
        FUN_00d0a34c(lVar2,lVar1);
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar2 + 0x28);
        lVar4 = lVar2 + 0x30;
        lVar2 = lVar1;
      } while (lVar4 != lVar3);
      goto LAB_01904944;
    }
  }
  lVar1 = lVar2;
LAB_01904944:
  FUN_0190498c(param_1,lVar1);
  return;
}


