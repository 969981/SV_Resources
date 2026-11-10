/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02752b60; name: FUN_02752b60
 */


void FUN_02752b60(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  if (param_2 != (long *)0x0) {
    do {
      lVar4 = param_2[3];
      param_2[3] = 0;
      plVar6 = (long *)*param_2;
      if (lVar4 != 0) {
        FUN_00c4e5a0(auStack_58,0);
        if (*(char *)(lVar4 + 0x150) != '\0') {
          (**(code **)PTR_DAT_047e1990)(lVar4);
        }
        FUN_02752a30(lVar4 + 0xa0);
        plVar5 = (long *)param_2[4];
        lVar1 = param_2[5];
        lVar7 = param_2[6];
        uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1,lVar7);
        }
        else {
          FUN_00c48fe8(plVar5,lVar4,lVar1,lVar7);
        }
        FUN_00c4e70c(auStack_58);
      }
      plVar5 = *(long **)(param_1 + 0x38);
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0x38,8);
      }
      else {
        FUN_00c48fe8(plVar5,param_2,0x38,8);
      }
      param_2 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


