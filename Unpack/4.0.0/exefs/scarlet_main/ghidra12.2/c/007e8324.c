/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e8324; name: FUN_007e8324
 */


void FUN_007e8324(undefined8 param_1,long *param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 != (undefined1 *)0x0) && (param_4 != (int *)0x0)) &&
     (uVar1 = (**(code **)(*param_2 + 0x20))(), uVar1 <= param_5)) {
    *param_3 = (char)param_2[1];
    param_3[1] = *(undefined1 *)((long)param_2 + 9);
    *(ushort *)(param_3 + 2) =
         *(ushort *)((long)param_2 + 10) >> 8 | *(ushort *)((long)param_2 + 10) << 8;
    *(ushort *)(param_3 + 4) =
         *(ushort *)((long)param_2 + 0xc) >> 8 | *(ushort *)((long)param_2 + 0xc) << 8;
    *(ushort *)(param_3 + 6) =
         *(ushort *)((long)param_2 + 0xe) >> 8 | *(ushort *)((long)param_2 + 0xe) << 8;
    param_3[8] = (char)param_2[2];
    if (*(byte *)(param_2 + 2) < 0x18) {
      iVar3 = (int)param_3;
      if ((*(byte *)(param_2 + 2) + 0x1f & 0x1e0) == 0) {
        iVar2 = iVar3 + 9;
      }
      else {
        uVar1 = (*(uint *)((long)param_2 + 0x14) & 0xff00ff00) >> 8 |
                (*(uint *)((long)param_2 + 0x14) & 0xff00ff) << 8;
        *(uint *)(param_3 + 9) = uVar1 >> 0x10 | uVar1 << 0x10;
        if (*(byte *)(param_2 + 2) < 0x21) {
          iVar2 = iVar3 + 0xd;
        }
        else {
          uVar1 = (uint)(*(ulong *)((long)param_2 + 0x14) >> 1);
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          *(uint *)(param_3 + 0xd) = uVar1 >> 0x10 | uVar1 << 0x10;
          if (*(byte *)(param_2 + 2) < 0x41) {
            iVar2 = iVar3 + 0x11;
          }
          else {
            uVar1 = (uint)(*(ulong *)((long)param_2 + 0x14) >> 2);
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            *(uint *)(param_3 + 0x11) = uVar1 >> 0x10 | uVar1 << 0x10;
            if (*(byte *)(param_2 + 2) < 0x61) {
              iVar2 = iVar3 + 0x15;
            }
            else {
              uVar1 = (uint)(*(ulong *)((long)param_2 + 0x14) >> 3);
              uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
              *(uint *)(param_3 + 0x15) = uVar1 >> 0x10 | uVar1 << 0x10;
              if (*(byte *)(param_2 + 2) < 0x81) {
                iVar2 = iVar3 + 0x19;
              }
              else {
                uVar1 = (uint)(*(ulong *)((long)param_2 + 0x14) >> 4);
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                *(uint *)(param_3 + 0x19) = uVar1 >> 0x10 | uVar1 << 0x10;
                if (*(byte *)(param_2 + 2) < 0xa1) {
                  iVar2 = iVar3 + 0x1d;
                }
                else {
                  uVar1 = (uint)(*(ulong *)((long)param_2 + 0x14) >> 5);
                  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                  *(uint *)(param_3 + 0x1d) = uVar1 >> 0x10 | uVar1 << 0x10;
                  if (*(byte *)(param_2 + 2) < 0xc1) {
                    iVar2 = iVar3 + 0x21;
                  }
                  else {
                    uVar1 = (uint)(*(ulong *)((long)param_2 + 0x14) >> 6);
                    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                    *(uint *)(param_3 + 0x21) = uVar1 >> 0x10 | uVar1 << 0x10;
                    if (*(byte *)(param_2 + 2) < 0xe1) {
                      iVar2 = iVar3 + 0x25;
                    }
                    else {
                      uVar1 = (uint)(*(ulong *)((long)param_2 + 0x14) >> 7);
                      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                      *(uint *)(param_3 + 0x25) = uVar1 >> 0x10 | uVar1 << 0x10;
                      iVar2 = iVar3 + 0x29;
                    }
                  }
                }
              }
            }
          }
        }
      }
      *param_4 = iVar2 - iVar3;
      local_48[0] = 0;
      goto LAB_007e83c4;
    }
  }
  local_48[0] = 0x10407;
LAB_007e83c4:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


