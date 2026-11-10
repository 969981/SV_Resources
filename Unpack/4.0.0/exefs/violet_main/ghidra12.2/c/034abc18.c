/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034abc18; name: FUN_034abc18
 */


undefined8 FUN_034abc18(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_60;
  undefined4 local_58;
  
  if (*(ulong **)(param_1 + 0x40) == (ulong *)0x0) {
    return 1;
  }
  uVar5 = **(ulong **)(param_1 + 0x40);
  uVar4 = (uint)uVar5;
  if ((uVar5 & 1) == 0) goto LAB_034abd30;
  local_60 = 0x3f80000000000000;
  local_58 = 0x3c;
  uVar5 = FUN_0349897c(*(undefined8 *)PTR_DAT_047e7048,param_1 + 0x38,0,param_3,param_4,&local_60);
  if ((uVar5 & 1) != 0) {
    uVar2 = *(uint *)(param_2 + 1);
    uVar4 = *(uint *)((long)param_2 + 0xc);
    if (uVar4 <= uVar2) {
      iVar1 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar1 = 1;
      }
      uVar4 = iVar1 + uVar4;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_2,(ulong)uVar4 * 0xc);
      if (lVar3 == 0) goto LAB_034abd24;
      *param_2 = lVar3;
      *(uint *)((long)param_2 + 0xc) = uVar4;
    }
    if (uVar2 < uVar4) {
      uVar4 = *(uint *)(param_2 + 1);
      lVar3 = *param_2;
      *(uint *)(param_2 + 1) = uVar4 + 1;
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + (ulong)uVar4 * 0xc);
        *(undefined4 *)puVar6 = 0;
        *(undefined8 *)(lVar3 + (ulong)uVar4 * 0xc + 4) = 0x3c3f800000;
        *(undefined4 *)(puVar6 + 1) = local_58;
        *puVar6 = local_60;
      }
    }
  }
LAB_034abd24:
  if (*(undefined8 **)(param_1 + 0x40) == (undefined8 *)0x0) {
    return 1;
  }
  uVar4 = (uint)**(undefined8 **)(param_1 + 0x40);
LAB_034abd30:
  if ((uVar4 >> 7 & 1) != 0) {
    local_60 = 0x3f80000000000000;
    local_58 = 0x3c;
    uVar5 = FUN_0349897c(*(undefined8 *)PTR_DAT_047e7048,param_1 + 0x38,7,param_3,param_4,&local_60)
    ;
    if ((uVar5 & 1) != 0) {
      uVar2 = *(uint *)(param_2 + 1);
      uVar4 = *(uint *)((long)param_2 + 0xc);
      if (uVar4 <= uVar2) {
        iVar1 = uVar4 + (uVar4 >> 1);
        if (uVar4 == 0) {
          iVar1 = 1;
        }
        uVar4 = iVar1 + uVar4;
        lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_2,(ulong)uVar4 * 0xc);
        if (lVar3 == 0) {
          return 1;
        }
        *param_2 = lVar3;
        *(uint *)((long)param_2 + 0xc) = uVar4;
      }
      if (uVar2 < uVar4) {
        uVar4 = *(uint *)(param_2 + 1);
        lVar3 = *param_2;
        *(uint *)(param_2 + 1) = uVar4 + 1;
        if (lVar3 != 0) {
          puVar6 = (undefined8 *)(lVar3 + (ulong)uVar4 * 0xc);
          *(undefined4 *)puVar6 = 0;
          *(undefined8 *)(lVar3 + (ulong)uVar4 * 0xc + 4) = 0x3c3f800000;
          *(undefined4 *)(puVar6 + 1) = local_58;
          *puVar6 = local_60;
        }
      }
    }
  }
  return 1;
}


