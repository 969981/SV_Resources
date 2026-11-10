/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ca5a8; name: FUN_008ca5a8
 */


void FUN_008ca5a8(float param_1,undefined8 *param_2,undefined4 param_3,uint param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  if (param_2[0x2c] != 0) {
    iVar1 = *(int *)(param_2 + 0x2d) + -1;
    if ((0 < *(int *)(param_2 + 0x2d)) && (*(int *)(param_2 + 0x2d) = iVar1, iVar1 == 0)) {
      FUN_008ca450(param_2);
      param_2[0x2c] = 0;
      *(undefined4 *)(param_2 + 0x2d) = 0;
    }
  }
  if (*(char *)((long)param_2 + 10) != '\0') {
    *(undefined4 *)(param_2 + 0x35) = 0;
    *(undefined4 *)(param_2 + 0x46) = 0;
    *(undefined8 *)((long)param_2 + 0x3c) = 0;
    *(float *)((long)param_2 + 0x4c) = param_1;
    param_2[0x33] = 0;
    param_2[0x34] = 0;
    param_2[0x31] = 0;
    param_2[0x32] = 0;
    param_2[0x2f] = 0;
    param_2[0x30] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    if (param_2[0x2a] != 0) {
      bVar8 = false;
      lVar4 = param_2[0x2a];
      do {
        lVar5 = *(long *)(lVar4 + 0x80);
        if (((*(char *)((long)param_2 + 0xe) == '\0') || (*(int *)(lVar4 + 0x28) != 0)) ||
           (*(int *)((long)param_2 + 0x25c) != 0)) {
          iVar1 = FUN_008ca82c(param_2,lVar4,param_3,param_4 & 1,param_5);
          lVar3 = *(long *)(lVar4 + 0x238);
          *(char *)(lVar4 + 5) = (char)iVar1;
          *(undefined1 *)(lVar4 + 4) = 0;
          if (0 < *(int *)(lVar3 + 0x88)) {
            lVar7 = 0;
            do {
              lVar6 = *(long *)(lVar4 + lVar7 * 8 + 0x440);
              if (lVar6 != 0) {
                do {
                  lVar3 = *(long *)(lVar6 + 0x80);
                  iVar2 = FUN_008ca82c(param_2,lVar6,param_3,param_4 & 1,param_5);
                  *(char *)(lVar6 + 5) = (char)iVar1;
                  if (iVar2 == 1) {
                    FUN_008cad90(param_2,lVar6);
                    FUN_008c9420(lVar6,*param_2,1);
                    FUN_008e5534(param_2[4],lVar6);
                  }
                  else {
                    *(undefined1 *)(lVar4 + 4) = 1;
                  }
                  bVar8 = (bool)(bVar8 | *(char *)(lVar6 + 0x5fc) != '\0');
                  lVar6 = lVar3;
                } while (lVar3 != 0);
                lVar3 = *(long *)(lVar4 + 0x238);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < *(int *)(lVar3 + 0x88));
          }
          if ((iVar1 == 1) && (*(char *)(lVar4 + 4) == '\0')) {
            FUN_008cad90(param_2,lVar4);
            FUN_008c9420(lVar4,*param_2,1);
            FUN_008e5534(param_2[4],lVar4);
          }
        }
        else {
          *(float *)(lVar4 + 0x44) = *(float *)(lVar4 + 0x44) + param_1;
          *(int *)((long)param_2 + 0x17c) = *(int *)((long)param_2 + 0x17c) + 1;
        }
        bVar8 = (bool)(bVar8 | *(char *)(lVar4 + 0x5fc) != '\0');
        lVar4 = lVar5;
      } while (lVar5 != 0);
      if (bVar8) {
        *(undefined1 *)((long)param_2 + 0x264) = 1;
      }
    }
    if (((*(char *)((long)param_2 + 0xe) != '\0') && (0.0 < param_1)) &&
       (0 < *(int *)((long)param_2 + 0x25c))) {
      if (0 < *(int *)(param_2 + 0x4b)) {
        lVar4 = 0;
        lVar5 = 0x50;
        do {
          *(undefined8 *)(param_2[0x4a] + lVar5) = 0;
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 0x60;
        } while (lVar4 < *(int *)(param_2 + 0x4b));
      }
      *(undefined4 *)((long)param_2 + 0x25c) = 0;
    }
    if (0.0 < param_1) {
      *(undefined4 *)(param_2 + 3) = 0;
    }
  }
  return;
}


