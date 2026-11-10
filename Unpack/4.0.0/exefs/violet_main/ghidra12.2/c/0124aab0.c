/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124aab0; name: FUN_0124aab0
 */


void FUN_0124aab0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*param_3 == 0) {
    bVar1 = false;
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_014813f4(param_1);
    bVar1 = lVar2 != 0;
    if ((lVar2 != 0) && ((char)param_3[1] != '\0')) {
      uVar3 = FUN_01243584(param_1);
      FUN_0197495c(uVar3,lVar2);
      bVar1 = true;
    }
  }
  uVar3 = FUN_01243584(param_1);
  FUN_0124b0ac(uVar3,*param_3,param_3 + 2);
  if ((bVar1) && ((char)param_3[1] != '\0')) {
    uVar3 = FUN_01243584(param_1);
    FUN_018521d8(uVar3,lVar2);
  }
  uVar4 = FUN_0124ab84(param_3 + 2);
  if ((uVar4 & 1) != 0) {
    lVar2 = FUN_0149b698(param_1);
    *(undefined1 *)(lVar2 + 0xc0) = 1;
  }
  return;
}


