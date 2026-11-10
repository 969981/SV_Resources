/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e1250; name: FUN_002e1250
 */


void FUN_002e1250(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  
  if (param_3 == 1) {
    if (0 < *(int *)(param_2 + 0x18)) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        puVar1 = (undefined2 *)(*(long *)(param_2 + 0x10) + lVar8);
        FUN_002e0990(param_1,*puVar1,puVar1[1],param_4);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 4;
      } while (lVar9 < *(int *)(param_2 + 0x18));
    }
    if (0 < *(int *)(param_2 + 0x28)) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        puVar2 = (undefined4 *)(*(long *)(param_2 + 0x20) + lVar8);
        FUN_002e0990(param_1,*puVar2,puVar2[1],param_4);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar9 < *(int *)(param_2 + 0x28));
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      iVar6 = *(int *)(param_2 + 0x18);
      if (iVar6 < 1) {
        uVar5 = 0;
      }
      else {
        lVar7 = *(long *)(param_2 + 0x10);
        lVar9 = 0;
        lVar8 = 0;
        uVar5 = 0;
        do {
          if (uVar5 < *(ushort *)(lVar7 + lVar9)) {
            FUN_002e0990(param_1,uVar5,*(ushort *)(lVar7 + lVar9) - 1,param_4);
            lVar7 = *(long *)(param_2 + 0x10);
            iVar6 = *(int *)(param_2 + 0x18);
          }
          lVar3 = lVar7 + lVar9;
          lVar9 = lVar9 + 4;
          lVar8 = lVar8 + 1;
          uVar5 = *(ushort *)(lVar3 + 2) + 1;
        } while (lVar8 < iVar6);
      }
      iVar6 = *(int *)(param_2 + 0x28);
      if (0 < iVar6) {
        lVar7 = *(long *)(param_2 + 0x20);
        lVar9 = 0;
        lVar8 = 0;
        do {
          if ((int)uVar5 < *(int *)(lVar7 + lVar9)) {
            FUN_002e0990(param_1,uVar5,*(int *)(lVar7 + lVar9) + -1,param_4);
            lVar7 = *(long *)(param_2 + 0x20);
            iVar6 = *(int *)(param_2 + 0x28);
          }
          lVar3 = lVar7 + lVar9;
          lVar9 = lVar9 + 8;
          iVar4 = *(int *)(lVar3 + 4);
          lVar8 = lVar8 + 1;
          uVar5 = iVar4 + 1;
        } while (lVar8 < iVar6);
        if (0x10fffe < iVar4) {
          return;
        }
      }
      FUN_002e0990(param_1,uVar5,&DAT_0010ffff,param_4);
      return;
    }
    FUN_002e6250(auStack_68);
    if (0 < *(int *)(param_2 + 0x18)) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        puVar1 = (undefined2 *)(*(long *)(param_2 + 0x10) + lVar8);
                    /* try { // try from 002e1394 to 002e139f has its CatchHandler @ 002e14f0 */
        FUN_002e0990(auStack_68,*puVar1,puVar1[1],param_4);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 4;
      } while (lVar9 < *(int *)(param_2 + 0x18));
    }
    if (0 < *(int *)(param_2 + 0x28)) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        puVar2 = (undefined4 *)(*(long *)(param_2 + 0x20) + lVar8);
                    /* try { // try from 002e13d4 to 002e13df has its CatchHandler @ 002e14ec */
        FUN_002e0990(auStack_68,*puVar2,puVar2[1],param_4);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar9 < *(int *)(param_2 + 0x28));
    }
    if ((param_4 & 0x804) != 4) {
                    /* try { // try from 002e1404 to 002e142b has its CatchHandler @ 002e14e8 */
      FUN_002e626c(auStack_68,10,10);
    }
    FUN_002e6a8c(auStack_68);
    FUN_002e6720(param_1,auStack_68);
    FUN_002e3684(auStack_58,local_50);
  }
  return;
}


