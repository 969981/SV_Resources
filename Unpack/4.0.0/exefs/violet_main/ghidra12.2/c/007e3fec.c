/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e3fec; name: FUN_007e3fec
 */


void FUN_007e3fec(undefined8 param_1,ulong *param_2,ulong param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if (*(char *)((long)param_2 + 0x2c) == '\0') {
    if ((((param_3 == 0) || ((param_3 & 7) != 0)) || ((int)param_5 < 2)) ||
       ((ulong)param_4 < (ulong)param_5 * 0x58)) {
      local_58[0] = 0x10407;
    }
    else {
      uVar5 = 0;
      *(uint *)(param_2 + 5) = param_5;
      do {
        lVar3 = param_3 + uVar5;
        FUN_0284e338(lVar3);
        uVar5 = uVar5 + 0x58;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x38) = 0;
        *(undefined8 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined8 *)(lVar3 + 0x50) = 0;
      } while ((ulong)param_5 * 0x58 != uVar5);
      uVar2 = (uint)param_2[5];
      *param_2 = param_3;
      if (0 < (int)uVar2) {
        uVar5 = (ulong)(uVar2 - 1);
        *(ulong *)(param_3 + 0x38) = param_3 + 0x58;
        *(undefined8 *)(param_3 + 0x40) = 0;
        if (uVar2 - 1 != 0) {
          lVar3 = param_3 + 0xb0;
          lVar4 = (ulong)uVar2 - 1;
          do {
            uVar5 = uVar5 - 1;
            lVar1 = 0;
            if (uVar5 != 0) {
              lVar1 = lVar3;
            }
            lVar4 = lVar4 + -1;
            *(long *)(lVar3 + -0x20) = lVar1;
            *(long *)(lVar3 + -0x18) = lVar3 + -0xb0;
            lVar3 = lVar3 + 0x58;
          } while (lVar4 != 0);
        }
      }
      *(undefined1 *)((long)param_2 + 0x2c) = 1;
      param_2[3] = param_3;
      param_2[4] = param_3 + (long)(int)(uVar2 - 1) * 0x58;
      local_58[0] = 0;
    }
  }
  else {
    local_58[0] = 0x10402;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


