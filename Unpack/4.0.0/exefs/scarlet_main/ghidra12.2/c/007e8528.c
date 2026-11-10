/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e8528; name: FUN_007e8528
 */


void FUN_007e8528(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((param_3 != (undefined1 *)0x0) && (8 < param_4)) {
    *(undefined1 *)(param_2 + 8) = *param_3;
    *(undefined1 *)(param_2 + 9) = param_3[1];
    uVar3 = *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8;
    *(ushort *)(param_2 + 10) = uVar3;
    if (uVar3 < 0x5a5) {
      *(ushort *)(param_2 + 0xc) = *(ushort *)(param_3 + 4) >> 8 | *(ushort *)(param_3 + 4) << 8;
      *(ushort *)(param_2 + 0xe) = *(ushort *)(param_3 + 6) >> 8 | *(ushort *)(param_3 + 6) << 8;
      bVar1 = param_3[8];
      *(byte *)(param_2 + 0x10) = bVar1;
      if (bVar1 < 0x18) {
        uVar2 = bVar1 + 0x1f >> 5;
        if ((uVar2 != 0) &&
           (uVar4 = (*(uint *)(param_3 + 9) & 0xff00ff00) >> 8 |
                    (*(uint *)(param_3 + 9) & 0xff00ff) << 8,
           *(uint *)(param_2 + 0x14) = uVar4 >> 0x10 | uVar4 << 0x10, uVar2 != 1)) {
          bVar1 = param_3[0xd];
          *(uint *)(param_2 + 0x14) =
               *(uint *)(param_2 + 0x14) & 1 |
               ((bVar1 & 0x7f) << 0x18 | (uint)(byte)param_3[0xe] << 0x10 |
                (uint)(byte)param_3[0xf] << 8 | (uint)(byte)param_3[0x10]) << 1;
          *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffffffe | (uint)(bVar1 >> 7);
          if (uVar2 != 2) {
            bVar1 = param_3[0x11];
            *(uint *)(param_2 + 0x14) =
                 *(uint *)(param_2 + 0x14) & 3 |
                 ((bVar1 & 0x3f) << 0x18 | (uint)(byte)param_3[0x12] << 0x10 |
                  (uint)(byte)param_3[0x13] << 8 | (uint)(byte)param_3[0x14]) << 2;
            *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffffffc | (uint)(bVar1 >> 6);
            if (uVar2 != 3) {
              bVar1 = param_3[0x15];
              *(uint *)(param_2 + 0x14) =
                   *(uint *)(param_2 + 0x14) & 7 |
                   ((bVar1 & 0x1f) << 0x18 | (uint)(byte)param_3[0x16] << 0x10 |
                    (uint)(byte)param_3[0x17] << 8 | (uint)(byte)param_3[0x18]) << 3;
              *(uint *)(param_2 + 0x18) =
                   *(uint *)(param_2 + 0x18) & 0xfffffff8 | (uint)(bVar1 >> 5);
              if (uVar2 != 4) {
                bVar1 = param_3[0x19];
                *(uint *)(param_2 + 0x14) =
                     *(uint *)(param_2 + 0x14) & 0xf |
                     ((bVar1 & 0xf) << 0x18 | (uint)(byte)param_3[0x1a] << 0x10 |
                      (uint)(byte)param_3[0x1b] << 8 | (uint)(byte)param_3[0x1c]) << 4;
                *(uint *)(param_2 + 0x18) =
                     *(uint *)(param_2 + 0x18) & 0xfffffff0 | (uint)(bVar1 >> 4);
                if (uVar2 != 5) {
                  bVar1 = param_3[0x1d];
                  *(uint *)(param_2 + 0x14) =
                       *(uint *)(param_2 + 0x14) & 0x1f |
                       ((bVar1 & 7) << 0x18 | (uint)(byte)param_3[0x1e] << 0x10 |
                        (uint)(byte)param_3[0x1f] << 8 | (uint)(byte)param_3[0x20]) << 5;
                  *(uint *)(param_2 + 0x18) =
                       *(uint *)(param_2 + 0x18) & 0xffffffe0 | (uint)(bVar1 >> 3);
                  if (uVar2 != 6) {
                    bVar1 = param_3[0x21];
                    *(uint *)(param_2 + 0x14) =
                         *(uint *)(param_2 + 0x14) & 0x3f |
                         ((bVar1 & 3) << 0x18 | (uint)(byte)param_3[0x22] << 0x10 |
                          (uint)(byte)param_3[0x23] << 8 | (uint)(byte)param_3[0x24]) << 6;
                    *(uint *)(param_2 + 0x18) =
                         *(uint *)(param_2 + 0x18) & 0xffffffc0 | (uint)(bVar1 >> 2);
                    if (uVar2 != 7) {
                      bVar1 = param_3[0x25];
                      *(uint *)(param_2 + 0x14) =
                           *(uint *)(param_2 + 0x14) & 0x7f |
                           ((bVar1 & 1) << 0x18 | (uint)(byte)param_3[0x26] << 0x10 |
                            (uint)(byte)param_3[0x27] << 8 | (uint)(byte)param_3[0x28]) << 7;
                      *(uint *)(param_2 + 0x18) =
                           *(uint *)(param_2 + 0x18) & 0xffffff80 | (uint)(bVar1 >> 1);
                    }
                  }
                }
              }
            }
          }
        }
        local_28[0] = 0;
        goto LAB_007e85b0;
      }
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
    else {
      *(undefined2 *)(param_2 + 10) = 0;
    }
  }
  local_28[0] = 0x10407;
LAB_007e85b0:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


