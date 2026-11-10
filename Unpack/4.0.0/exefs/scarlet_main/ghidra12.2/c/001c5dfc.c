/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c5dfc; name: FUN_001c5dfc
 */


int FUN_001c5dfc(long *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [48];
  undefined1 local_80 [16];
  int local_6c [3];
  
  lVar13 = *param_1;
  local_6c[0] = 0;
  *param_3 = 0;
  if (*(char *)((long)param_1 + (long)param_2 + 0x3fa) == '\0') {
    local_80 = FUN_001e0dfc();
    uVar5 = FUN_001c5a28(lVar13,local_80,1);
    if ((int)uVar5 < 0) {
      FUN_001db9c8(lVar13,"Connection time-out");
      iVar8 = 0x1c;
    }
    else {
      lVar14 = 0;
      iVar8 = 0;
      bVar4 = true;
      do {
        bVar3 = bVar4;
        iVar7 = *(int *)((long)param_1 + lVar14 * 4 + 0x260);
        if (iVar7 != -1) {
          uVar2 = (uint)lVar14 ^ 1;
          puVar1 = (undefined4 *)((long)param_1 + lVar14 * 4 + 0x260);
          uVar6 = FUN_001db41c(0xffffffff,0xffffffff,iVar7,0);
          if (uVar6 == 2) {
LAB_001c5f78:
            uVar9 = FUN_001c6260(*puVar1,local_6c);
            if ((uVar9 & 1) != 0) {
              *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600) = *puVar1;
              param_1[0xe] = param_1[lVar14 + 0xf];
              *puVar1 = 0xffffffff;
              if (*(int *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) != -1) {
                FUN_001c62cc(param_1);
                *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) = 0xffffffff;
              }
              iVar8 = FUN_001e5054(param_1,param_2);
              if (iVar8 != 0) {
                return iVar8;
              }
              *(undefined1 *)((long)param_1 + (long)param_2 + 0x3fa) = 1;
              *param_3 = 1;
              if (param_2 == 0) {
                FUN_001dac98(lVar13,4);
              }
              FUN_001c5b80(param_1,*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600));
              FUN_001e514c(param_1);
              return 0;
            }
            FUN_001db818(lVar13,"Connection failed\n");
          }
          else if (uVar6 == 0) {
            local_6c[0] = 0;
            iVar7 = FUN_001e0e28(local_80._0_8_,local_80._8_8_,param_1[0x80],param_1[0x81]);
            if (param_1[0x83] <= (long)iVar7) {
              FUN_001db818(lVar13,"After %ldms connect time, move on!\n");
              local_6c[0] = 0x6e;
            }
            if ((bVar3) && (param_1[0x10] == 0)) {
              iVar7 = FUN_001e0e28(local_80._0_8_,local_80._8_8_,param_1[0x80],param_1[0x81]);
              if (*(long *)(lVar13 + 0x7c0) <= (long)iVar7) {
                FUN_001c6180(param_1,param_2,1);
              }
            }
          }
          else {
            if ((*(byte *)((long)param_1 + 0x3ff) >> 3 & 1) != 0) goto LAB_001c5f78;
            if ((uVar6 >> 2 & 1) != 0) {
              FUN_001c6260(*puVar1,local_6c);
            }
          }
          if (local_6c[0] != 0) {
            *(int *)(lVar13 + 0x11c0) = local_6c[0];
            nnsocketSetLastErrno();
            lVar10 = param_1[lVar14 + 0xf];
            if (lVar10 != 0) {
              FUN_001c9004(lVar10,auStack_b0,0x2e);
              lVar10 = param_1[0x32];
              uVar11 = FUN_001e0bc8(local_6c[0],auStack_130,0x80);
              FUN_001db818(lVar13,"connect to %s port %ld failed: %s\n",auStack_b0,lVar10,uVar11);
              param_1[0x83] = (long)(int)(uVar5 >> (*(long *)(param_1[lVar14 + 0xf] + 0x28) != 0));
              iVar7 = FUN_001c6180(param_1,param_2,lVar14);
              if ((iVar7 != 7) || (*(int *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) == -1)) {
                iVar8 = iVar7;
              }
            }
          }
        }
        lVar14 = 1;
        bVar4 = false;
      } while (bVar3);
      if (iVar8 != 0) {
        if (param_1[0x10] == 0) {
          iVar8 = FUN_001c6180(param_1,param_2,1);
          if (iVar8 == 0) {
            return 0;
          }
        }
        uVar5 = *(uint *)((long)param_1 + 0x3fc);
        if ((uVar5 >> 6 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 2 & 1) == 0) {
              plVar12 = param_1 + 0x1a;
            }
            else {
              plVar12 = param_1 + 0x20;
            }
          }
          else {
            plVar12 = param_1 + 0x2c;
          }
        }
        else {
          plVar12 = param_1 + 0x24;
        }
        lVar10 = *plVar12;
        lVar14 = param_1[0x32];
        uVar11 = FUN_001e0bc8(local_6c[0],auStack_130,0x80);
        FUN_001db9c8(lVar13,"Failed to connect to %s port %ld: %s",lVar10,lVar14,uVar11);
      }
    }
  }
  else {
    iVar8 = 0;
    *param_3 = 1;
  }
  return iVar8;
}


