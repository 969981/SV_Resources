/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00135010; name: FUN_00135010
 */


void FUN_00135010(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_00133b50();
  iVar3 = *param_2;
  if (iVar3 != 1 && iVar3 != 3) {
    if (iVar3 == 0x10) {
      iVar3 = param_2[2];
    }
    else {
      iVar3 = FUN_00134d60(param_1,param_2,1);
    }
    if (iVar3 != -1) {
      if (param_2[4] == 0xffffffff) {
        param_2[4] = iVar3;
      }
      else {
        uVar5 = param_2[4];
        do {
          uVar4 = uVar5;
          uVar2 = *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar4 * 4);
          iVar1 = (uVar2 >> 7) - 0xffffff;
          uVar5 = 0xffffffff;
          if (iVar1 != -1) {
            uVar5 = uVar4 + iVar1 + 1;
          }
        } while (uVar5 != 0xffffffff);
        if (iVar3 + ~uVar4 + 0xffffff >> 0x19 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00138770(param_1[2],"control structure too long");
        }
        *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar4 * 4) =
             (uVar2 & 0x7f | (iVar3 + ~uVar4) * 0x80) + 0x7fffff80;
      }
    }
  }
  iVar3 = param_2[5];
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  FUN_001334b0(param_1,iVar3);
  param_2[5] = -1;
  return;
}


