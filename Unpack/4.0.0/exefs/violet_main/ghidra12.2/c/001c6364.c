/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c6364; name: FUN_001c6364
 */


int FUN_001c6364(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 local_40 [16];
  
  lVar6 = *param_1;
  local_40 = FUN_001e0dfc();
  uVar1 = FUN_001c5a28(lVar6,local_40,1);
  if ((int)uVar1 < 0) {
    FUN_001db9c8(lVar6,"Connection time-out");
    iVar4 = 0x1c;
  }
  else {
    uVar2 = FUN_001c8fe8(*param_2);
    *(undefined4 *)(param_1 + 0x82) = uVar2;
    lVar5 = *param_2;
    param_1[0xf] = lVar5;
    param_1[0x10] = 0;
    param_1[0x4c] = -1;
    param_1[0x83] = (long)(int)(uVar1 >> (*(long *)(lVar5 + 0x28) != 0));
    if (lVar5 == 0) {
      iVar4 = 7;
    }
    else {
      do {
        iVar3 = FUN_001c6470(param_1,lVar5,param_1 + 0x4c);
        if (iVar3 == 0) break;
        lVar5 = *(long *)(param_1[0xf] + 0x28);
        param_1[0xf] = lVar5;
      } while (lVar5 != 0);
      if ((int)param_1[0x4c] == -1) {
        iVar4 = 7;
        if (iVar3 != 0) {
          iVar4 = iVar3;
        }
      }
      else {
        *(long *)(lVar6 + 0x1630) = *(long *)(lVar6 + 0x1630) + 1;
        FUN_001cea34(*param_1,*(undefined8 *)(lVar6 + 0x7c0),4);
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}


