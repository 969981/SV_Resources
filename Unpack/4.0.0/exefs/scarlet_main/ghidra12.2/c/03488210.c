/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03488210; name: FUN_03488210
 */


int FUN_03488210(long param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047e6fd8;
  if (*(int *)(param_1 + 0x38) == param_2) {
    iVar8 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_034b6c14(*(undefined8 *)PTR_DAT_047e6fd8,param_1,0x3c);
    }
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
    if ((param_2 == 0) || (*(long *)(param_1 + 0x30) == 0)) {
      iVar8 = 1;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
      bVar4 = false;
      if (lVar6 != 0) {
        if (*(short *)(lVar6 + 0x90) < 1) {
          bVar4 = 0 < *(short *)(lVar6 + 0x94);
        }
        else {
          bVar4 = true;
        }
      }
      local_48 = 0xff;
      local_40 = 0xff;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_38 = 0;
      iVar2 = FUN_034b5ad4(*(undefined8 *)puVar1,param_1,param_2,param_3,1,0x3c,0,0,0,0,&local_60,5,
                           bVar4);
      iVar8 = 1;
      if (iVar2 != 1) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        iVar8 = iVar2;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    if (uVar5 != 0) {
      lVar7 = *(long *)(param_1 + 0x18);
      lVar6 = lVar7;
      do {
        plVar3 = *(long **)(lVar6 + 0x10);
        if (((plVar3 != (long *)0x0) && (plVar3[0x12] != 0)) &&
           (0 < *(short *)(plVar3[0x12] + 0x90))) {
          (**(code **)(*plVar3 + 0x180))(plVar3,0,0);
          lVar7 = *(long *)(param_1 + 0x18);
          uVar5 = *(uint *)(param_1 + 0x20);
        }
        lVar6 = lVar6 + 0x48;
      } while (lVar6 != lVar7 + (ulong)uVar5 * 0x48);
    }
  }
  return iVar8;
}


