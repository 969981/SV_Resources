/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3790; name: FUN_001f3790
 */


undefined8 FUN_001f3790(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_001edb18();
  if (lVar2 == 0) {
    uVar3 = 0xfffffe0b;
    if (((param_2 & 1) != 0) && (*(char *)(param_1 + 0x9aa) == '\0')) {
      lVar2 = *(long *)(param_1 + 0x138);
      if ((lVar2 != 0) &&
         ((iVar1 = *(int *)(lVar2 + 8), iVar1 <= (int)param_2 &&
          (param_2 < *(uint *)(param_1 + 0x930))))) {
        while (iVar1 < (int)param_2) {
          lVar2 = *(long *)(lVar2 + 0x88);
          if (lVar2 == 0) {
            return 0xfffffe0b;
          }
          iVar1 = *(int *)(lVar2 + 8);
        }
        if (iVar1 <= (int)param_2) {
          *(undefined8 *)(lVar2 + 0x70) = param_3;
          return 0;
        }
      }
      uVar3 = 0xfffffe0b;
    }
  }
  else {
    uVar3 = 0;
    *(undefined8 *)(lVar2 + 0xa0) = param_3;
  }
  return uVar3;
}


