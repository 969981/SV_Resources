/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f5cdc; name: FUN_007f5cdc
 */


void FUN_007f5cdc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 local_be8 [4];
  undefined *local_bd8;
  undefined2 local_bd0;
  undefined1 local_bce;
  undefined8 local_bcc;
  undefined1 auStack_bc4 [1436];
  int local_628 [5];
  undefined1 auStack_614 [1440];
  undefined1 auStack_74 [4];
  long local_70;
  undefined4 local_68 [2];
  
  uVar3 = FUN_007f2a68(*(undefined8 *)(param_1 + 0x70));
  FUN_00797e54(param_1 + 0x10,uVar3);
  puVar2 = PTR_DAT_047d0860;
  puVar1 = PTR_DAT_047d1558 + 0x10;
  do {
    FUN_007e644c(local_628,param_1,&local_70,auStack_614,auStack_74,0x5a0);
    if (local_628[0] == 0) {
      local_bd0 = 0;
      local_bce = 0;
      local_bcc = 0;
      local_bd8 = puVar1;
      memset(auStack_bc4,0,0x595);
      FUN_007f635c(local_be8,&local_bd8,auStack_614,0x5a0);
      FUN_018ff39c(local_628,local_be8);
      if (local_628[0] == 0) {
        FUN_00f42ddc(local_be8,*(undefined8 *)puVar2,local_68,local_70);
        FUN_018ff39c(local_628,local_be8);
        if (local_628[0] == 0) {
          switch((undefined1)local_bd0) {
          case 0:
            if ((*(byte *)(param_1 + 0x78) < 0xb) &&
               ((1 << (ulong)(*(byte *)(param_1 + 0x78) & 0x1f) & 0x736U) != 0)) {
              iVar4 = 0;
              *(undefined1 *)(*(long *)(param_1 + 0xc0) + (ulong)(byte)local_68[0]._0_1_) = 1;
            }
            else {
              *(char *)(*(long *)(param_1 + 0x98) + (ulong)(byte)local_68[0]._0_1_) =
                   local_bd0._1_1_;
              if (*(uint *)(param_1 + 0xa0) <= (uint)local_bcc) goto switchD_007f5e58_default;
              iVar4 = 0;
              *(uint *)(param_1 + 0xa0) = (uint)local_bcc;
            }
            break;
          case 1:
            iVar4 = 0;
            *(undefined4 *)(param_1 + 0xac) = 0;
            *(undefined1 *)(param_1 + 0xba) = 0;
            if (*(char *)(param_1 + 0x78) == '\x04') {
              *(undefined1 *)(param_1 + 0x78) = 5;
LAB_007f5ec0:
              if ((*(char *)(param_1 + 0xa5) == local_bd0._1_1_) &&
                 (*(long *)(param_1 + 0xb0) == local_70)) {
                if (*(long *)(param_1 + 0x88) != 0) {
                  if (local_bcc._4_4_ + *(uint *)(param_1 + 0xac) <= *(uint *)(param_1 + 0x90)) {
                    memcpy((void *)((ulong)*(uint *)(param_1 + 0xac) + *(long *)(param_1 + 0x88)),
                           auStack_bc4,(ulong)local_bcc._4_4_);
                    iVar4 = 0;
                    *(uint *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + local_bcc._4_4_;
                    *(undefined1 *)(param_1 + 0xba) = local_bce;
                    break;
                  }
                }
                goto LAB_007f5d9c;
              }
              goto switchD_007f5e58_default;
            }
            break;
          case 2:
            if (*(char *)(param_1 + 0x78) == '\x05') goto LAB_007f5ec0;
          default:
switchD_007f5e58_default:
            iVar4 = 0;
            break;
          case 3:
            if (*(char *)(param_1 + 0x78) != '\x04') goto switchD_007f5e58_default;
            *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
            *(undefined1 *)(param_1 + 0x78) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined2 *)(param_1 + 0xb8) = 0;
            *(undefined2 *)(param_1 + 0xa4) = 0xffff;
            *(undefined1 *)(param_1 + 0xba) = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            *(undefined8 *)(param_1 + 0xb0) = 0;
            if (*(short *)(*(long *)puVar2 + 0x50) != 0) {
              uVar5 = 0;
              do {
                *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar5) = 0xff;
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(ushort *)(*(long *)puVar2 + 0x50));
            }
            iVar4 = 0;
            *(undefined1 *)(param_1 + 0x78) = 7;
            break;
          case 4:
            *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
            *(undefined1 *)(param_1 + 0x78) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined2 *)(param_1 + 0xb8) = 0;
            *(undefined2 *)(param_1 + 0xa4) = 0xffff;
            *(undefined1 *)(param_1 + 0xba) = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            *(undefined8 *)(param_1 + 0xb0) = 0;
            if (*(short *)(*(long *)puVar2 + 0x50) != 0) {
              uVar5 = 0;
              do {
                *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar5) = 0xff;
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(ushort *)(*(long *)puVar2 + 0x50));
            }
            iVar4 = 0;
            *(undefined1 *)(param_1 + 0x78) = 0xc;
            break;
          case 5:
            iVar4 = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x98) + (ulong)(byte)local_68[0]._0_1_) = 0xff;
            *(undefined1 *)(*(long *)(param_1 + 200) + (ulong)(byte)local_68[0]._0_1_) = 1;
            break;
          case 6:
            if (*(char *)(param_1 + 0x78) != '\n') goto switchD_007f5e58_default;
            *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
            *(undefined1 *)(param_1 + 0x78) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined2 *)(param_1 + 0xb8) = 0;
            *(undefined2 *)(param_1 + 0xa4) = 0xffff;
            *(undefined1 *)(param_1 + 0xba) = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            *(undefined8 *)(param_1 + 0xb0) = 0;
            if (*(short *)(*(long *)puVar2 + 0x50) != 0) {
              uVar5 = 0;
              do {
                *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar5) = 0xff;
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(ushort *)(*(long *)puVar2 + 0x50));
            }
            iVar4 = 0;
            *(undefined1 *)(param_1 + 0x78) = 0xb;
          }
        }
        else {
          iVar4 = 2;
        }
        goto LAB_007f5da0;
      }
    }
    else {
      local_bd8 = (undefined *)CONCAT44(local_bd8._4_4_,0x2c09);
      local_be8[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_bd8 | 4),(Result *)local_be8);
      if (local_628[0] != (int)local_bd8) {
        local_be8[0] = 0x2c03;
        local_68[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_be8 | 4),(Result *)local_68);
      }
    }
LAB_007f5d9c:
    iVar4 = 1;
LAB_007f5da0:
    if (iVar4 == 1) {
      return;
    }
  } while( true );
}


