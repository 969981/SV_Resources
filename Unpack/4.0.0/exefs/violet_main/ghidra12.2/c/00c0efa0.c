/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0efa0; name: FUN_00c0efa0
 */


void FUN_00c0efa0(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*param_1 & 1) == 0) {
    uVar6 = (ulong)(*param_1 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    if (iVar5 != 0) {
      return;
    }
  }
  else {
    uVar3 = 0;
    do {
      pbVar1 = (byte *)std::string::at((ulong)param_1);
      if ((4 < *pbVar1 - 9) && (*pbVar1 != 0x20)) {
        iVar2 = (int)uVar3;
        if (iVar5 != iVar2) {
          if (iVar2 != 0) {
            std::string::erase((ulong)param_1,0);
            iVar5 = iVar5 - iVar2;
          }
          if (iVar5 < 1) {
            return;
          }
          lVar7 = ((ulong)(iVar5 - 1) << 0x20) + 0x100000000;
          lVar4 = 0;
          while( true ) {
            pbVar1 = (byte *)std::string::at((ulong)param_1);
            if ((4 < *pbVar1 - 9) && (*pbVar1 != 0x20)) break;
            lVar4 = lVar4 + -1;
            lVar7 = lVar7 + -0x100000000;
            if ((long)((ulong)(iVar5 - 1) + lVar4 + 1) < 1) {
              return;
            }
          }
          if ((int)lVar4 == 0) {
            return;
          }
          std::string::erase((ulong)param_1,lVar7 >> 0x20);
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar6 & 0xffffffff) != uVar3);
  }
  if ((*param_1 & 1) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  }
  **(undefined1 **)(param_1 + 0x10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}


