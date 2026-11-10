/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124d528; name: FUN_0124d528
 */


void FUN_0124d528(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  int local_104;
  short local_100;
  undefined1 local_e8;
  undefined4 local_e4;
  int local_bc;
  undefined4 local_8c;
  undefined1 local_88;
  undefined2 local_87;
  int local_80 [8];
  
  local_80[4] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  bVar2 = *(byte *)(param_2 + 0x2420);
  uVar10 = (ulong)bVar2;
  if (bVar2 != 0) {
    uVar11 = 0;
    piVar6 = (int *)(param_2 + 8);
    do {
      if (((uint)uVar11 & 0xff) < (uint)uVar10) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x310);
        iVar1 = *piVar6;
        if (((*(byte *)(*(long *)(*(long *)(lVar12 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
           (*(int *)(lVar12 + 0x18) == 0)) {
          uVar7 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),1);
          plVar8 = (long *)FUN_0124c614(uVar7,0);
          if (plVar8 != (long *)0x0) {
            uVar4 = (**(code **)(*plVar8 + 0x98))();
            *(undefined4 *)(lVar12 + 0x18) = uVar4;
          }
        }
        if (*(int *)(lVar12 + 0x18) != iVar1) {
          puVar5 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8
                                                   ) + 0x50),*piVar6);
          if (puVar5 == (uint *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *puVar5;
            if (4 < (int)uVar9) {
              uVar9 = 0;
            }
          }
          local_80[uVar9] = *piVar6;
        }
      }
      uVar10 = (ulong)*(byte *)(param_2 + 0x2420);
      uVar11 = uVar11 + 1;
      piVar6 = piVar6 + 0x23;
    } while (uVar11 < uVar10);
  }
  uVar10 = 0;
  do {
    iVar1 = local_80[uVar10];
    if ((iVar1 != 0) &&
       (sVar3 = FUN_0124d824(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310),uVar10 & 0xffffffff)
       , 0 < sVar3)) {
      memset(&local_110,0,0x8c);
      local_88 = 5;
      local_8c = 0x5400000;
      local_10c = 0xc;
      local_100 = sVar3;
      local_108 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),iVar1);
      local_e8 = 8;
      local_e4 = 0;
      lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x310);
      local_104 = iVar1;
      if (((*(byte *)(*(long *)(*(long *)(lVar12 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
         (*(int *)(lVar12 + 0x18) == 0)) {
        uVar7 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),1);
        plVar8 = (long *)FUN_0124c614(uVar7,0);
        if (plVar8 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar8 + 0x98))();
          *(undefined4 *)(lVar12 + 0x18) = uVar4;
        }
      }
      local_110 = *(undefined4 *)(lVar12 + 0x18);
      lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x310);
      if (((*(byte *)(*(long *)(*(long *)(lVar12 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
         (*(int *)(lVar12 + 0x18) == 0)) {
        uVar7 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),1);
        plVar8 = (long *)FUN_0124c614(uVar7,0);
        if (plVar8 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar8 + 0x98))();
          *(undefined4 *)(lVar12 + 0x18) = uVar4;
        }
      }
      piVar6 = (int *)FUN_011e2dd4(*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) +
                                    0x50),*(undefined4 *)(lVar12 + 0x18));
      if (piVar6 == (int *)0x0) {
        local_88 = 0;
      }
      else {
        iVar1 = *piVar6;
        if (4 < iVar1) {
          iVar1 = 0;
        }
        local_88 = (undefined1)iVar1;
      }
      local_87 = 0;
      local_8c = FUN_012514b8(param_1,&local_110,param_2);
      lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 400);
      local_bc = *(int *)(lVar12 + 8);
      if (local_bc == 0) {
        local_bc = 1;
        *(undefined4 *)(lVar12 + 8) = 1;
      }
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      FUN_01920eb8(param_2,&local_110);
      uVar7 = FUN_01243584(param_1);
      FUN_0166616c(uVar7,6,uVar10 & 0xffffffff);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 5);
  return;
}


