/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6e944; name: FUN_01e6e944
 */


undefined8 FUN_01e6e944(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 local_84 [4];
  long local_80 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  int local_38 [2];
  
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 == (long *)0x0) {
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 == 0)) {
      return 0;
    }
    plVar7 = (long *)(lVar5 + -0x28);
  }
  uStack_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_41 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_017522c8(local_80,&local_60,0x27);
  local_84[0] = 2;
  if ((((local_80[0] != 0) && (FUN_01e6eb9c(local_38,local_84,local_80[0] + 8), local_38[0] == 0))
      && (local_80[0] != 0)) && (FUN_01e6ec10(local_38,param_2,local_80[0] + 8), local_38[0] == 0))
  {
    uVar6 = FUN_014c27b0(local_80);
    uVar3 = FUN_014c27c8(local_80);
    uVar4 = (**(code **)(*plVar7 + 0x70))(plVar7,uVar6,uVar3);
    if ((uVar4 & 1) != 0) {
      uVar2 = *(undefined2 *)(param_2 + 1);
      *(undefined4 *)(param_1 + 0xaa) = *param_2;
      *(undefined2 *)(param_1 + 0xae) = uVar2;
      if (*(char *)(param_1 + 0xa9) == '\0') {
        *(undefined1 *)(param_1 + 0xa9) = 1;
      }
      plVar7 = (long *)(param_1 + 0x68);
      lVar5 = *(long *)(param_1 + 0x60);
      if (((*plVar7 == lVar5) || (plVar7 = (long *)(param_1 + 0x78), *plVar7 == lVar5)) ||
         ((plVar7 = (long *)(param_1 + 0x88), *plVar7 == lVar5 ||
          (plVar7 = (long *)(param_1 + 0x98), *plVar7 == lVar5)))) {
        uVar6 = 1;
        *(undefined1 *)(plVar7 + 1) = 1;
        uVar1 = *param_2;
        *(undefined2 *)((long)plVar7 + 0xd) = *(undefined2 *)(param_2 + 1);
        *(undefined4 *)((long)plVar7 + 9) = uVar1;
      }
      else {
        uVar6 = 1;
      }
      goto LAB_01e6e9b0;
    }
  }
  uVar6 = 0;
LAB_01e6e9b0:
  FUN_01694aa8(local_80);
  return uVar6;
}


