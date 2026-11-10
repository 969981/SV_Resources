/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015cd50; name: FUN_0015cd50
 */


int FUN_0015cd50(byte *param_1,byte *param_2,int *param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 0x10 <= param_2) {
    param_2 = param_1 + 0x10;
  }
  FUN_0015cf00(param_3,0x20);
  pbVar3 = param_1 + 3;
  if (param_2 < pbVar3) {
    return -1;
  }
  bVar1 = *param_1;
  uVar2 = (bVar1 & 3) << 0x10 | (uint)param_1[1] << 8 | (uint)param_1[2];
  if (uVar2 == 0x3ffff) {
    bVar1 = bVar1 >> 2;
    if (bVar1 != 2) {
      if (bVar1 == 1) {
        if (param_2 < param_1 + 4) {
          return -1;
        }
        bVar1 = *pbVar3;
        *param_3 = 0;
        param_3[1] = (uint)bVar1;
        pbVar3 = param_1 + 4;
      }
      else {
        if (bVar1 != 0) {
          FUN_0015c3d0();
          if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
            (**(code **)PTR_PTR_047cb868)
                      (0,"v:\\devel\\projects\\oodle2\\core\\rrlzh_lzhlw_shared.cpp",0x363,
                       "OODLE ERROR : invalid QH ; unused special value\n");
          }
          FUN_0015c3f0();
          return -1;
        }
        param_3[2] = 1;
        plVar5 = (long *)(param_3 + 4);
        *param_3 = 0;
        pbVar3 = (byte *)FUN_00164bb0(pbVar3,param_2,plVar5,0xf,7);
        if (pbVar3 == (byte *)0x0) {
          return -1;
        }
        lVar4 = *plVar5;
        *plVar5 = lVar4 + 1;
        if (lVar4 + 1 < 2) {
          return -1;
        }
      }
      goto LAB_0015ce8c;
    }
    *param_3 = param_5;
  }
  else {
    *param_3 = uVar2 + 1;
    param_3[6] = bVar1 >> 2 & 1;
    param_3[7] = bVar1 >> 2 & 2;
  }
  if (param_4 != 0) {
    pbVar3 = param_1 + 6;
    if (param_2 < pbVar3) {
      return -1;
    }
    bVar1 = param_1[3];
    param_3[1] = (uint)bVar1 << 0x10;
    uVar2 = (uint)bVar1 << 0x10 | (uint)param_1[4] << 8;
    param_3[1] = uVar2;
    param_3[1] = uVar2 | param_1[5];
  }
LAB_0015ce8c:
  return (int)pbVar3 - (int)param_1;
}


