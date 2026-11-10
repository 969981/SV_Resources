/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f681c; name: FUN_018f681c
 */


void FUN_018f681c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  char local_64 [4];
  undefined2 local_60;
  undefined2 local_5e;
  undefined1 local_5c;
  undefined4 local_5a;
  undefined2 local_56;
  
  *param_2 = 0;
  plVar6 = (long *)FUN_014813f4(param_1,*param_3);
  if (((*(char *)((long)param_3 + 5) != '\0') ||
      (uVar7 = (**(code **)(*plVar6 + 0x200))(plVar6), (uVar7 & 1) == 0)) &&
     ((*(char *)(param_3 + 1) == '\0' ||
      (uVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6), (uVar7 & 1) == 0)))) {
    FUN_01582534(param_1);
    uVar8 = FUN_014813e4();
    uVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
    uVar7 = FUN_01481400(uVar8,uVar3);
    if ((uVar7 & 1) != 0) {
      uVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6);
      uVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
      uVar8 = FUN_01246e90(param_1);
      uVar7 = FUN_029345f8(uVar8,plVar6,uVar4);
      if ((uVar7 & 1) == 0) {
        uVar8 = FUN_0123de68(param_1);
        sVar1 = FUN_02988e14(uVar8,uVar3);
        local_5c = 0;
        local_5a = 0xffffffff;
        local_56 = 0xffff;
        local_5e = (undefined2)uVar4;
        local_60 = (undefined2)uVar3;
        uVar8 = FUN_01243584(param_1);
        FUN_011afc5c(uVar8,&local_60);
        local_64[0] = '\0';
        uVar8 = FUN_01246e90(param_1);
        uVar7 = FUN_01abdd44(uVar8,plVar6,(ulong)&local_60 | 4,local_64);
        if ((uVar7 & 1) != 0) {
          uVar8 = FUN_01243584(param_1);
          FUN_0298907c(uVar8,&local_60);
          uVar8 = FUN_0124e480(param_1);
          iVar5 = thunk_FUN_01972c08(uVar8,uVar4,7);
          if (iVar5 != 0) {
            if (local_64[0] != '\0') {
              FUN_0124e480(param_1);
              uVar7 = FUN_02983418();
              if ((uVar7 & 1) != 0) {
                uVar8 = FUN_01243584(param_1);
                FUN_02982914(uVar8,*param_3,1000,uVar4 & 0xffff);
              }
            }
            uVar8 = FUN_0123de68(param_1);
            sVar2 = FUN_02988e14(uVar8,uVar3);
            if (sVar2 == sVar1) {
              FUN_01a40d34(param_1,plVar6);
            }
            FUN_019d691c(param_1,plVar6,uVar4);
          }
          *param_2 = 1;
        }
      }
    }
  }
  return;
}


