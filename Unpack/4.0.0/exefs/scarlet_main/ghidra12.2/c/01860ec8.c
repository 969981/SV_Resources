/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01860ec8; name: FUN_01860ec8
 */


void FUN_01860ec8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  ushort *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  code *local_138;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_138 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_120);
    local_138 = *(code **)(param_3 + 8);
  }
  piVar3 = (int *)*param_2;
  puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar1 = *puVar5;
  if (uVar1 < 0xb) {
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = 0;
    if (uVar1 < 9) goto LAB_01860f54;
  }
  else {
    iVar2 = 0;
    if ((ulong)puVar5[5] != 0) {
      iVar2 = *(int *)((long)piVar3 + (ulong)puVar5[5]);
    }
  }
  iVar7 = iVar2;
  iVar8 = 0;
  if ((ulong)puVar5[4] != 0) {
    iVar8 = *(int *)((long)piVar3 + (ulong)puVar5[4]);
  }
LAB_01860f54:
  if (iVar7 - iVar8 == 1) {
    uVar10 = 0;
    uVar9 = 0;
    if (0x16 < uVar1) {
      uVar9 = 0;
      if ((ulong)puVar5[0xb] != 0) {
        puVar4 = (uint *)((long)piVar3 + (ulong)puVar5[0xb]);
        piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
        uVar9 = 0;
        if (*piVar3 != 0) {
          puVar4 = (uint *)(piVar3 + 1);
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          uVar9 = 0;
          if (4 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
            uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = *(undefined4 *)((long)piVar3 + uVar6);
            }
          }
        }
      }
    }
    local_60 = 0x757527f9d900520e;
    pcStack_58 = "Global";
    local_50 = 6;
    local_48 = (long *)0x0;
    FUN_0117cb14(uVar9,param_2,"BlurRadius",&local_60);
    piVar3 = (int *)*param_2;
    uVar9 = 0;
    if (0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb];
      uVar9 = 0;
      if (uVar6 != 0) {
        puVar4 = (uint *)((long)piVar3 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        uVar9 = 0;
        if (1 < *puVar4) {
          puVar4 = puVar4 + 2;
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          uVar9 = 0;
          if (4 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
            uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = *(undefined4 *)((long)piVar3 + uVar6);
            }
          }
        }
      }
    }
    local_80 = 0x757527f9d900520e;
    pcStack_78 = "Global";
    local_70 = 6;
    local_68 = (long *)0x0;
    FUN_0117d608(uVar9,param_2,&local_80);
    piVar3 = (int *)*param_2;
    uVar9 = 0;
    if (0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb];
      uVar9 = 0;
      if (uVar6 != 0) {
        puVar4 = (uint *)((long)piVar3 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        uVar9 = 0;
        if (2 < *puVar4) {
          puVar4 = puVar4 + 3;
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          uVar9 = 0;
          if (4 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
            uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = *(undefined4 *)((long)piVar3 + uVar6);
            }
          }
        }
      }
    }
    local_a0 = 0x757527f9d900520e;
    pcStack_98 = "Global";
    local_90 = 6;
    local_88 = (long *)0x0;
    FUN_0117d090(uVar9,param_2,"DofBlurBegin",&local_a0);
    piVar3 = (int *)*param_2;
    if (((0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
        (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar6 != 0)) &&
       (puVar4 = (uint *)((long)piVar3 + uVar6), puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4),
       3 < *puVar4)) {
      puVar4 = puVar4 + 4;
      piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar6 != 0)) {
        uVar10 = *(undefined4 *)((long)piVar3 + uVar6);
      }
    }
    local_c0 = 0x757527f9d900520e;
    pcStack_b8 = "Global";
    local_b0 = 6;
    local_a8 = (long *)0x0;
    FUN_0117cb14(uVar10,param_2,"DofBlurEnd",&local_c0);
  }
  else {
    local_60 = 0x757527f9d900520e;
    pcStack_58 = "Global";
    local_50 = 6;
    local_48 = (long *)0x0;
    FUN_01861330(param_2,"BlurRadius",&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_80 = 0x757527f9d900520e;
    pcStack_78 = "Global";
    local_70 = 6;
    local_68 = (long *)0x0;
    FUN_0186152c(param_2,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_a0 = 0x757527f9d900520e;
    pcStack_98 = "Global";
    local_90 = 6;
    local_88 = (long *)0x0;
    FUN_01861720(param_2,&local_a0);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_c0 = 0x757527f9d900520e;
    pcStack_b8 = "Global";
    local_b0 = 6;
    local_a8 = (long *)0x0;
    FUN_01861330(param_2,"DofBlurEnd",&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  if (local_138 != (code *)0x0) {
    (*local_138)(auStack_120);
  }
  return;
}


