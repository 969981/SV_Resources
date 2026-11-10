/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b8330; name: FUN_003b8330
 */


undefined8 FUN_003b8330(int param_1,uint *param_2,ulong param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  if ((((-1 < (long)param_3) && (param_1 - 1U < 2)) && (param_2 != (uint *)0x0)) && (param_3 != 0))
  {
    if (param_1 == 2) {
      do {
        if (param_3 < 4) {
          return 0;
        }
        if (param_3 - 4 < 2) {
          return 0;
        }
        if ((param_3 - 4 & 0xfffffffffffffffe) == 2) {
          return 0;
        }
        uVar2 = (((ulong)*(ushort *)((long)param_2 + 6) & 0xff00) << 0x28 |
                (ulong)*(ushort *)((long)param_2 + 6) << 0x38) >> 0x30;
        uVar5 = param_3 - 8;
        param_3 = uVar5 - uVar2;
        if (uVar5 < uVar2) {
          return 0;
        }
        if (param_4 != 0) {
          uVar1 = (((ushort)param_2[1] & 0xff00) << 8 | (uint)(ushort)param_2[1] << 0x18) >> 0x10;
          uVar5 = ((ulong)*param_2 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
                  ((ulong)*param_2 << 0x20 & 0xff00ff00ff00ff) << 8;
          uVar5 = ((uVar5 & 0xffff0000ffff0000) >> 0x10 | uVar5 << 0x10) >> 0x20;
          if (uVar5 == 0x1d0) {
            uVar4 = FUN_003bfde0(param_4,uVar1,&LAB_003b88c0,0,0,&LAB_003b89a0,0);
            iVar3 = (int)uVar4;
          }
          else {
            uVar4 = FUN_003bfe00(param_4,uVar1,uVar5,&LAB_003b89c0,0,0,&LAB_003b8aa0,0);
            iVar3 = (int)uVar4;
          }
          if (iVar3 == 0) {
            return uVar4;
          }
        }
        param_2 = (uint *)((long)param_2 + uVar2 + 8);
      } while (param_3 != 0);
    }
    else {
      do {
        if ((param_3 < 2) || ((param_3 & 0xfffffffffffffffe) == 2)) {
          return 0;
        }
        uVar2 = (((ulong)*(ushort *)((long)param_2 + 2) & 0xff00) << 0x28 |
                (ulong)*(ushort *)((long)param_2 + 2) << 0x38) >> 0x30;
        uVar5 = param_3 - 4;
        param_3 = uVar5 - uVar2;
        if (uVar5 < uVar2) {
          return 0;
        }
        if (param_4 != 0) {
          uVar1 = (((ushort)*param_2 & 0xff00) << 8 | (uint)(ushort)*param_2 << 0x18) >> 0x10;
          if (param_1 == 1) {
            uVar4 = FUN_003bfde0(param_4,uVar1,&LAB_003b88c0,0,0,&LAB_003b89a0,0);
            iVar3 = (int)uVar4;
          }
          else {
            uVar4 = FUN_003bfe00(param_4,uVar1,0,&LAB_003b89c0,0,0,&LAB_003b8aa0,0);
            iVar3 = (int)uVar4;
          }
          if (iVar3 == 0) {
            return uVar4;
          }
        }
        param_2 = (uint *)((long)param_2 + uVar2 + 4);
      } while (param_3 != 0);
    }
    uVar4 = 1;
  }
  return uVar4;
}


