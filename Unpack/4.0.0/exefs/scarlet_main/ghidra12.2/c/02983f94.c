/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02983f94; name: FUN_02983f94
 */


byte FUN_02983f94(undefined8 param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte bVar7;
  int local_a8 [2];
  long *local_a0;
  undefined1 local_98;
  int local_94;
  undefined1 local_90;
  undefined2 local_8e;
  int local_8c;
  undefined1 local_88;
  byte local_87;
  undefined8 local_80;
  byte local_78;
  int *local_70;
  undefined1 local_68;
  char local_48 [8];
  
  piVar1 = (int *)0x0;
  if (*(char *)((long)param_2 + 0x47) != '\0') {
    piVar1 = param_2 + 0x13;
  }
  if ((char)param_2[1] == '\0') {
    bVar7 = 0;
  }
  else if (*(char *)((long)param_2 + 0x47) == '\0') {
    uVar6 = 0;
    bVar7 = 0;
    do {
      FUN_01582534(param_1);
      uVar2 = FUN_014813e4();
      uVar3 = FUN_01481400(uVar2,param_2[uVar6 + 2]);
      if ((uVar3 & 1) != 0) {
        plVar4 = (long *)FUN_014813f4(param_1,param_2[uVar6 + 2]);
        uVar3 = (**(code **)(*plVar4 + 0x200))();
        if ((uVar3 & 1) == 0) {
          if (*(char *)((long)param_2 + 0x49) == '\0') {
            if (*param_2 == 0) {
              local_87 = 0;
            }
            else {
              uVar2 = FUN_014813f4(param_1);
              uVar5 = FUN_01246e90(param_1);
              local_87 = FUN_01482688(uVar5,uVar2,plVar4,0);
            }
          }
          else {
            local_87 = 1;
          }
          local_a8[0] = *param_2;
          local_98 = (undefined1)param_2[0xd];
          local_90 = *(undefined1 *)((long)param_2 + 0x36);
          local_8e = (undefined2)param_2[0xe];
          local_8c = param_2[0xf];
          local_88 = *(undefined1 *)((long)param_2 + 0x45);
          local_68 = (undefined1)param_2[0x12];
          local_80 = 0;
          local_87 = local_87 & 1;
          local_78 = *(byte *)(param_2 + 0x11) ^ 1;
          local_94 = (int)*(char *)((long)param_2 + 0x35);
          local_a0 = plVar4;
          local_70 = piVar1;
          FUN_01461214(param_1);
          uVar2 = FUN_019675d8();
          FUN_01480c5c(uVar2,local_48,local_a8);
          if (local_48[0] != '\0') {
            uVar2 = FUN_01243584(param_1);
            FUN_0124b0ac(uVar2,*param_2,param_2 + 0x13);
            bVar7 = 1;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_2 + 1));
  }
  else {
    uVar6 = 0;
    bVar7 = 0;
    do {
      FUN_01582534(param_1);
      uVar2 = FUN_014813e4();
      uVar3 = FUN_01481400(uVar2,param_2[uVar6 + 2]);
      if ((uVar3 & 1) != 0) {
        plVar4 = (long *)FUN_014813f4(param_1,param_2[uVar6 + 2]);
        uVar3 = (**(code **)(*plVar4 + 0x200))();
        if ((uVar3 & 1) == 0) {
          if (*(char *)((long)param_2 + 0x49) == '\0') {
            if (*param_2 == 0) {
              local_87 = 0;
            }
            else {
              uVar2 = FUN_014813f4(param_1);
              uVar5 = FUN_01246e90(param_1);
              local_87 = FUN_01482688(uVar5,uVar2,plVar4,0);
            }
          }
          else {
            local_87 = 1;
          }
          local_a8[0] = *param_2;
          local_98 = (undefined1)param_2[0xd];
          local_90 = *(undefined1 *)((long)param_2 + 0x36);
          local_8e = (undefined2)param_2[0xe];
          local_8c = param_2[0xf];
          local_88 = *(undefined1 *)((long)param_2 + 0x45);
          local_68 = (undefined1)param_2[0x12];
          local_80 = 0;
          local_87 = local_87 & 1;
          local_78 = *(byte *)(param_2 + 0x11) ^ 1;
          local_94 = (int)*(char *)((long)param_2 + 0x35);
          local_a0 = plVar4;
          local_70 = piVar1;
          FUN_01461214(param_1);
          uVar2 = FUN_019675d8();
          FUN_01480c5c(uVar2,local_48,local_a8);
          bVar7 = bVar7 | local_48[0] != '\0';
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_2 + 1));
  }
  return bVar7;
}


