/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea5d00; name: FUN_01ea5d00
 */


void FUN_01ea5d00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  int local_e0 [32];
  long *local_60 [4];
  undefined4 local_28 [2];
  
  piVar7 = local_e0;
  piVar8 = local_e0;
  FUN_01267a34(local_60,param_2,param_3);
  plVar3 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    lVar4 = *local_60[0];
    lVar6 = local_60[0][2];
    lVar5 = lVar6 + 1;
    bVar1 = *(byte *)(lVar4 + lVar6);
    local_60[0][2] = lVar5;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(lVar4 + lVar5);
        lVar5 = lVar6 + 2;
        local_60[0][2] = lVar5;
      }
      if (bVar1 == 3) {
        memset(local_e0,0,0x80);
        lVar5 = plVar3[2];
        bVar1 = *(byte *)(*plVar3 + lVar5);
        plVar3[2] = lVar5 + 1;
        if (bVar1 < 0x81) {
          if (bVar1 == 0x80) {
            bVar1 = *(byte *)(*plVar3 + lVar5 + 1);
            plVar3[2] = lVar5 + 2;
          }
          if (bVar1 != 0) {
            uVar9 = 0;
            do {
              if ((uVar9 < 0x10) && (local_60[0] != (long *)0x0)) {
                cVar2 = *(char *)(*local_60[0] + local_60[0][2]);
                local_60[0][2] = local_60[0][2] + 1;
                if (cVar2 == -0x47) {
                  FUN_01ea850c(local_28,piVar8);
                }
                else {
                  local_28[0] = 1;
                }
              }
              uVar9 = uVar9 + 1;
              piVar8 = (int *)((long)piVar8 + 8);
            } while (bVar1 != uVar9);
          }
          FUN_01ea83b8(param_1,local_e0,(ulong)bVar1);
        }
      }
      else if (bVar1 == 2) {
        local_28[0] = 0;
        cVar2 = *(char *)(lVar4 + lVar5);
        local_60[0][2] = lVar5 + 1;
        if (cVar2 == -0x47) {
          FUN_01ea8148(local_e0,local_28,local_60[0]);
          if (local_e0[0] == 0) {
            FUN_01ea81dc(param_1,local_28);
          }
        }
      }
      else if (bVar1 == 1) {
        memset(local_e0,0,0x80);
        lVar5 = plVar3[2];
        bVar1 = *(byte *)(*plVar3 + lVar5);
        plVar3[2] = lVar5 + 1;
        if (bVar1 < 0x81) {
          if (bVar1 == 0x80) {
            bVar1 = *(byte *)(*plVar3 + lVar5 + 1);
            plVar3[2] = lVar5 + 2;
          }
          if (bVar1 != 0) {
            uVar9 = 0;
            do {
              if ((uVar9 < 0x10) && (local_60[0] != (long *)0x0)) {
                cVar2 = *(char *)(*local_60[0] + local_60[0][2]);
                local_60[0][2] = local_60[0][2] + 1;
                if (cVar2 == -0x47) {
                  FUN_01ea80b4(local_28,piVar7);
                }
                else {
                  local_28[0] = 1;
                }
              }
              uVar9 = uVar9 + 1;
              piVar7 = (int *)((long)piVar7 + 8);
            } while (bVar1 != uVar9);
          }
          FUN_01ea7f70(param_1,local_e0,(ulong)bVar1);
        }
      }
    }
  }
  FUN_01267b4c(local_60);
  return;
}


