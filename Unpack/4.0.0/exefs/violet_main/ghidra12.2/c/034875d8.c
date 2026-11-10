/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034875d8; name: FUN_034875d8
 */


undefined8 FUN_034875d8(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_047e7048;
  uVar6 = (uint)*(ulong *)(param_1 + 0x28);
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) goto LAB_034876dc;
  local_60 = 0x3f80000000000000;
  local_58 = 0x3c;
  uVar4 = FUN_0349897c(*(undefined8 *)PTR_DAT_047e7048,param_1,0,param_3,param_4,&local_60);
  if ((uVar4 & 1) != 0) {
    uVar2 = *(uint *)(param_2 + 1);
    uVar6 = *(uint *)((long)param_2 + 0xc);
    if (uVar6 <= uVar2) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_2,(ulong)uVar6 * 0xc);
      if (lVar5 == 0) goto LAB_034876d8;
      *param_2 = lVar5;
      *(uint *)((long)param_2 + 0xc) = uVar6;
    }
    if (uVar2 < uVar6) {
      uVar6 = *(uint *)(param_2 + 1);
      lVar5 = *param_2;
      *(uint *)(param_2 + 1) = uVar6 + 1;
      if (lVar5 != 0) {
        puVar7 = (undefined8 *)(lVar5 + (ulong)uVar6 * 0xc);
        *(undefined4 *)puVar7 = 0;
        *(undefined8 *)(lVar5 + (ulong)uVar6 * 0xc + 4) = 0x3c3f800000;
        *(undefined4 *)(puVar7 + 1) = local_58;
        *puVar7 = local_60;
      }
    }
  }
LAB_034876d8:
  uVar6 = (uint)*(undefined8 *)(param_1 + 0x28);
LAB_034876dc:
  if ((uVar6 >> 7 & 1) != 0) {
    local_60 = 0x3f80000000000000;
    local_58 = 0x3c;
    uVar4 = FUN_0349897c(*(undefined8 *)puVar3,param_1,7,param_3,param_4,&local_60);
    if ((uVar4 & 1) != 0) {
      uVar2 = *(uint *)(param_2 + 1);
      uVar6 = *(uint *)((long)param_2 + 0xc);
      if (uVar6 <= uVar2) {
        iVar1 = uVar6 + (uVar6 >> 1);
        if (uVar6 == 0) {
          iVar1 = 1;
        }
        uVar6 = iVar1 + uVar6;
        lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_2,(ulong)uVar6 * 0xc);
        if (lVar5 == 0) {
          return 1;
        }
        *param_2 = lVar5;
        *(uint *)((long)param_2 + 0xc) = uVar6;
      }
      if (uVar2 < uVar6) {
        uVar6 = *(uint *)(param_2 + 1);
        lVar5 = *param_2;
        *(uint *)(param_2 + 1) = uVar6 + 1;
        if (lVar5 != 0) {
          puVar7 = (undefined8 *)(lVar5 + (ulong)uVar6 * 0xc);
          *(undefined4 *)puVar7 = 0;
          *(undefined8 *)(lVar5 + (ulong)uVar6 * 0xc + 4) = 0x3c3f800000;
          *(undefined4 *)(puVar7 + 1) = local_58;
          *puVar7 = local_60;
        }
      }
    }
  }
  return 1;
}


