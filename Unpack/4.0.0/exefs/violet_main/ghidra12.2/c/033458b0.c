/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033458b0; name: FUN_033458b0
 */


undefined8 FUN_033458b0(int param_1,undefined4 param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = param_2;
  lVar2 = FUN_03348800(param_4,&local_24);
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 4);
    uVar4 = ((int)lVar2 - (int)*(undefined8 *)(param_4 + 0x10)) * 0x20000000;
  }
  if ((int)(uVar3 | uVar4) < 0) {
    local_28 = 0;
    FUN_03348764(param_4,&local_24,&local_28);
    lVar2 = FUN_0334896c(param_3,&local_24);
    if (lVar2 == 0) {
      uVar4 = 0;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(lVar2 + 4);
      uVar4 = ((int)lVar2 - (int)param_3[2]) * 0x20000000;
    }
    if (-1 < (int)(uVar3 | uVar4)) {
      lVar2 = *param_3 + (long)(int)(uVar3 | uVar4) * 0x18;
      iVar1 = *(int *)(lVar2 + 0x10);
      if (iVar1 != 0) {
        piVar5 = *(int **)(lVar2 + 8);
        lVar2 = (long)iVar1 << 2;
        do {
          if ((*piVar5 == param_1) ||
             (iVar1 = FUN_033458b0(param_1,*piVar5,param_3,param_4), iVar1 != 0)) {
            return 1;
          }
          piVar5 = piVar5 + 1;
          lVar2 = lVar2 + -4;
        } while (lVar2 != 0);
      }
    }
  }
  return 0;
}


