/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004809a0; name: FUN_004809a0
 */


undefined8
FUN_004809a0(int param_1,int param_2,long *param_3,undefined4 *param_4,long *param_5,
            undefined4 *param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  lVar2 = FUN_004807b0();
  if (lVar2 != 0) {
    if ((param_1 != 0) && (param_2 != 0)) {
      if (param_3 != (long *)0x0) {
        *param_3 = (long)&DAT_03c886bc;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      if (param_5 != (long *)0x0) {
        *param_5 = (long)&DAT_03c886bc;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
      }
      return 0x44;
    }
    iVar6 = *(int *)(lVar2 + 0x244);
    iVar7 = *(int *)(lVar2 + 0x240);
    if (iVar6 != iVar7) {
      do {
        while (lVar5 = (long)iVar7, (*(uint *)(lVar2 + (long)iVar7 * 4) >> 1 & 1) == 0) {
          uVar1 = iVar6 + 0x10;
          if (-1 < iVar6 + 1) {
            uVar1 = iVar6 + 1;
          }
          iVar6 = (iVar6 + 1) - (uVar1 & 0xfffffff0);
          lVar3 = (long)iVar6;
          if ((*(uint *)(lVar2 + (long)iVar6 * 4) >> 1 & 1) == 0) {
            if (param_2 == 0) {
              lVar5 = lVar3;
            }
            lVar3 = lVar2 + lVar5 * 8;
            uVar8 = *(undefined8 *)(lVar3 + 0x40);
            if (param_1 != 0) {
              if (param_2 == 0) {
                iVar7 = iVar6;
              }
              *(int *)(lVar2 + 0x244) = iVar7;
              *(undefined8 *)(lVar3 + 0x40) = 0;
            }
            if ((param_3 != (long *)0x0) && (param_4 != (undefined4 *)0x0)) {
              if (*(long *)(lVar3 + 0x180) == 0) {
                *param_3 = (long)&DAT_03c25b7f;
                uVar4 = 0;
              }
              else {
                *param_3 = *(long *)(lVar3 + 0x180);
                uVar4 = *(undefined4 *)(lVar2 + lVar5 * 4 + 0x200);
              }
              *param_4 = uVar4;
            }
            if (param_5 == (long *)0x0) {
              if (param_1 == 0) {
                return uVar8;
              }
              lVar2 = lVar2 + lVar5 * 4;
              param_6 = (undefined4 *)(lVar2 + 0x140);
              if ((*(uint *)(lVar2 + 0x140) & 1) != 0) {
                FUN_00452f80(*(undefined8 *)(lVar3 + 0xc0),"external/openssl/crypto/err/err.c",0x239
                            );
                *(undefined8 *)(lVar3 + 0xc0) = 0;
              }
            }
            else {
              if (*(long *)(lVar3 + 0xc0) != 0) {
                *param_5 = *(long *)(lVar3 + 0xc0);
                if (param_6 == (undefined4 *)0x0) {
                  return uVar8;
                }
                *param_6 = *(undefined4 *)(lVar2 + lVar5 * 4 + 0x140);
                return uVar8;
              }
              *param_5 = (long)&DAT_03c886bc;
              if (param_6 == (undefined4 *)0x0) {
                return uVar8;
              }
            }
            *param_6 = 0;
            return uVar8;
          }
          *(int *)(lVar2 + 0x244) = iVar6;
          if ((*(uint *)(lVar2 + lVar3 * 4 + 0x140) & 1) != 0) {
            FUN_00452f80(*(undefined8 *)(lVar2 + 0xc0 + lVar3 * 8),
                         "external/openssl/crypto/err/err.c",0x219);
            lVar3 = (long)*(int *)(lVar2 + 0x244);
            *(undefined8 *)(lVar2 + 0xc0 + lVar3 * 8) = 0;
          }
          *(undefined4 *)(lVar2 + lVar3 * 4 + 0x140) = 0;
          *(undefined4 *)(lVar2 + (long)*(int *)(lVar2 + 0x244) * 4) = 0;
          iVar7 = *(int *)(lVar2 + 0x244);
          lVar5 = lVar2 + (long)iVar7 * 8;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(undefined8 *)(lVar5 + 0x180) = 0;
          *(undefined4 *)(lVar2 + (long)iVar7 * 4 + 0x200) = 0xffffffff;
          iVar7 = *(int *)(lVar2 + 0x240);
          iVar6 = *(int *)(lVar2 + 0x244);
          if (iVar6 == iVar7) {
            return 0;
          }
        }
        if ((*(uint *)(lVar2 + lVar5 * 4 + 0x140) & 1) != 0) {
          FUN_00452f80(*(undefined8 *)(lVar2 + 0xc0 + lVar5 * 8),"external/openssl/crypto/err/err.c"
                       ,0x212);
          lVar5 = (long)*(int *)(lVar2 + 0x240);
          *(undefined8 *)(lVar2 + 0xc0 + lVar5 * 8) = 0;
        }
        *(undefined4 *)(lVar2 + lVar5 * 4 + 0x140) = 0;
        *(undefined4 *)(lVar2 + (long)*(int *)(lVar2 + 0x240) * 4) = 0;
        iVar7 = *(int *)(lVar2 + 0x240);
        lVar5 = lVar2 + (long)iVar7 * 8;
        *(undefined8 *)(lVar5 + 0x40) = 0;
        *(undefined8 *)(lVar5 + 0x180) = 0;
        *(undefined4 *)(lVar2 + (long)iVar7 * 4 + 0x200) = 0xffffffff;
        iVar7 = *(int *)(lVar2 + 0x240) + -1;
        if (*(int *)(lVar2 + 0x240) < 1) {
          iVar7 = 0xf;
        }
        *(int *)(lVar2 + 0x240) = iVar7;
        iVar6 = *(int *)(lVar2 + 0x244);
      } while (iVar6 != iVar7);
    }
  }
  return 0;
}


