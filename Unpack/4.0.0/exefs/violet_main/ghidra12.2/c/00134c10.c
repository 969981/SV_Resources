/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00134c10; name: FUN_00134c10
 */


void FUN_00134c10(long *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_00133b50();
  iVar4 = *param_2;
  if (iVar4 - 4U < 4 || iVar4 == 2) goto LAB_00134c3c;
  if (iVar4 == 0x10) {
    puVar2 = (uint *)(*(long *)(*param_1 + 0x40) + (long)param_2[2] * 4);
    if (param_2[2] < 1) {
LAB_00134ca0:
      uVar7 = *puVar2;
      puVar5 = puVar2;
    }
    else {
      puVar5 = puVar2 + -1;
      uVar7 = *puVar5;
      if (((byte)(&DAT_03cb602b)[(ulong)uVar7 & 0x7f] >> 4 & 1) == 0) goto LAB_00134ca0;
    }
    *puVar5 = uVar7 ^ 0x8000;
    iVar4 = param_2[2];
  }
  else {
    iVar4 = FUN_00134d60(param_1,param_2,0);
  }
  if (iVar4 != -1) {
    if (param_2[5] == 0xffffffff) {
      param_2[5] = iVar4;
    }
    else {
      uVar7 = param_2[5];
      do {
        uVar6 = uVar7;
        uVar3 = *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar6 * 4);
        iVar1 = (uVar3 >> 7) - 0xffffff;
        uVar7 = 0xffffffff;
        if (iVar1 != -1) {
          uVar7 = uVar6 + iVar1 + 1;
        }
      } while (uVar7 != 0xffffffff);
      if (iVar4 + ~uVar6 + 0xffffff >> 0x19 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1[2],"control structure too long");
      }
      *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar6 * 4) =
           (uVar3 & 0x7f | (iVar4 + ~uVar6) * 0x80) + 0x7fffff80;
    }
  }
LAB_00134c3c:
  iVar4 = param_2[4];
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  FUN_001334b0(param_1,iVar4);
  param_2[4] = -1;
  return;
}


