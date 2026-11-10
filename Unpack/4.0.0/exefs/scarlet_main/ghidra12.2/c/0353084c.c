/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353084c; name: FUN_0353084c
 */


undefined8 FUN_0353084c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined2 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  
  local_48 = 1;
  uVar3 = (**(code **)*param_2)(param_2,&local_48,4,auStack_44);
  if ((((uVar3 & 1) != 0) &&
      (uVar3 = (**(code **)*param_2)(param_2,param_1 + 0x20,4,auStack_44), (uVar3 & 1) != 0)) &&
     (uVar3 = (**(code **)*param_2)(param_2,param_1 + 0x24,4,auStack_44), (uVar3 & 1) != 0)) {
    local_4c = CONCAT11(local_4c._1_1_,*(undefined1 *)(param_1 + 0x28));
    uVar3 = (**(code **)*param_2)(param_2,&local_4c,1,auStack_44);
    if ((uVar3 & 1) != 0) {
      uVar3 = (**(code **)*param_2)(param_2,param_1 + 0x2a,2,auStack_44);
      if ((uVar3 & 1) == 0) {
        return 2;
      }
      local_48 = CONCAT22(local_48._2_2_,(short)*(undefined4 *)(param_1 + 0x38));
      uVar3 = (**(code **)*param_2)(param_2,&local_48,2,auStack_44);
      if ((uVar3 & 1) == 0) {
        return 2;
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        puVar6 = *(undefined4 **)(param_1 + 0x30);
        do {
          local_48 = *puVar6;
          iVar2 = (**(code **)(**(long **)(puVar6 + 2) + 0x18))();
          uVar3 = (**(code **)*param_2)(param_2,&local_48,4,auStack_44);
          if ((uVar3 & 1) == 0) {
            return 2;
          }
          uVar4 = 3;
          if (iVar2 != 0) {
            uVar4 = 1;
          }
          local_4c = CONCAT11(local_4c._1_1_,uVar4);
          uVar3 = (**(code **)*param_2)(param_2,&local_4c,1,auStack_44);
          if ((uVar3 & 1) == 0) {
            return 2;
          }
          uVar3 = (**(code **)*param_2)(param_2,puVar6 + 4,2,auStack_44);
          if ((uVar3 & 1) == 0) {
            return 2;
          }
          iVar2 = (**(code **)(**(long **)(puVar6 + 2) + 0x28))
                            (*(long **)(puVar6 + 2),param_2,*(undefined2 *)(puVar6 + 4));
          if (iVar2 != 1) {
            return 2;
          }
          puVar6 = puVar6 + 6;
        } while (puVar6 != (undefined4 *)
                           (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x18));
      }
      local_48 = CONCAT22(local_48._2_2_,(short)*(undefined4 *)(param_1 + 0x18));
      uVar3 = (**(code **)*param_2)(param_2,&local_48,2,auStack_44);
      if ((uVar3 & 1) == 0) {
        return 2;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        return 1;
      }
      plVar5 = *(long **)(param_1 + 0x10);
      while( true ) {
        local_48 = *(undefined4 *)(*plVar5 + 0x10);
        uVar1 = *(uint *)(*plVar5 + 0x30);
        uVar3 = (**(code **)*param_2)(param_2,&local_48,4,auStack_44);
        if ((uVar3 & 1) == 0) break;
        local_4c = CONCAT11(local_4c._1_1_,(char)uVar1);
        uVar3 = (**(code **)*param_2)(param_2,&local_4c,1,auStack_44);
        if ((uVar3 & 1) == 0) {
          return 2;
        }
        if ((uVar1 & 0xfffffffd) != 1) {
          local_4c = (ushort)*(undefined4 *)(*plVar5 + 0x28);
          uVar3 = (**(code **)*param_2)(param_2,&local_4c,2,auStack_44);
          if ((uVar3 & 1) == 0) {
            return 2;
          }
          iVar2 = (**(code **)(*(long *)plVar5[2] + 0x28))
                            ((long *)plVar5[2],param_2,*(undefined4 *)(*plVar5 + 0x28));
          if (iVar2 != 1) {
            return 2;
          }
        }
        local_4c = CONCAT11(local_4c._1_1_,*(undefined1 *)((long)plVar5 + 10)) & 0xff03;
        uVar3 = (**(code **)*param_2)(param_2,plVar5 + 1,2,auStack_44);
        if ((uVar3 & 1) == 0) {
          return 2;
        }
        uVar3 = (**(code **)*param_2)(param_2,&local_4c,1,auStack_44);
        if ((uVar3 & 1) == 0) {
          return 2;
        }
        plVar5 = plVar5 + 3;
        if (plVar5 == (long *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18))
        {
          return 1;
        }
      }
    }
  }
  return 2;
}


