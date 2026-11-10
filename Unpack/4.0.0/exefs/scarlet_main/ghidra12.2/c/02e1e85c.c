/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1e85c; name: FUN_02e1e85c
 */


int FUN_02e1e85c(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_1 + 6);
  if ((ulong)bVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(long *)*param_1 + 0x490))();
    if (bVar1 != 1) {
      iVar3 = (**(code **)(*(long *)param_1[1] + 0x490))();
      iVar2 = iVar3 + iVar2;
      if (bVar1 != 2) {
        iVar3 = (**(code **)(*(long *)param_1[2] + 0x490))();
        iVar2 = iVar3 + iVar2;
        if (bVar1 != 3) {
          iVar3 = (**(code **)(*(long *)param_1[3] + 0x490))();
          iVar2 = iVar3 + iVar2;
          if (bVar1 != 4) {
            iVar3 = (**(code **)(*(long *)param_1[4] + 0x490))();
            iVar2 = iVar3 + iVar2;
            if (bVar1 != 5) {
              iVar3 = (**(code **)(*(long *)param_1[5] + 0x490))();
              iVar2 = iVar3 + iVar2;
              if (bVar1 != 6) {
                lVar5 = (ulong)bVar1 - 6;
                puVar4 = param_1 + 6;
                do {
                  iVar3 = (**(code **)(*(long *)*puVar4 + 0x490))();
                  iVar2 = iVar3 + iVar2;
                  lVar5 = lVar5 + -1;
                  puVar4 = puVar4 + 1;
                } while (lVar5 != 0);
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}


