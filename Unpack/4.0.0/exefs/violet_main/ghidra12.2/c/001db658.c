/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001db658; name: FUN_001db658
 */


ulong FUN_001db658(long param_1,uint param_2,int param_3)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((param_1 != 0) && (uVar10 = (ulong)param_2, param_2 != 0)) {
    lVar6 = 0;
    do {
      if (*(int *)(param_1 + lVar6) != -1) {
        if (param_3 < 1) {
          iVar4 = 0;
          auVar11 = ZEXT816(0);
        }
        else {
          auVar11 = FUN_001e0dfc();
          iVar4 = param_3;
        }
        iVar5 = 0;
        if (param_3 != 0) {
          iVar5 = iVar4;
        }
        if (param_3 < 0) {
          iVar5 = -1;
        }
        uVar3 = nnsocketPoll(param_1,uVar10,iVar5);
        puVar2 = PTR_DAT_047cb950;
        do {
          if (uVar3 != 0xffffffff) {
            uVar10 = (ulong)uVar3;
            if ((int)uVar3 < 0) {
              uVar10 = 0xffffffff;
            }
            else if (uVar3 != 0) {
              if (param_2 < 2) {
                param_2 = 1;
              }
              uVar7 = (ulong)param_2;
              puVar8 = (ushort *)(param_1 + 6);
              do {
                if (*(int *)(puVar8 + -3) != -1) {
                  uVar1 = *puVar8;
                  if ((uVar1 & 0x18) != 0) {
                    uVar9 = (ushort)((uVar1 & 0x10) >> 4);
                    if ((uVar1 & 8) != 0) {
                      uVar9 = 5;
                    }
                    *puVar8 = uVar1 | uVar9;
                  }
                }
                puVar8 = puVar8 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            return uVar10;
          }
          iVar4 = nnsocketGetLastErrno();
          if (iVar4 != 0) {
            if (iVar4 != 4) {
              return 0xffffffff;
            }
            if (*(int *)puVar2 != 0) {
              return 0xffffffff;
            }
          }
          if (0 < param_3) {
            auVar12 = FUN_001e0dfc();
            iVar5 = FUN_001e0e28(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_);
            iVar5 = param_3 - iVar5;
            if (iVar5 < 1) {
              return 0;
            }
          }
          iVar4 = 0;
          if (param_3 != 0) {
            iVar4 = iVar5;
          }
          if (param_3 < 0) {
            iVar4 = -1;
          }
          uVar3 = nnsocketPoll(param_1,uVar10,iVar4);
          iVar5 = iVar4;
        } while( true );
      }
      lVar6 = lVar6 + 8;
    } while (uVar10 * 8 != lVar6);
  }
  uVar10 = FUN_001db360(param_3);
  return uVar10;
}


