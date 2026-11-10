/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cc578; name: FUN_001cc578
 */


int FUN_001cc578(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = 2;
  if ((param_2 == 0) && (param_3 == 0)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar2 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 != 0) {
        iVar2 = 0;
        do {
          iVar1 = FUN_001cca1c(lVar3);
          lVar3 = *(long *)(lVar3 + 0x10);
          if (iVar1 != 0) {
            iVar2 = iVar1;
          }
        } while (lVar3 != 0);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return iVar2;
}


